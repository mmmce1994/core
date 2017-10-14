// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef GOLDBIT_QT_GOLDBITADDRESSVALIDATOR_H
#define GOLDBIT_QT_GOLDBITADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class GoldbitAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit GoldbitAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Goldbit address widget validator, checks for a valid goldbit address.
 */
class GoldbitAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit GoldbitAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // GOLDBIT_QT_GOLDBITADDRESSVALIDATOR_H
