/*
 
 Copyright (c) 2012, SMB Phone Inc.
 All rights reserved.
 
 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:
 
 1. Redistributions of source code must retain the above copyright notice, this
 list of conditions and the following disclaimer.
 2. Redistributions in binary form must reproduce the above copyright notice,
 this list of conditions and the following disclaimer in the documentation
 and/or other materials provided with the distribution.
 
 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
 ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 
 The views and conclusions contained in the software and documentation are those
 of the authors and should not be interpreted as representing official policies,
 either expressed or implied, of the FreeBSD Project.
 
 */

#include "contactsManager.h"
#include "contact.h"

#include <zsLib/XML.h>

using namespace hookflash::blackberry;

using zsLib::String;
using zsLib::XML::Document;
using zsLib::XML::DocumentPtr;
using zsLib::XML::Element;
using zsLib::XML::ElementPtr;

boost::shared_ptr<ContactsManager> ContactsManager::CreateInstance(boost::shared_ptr<Session> session)
{
  boost::shared_ptr<ContactsManager> instance(new ContactsManager(session));
  instance->mWeakThis = instance;
  return instance;
}

void ContactsManager::LoadContacts()
{
}

void ContactsManager::AddContactsFromJSON(const std::string& json)
{
  DocumentPtr document = Document::createFromAutoDetect(json.c_str());

  if (!document) return;

  ElementPtr unknownEl = document->getFirstChildElement();
  while (unknownEl) {
    ElementPtr idEl = unknownEl->findFirstChildElement("id");
    ElementPtr fullNameEl = unknownEl->findFirstChildElement("fullName");
    ElementPtr pictureURLEl = unknownEl->findFirstChildElement("pictureUrl");

    String id;
    String fullName;
    String pictureURL;

    if (idEl) {
      id = idEl->getTextDecoded();
    }
    if (fullNameEl) {
      fullName = fullNameEl->getTextDecoded();
    }
    if (pictureURLEl) {
      pictureURL = pictureURLEl->getTextDecoded();
    }

    if ((id.hasData()) ||
        (fullName.hasData()) ||
        (pictureURL.hasData())) {
      AddContact(id, fullName, pictureURL);
    }

    unknownEl = unknownEl->getNextSiblingElement();
  }

}

void ContactsManager::AddContact(
    const char* fullName,
    const char* id,
    const char* pictureUrl)
{
  boost::shared_ptr<Contact> newContact(new Contact(fullName, id, pictureUrl));
  mContacts.push_back(newContact);
  mContactsById.insert(std::pair< std::string, boost::shared_ptr<Contact> >(std::string(id), newContact));
}