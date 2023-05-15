/*
 * This file is part of the AbracaDABra project
 *
 * MIT License
 *
  * Copyright (c) 2019-2023 Petr Kopecký <xkejpi (at) gmail (dot) com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "dabtables.h"

const QMap<uint32_t, QString> DabTables::channelList =
{
    {174928 , "5A"},
    {176640 , "5B"},
    {178352 , "5C"},
    {180064 , "5D"},
    {181936 , "6A"},
    {183648 , "6B"},
    {185360 , "6C"},
    {187072 , "6D"},
    {188928 , "7A"},
    {190640 , "7B"},
    {192352 , "7C"},
    {194064 , "7D"},
    {195936 , "8A"},
    {197648 , "8B"},
    {199360 , "8C"},
    {201072 , "8D"},
    {202928 , "9A"},
    {204640 , "9B"},
    {206352 , "9C"},
    {208064 , "9D"},
    {209936 , "10A"},
    {211648 , "10B"},
    {213360 , "10C"},
    {215072 , "10D"},
    #if RADIO_CONTROL_N_CHANNELS_ENABLE
    {210096 , "10N"},
    #endif
    {216928 , "11A"},
    {218640 , "11B"},
    {220352 , "11C"},
    {222064 , "11D"},
    #if RADIO_CONTROL_N_CHANNELS_ENABLE
    {217088 , "11N"},
    #endif
    {223936 , "12A"},
    {225648 , "12B"},
    {227360 , "12C"},
    {229072 , "12D"},
    #if RADIO_CONTROL_N_CHANNELS_ENABLE
    {224096 , "12N"},
    #endif
    {230784 , "13A"},
    {232496 , "13B"},
    {234208 , "13C"},
    {235776 , "13D"},
    {237488 , "13E"},
    {239200 , "13F"}
};

const uint16_t DabTables::ebuLatin2UCS2[] =
{   /* UCS2 == UTF16 for Basic Multilingual Plane 0x0000-0xFFFF */
    0x0000, 0x0118, 0x012E, 0x0172, 0x0102, 0x0116, 0x010E, 0x0218, /* 0x00 - 0x07 */
    0x021A, 0x010A, 0x000A, 0x000B, 0x0120, 0x0139, 0x017B, 0x0143, /* 0x08 - 0x0f */
    0x0105, 0x0119, 0x012F, 0x0173, 0x0103, 0x0117, 0x010F, 0x0219, /* 0x10 - 0x17 */
    0x021B, 0x010B, 0x0147, 0x011A, 0x0121, 0x013A, 0x017C, 0x001F, /* 0x18 - 0x1f */
    0x0020, 0x0021, 0x0022, 0x0023, 0x0142, 0x0025, 0x0026, 0x0027, /* 0x20 - 0x27 */
    0x0028, 0x0029, 0x002A, 0x002B, 0x002C, 0x002D, 0x002E, 0x002F, /* 0x28 - 0x2f */
    0x0030, 0x0031, 0x0032, 0x0033, 0x0034, 0x0035, 0x0036, 0x0037, /* 0x30 - 0x37 */
    0x0038, 0x0039, 0x003A, 0x003B, 0x003C, 0x003D, 0x003E, 0x003F, /* 0x38 - 0x3f */
    0x0040, 0x0041, 0x0042, 0x0043, 0x0044, 0x0045, 0x0046, 0x0047, /* 0x40 - 0x47 */
    0x0048, 0x0049, 0x004A, 0x004B, 0x004C, 0x004D, 0x004E, 0x004F, /* 0x48 - 0x4f */
    0x0050, 0x0051, 0x0052, 0x0053, 0x0054, 0x0055, 0x0056, 0x0057, /* 0x50 - 0x57 */
    0x0058, 0x0059, 0x005A, 0x005B, 0x016E, 0x005D, 0x0141, 0x005F, /* 0x58 - 0x5f */
    0x0104, 0x0061, 0x0062, 0x0063, 0x0064, 0x0065, 0x0066, 0x0067, /* 0x60 - 0x67 */
    0x0068, 0x0069, 0x006A, 0x006B, 0x006C, 0x006D, 0x006E, 0x006F, /* 0x68 - 0x6f */
    0x0070, 0x0071, 0x0072, 0x0073, 0x0074, 0x0075, 0x0076, 0x0077, /* 0x70 - 0x77 */
    0x0078, 0x0079, 0x007A, 0x00AB, 0x016F, 0x00BB, 0x013D, 0x0126, /* 0x78 - 0x7f */
    0x00E1, 0x00E0, 0x00E9, 0x00E8, 0x00ED, 0x00EC, 0x00F3, 0x00F2, /* 0x80 - 0x87 */
    0x00FA, 0x00F9, 0x00D1, 0x00C7, 0x015E, 0x00DF, 0x00A1, 0x0178, /* 0x88 - 0x8f */
    0x00E2, 0x00E4, 0x00EA, 0x00EB, 0x00EE, 0x00EF, 0x00F4, 0x00F6, /* 0x90 - 0x97 */
    0x00FB, 0x00FC, 0x00F1, 0x00E7, 0x015F, 0x011F, 0x0131, 0x00FF, /* 0x98 - 0x9f */
    0x0136, 0x0145, 0x00A9, 0x0122, 0x011E, 0x011B, 0x0148, 0x0151, /* 0xa0 - 0xa7 */
    0x0150, 0x20AC, 0x00A3, 0x0024, 0x0100, 0x0112, 0x012A, 0x016A, /* 0xa8 - 0xaf */
    0x0137, 0x0146, 0x013B, 0x0123, 0x013C, 0x0130, 0x0144, 0x0171, /* 0xb0 - 0xb7 */
    0x0170, 0x00BF, 0x013E, 0x00B0, 0x0101, 0x0113, 0x012B, 0x016B, /* 0xb8 - 0xbf */
    0x00C1, 0x00C0, 0x00C9, 0x00C8, 0x00CD, 0x00CC, 0x00D3, 0x00D2, /* 0xc0 - 0xc7 */
    0x00DA, 0x00D9, 0x0158, 0x010C, 0x0160, 0x017D, 0x00D0, 0x013F, /* 0xc8 - 0xcf */
    0x00C2, 0x00C4, 0x00CA, 0x00CB, 0x00CE, 0x00CF, 0x00D4, 0x00D6, /* 0xd0 - 0xd7 */
    0x00DB, 0x00DC, 0x0159, 0x010D, 0x0161, 0x017E, 0x0111, 0x0140, /* 0xd8 - 0xdf */
    0x00C3, 0x00C5, 0x00C6, 0x0152, 0x0177, 0x00DD, 0x00D5, 0x00D8, /* 0xe0 - 0xe7 */
    0x00DE, 0x014A, 0x0154, 0x0106, 0x015A, 0x0179, 0x0164, 0x00F0, /* 0xe8 - 0xef */
    0x00E3, 0x00E5, 0x00E6, 0x0153, 0x0175, 0x00FD, 0x00F5, 0x00F8, /* 0xf0 - 0xf7 */
    0x00FE, 0x014B, 0x0155, 0x0107, 0x015B, 0x017A, 0x0165, 0x0127, /* 0xf8 - 0xff */
};


//DabTables::DabTables()
//{

//}

QString DabTables::convertToQString(const char *c, uint8_t charset, uint8_t len)
{
    QString out;
    switch (static_cast<DabCharset>(charset))
    {
    case DabCharset::UTF8:
        out = out.fromUtf8(c);
        break;
    case DabCharset::UCS2:
    {
        uint8_t ucsLen = len/2+1;
        char16_t * temp = new char16_t[ucsLen];
        // BOM = 0xFEFF, DAB label is in big endian, writing it byte by byte
        uint8_t * bomPtr = (uint8_t *) temp;
        *bomPtr++ = 0xFE;
        *bomPtr++ = 0xFF;
        memcpy(temp+1, c, len);
        out = out.fromUtf16(temp, ucsLen);
        delete [] temp;
    }
        break;
    case DabCharset::EBULATIN:        
    {
        int n = 0;
        while (*c && (n++ < len))
        {
            out.append(QChar(ebuLatin2UCS2[uint8_t(*c++)]));
        }
    }
        break;
    case DabCharset::LATIN1:
        out = out.fromLatin1(c, len);
        break;
    default:
        // do noting, unsupported charset
        qDebug("ERROR: Charset %d is not supported", charset);
        break;
    }

    return out;
}


QString DabTables::getPtyName(const uint8_t pty)
{
    switch (pty)
    {
        case 1: return QString(QObject::tr("News"));
        case 2: return QString(QObject::tr("Current Affairs"));
        case 3: return QString(QObject::tr("Information"));
        case 4: return QString(QObject::tr("Sport"));
        case 5: return QString(QObject::tr("Education"));
        case 6: return QString(QObject::tr("Drama"));
        case 7: return QString(QObject::tr("Culture"));
        case 8: return QString(QObject::tr("Science"));
        case 9: return QString(QObject::tr("Varied"));
        case 10: return QString(QObject::tr("Pop Music"));
        case 11: return QString(QObject::tr("Rock Music"));
        case 12: return QString(QObject::tr("Easy Listening Music"));
        case 13: return QString(QObject::tr("Light Classical"));
        case 14: return QString(QObject::tr("Serious Classical"));
        case 15: return QString(QObject::tr("Other Music"));
        case 16: return QString(QObject::tr("Weather/meteorology"));
        case 17: return QString(QObject::tr("Finance/Business"));
        case 18: return QString(QObject::tr("Children's programmes"));
        case 19: return QString(QObject::tr("Social Affairs"));
        case 20: return QString(QObject::tr("Religion"));
        case 21: return QString(QObject::tr("Phone In"));
        case 22: return QString(QObject::tr("Travel"));
        case 23: return QString(QObject::tr("Leisure"));
        case 24: return QString(QObject::tr("Jazz Music"));
        case 25: return QString(QObject::tr("Country Music"));
        case 26: return QString(QObject::tr("National Music"));
        case 27: return QString(QObject::tr("Oldies Music"));
        case 28: return QString(QObject::tr("Folk Music"));
        case 29: return QString(QObject::tr("Documentary"));
        case 30: return QString("");
        case 31: return QString("");
        default: return QString(QObject::tr("None"));
    };
}

QString DabTables::getPtyNameEnglish(const uint8_t pty)
{
    switch (pty)
    {
        case 1: return QString("News");
        case 2: return QString("Current Affairs");
        case 3: return QString("Information");
        case 4: return QString("Sport");
        case 5: return QString("Education");
        case 6: return QString("Drama");
        case 7: return QString("Culture");
        case 8: return QString("Science");
        case 9: return QString("Varied");
        case 10: return QString("Pop Music");
        case 11: return QString("Rock Music");
        case 12: return QString("Easy Listening Music");
        case 13: return QString("Light Classical");
        case 14: return QString("Serious Classical");
        case 15: return QString("Other Music");
        case 16: return QString("Weather/meteorology");
        case 17: return QString("Finance/Business");
        case 18: return QString("Children's programmes");
        case 19: return QString("Social Affairs");
        case 20: return QString("Religion");
        case 21: return QString("Phone In");
        case 22: return QString("Travel");
        case 23: return QString("Leisure");
        case 24: return QString("Jazz Music");
        case 25: return QString("Country Music");
        case 26: return QString("National Music");
        case 27: return QString("Oldies Music");
        case 28: return QString("Folk Music");
        case 29: return QString("Documentary");
        case 30: return QString("");
        case 31: return QString("");
        default: return QString("None");
    };
}

QString DabTables::getLangName(int lang)
{
    switch (lang)
    {
        case 0x00: return QString(QObject::tr("Unknown/NA"));
        case 0x01: return QString(QObject::tr("Albanian"));
        case 0x02: return QString(QObject::tr("Breton"));
        case 0x03: return QString(QObject::tr("Catalan"));
        case 0x04: return QString(QObject::tr("Croatian"));
        case 0x05: return QString(QObject::tr("Welsh"));
        case 0x06: return QString(QObject::tr("Czech"));
        case 0x07: return QString(QObject::tr("Danish"));
        case 0x08: return QString(QObject::tr("German"));
        case 0x09: return QString(QObject::tr("English"));
        case 0x0A: return QString(QObject::tr("Spanish"));
        case 0x0B: return QString(QObject::tr("Esperanto"));
        case 0x0C: return QString(QObject::tr("Estonian"));
        case 0x0D: return QString(QObject::tr("Basque"));
        case 0x0E: return QString(QObject::tr("Faroese"));
        case 0x0F: return QString(QObject::tr("French"));
        case 0x10: return QString(QObject::tr("Frisian"));
        case 0x11: return QString(QObject::tr("Irish"));
        case 0x12: return QString(QObject::tr("Gaelic"));
        case 0x13: return QString(QObject::tr("Galician"));
        case 0x14: return QString(QObject::tr("Icelandic"));
        case 0x15: return QString(QObject::tr("Italian"));
        case 0x16: return QString(QObject::tr("Lappish"));
        case 0x17: return QString(QObject::tr("Latin"));
        case 0x18: return QString(QObject::tr("Latvian"));
        case 0x19: return QString(QObject::tr("Luxembourgian"));
        case 0x1A: return QString(QObject::tr("Lithuanian"));
        case 0x1B: return QString(QObject::tr("Hungarian"));
        case 0x1C: return QString(QObject::tr("Maltese"));
        case 0x1D: return QString(QObject::tr("Dutch"));
        case 0x1E: return QString(QObject::tr("Norwegian"));
        case 0x1F: return QString(QObject::tr("Occitan"));
        case 0x20: return QString(QObject::tr("Polish"));
        case 0x21: return QString(QObject::tr("Portuguese"));
        case 0x22: return QString(QObject::tr("Romanian"));
        case 0x23: return QString(QObject::tr("Romansh"));
        case 0x24: return QString(QObject::tr("Serbian"));
        case 0x25: return QString(QObject::tr("Slovak"));
        case 0x26: return QString(QObject::tr("Slovene"));
        case 0x27: return QString(QObject::tr("Finnish"));
        case 0x28: return QString(QObject::tr("Swedish"));
        case 0x29: return QString(QObject::tr("Turkish"));
        case 0x2A: return QString(QObject::tr("Flemish"));
        case 0x2B: return QString(QObject::tr("Walloon"));
        case 0x40: return QString(QObject::tr("Background sound/clean feed"));
        case 0x45: return QString(QObject::tr("Zulu"));
        case 0x46: return QString(QObject::tr("Vietnamese"));
        case 0x47: return QString(QObject::tr("Uzbek"));
        case 0x48: return QString(QObject::tr("Urdu"));
        case 0x49: return QString(QObject::tr("Ukranian"));
        case 0x4A: return QString(QObject::tr("Thai"));
        case 0x4B: return QString(QObject::tr("Telugu"));
        case 0x4C: return QString(QObject::tr("Tatar"));
        case 0x4D: return QString(QObject::tr("Tamil"));
        case 0x4E: return QString(QObject::tr("Tadzhik"));
        case 0x4F: return QString(QObject::tr("Swahili"));
        case 0x50: return QString(QObject::tr("Sranan Tongo"));
        case 0x51: return QString(QObject::tr("Somali"));
        case 0x52: return QString(QObject::tr("Sinhalese"));
        case 0x53: return QString(QObject::tr("Shona"));
        case 0x54: return QString(QObject::tr("Serbo-Croat"));
        case 0x55: return QString(QObject::tr("Rusyn"));
        case 0x56: return QString(QObject::tr("Russian"));
        case 0x57: return QString(QObject::tr("Quechua"));
        case 0x58: return QString(QObject::tr("Pushtu"));
        case 0x59: return QString(QObject::tr("Punjabi"));
        case 0x5A: return QString(QObject::tr("Persian"));
        case 0x5B: return QString(QObject::tr("Papiamento"));
        case 0x5C: return QString(QObject::tr("Oriya"));
        case 0x5D: return QString(QObject::tr("Nepali"));
        case 0x5E: return QString(QObject::tr("Ndebele"));
        case 0x5F: return QString(QObject::tr("Marathi"));
        case 0x60: return QString(QObject::tr("Moldavian"));
        case 0x61: return QString(QObject::tr("Malaysian"));
        case 0x62: return QString(QObject::tr("Malagasay"));
        case 0x63: return QString(QObject::tr("Macedonian"));
        case 0x64: return QString(QObject::tr("Laotian"));
        case 0x65: return QString(QObject::tr("Korean"));
        case 0x66: return QString(QObject::tr("Khmer"));
        case 0x67: return QString(QObject::tr("Kazakh"));
        case 0x68: return QString(QObject::tr("Kannada"));
        case 0x69: return QString(QObject::tr("Japanese"));
        case 0x6A: return QString(QObject::tr("Indonesian"));
        case 0x6B: return QString(QObject::tr("Hindi"));
        case 0x6C: return QString(QObject::tr("Hebrew"));
        case 0x6D: return QString(QObject::tr("Hausa"));
        case 0x6E: return QString(QObject::tr("Gurani"));
        case 0x6F: return QString(QObject::tr("Gujurati"));
        case 0x70: return QString(QObject::tr("Greek"));
        case 0x71: return QString(QObject::tr("Georgian"));
        case 0x72: return QString(QObject::tr("Fulani"));
        case 0x73: return QString(QObject::tr("Dari"));
        case 0x74: return QString(QObject::tr("Chuvash"));
        case 0x75: return QString(QObject::tr("Chinese"));
        case 0x76: return QString(QObject::tr("Burmese"));
        case 0x77: return QString(QObject::tr("Bulgarian"));
        case 0x78: return QString(QObject::tr("Bengali"));
        case 0x79: return QString(QObject::tr("Belorussian"));
        case 0x7A: return QString(QObject::tr("Bambora"));
        case 0x7B: return QString(QObject::tr("Azerbaijani"));
        case 0x7C: return QString(QObject::tr("Assamese"));
        case 0x7D: return QString(QObject::tr("Armenian"));
        case 0x7E: return QString(QObject::tr("Arabic"));
        case 0x7F: return QString(QObject::tr("Amharic"));
        default: return QString(QObject::tr("Unknown"));
    }
}

QString DabTables::getLangNameEnglish(int lang)
{
    switch (lang)
    {
        case 0x00: return QString("Unknown/NA");
        case 0x01: return QString("Albanian");
        case 0x02: return QString("Breton");
        case 0x03: return QString("Catalan");
        case 0x04: return QString("Croatian");
        case 0x05: return QString("Welsh");
        case 0x06: return QString("Czech");
        case 0x07: return QString("Danish");
        case 0x08: return QString("German");
        case 0x09: return QString("English");
        case 0x0A: return QString("Spanish");
        case 0x0B: return QString("Esperanto");
        case 0x0C: return QString("Estonian");
        case 0x0D: return QString("Basque");
        case 0x0E: return QString("Faroese");
        case 0x0F: return QString("French");
        case 0x10: return QString("Frisian");
        case 0x11: return QString("Irish");
        case 0x12: return QString("Gaelic");
        case 0x13: return QString("Galician");
        case 0x14: return QString("Icelandic");
        case 0x15: return QString("Italian");
        case 0x16: return QString("Lappish");
        case 0x17: return QString("Latin");
        case 0x18: return QString("Latvian");
        case 0x19: return QString("Luxembourgian");
        case 0x1A: return QString("Lithuanian");
        case 0x1B: return QString("Hungarian");
        case 0x1C: return QString("Maltese");
        case 0x1D: return QString("Dutch");
        case 0x1E: return QString("Norwegian");
        case 0x1F: return QString("Occitan");
        case 0x20: return QString("Polish");
        case 0x21: return QString("Portuguese");
        case 0x22: return QString("Romanian");
        case 0x23: return QString("Romansh");
        case 0x24: return QString("Serbian");
        case 0x25: return QString("Slovak");
        case 0x26: return QString("Slovene");
        case 0x27: return QString("Finnish");
        case 0x28: return QString("Swedish");
        case 0x29: return QString("Turkish");
        case 0x2A: return QString("Flemish");
        case 0x2B: return QString("Walloon");
        case 0x40: return QString("Background sound/clean feed");
        case 0x45: return QString("Zulu");
        case 0x46: return QString("Vietnamese");
        case 0x47: return QString("Uzbek");
        case 0x48: return QString("Urdu");
        case 0x49: return QString("Ukranian");
        case 0x4A: return QString("Thai");
        case 0x4B: return QString("Telugu");
        case 0x4C: return QString("Tatar");
        case 0x4D: return QString("Tamil");
        case 0x4E: return QString("Tadzhik");
        case 0x4F: return QString("Swahili");
        case 0x50: return QString("Sranan Tongo");
        case 0x51: return QString("Somali");
        case 0x52: return QString("Sinhalese");
        case 0x53: return QString("Shona");
        case 0x54: return QString("Serbo-Croat");
        case 0x55: return QString("Rusyn");
        case 0x56: return QString("Russian");
        case 0x57: return QString("Quechua");
        case 0x58: return QString("Pushtu");
        case 0x59: return QString("Punjabi");
        case 0x5A: return QString("Persian");
        case 0x5B: return QString("Papiamento");
        case 0x5C: return QString("Oriya");
        case 0x5D: return QString("Nepali");
        case 0x5E: return QString("Ndebele");
        case 0x5F: return QString("Marathi");
        case 0x60: return QString("Moldavian");
        case 0x61: return QString("Malaysian");
        case 0x62: return QString("Malagasay");
        case 0x63: return QString("Macedonian");
        case 0x64: return QString("Laotian");
        case 0x65: return QString("Korean");
        case 0x66: return QString("Khmer");
        case 0x67: return QString("Kazakh");
        case 0x68: return QString("Kannada");
        case 0x69: return QString("Japanese");
        case 0x6A: return QString("Indonesian");
        case 0x6B: return QString("Hindi");
        case 0x6C: return QString("Hebrew");
        case 0x6D: return QString("Hausa");
        case 0x6E: return QString("Gurani");
        case 0x6F: return QString("Gujurati");
        case 0x70: return QString("Greek");
        case 0x71: return QString("Georgian");
        case 0x72: return QString("Fulani");
        case 0x73: return QString("Dari");
        case 0x74: return QString("Chuvash");
        case 0x75: return QString("Chinese");
        case 0x76: return QString("Burmese");
        case 0x77: return QString("Bulgarian");
        case 0x78: return QString("Bengali");
        case 0x79: return QString("Belorussian");
        case 0x7A: return QString("Bambora");
        case 0x7B: return QString("Azerbaijani");
        case 0x7C: return QString("Assamese");
        case 0x7D: return QString("Armenian");
        case 0x7E: return QString("Arabic");
        case 0x7F: return QString("Amharic");
        default: return QString("Unknown");
    }
}

QString DabTables::getCountryName(uint32_t SId)
{
    int countryId = 0; // [ECC 8 bits | country code 4 bits]

    // ETSI EN 300 401 V2.1.1 (2017-01) [6.3.1  Basic service and service component definition ]
    if (SId > 0x00FFFFFF)
    {   // data service
        countryId = (SId >> 20) & 0x0FFF;
    }
    else
    {   // program service
        countryId = (SId >> 12) & 0x0FFF;
    }
    switch (countryId)
    {
        case 0xA01:
        case 0xA02:
        case 0xA03:
        case 0xA04:
        case 0xA05:
        case 0xA06:
        case 0xA07:
        case 0xA08:
        case 0xA09:
        case 0xA0A:
        case 0xA0B:
        case 0xA0D:
        case 0xA0E: return QString(QObject::tr("USA/Puerto Rico"));
        case 0xA1B:
        case 0xA1C:
        case 0xA1D:
        case 0xA1E: return QString(QObject::tr("Canada"));
        case 0xA1F: return QString(QObject::tr("Greenland"));
        case 0xA21: return QString(QObject::tr("Anguilla"));
        case 0xA22: return QString(QObject::tr("Antigua and Barbuda"));
        case 0xA23: return QString(QObject::tr("Ecuador"));
        case 0xA24: return QString(QObject::tr("Falkland Islands"));
        case 0xA25: return QString(QObject::tr("Barbados"));
        case 0xA26: return QString(QObject::tr("Belize"));
        case 0xA27: return QString(QObject::tr("Cayman Islands"));
        case 0xA28: return QString(QObject::tr("Costa Rica"));
        case 0xA29: return QString(QObject::tr("Cuba"));
        case 0xA2A: return QString(QObject::tr("Argentina"));
        case 0xA2B: return QString(QObject::tr("Brazil"));
        case 0xA2C: return QString(QObject::tr("Bermuda"));
        case 0xA2D: return QString(QObject::tr("Netherlands Antilles"));
        case 0xA2E: return QString(QObject::tr("Guadeloupe"));
        case 0xA2F: return QString(QObject::tr("Bahamas"));
        case 0xA31: return QString(QObject::tr("Bolivia"));
        case 0xA32: return QString(QObject::tr("Colombia"));
        case 0xA33: return QString(QObject::tr("Jamaica"));
        case 0xA34: return QString(QObject::tr("Martinique"));
        case 0xA36: return QString(QObject::tr("Paraguay"));
        case 0xA37: return QString(QObject::tr("Nicaragua"));
        case 0xA39: return QString(QObject::tr("Panama"));
        case 0xA3A: return QString(QObject::tr("Dominica"));
        case 0xA3B: return QString(QObject::tr("Dominican Republic"));
        case 0xA3C: return QString(QObject::tr("Chile"));
        case 0xA3D: return QString(QObject::tr("Grenada"));
        case 0xA3E: return QString(QObject::tr("Turks and Caicos islands"));
        case 0xA3F: return QString(QObject::tr("Guyana"));
        case 0xA41: return QString(QObject::tr("Guatemala"));
        case 0xA42: return QString(QObject::tr("Honduras"));
        case 0xA43: return QString(QObject::tr("Aruba"));
        case 0xA45: return QString(QObject::tr("Montserrat"));
        case 0xA46: return QString(QObject::tr("Trinidad and Tobago"));
        case 0xA47: return QString(QObject::tr("Peru"));
        case 0xA48: return QString(QObject::tr("Surinam"));
        case 0xA49: return QString(QObject::tr("Uruguay"));
        case 0xA4A: return QString(QObject::tr("St. Kitts"));
        case 0xA4B: return QString(QObject::tr("St. Lucia"));
        case 0xA4C: return QString(QObject::tr("El Salvador"));
        case 0xA4D: return QString(QObject::tr("Haiti"));
        case 0xA4E: return QString(QObject::tr("Venezuela"));
        case 0xA5B: return QString(QObject::tr("Mexico"));
        case 0xA5C: return QString(QObject::tr("St. Vincent"));
        case 0xA5D:
        case 0xA5E:
        case 0xA5F: return QString(QObject::tr("Mexico"));
        //case 0xA5F: return QString(QObject::tr("Virgin islands (British)"));
        case 0xA63:
        case 0xA6C:
        case 0xA6D: return QString(QObject::tr("Brazil"));
        case 0xA6F: return QString(QObject::tr("St. Pierre and Miquelon"));

        case 0xD01: return QString(QObject::tr("Cameroon"));
        case 0xD02: return QString(QObject::tr("Central African Republic"));
        case 0xD03: return QString(QObject::tr("Djibouti"));
        case 0xD04: return QString(QObject::tr("Madagascar"));
        case 0xD05: return QString(QObject::tr("Mali"));
        case 0xD06: return QString(QObject::tr("Angola"));
        case 0xD07: return QString(QObject::tr("Equatorial Guinea"));
        case 0xD08: return QString(QObject::tr("Gabon"));
        case 0xD09: return QString(QObject::tr("Republic of Guinea"));
        case 0xD0A: return QString(QObject::tr("South Africa"));
        case 0xD0B: return QString(QObject::tr("Burkina Faso"));
        case 0xD0C: return QString(QObject::tr("Congo"));
        case 0xD0D: return QString(QObject::tr("Togo"));
        case 0xD0E: return QString(QObject::tr("Benin"));
        case 0xD0F: return QString(QObject::tr("Malawi"));
        case 0xD11: return QString(QObject::tr("Namibia"));
        case 0xD12: return QString(QObject::tr("Liberia"));
        case 0xD13: return QString(QObject::tr("Ghana"));
        case 0xD14: return QString(QObject::tr("Mauritania"));
        case 0xD15: return QString(QObject::tr("Sao Tome and Principe"));
        case 0xD16: return QString(QObject::tr("Cape Verde"));
        case 0xD17: return QString(QObject::tr("Senegal"));
        case 0xD18: return QString(QObject::tr("Gambia"));
        case 0xD19: return QString(QObject::tr("Burundi"));
        case 0xD1A: return QString(QObject::tr("Ascension Island"));
        case 0xD1B: return QString(QObject::tr("Botswana"));
        case 0xD1C: return QString(QObject::tr("Comoros"));
        case 0xD1D: return QString(QObject::tr("Tanzania"));
        case 0xD1E: return QString(QObject::tr("Ethiopia"));
        case 0xD1F: return QString(QObject::tr("Nigeria"));
        case 0xD21: return QString(QObject::tr("Sierra Leone"));
        case 0xD22: return QString(QObject::tr("Zimbabwe"));
        case 0xD23: return QString(QObject::tr("Mozambique"));
        case 0xD24: return QString(QObject::tr("Uganda"));
        case 0xD25: return QString(QObject::tr("Swaziland"));
        case 0xD26: return QString(QObject::tr("Kenya"));
        case 0xD27: return QString(QObject::tr("Somalia"));
        case 0xD28: return QString(QObject::tr("Niger"));
        case 0xD29: return QString(QObject::tr("Chad"));
        case 0xD2A: return QString(QObject::tr("Guinea-Bissau"));
        case 0xD2B: return QString(QObject::tr("Zaire"));
        case 0xD2C: return QString(QObject::tr("Cote d'Ivoire"));
        case 0xD2D: return QString(QObject::tr("Zanzibar"));
        case 0xD2E: return QString(QObject::tr("Zambia"));
        case 0xD33: return QString(QObject::tr("Western Sahara"));
        case 0xD35: return QString(QObject::tr("Rwanda"));
        case 0xD36: return QString(QObject::tr("Lesotho"));
        case 0xD38: return QString(QObject::tr("Seychelles"));
        case 0xD3A: return QString(QObject::tr("Mauritius"));
        case 0xD3C: return QString(QObject::tr("Sudan"));

        case 0xE01: return QString(QObject::tr("Germany"));
        case 0xE02: return QString(QObject::tr("Algeria"));
        case 0xE03: return QString(QObject::tr("Andorra"));
        case 0xE04: return QString(QObject::tr("Israel"));
        case 0xE05: return QString(QObject::tr("Italy"));
        case 0xE06: return QString(QObject::tr("Belgium"));
        case 0xE07: return QString(QObject::tr("Russian Federation"));
        case 0xE08: return QString(QObject::tr("Palestine"));
        case 0xE09: return QString(QObject::tr("Albania"));
        case 0xE0A: return QString(QObject::tr("Austria"));
        case 0xE0B: return QString(QObject::tr("Hungary"));
        case 0xE0C: return QString(QObject::tr("Malta"));
        case 0xE0D: return QString(QObject::tr("Germany"));
        case 0xE0F: return QString(QObject::tr("Egypt"));
        case 0xE11: return QString(QObject::tr("Greece"));
        case 0xE12: return QString(QObject::tr("Cyprus"));
        case 0xE13: return QString(QObject::tr("San Marino"));
        case 0xE14: return QString(QObject::tr("Switzerland"));
        case 0xE15: return QString(QObject::tr("Jordan"));
        case 0xE16: return QString(QObject::tr("Finland"));
        case 0xE17: return QString(QObject::tr("Luxembourg"));
        case 0xE18: return QString(QObject::tr("Bulgaria"));
        case 0xE19: return QString(QObject::tr("Denmark"));
        //case 0xE19: return QString(QObject::tr("Faroe"));
        case 0xE1A: return QString(QObject::tr("Gibraltar"));
        case 0xE1B: return QString(QObject::tr("Iraq"));
        case 0xE1C: return QString(QObject::tr("United Kingdom"));
        case 0xE1D: return QString(QObject::tr("Libya"));
        case 0xE1E: return QString(QObject::tr("Romania"));
        case 0xE1F: return QString(QObject::tr("France"));
        case 0xE21: return QString(QObject::tr("Morocco"));
        case 0xE22: return QString(QObject::tr("Czech Republic"));
        case 0xE23: return QString(QObject::tr("Poland"));
        case 0xE24: return QString(QObject::tr("Vatican"));
        case 0xE25: return QString(QObject::tr("Slovakia"));
        case 0xE26: return QString(QObject::tr("Syria"));
        case 0xE27: return QString(QObject::tr("Tunisia"));
        case 0xE29: return QString(QObject::tr("Liechtenstein"));
        case 0xE2A: return QString(QObject::tr("Iceland"));
        case 0xE2B: return QString(QObject::tr("Monaco"));
        case 0xE2C: return QString(QObject::tr("Lithuania"));
        case 0xE2D: return QString(QObject::tr("Serbia"));
        case 0xE2E: return QString(QObject::tr("Spain"));
        //case 0xE2E: return QString(QObject::tr("Canary Islands"));
        case 0xE2F: return QString(QObject::tr("Norway"));
        case 0xE31: return QString(QObject::tr("Montenegro"));
        case 0xE32: return QString(QObject::tr("Ireland"));
        case 0xE33: return QString(QObject::tr("Turkey"));
        case 0xE35: return QString(QObject::tr("Tajikistan"));
        case 0xE38: return QString(QObject::tr("Netherlands"));
        case 0xE39: return QString(QObject::tr("Latvia"));
        case 0xE3A: return QString(QObject::tr("Lebanon"));
        case 0xE3B: return QString(QObject::tr("Azerbaijan"));
        case 0xE3C: return QString(QObject::tr("Croatia"));
        case 0xE3D: return QString(QObject::tr("Kazakhstan"));
        case 0xE3E: return QString(QObject::tr("Sweden"));
        case 0xE3F: return QString(QObject::tr("Belarus"));
        case 0xE41: return QString(QObject::tr("Moldova"));
        case 0xE42: return QString(QObject::tr("Estonia"));
        case 0xE43: return QString(QObject::tr("Macedonia"));
        case 0xE46: return QString(QObject::tr("Ukraine"));
        case 0xE47: return QString(QObject::tr("Kosovo"));
        //case 0xE48: return QString(QObject::tr("Azores"));
        //case 0xE48: return QString(QObject::tr("Madeira"));
        case 0xE48: return QString(QObject::tr("Portugal"));
        case 0xE49: return QString(QObject::tr("Slovenia"));
        case 0xE4A: return QString(QObject::tr("Armenia"));
        case 0xE4B: return QString(QObject::tr("Uzbekistan"));
        case 0xE4C: return QString(QObject::tr("Georgia"));
        case 0xE4E: return QString(QObject::tr("Turkmenistan"));
        case 0xE4F: return QString(QObject::tr("Bosnia Herzegovina"));
        case 0xE53: return QString(QObject::tr("Kyrgyzstan"));

        case 0xF01: return QString(QObject::tr("Australia: Capital Cities (commercial and community broadcasters)"));
        case 0xF02: return QString(QObject::tr("Australia: Regional New South Wales and ACT"));
        case 0xF03: return QString(QObject::tr("Australia: Capital Cities (national broadcasters)"));
        case 0xF04: return QString(QObject::tr("Australia: Regional Queensland"));
        case 0xF05: return QString(QObject::tr("Australia: Regional South Australia and Northern Territory"));
        case 0xF06: return QString(QObject::tr("Australia: Regional Western Australia"));
        case 0xF07: return QString(QObject::tr("Australia: Regional Victoria and Tasmania"));
        case 0xF08: return QString(QObject::tr("Australia: Regional (future)"));
        case 0xF09: return QString(QObject::tr("Saudi Arabia"));
        case 0xF0A: return QString(QObject::tr("Afghanistan"));
        case 0xF0B: return QString(QObject::tr("Myanmar (Burma)"));
        case 0xF0C: return QString(QObject::tr("China"));
        case 0xF0D: return QString(QObject::tr("Korea (North)"));
        case 0xF0E: return QString(QObject::tr("Bahrain"));
        case 0xF0F: return QString(QObject::tr("Malaysia"));
        case 0xF11: return QString(QObject::tr("Kiribati"));
        case 0xF12: return QString(QObject::tr("Bhutan"));
        case 0xF13: return QString(QObject::tr("Bangladesh"));
        case 0xF14: return QString(QObject::tr("Pakistan"));
        case 0xF15: return QString(QObject::tr("Fiji"));
        case 0xF16: return QString(QObject::tr("Oman"));
        case 0xF17: return QString(QObject::tr("Nauru"));
        case 0xF18: return QString(QObject::tr("Iran"));
        case 0xF19: return QString(QObject::tr("New Zealand"));
        case 0xF1A: return QString(QObject::tr("Solomon Islands"));
        case 0xF1B: return QString(QObject::tr("Brunei Darussalam"));
        case 0xF1C: return QString(QObject::tr("Sri Lanka"));
        case 0xF1D: return QString(QObject::tr("Taiwan"));
        case 0xF1E: return QString(QObject::tr("Korea (South)"));
        case 0xF1F: return QString(QObject::tr("Hong Kong"));
        case 0xF21: return QString(QObject::tr("Kuwait"));
        case 0xF22: return QString(QObject::tr("Qatar"));
        case 0xF23: return QString(QObject::tr("Cambodia"));
        case 0xF24: return QString(QObject::tr("Western Samoa"));
        case 0xF25: return QString(QObject::tr("India"));
        case 0xF26: return QString(QObject::tr("Macau"));
        case 0xF27: return QString(QObject::tr("Vietnam"));
        case 0xF28: return QString(QObject::tr("Philippines"));
        case 0xF29: return QString(QObject::tr("Japan"));
        case 0xF2A: return QString(QObject::tr("Singapore"));
        case 0xF2B: return QString(QObject::tr("Maldives"));
        case 0xF2C: return QString(QObject::tr("Indonesia"));
        case 0xF2D: return QString(QObject::tr("United Arab Emirates"));
        case 0xF2E: return QString(QObject::tr("Nepal"));
        case 0xF2F: return QString(QObject::tr("Vanuatu"));
        case 0xF31: return QString(QObject::tr("Laos"));
        case 0xF32: return QString(QObject::tr("Thailand"));
        case 0xF33: return QString(QObject::tr("Tonga"));
        case 0xF39: return QString(QObject::tr("Papua New Guinea"));
        case 0xF3B: return QString(QObject::tr("Yemen"));
        case 0xF3E: return QString(QObject::tr("Micronesia"));
        case 0xF3F: return QString(QObject::tr("Mongolia"));

        default: return QString(QObject::tr("Unknown"));
        }
}

QString DabTables::getCountryNameEnglish(uint32_t SId)
{
    int countryId = 0; // [ECC 8 bits | country code 4 bits]

    // ETSI EN 300 401 V2.1.1 (2017-01) [6.3.1  Basic service and service component definition ]
    if (SId > 0x00FFFFFF)
    {   // data service
        countryId = (SId >> 20) & 0x0FFF;
    }
    else
    {   // program service
        countryId = (SId >> 12) & 0x0FFF;
    }
    switch (countryId)
    {
        case 0xA01:
        case 0xA02:
        case 0xA03:
        case 0xA04:
        case 0xA05:
        case 0xA06:
        case 0xA07:
        case 0xA08:
        case 0xA09:
        case 0xA0A:
        case 0xA0B:
        case 0xA0D:
        case 0xA0E: return QString("USA/Puerto Rico");
        case 0xA1B:
        case 0xA1C:
        case 0xA1D:
        case 0xA1E: return QString("Canada");
        case 0xA1F: return QString("Greenland");
        case 0xA21: return QString("Anguilla");
        case 0xA22: return QString("Antigua and Barbuda");
        case 0xA23: return QString("Ecuador");
        case 0xA24: return QString("Falkland Islands");
        case 0xA25: return QString("Barbados");
        case 0xA26: return QString("Belize");
        case 0xA27: return QString("Cayman Islands");
        case 0xA28: return QString("Costa Rica");
        case 0xA29: return QString("Cuba");
        case 0xA2A: return QString("Argentina");
        case 0xA2B: return QString("Brazil");
        case 0xA2C: return QString("Bermuda");
        case 0xA2D: return QString("Netherlands Antilles");
        case 0xA2E: return QString("Guadeloupe");
        case 0xA2F: return QString("Bahamas");
        case 0xA31: return QString("Bolivia");
        case 0xA32: return QString("Colombia");
        case 0xA33: return QString("Jamaica");
        case 0xA34: return QString("Martinique");
        case 0xA36: return QString("Paraguay");
        case 0xA37: return QString("Nicaragua");
        case 0xA39: return QString("Panama");
        case 0xA3A: return QString("Dominica");
        case 0xA3B: return QString("Dominican Republic");
        case 0xA3C: return QString("Chile");
        case 0xA3D: return QString("Grenada");
        case 0xA3E: return QString("Turks and Caicos islands");
        case 0xA3F: return QString("Guyana");
        case 0xA41: return QString("Guatemala");
        case 0xA42: return QString("Honduras");
        case 0xA43: return QString("Aruba");
        case 0xA45: return QString("Montserrat");
        case 0xA46: return QString("Trinidad and Tobago");
        case 0xA47: return QString("Peru");
        case 0xA48: return QString("Surinam");
        case 0xA49: return QString("Uruguay");
        case 0xA4A: return QString("St. Kitts");
        case 0xA4B: return QString("St. Lucia");
        case 0xA4C: return QString("El Salvador");
        case 0xA4D: return QString("Haiti");
        case 0xA4E: return QString("Venezuela");
        case 0xA5B: return QString("Mexico");
        case 0xA5C: return QString("St. Vincent");
        case 0xA5D:
        case 0xA5E:
        case 0xA5F: return QString("Mexico");
        //case 0xA5F: return QString("Virgin islands (British)");
        case 0xA63:
        case 0xA6C:
        case 0xA6D: return QString("Brazil");
        case 0xA6F: return QString("St. Pierre and Miquelon");

        case 0xD01: return QString("Cameroon");
        case 0xD02: return QString("Central African Republic");
        case 0xD03: return QString("Djibouti");
        case 0xD04: return QString("Madagascar");
        case 0xD05: return QString("Mali");
        case 0xD06: return QString("Angola");
        case 0xD07: return QString("Equatorial Guinea");
        case 0xD08: return QString("Gabon");
        case 0xD09: return QString("Republic of Guinea");
        case 0xD0A: return QString("South Africa");
        case 0xD0B: return QString("Burkina Faso");
        case 0xD0C: return QString("Congo");
        case 0xD0D: return QString("Togo");
        case 0xD0E: return QString("Benin");
        case 0xD0F: return QString("Malawi");
        case 0xD11: return QString("Namibia");
        case 0xD12: return QString("Liberia");
        case 0xD13: return QString("Ghana");
        case 0xD14: return QString("Mauritania");
        case 0xD15: return QString("Sao Tome and Principe");
        case 0xD16: return QString("Cape Verde");
        case 0xD17: return QString("Senegal");
        case 0xD18: return QString("Gambia");
        case 0xD19: return QString("Burundi");
        case 0xD1A: return QString("Ascension Island");
        case 0xD1B: return QString("Botswana");
        case 0xD1C: return QString("Comoros");
        case 0xD1D: return QString("Tanzania");
        case 0xD1E: return QString("Ethiopia");
        case 0xD1F: return QString("Nigeria");
        case 0xD21: return QString("Sierra Leone");
        case 0xD22: return QString("Zimbabwe");
        case 0xD23: return QString("Mozambique");
        case 0xD24: return QString("Uganda");
        case 0xD25: return QString("Swaziland");
        case 0xD26: return QString("Kenya");
        case 0xD27: return QString("Somalia");
        case 0xD28: return QString("Niger");
        case 0xD29: return QString("Chad");
        case 0xD2A: return QString("Guinea-Bissau");
        case 0xD2B: return QString("Zaire");
        case 0xD2C: return QString("Cote d'Ivoire");
        case 0xD2D: return QString("Zanzibar");
        case 0xD2E: return QString("Zambia");
        case 0xD33: return QString("Western Sahara");
        case 0xD35: return QString("Rwanda");
        case 0xD36: return QString("Lesotho");
        case 0xD38: return QString("Seychelles");
        case 0xD3A: return QString("Mauritius");
        case 0xD3C: return QString("Sudan");

        case 0xE01: return QString("Germany");
        case 0xE02: return QString("Algeria");
        case 0xE03: return QString("Andorra");
        case 0xE04: return QString("Israel");
        case 0xE05: return QString("Italy");
        case 0xE06: return QString("Belgium");
        case 0xE07: return QString("Russian Federation");
        case 0xE08: return QString("Palestine");
        case 0xE09: return QString("Albania");
        case 0xE0A: return QString("Austria");
        case 0xE0B: return QString("Hungary");
        case 0xE0C: return QString("Malta");
        case 0xE0D: return QString("Germany");
        case 0xE0F: return QString("Egypt");
        case 0xE11: return QString("Greece");
        case 0xE12: return QString("Cyprus");
        case 0xE13: return QString("San Marino");
        case 0xE14: return QString("Switzerland");
        case 0xE15: return QString("Jordan");
        case 0xE16: return QString("Finland");
        case 0xE17: return QString("Luxembourg");
        case 0xE18: return QString("Bulgaria");
        case 0xE19: return QString("Denmark");
        //case 0xE19: return QString("Faroe");
        case 0xE1A: return QString("Gibraltar");
        case 0xE1B: return QString("Iraq");
        case 0xE1C: return QString("United Kingdom");
        case 0xE1D: return QString("Libya");
        case 0xE1E: return QString("Romania");
        case 0xE1F: return QString("France");
        case 0xE21: return QString("Morocco");
        case 0xE22: return QString("Czech Republic");
        case 0xE23: return QString("Poland");
        case 0xE24: return QString("Vatican");
        case 0xE25: return QString("Slovakia");
        case 0xE26: return QString("Syria");
        case 0xE27: return QString("Tunisia");
        case 0xE29: return QString("Liechtenstein");
        case 0xE2A: return QString("Iceland");
        case 0xE2B: return QString("Monaco");
        case 0xE2C: return QString("Lithuania");
        case 0xE2D: return QString("Serbia");
        case 0xE2E: return QString("Spain");
        //case 0xE2E: return QString("Canary Islands");
        case 0xE2F: return QString("Norway");
        case 0xE31: return QString("Montenegro");
        case 0xE32: return QString("Ireland");
        case 0xE33: return QString("Turkey");
        case 0xE35: return QString("Tajikistan");
        case 0xE38: return QString("Netherlands");
        case 0xE39: return QString("Latvia");
        case 0xE3A: return QString("Lebanon");
        case 0xE3B: return QString("Azerbaijan");
        case 0xE3C: return QString("Croatia");
        case 0xE3D: return QString("Kazakhstan");
        case 0xE3E: return QString("Sweden");
        case 0xE3F: return QString("Belarus");
        case 0xE41: return QString("Moldova");
        case 0xE42: return QString("Estonia");
        case 0xE43: return QString("Macedonia");
        case 0xE46: return QString("Ukraine");
        case 0xE47: return QString("Kosovo");
        //case 0xE48: return QString("Azores");
        //case 0xE48: return QString("Madeira");
        case 0xE48: return QString("Portugal");
        case 0xE49: return QString("Slovenia");
        case 0xE4A: return QString("Armenia");
        case 0xE4B: return QString("Uzbekistan");
        case 0xE4C: return QString("Georgia");
        case 0xE4E: return QString("Turkmenistan");
        case 0xE4F: return QString("Bosnia Herzegovina");
        case 0xE53: return QString("Kyrgyzstan");

        case 0xF01: return QString("Australia: Capital Cities (commercial and community broadcasters)");
        case 0xF02: return QString("Australia: Regional New South Wales and ACT");
        case 0xF03: return QString("Australia: Capital Cities (national broadcasters)");
        case 0xF04: return QString("Australia: Regional Queensland");
        case 0xF05: return QString("Australia: Regional South Australia and Northern Territory");
        case 0xF06: return QString("Australia: Regional Western Australia");
        case 0xF07: return QString("Australia: Regional Victoria and Tasmania");
        case 0xF08: return QString("Australia: Regional (future)");
        case 0xF09: return QString("Saudi Arabia");
        case 0xF0A: return QString("Afghanistan");
        case 0xF0B: return QString("Myanmar (Burma)");
        case 0xF0C: return QString("China");
        case 0xF0D: return QString("Korea (North)");
        case 0xF0E: return QString("Bahrain");
        case 0xF0F: return QString("Malaysia");
        case 0xF11: return QString("Kiribati");
        case 0xF12: return QString("Bhutan");
        case 0xF13: return QString("Bangladesh");
        case 0xF14: return QString("Pakistan");
        case 0xF15: return QString("Fiji");
        case 0xF16: return QString("Oman");
        case 0xF17: return QString("Nauru");
        case 0xF18: return QString("Iran");
        case 0xF19: return QString("New Zealand");
        case 0xF1A: return QString("Solomon Islands");
        case 0xF1B: return QString("Brunei Darussalam");
        case 0xF1C: return QString("Sri Lanka");
        case 0xF1D: return QString("Taiwan");
        case 0xF1E: return QString("Korea (South)");
        case 0xF1F: return QString("Hong Kong");
        case 0xF21: return QString("Kuwait");
        case 0xF22: return QString("Qatar");
        case 0xF23: return QString("Cambodia");
        case 0xF24: return QString("Western Samoa");
        case 0xF25: return QString("India");
        case 0xF26: return QString("Macau");
        case 0xF27: return QString("Vietnam");
        case 0xF28: return QString("Philippines");
        case 0xF29: return QString("Japan");
        case 0xF2A: return QString("Singapore");
        case 0xF2B: return QString("Maldives");
        case 0xF2C: return QString("Indonesia");
        case 0xF2D: return QString("United Arab Emirates");
        case 0xF2E: return QString("Nepal");
        case 0xF2F: return QString("Vanuatu");
        case 0xF31: return QString("Laos");
        case 0xF32: return QString("Thailand");
        case 0xF33: return QString("Tonga");
        case 0xF39: return QString("Papua New Guinea");
        case 0xF3B: return QString("Yemen");
        case 0xF3E: return QString("Micronesia");
        case 0xF3F: return QString("Mongolia");

        default: return QString("Unknown");
        }
}

QString DabTables::getAnnouncementName(DabAnnouncement announcement)
{
    // ETSI TS 101 756 V2.4.1 [Table 15]
    switch (announcement)
    {
    case DabAnnouncement::Alarm:     return QString(QObject::tr("Alarm"));
    case DabAnnouncement::Traffic:   return QString(QObject::tr("Traffic News"));
    case DabAnnouncement::Transport: return QString(QObject::tr("Transport News"));
    case DabAnnouncement::Warning:   return QString(QObject::tr("Warning"));
    case DabAnnouncement::News:      return QString(QObject::tr("News"));
    case DabAnnouncement::Weather:   return QString(QObject::tr("Weather"));
    case DabAnnouncement::Event:     return QString(QObject::tr("Event"));
    case DabAnnouncement::Special:   return QString(QObject::tr("Special event"));
    case DabAnnouncement::Programme: return QString(QObject::tr("Radio Info"));
    case DabAnnouncement::Sport:     return QString(QObject::tr("Sport news"));
    case DabAnnouncement::Financial: return QString(QObject::tr("Financial news"));
    case DabAnnouncement::AlarmTest: return QString(QObject::tr("Alarm Test"));
    default:                         return QString(QObject::tr("Unknown"));
    }
}

QString DabTables::getAnnouncementNameEnglish(DabAnnouncement announcement)
{
    // ETSI TS 101 756 V2.4.1 [Table 15]
    switch (announcement)
    {
    case DabAnnouncement::Alarm:     return QString("Alarm");
    case DabAnnouncement::Traffic:   return QString("Traffic News");
    case DabAnnouncement::Transport: return QString("Transport News");
    case DabAnnouncement::Warning:   return QString("Warning");
    case DabAnnouncement::News:      return QString("News");
    case DabAnnouncement::Weather:   return QString("Weather");
    case DabAnnouncement::Event:     return QString("Event");
    case DabAnnouncement::Special:   return QString("Special event");
    case DabAnnouncement::Programme: return QString("Radio Info");
    case DabAnnouncement::Sport:     return QString("Sport news");
    case DabAnnouncement::Financial: return QString("Financial news");
    case DabAnnouncement::AlarmTest: return QString("Alarm Test");
    default:                         return QString("Unknown");
    }
}

const QList<uint16_t> DabTables::ASwValues =
{
    (1 << static_cast<int>(DabAnnouncement::Alarm)),
    (1 << static_cast<int>(DabAnnouncement::Traffic)),
    (1 << static_cast<int>(DabAnnouncement::Transport)),
    (1 << static_cast<int>(DabAnnouncement::Warning)),
    (1 << static_cast<int>(DabAnnouncement::News)),
    (1 << static_cast<int>(DabAnnouncement::Weather)),
    (1 << static_cast<int>(DabAnnouncement::Event)),
    (1 << static_cast<int>(DabAnnouncement::Special)),
    (1 << static_cast<int>(DabAnnouncement::Programme)),
    (1 << static_cast<int>(DabAnnouncement::Sport)),
    (1 << static_cast<int>(DabAnnouncement::Financial)),
};

