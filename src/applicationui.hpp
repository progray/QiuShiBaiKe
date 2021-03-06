/*
 * Copyright (c) 2013-2014 BlackBerry Limited.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ApplicationUI_HPP_
#define ApplicationUI_HPP_

#include "applicationuibase.hpp"

namespace bb {
    namespace system {
      class CardDoneMessage;
    }
}

/*!
 * @brief Application UI object
 *
 * Use this object to create and init app UI, to create context objects, to register the new meta types etc.
 */
class ApplicationUI: public ApplicationUIBase
{
Q_OBJECT
public:
    ApplicationUI(bb::system::InvokeManager* invokeManager);
    virtual ~ApplicationUI() {};
    Q_SIGNAL void cardDone(QString message);
public:
    Q_INVOKABLE void invokeCard(const QString &memo);
private slots:
    void cardDone(const bb::system::CardDoneMessage& doneMessage);
};

#endif /* ApplicationUI_HPP_ */
