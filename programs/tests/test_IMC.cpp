//***************************************************************************
// Copyright 2007-2016 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: bac7f7a5d9c62afd31615a42391b48a0                            *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

#include "Test.hpp"

int
main(void)
{
  Test test("IMC Serialization/Deserialization");

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.61436395279);
    msg.setSource(58675U);
    msg.setSourceEntity(23U);
    msg.setDestination(16840U);
    msg.setDestinationEntity(69U);
    msg.state = 221U;
    msg.flags = 12U;
    msg.description.assign("ZBSLJTAVIHHSZMJJXYADKZGWTENNCVJMVVKQMXOGCWTGRRKASJUFCJEHWWCAHAELOJLPHSNTZKQQKLNPVASUIYOGRQUDLCLNYXPMXFDVAERQDF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.205781614415);
    msg.setSource(50306U);
    msg.setSourceEntity(85U);
    msg.setDestination(100U);
    msg.setDestinationEntity(28U);
    msg.state = 131U;
    msg.flags = 230U;
    msg.description.assign("XSKVEBWKBTIWMHPWNCPVVWJLBNYGSVHLOLFNVYMCSHGZMIKQUDJWRYPSXIDVFYBZQCGHHXTHUNZZKWTMXTPOOBPDSIQXQOQKKNFJUSAOIYAVMURCZKDBJMALCGDMOQELHIFTYRFMRELRBCRHSZUZGBUWCJXEOITPJQIJHPCACLKEXUBGZPFFRFBLDYPYQEZASJDEGJIDWRAVSRGTSJNNDOTXFI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.655843585745);
    msg.setSource(55935U);
    msg.setSourceEntity(218U);
    msg.setDestination(56117U);
    msg.setDestinationEntity(174U);
    msg.state = 195U;
    msg.flags = 156U;
    msg.description.assign("LVVHLDKKVUXSMTLGBJDKMJRNGDAITATZRQUFCWCOKQXOX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.477280146029);
    msg.setSource(17901U);
    msg.setSourceEntity(132U);
    msg.setDestination(18624U);
    msg.setDestinationEntity(183U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.225734821163);
    msg.setSource(36959U);
    msg.setSourceEntity(108U);
    msg.setDestination(62723U);
    msg.setDestinationEntity(164U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.9757508153);
    msg.setSource(25495U);
    msg.setSourceEntity(142U);
    msg.setDestination(37208U);
    msg.setDestinationEntity(96U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.605570511824);
    msg.setSource(16293U);
    msg.setSourceEntity(221U);
    msg.setDestination(9379U);
    msg.setDestinationEntity(69U);
    msg.id = 249U;
    msg.label.assign("KIHLDADBDZNTMZDBDTZJRKIGYNYWRUXIKPRUPQFUONGIHNJBMYPEGTRLFWGAEAVEYSGBFQFCOEOZD");
    msg.component.assign("UWINPZZRKOBWGIYETUHJSMLGPGADEAIUYFYTPTGCTXCNQVDOXFUTYSXUMQEKDKWMHDMBHKCTQZERZKAJWALIGHODBCRRJDOMZKZTRRSWVYVCJFTKIQQHRPZBPUGCPTFFERENAHPEGJNLIXKDZBNVXFQSZOLPEZNVSDWIEAVSPWCNXDGDJQBUHLTORMIFMACVJCYYAVHFIOBQLRVHONBMAXMLWYCGUFJJLOXMNOSSUNHBSQX");
    msg.act_time = 14130U;
    msg.deact_time = 61829U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.390309157698);
    msg.setSource(62487U);
    msg.setSourceEntity(62U);
    msg.setDestination(11226U);
    msg.setDestinationEntity(153U);
    msg.id = 14U;
    msg.label.assign("AEVYPOYXOVIBIPNCJHWDNJQBETNXZTRGXSXGZWDZUHSISWBDKPQMFLTNRBTAUMNJWQGGBMHFMDNCRRRJNCYABQPNVKUCHBXZOYTEUPAQLZPKZHCMOSGOIDHCMQTCLVXKJEKZUEHDRFGFUCSOHFHVSTROADRAOFVPYQYKAGALTGEVPFZLEVRLSMMWXKL");
    msg.component.assign("XUISXVHWBJUPXHYAGIPIDZVKMHKOAKYXAGVJSRYOBQUDDEOFNWKENWTQXHYSWLFVPTKNVHQQPGJHMJIXWUQAGTNUVLRXRCSJAYFDN");
    msg.act_time = 8063U;
    msg.deact_time = 30453U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.87014451083);
    msg.setSource(24634U);
    msg.setSourceEntity(128U);
    msg.setDestination(49857U);
    msg.setDestinationEntity(239U);
    msg.id = 139U;
    msg.label.assign("PORNMMGJFBVAPIXCYVOWIUUIGEFLMFABKZJPCVSUIXQSNIJYUOKGKFHPIERIEELACUHGMTBORQBGMDBTSJCLQWBBNPBGKZ");
    msg.component.assign("HSRLAJLAAJXCHEYZMBBGKULFEZSDXWAUFZSQBLQMHVCKTBZXORWQTJMUIDJVKWKYJWCHSPPAAVZEMWORYZEBLMPCNFYASGMHYRURXFTPMFNNTWOFEGIKLN");
    msg.act_time = 35920U;
    msg.deact_time = 17695U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.733110321539);
    msg.setSource(43973U);
    msg.setSourceEntity(124U);
    msg.setDestination(57901U);
    msg.setDestinationEntity(231U);
    msg.id = 209U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.114532744402);
    msg.setSource(4436U);
    msg.setSourceEntity(245U);
    msg.setDestination(36915U);
    msg.setDestinationEntity(216U);
    msg.id = 14U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.380160856478);
    msg.setSource(58378U);
    msg.setSourceEntity(218U);
    msg.setDestination(6009U);
    msg.setDestinationEntity(4U);
    msg.id = 88U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.56339299539);
    msg.setSource(21302U);
    msg.setSourceEntity(174U);
    msg.setDestination(61887U);
    msg.setDestinationEntity(225U);
    msg.op = 69U;
    msg.list.assign("CJIALDRXLZQAKHSCPGXOOQTHZBKKVKIXWBEEZWTGACMFBQYHJFSZLTKIJWOYZNECAXNPFCNJLJODHSTIBITCIDCFB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.47678644598);
    msg.setSource(20155U);
    msg.setSourceEntity(192U);
    msg.setDestination(27535U);
    msg.setDestinationEntity(5U);
    msg.op = 177U;
    msg.list.assign("MUQRNBVKXAATAHPPQLNFWWSLMGXVRHUPXXJVRNYYNFRCZTFGURRJOZTOMBVOBEUCOQASGIUNIDFZBNXGEDVJQYJCHHRBWJDUEESDDKASPILIWLKIHDW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.0206774656392);
    msg.setSource(38724U);
    msg.setSourceEntity(56U);
    msg.setDestination(27974U);
    msg.setDestinationEntity(7U);
    msg.op = 229U;
    msg.list.assign("CWKHOMQLQXAEMJZTRYLOIJYCYXBKQISTEGYLNVABKAXZHBIDZDRKPVQVFMWHFWQWTYGIMEFKAYDUQOVQNFLBRCAOUPPUZOGWRSHLIPNESBKXPDHTUWZHIOAVOSLKEFOVLAMXGSEBDAQFDGQTASYSFZXGFTNUHJRBPWAWNSEVCWJQCBJSPTKVFHLRNCTGCJMLRMZRYKVCZGHGEHNWBTPUPVGMZMIDIXDXUBPYCYJIRJENCS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.434549959733);
    msg.setSource(27991U);
    msg.setSourceEntity(239U);
    msg.setDestination(1303U);
    msg.setDestinationEntity(245U);
    msg.value = 125U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.0952627908846);
    msg.setSource(55091U);
    msg.setSourceEntity(24U);
    msg.setDestination(11551U);
    msg.setDestinationEntity(177U);
    msg.value = 127U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.296452485485);
    msg.setSource(47298U);
    msg.setSourceEntity(84U);
    msg.setDestination(46737U);
    msg.setDestinationEntity(134U);
    msg.value = 159U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.301926708964);
    msg.setSource(64521U);
    msg.setSourceEntity(160U);
    msg.setDestination(1524U);
    msg.setDestinationEntity(83U);
    msg.consumer.assign("CNDLMKXAPYOMDSWVFVISITZQUPNOFXIQTMQGUVJTBPZQLFVMADPJQHGSVQCPRDNBMUXPRREHKBLRVYLPZZAHSPEIESSMBJDIBVKYKBUXZOQFHKTSSTWNFEJBKDREGXXVCMAZWCGL");
    msg.message_id = 45022U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.93053326039);
    msg.setSource(35146U);
    msg.setSourceEntity(176U);
    msg.setDestination(34725U);
    msg.setDestinationEntity(144U);
    msg.consumer.assign("FWUVPOBIDNBZATJHABAGVAQXHZWEXSFMZJCLPDNEVTKQRYDNVMNQRXPXBHUIZWJ");
    msg.message_id = 31580U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.489519510894);
    msg.setSource(63697U);
    msg.setSourceEntity(57U);
    msg.setDestination(63869U);
    msg.setDestinationEntity(127U);
    msg.consumer.assign("HMFKMQPVBESWBETZBMAPKJLCUCZOJVQONROCWQFOGTOJLSHF");
    msg.message_id = 16490U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.922700585223);
    msg.setSource(41028U);
    msg.setSourceEntity(1U);
    msg.setDestination(27000U);
    msg.setDestinationEntity(37U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.152848758677);
    msg.setSource(35320U);
    msg.setSourceEntity(106U);
    msg.setDestination(30444U);
    msg.setDestinationEntity(212U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.218118289178);
    msg.setSource(58626U);
    msg.setSourceEntity(140U);
    msg.setDestination(65275U);
    msg.setDestinationEntity(104U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.662987565574);
    msg.setSource(12174U);
    msg.setSourceEntity(166U);
    msg.setDestination(25858U);
    msg.setDestinationEntity(116U);
    msg.op = 121U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.00399129637617);
    msg.setSource(50580U);
    msg.setSourceEntity(3U);
    msg.setDestination(43114U);
    msg.setDestinationEntity(212U);
    msg.op = 119U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.653880504485);
    msg.setSource(19695U);
    msg.setSourceEntity(17U);
    msg.setDestination(35942U);
    msg.setDestinationEntity(63U);
    msg.op = 111U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.850986959625);
    msg.setSource(23375U);
    msg.setSourceEntity(62U);
    msg.setDestination(7473U);
    msg.setDestinationEntity(232U);
    msg.total_steps = 162U;
    msg.step_number = 151U;
    msg.step.assign("WMMUEDQTRXLRMYBHZTLDXHSCVISFFQKVRWHBAYMMLBNJCBDIKPZKNWFEWZEWPRJKQWUBCTPNFAJYQDKJABVVDHSGVZTQOPRCJCSYPKQEVLGGCIRQHABTGXUZTQEOCAPCYMULNJOCZOTNUVVDFGATOFKIEWOKB");
    msg.flags = 24U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.819581675379);
    msg.setSource(60704U);
    msg.setSourceEntity(121U);
    msg.setDestination(39894U);
    msg.setDestinationEntity(4U);
    msg.total_steps = 187U;
    msg.step_number = 159U;
    msg.step.assign("WRTHLWAIIUFAMNGCSJIVGSGUAUPYFMNPPELWXRGCCODVSBTYTMJYAMCCLDNLNKPIJQAOIZRNQHUXTFDREVZZAOBOQNLYBJZVXIGPNNWSHSPWOECVEUVVBELOLXZCLBFMDMFJ");
    msg.flags = 84U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.760184753362);
    msg.setSource(12743U);
    msg.setSourceEntity(205U);
    msg.setDestination(58410U);
    msg.setDestinationEntity(184U);
    msg.total_steps = 231U;
    msg.step_number = 173U;
    msg.step.assign("PCHGDTAHBYNESAIZVOHYVBWZKEBTWNHAGJCRZJCPCMHVK");
    msg.flags = 30U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.212953504046);
    msg.setSource(58794U);
    msg.setSourceEntity(70U);
    msg.setDestination(1122U);
    msg.setDestinationEntity(171U);
    msg.state = 127U;
    msg.error.assign("MGYMIHUZXQOAEKJDEUMTPVQRUZBGBWCHOY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.566236552733);
    msg.setSource(37593U);
    msg.setSourceEntity(177U);
    msg.setDestination(41610U);
    msg.setDestinationEntity(89U);
    msg.state = 148U;
    msg.error.assign("IMUUFEKZAXKGUSTPESUIDRKSHJMBVTRQONBZTJAJDQPNNZCOOZWCHFIBZPJTCGGMFOTVKDWNOENRVXZXFQASGVXYEUCDMUYAKTYBJDJHQDZLTDWOHPHFZHLVNAVRT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.178531204226);
    msg.setSource(10224U);
    msg.setSourceEntity(248U);
    msg.setDestination(64964U);
    msg.setDestinationEntity(160U);
    msg.state = 70U;
    msg.error.assign("HIDEUOYYAGVWWSTDJCIEGJCGQLKUNWADKEZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.325965057859);
    msg.setSource(35619U);
    msg.setSourceEntity(185U);
    msg.setDestination(5823U);
    msg.setDestinationEntity(81U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.903742846649);
    msg.setSource(11530U);
    msg.setSourceEntity(102U);
    msg.setDestination(55618U);
    msg.setDestinationEntity(84U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.396681194179);
    msg.setSource(22518U);
    msg.setSourceEntity(215U);
    msg.setDestination(47190U);
    msg.setDestinationEntity(37U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.0119926421519);
    msg.setSource(32481U);
    msg.setSourceEntity(159U);
    msg.setDestination(36998U);
    msg.setDestinationEntity(40U);
    msg.op = 113U;
    msg.speed_min = 0.0452768785483;
    msg.speed_max = 0.303801768208;
    msg.long_accel = 0.116230790497;
    msg.alt_max_msl = 0.804219982076;
    msg.dive_fraction_max = 0.26225657627;
    msg.climb_fraction_max = 0.0410094958359;
    msg.bank_max = 0.010365434362;
    msg.p_max = 0.548935681142;
    msg.pitch_min = 0.879377428735;
    msg.pitch_max = 0.20884974276;
    msg.q_max = 0.645930804537;
    msg.g_min = 0.190237543883;
    msg.g_max = 0.228473109584;
    msg.g_lat_max = 0.232948542737;
    msg.rpm_min = 0.439590017368;
    msg.rpm_max = 0.464865121463;
    msg.rpm_rate_max = 0.512456743619;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.938612970939);
    msg.setSource(45144U);
    msg.setSourceEntity(75U);
    msg.setDestination(48580U);
    msg.setDestinationEntity(5U);
    msg.op = 88U;
    msg.speed_min = 0.672295765698;
    msg.speed_max = 0.28346823557;
    msg.long_accel = 0.479499767328;
    msg.alt_max_msl = 0.538617697818;
    msg.dive_fraction_max = 0.724709156311;
    msg.climb_fraction_max = 0.30914299134;
    msg.bank_max = 0.740413928671;
    msg.p_max = 0.757776082869;
    msg.pitch_min = 0.424372554962;
    msg.pitch_max = 0.564905425002;
    msg.q_max = 0.371301900668;
    msg.g_min = 0.485966199643;
    msg.g_max = 0.285213799562;
    msg.g_lat_max = 0.789432169283;
    msg.rpm_min = 0.655304559756;
    msg.rpm_max = 0.948055540713;
    msg.rpm_rate_max = 0.730268663894;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.787708224394);
    msg.setSource(9869U);
    msg.setSourceEntity(96U);
    msg.setDestination(59853U);
    msg.setDestinationEntity(242U);
    msg.op = 109U;
    msg.speed_min = 0.248494706279;
    msg.speed_max = 0.797198067303;
    msg.long_accel = 0.172462235127;
    msg.alt_max_msl = 0.863279453008;
    msg.dive_fraction_max = 0.0402277225833;
    msg.climb_fraction_max = 0.328204996524;
    msg.bank_max = 0.533109281665;
    msg.p_max = 0.693504007093;
    msg.pitch_min = 0.421500883995;
    msg.pitch_max = 0.735036360407;
    msg.q_max = 0.107258989906;
    msg.g_min = 0.575673704416;
    msg.g_max = 0.100729301348;
    msg.g_lat_max = 0.742739192057;
    msg.rpm_min = 0.8640185103;
    msg.rpm_max = 0.985076737686;
    msg.rpm_rate_max = 0.989574083041;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.0933885539508);
    msg.setSource(53961U);
    msg.setSourceEntity(68U);
    msg.setDestination(56300U);
    msg.setDestinationEntity(127U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.920685360975);
    msg.setSource(15868U);
    msg.setSourceEntity(219U);
    msg.setDestination(2577U);
    msg.setDestinationEntity(80U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.189291353707);
    msg.setSource(35763U);
    msg.setSourceEntity(190U);
    msg.setDestination(39800U);
    msg.setDestinationEntity(166U);
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.0798916168142;
    tmp_msg_0.lon = 0.698376263491;
    tmp_msg_0.speed = 0.65065467906;
    tmp_msg_0.speed_units = 90U;
    tmp_msg_0.duration = 18472U;
    tmp_msg_0.sys_a = 14856U;
    tmp_msg_0.sys_b = 46241U;
    tmp_msg_0.move_threshold = 0.98185707789;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.142708272345);
    msg.setSource(29119U);
    msg.setSourceEntity(67U);
    msg.setDestination(46598U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.162741203341;
    msg.lon = 0.269809464608;
    msg.height = 0.494252433276;
    msg.x = 0.536475098857;
    msg.y = 0.603250690683;
    msg.z = 0.269871584371;
    msg.phi = 0.20929010622;
    msg.theta = 0.906124894231;
    msg.psi = 0.765339465564;
    msg.u = 0.221596989704;
    msg.v = 0.361255724665;
    msg.w = 0.859446676138;
    msg.p = 0.201995996415;
    msg.q = 0.289353645194;
    msg.r = 0.356923993269;
    msg.svx = 0.496737310272;
    msg.svy = 0.0916427792745;
    msg.svz = 0.1044342156;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.259369940985);
    msg.setSource(30200U);
    msg.setSourceEntity(180U);
    msg.setDestination(58344U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.381081437395;
    msg.lon = 0.965814008007;
    msg.height = 0.466886415903;
    msg.x = 0.653442541913;
    msg.y = 0.483056738965;
    msg.z = 0.17893873285;
    msg.phi = 0.641136028283;
    msg.theta = 0.556694416301;
    msg.psi = 0.939364584718;
    msg.u = 0.936675769513;
    msg.v = 0.793882080845;
    msg.w = 0.578652962257;
    msg.p = 0.455494079903;
    msg.q = 0.480033460681;
    msg.r = 0.609226024424;
    msg.svx = 0.30843288133;
    msg.svy = 0.916616442121;
    msg.svz = 0.738204287449;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.718944857113);
    msg.setSource(49432U);
    msg.setSourceEntity(77U);
    msg.setDestination(36513U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.742405550959;
    msg.lon = 0.196867281473;
    msg.height = 0.820790912768;
    msg.x = 0.183090789982;
    msg.y = 0.191207113925;
    msg.z = 0.429665900765;
    msg.phi = 0.294929338768;
    msg.theta = 0.39649273439;
    msg.psi = 0.149903677308;
    msg.u = 0.611653818371;
    msg.v = 0.60621334103;
    msg.w = 0.1362722154;
    msg.p = 0.176872760951;
    msg.q = 0.513856864091;
    msg.r = 0.96274320818;
    msg.svx = 0.858232527679;
    msg.svy = 0.834835932426;
    msg.svz = 0.242242305148;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.546000165092);
    msg.setSource(50378U);
    msg.setSourceEntity(41U);
    msg.setDestination(52383U);
    msg.setDestinationEntity(70U);
    msg.op = 158U;
    msg.entities.assign("XYJXKXXKSJNWRFVRVWRHMZAHUAHSLVJBQKZFCAITPVAEBRHYFCAKNRZLGQNPBAZSAGIEZRVIHHSFPJCGVETEOSNBNQXMXUQJHLHIYBEDYPEUUAEZWSDXRPKNLPOFUQTRCCLQLBTYEHSIKCBSWYILPBUGITPYEDLGTONHMMGOUDDQBA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.347876255629);
    msg.setSource(3878U);
    msg.setSourceEntity(231U);
    msg.setDestination(671U);
    msg.setDestinationEntity(192U);
    msg.op = 22U;
    msg.entities.assign("STWKAQDLOLKHZEIBXQPNSMEOWKPXATDXJHBEMSZJNKYWHJVGPWFGWELJMVBNOFYBHXXEFJQKHSTRPOMVMAZWFXNEDLOWRYFLSCZAHITCZYKYUMRVRPRRIZNBUPUTMKTNMLAIAMVVXICDXSIANYCQACFEKIHSZHODGQQGBCIFLCAJVGBGTIGNHDYMVQPRJCXUNCEKDUTXIRZGKOJTBNTSRCDFOEBYVPDULDQWPLLFBU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.934177188021);
    msg.setSource(29365U);
    msg.setSourceEntity(110U);
    msg.setDestination(51449U);
    msg.setDestinationEntity(14U);
    msg.op = 91U;
    msg.entities.assign("JDAWXZTHUDXUGOKFOAGISCIVQCBPPTADMGFRKQYWXVPYNZRRESAPIRVQFCEOTUCUXKZLGDHOJHBHZQLXKOSXSBLLWZPUDFIVMTRKLIKNNJWMKWJOXOAFXVTOQBCYYBJVPUQZQNKUIGELIOVMLRUSCGNWMHNPJYPUTFDMSCXWAABHOZFZYTQJKDSLBTSTBEYHLMNJCYEGFD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.237335047254);
    msg.setSource(30933U);
    msg.setSourceEntity(172U);
    msg.setDestination(46995U);
    msg.setDestinationEntity(201U);
    msg.type = 50U;
    msg.speed = 6593U;
    const char tmp_msg_0[] = {113, -15, 21, -30, 121, -36, 62, -70, -48, 126, -35, -98, 93, 124, 104, 16, 53, 8, 67, -55, -70, 110, 5, -28, -85, 123, -103, -92, 52, 56, 63, -42, 101, -95, -105, -46, -102, -17, -116, 97, -109, 7, 35, 114, 71, 21, -17, -50, 94, -115, 1, 15, 85, -32, -53, -6, -104, 25, -18, 76, -80, 64, -17, 61, 89, -125, -54, -24, -6, -97, 96, -95, 98, 76, 42, -66, -119, -25, 17, 50, 121, 28, 110, 92, 95, -127, 22, 40, -67, 12, 61, 22, -112, -32, -80, -108, -76, -95, -44, 0, 16, -126, -40, -81, 56, 18, 108, -50, 110, 60, 77, -17, -116, 32, -73, 111, 61, -33, 27, -108, -34, -4, 15, 95, 80, -125, 55, 82, -45, 112, 75, 126, 88, 38, -20, 6, -97};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.974531757805);
    msg.setSource(33099U);
    msg.setSourceEntity(28U);
    msg.setDestination(55778U);
    msg.setDestinationEntity(181U);
    msg.type = 198U;
    msg.speed = 11464U;
    const char tmp_msg_0[] = {-61, 78, 64, -31, -45, 123, -73, 17, -61, 93, -128, 39, 12, -9, -5, 0, 53, -53, 107, 17, -9, 113, -95, -50, 110, -122, 107, -35, 38, -37, -14, 60, -21, 70, 51, -127, -45, 55, 87, -102, 117, 17, -72, 83, 78, 2, 18, 68, -60, -24, 105, -60, 100, -71, -80, -87, -89, 115, 8, 62, 57, -46, -122, 9, -12, -100, 28, 55, 124, 74, 24, 56, 68, -88, 68, 12, 15, 46, -55, 30, -47, -113, 89, -40, 39, -18, 105, -126, -98, -99, -36, -59, -25, -24, 16, 4, 0, 78, 78, 0, 30, -42, 107, 110, 32, -38, 109, 98, -60, -100, -124, -10, 79, -6, -100, -18, -99, 15, 0, 102, -3, 74, -41, -97, -108, 40, -26, -100, -95, -90, 28, -126, 76, -24, -33, -79, -119, 107, -97, 62, -126, -121, 73, -76, 8, -90, 119, -109, -84, -40};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.106961922372);
    msg.setSource(10682U);
    msg.setSourceEntity(186U);
    msg.setDestination(22668U);
    msg.setDestinationEntity(52U);
    msg.type = 209U;
    msg.speed = 4702U;
    const char tmp_msg_0[] = {58, -61, 39, -14, 35, -45, 120, 2, -53, 7, -74, -61, 54, 69, 78, 26, 45, 62, 0, 18, -13, -10, 53, 95, -71, 52, -10, 94, 104, -107, -43, -69, 106};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.709333220385);
    msg.setSource(48128U);
    msg.setSourceEntity(174U);
    msg.setDestination(18706U);
    msg.setDestinationEntity(37U);
    msg.op = 40U;
    msg.tas2acc_pgain = 0.29911029725;
    msg.bank2p_pgain = 0.261845886507;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.651199007759);
    msg.setSource(26519U);
    msg.setSourceEntity(140U);
    msg.setDestination(42584U);
    msg.setDestinationEntity(131U);
    msg.op = 123U;
    msg.tas2acc_pgain = 0.78643746726;
    msg.bank2p_pgain = 0.176190096435;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.337872497395);
    msg.setSource(6526U);
    msg.setSourceEntity(7U);
    msg.setDestination(46200U);
    msg.setDestinationEntity(230U);
    msg.op = 210U;
    msg.tas2acc_pgain = 0.678626812153;
    msg.bank2p_pgain = 0.605905504925;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.962045602423);
    msg.setSource(9786U);
    msg.setSourceEntity(136U);
    msg.setDestination(14391U);
    msg.setDestinationEntity(223U);
    msg.available = 2081311354U;
    msg.value = 245U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.998072318563);
    msg.setSource(2185U);
    msg.setSourceEntity(176U);
    msg.setDestination(63082U);
    msg.setDestinationEntity(122U);
    msg.available = 2311335084U;
    msg.value = 60U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.662351704673);
    msg.setSource(14443U);
    msg.setSourceEntity(230U);
    msg.setDestination(6085U);
    msg.setDestinationEntity(45U);
    msg.available = 3071593798U;
    msg.value = 1U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.476445640468);
    msg.setSource(26708U);
    msg.setSourceEntity(172U);
    msg.setDestination(55526U);
    msg.setDestinationEntity(96U);
    msg.op = 184U;
    msg.snapshot.assign("VPGIZQVVVNXYQNAFJFRFIOIYLADGKPNHKGJIANKAJRESTZGQOBDTQSDTHUYUXBKAHXJRHQPPJJHUVBAGCUQVNROARKITSVCRCDJSLXLDQAFWVWWMZMZEETFOSFXNCZEEWGBQUDDWMUSSTUIKECOLYILELXZBWSSGRRXQBRVOPZKRLXMOXMHWVCFYULJENITUJWOANYYMTYKNGPTIWD");
    IMC::CameraZoom tmp_msg_0;
    tmp_msg_0.id = 197U;
    tmp_msg_0.zoom = 170U;
    tmp_msg_0.action = 26U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.560171634076);
    msg.setSource(6382U);
    msg.setSourceEntity(3U);
    msg.setDestination(48261U);
    msg.setDestinationEntity(115U);
    msg.op = 157U;
    msg.snapshot.assign("BGJCBHZLUBEMKEERPAHMWYKUGLKLIORXLCVGIAGOQKFLGEIMAZBBWYISPYYWCQFBDFQCLKPSJOSXPTYMYEIZDWQIBKSDMFPLODNOXGQVUPXFMHRHVVZSNNZUCQISIHJRMTDRWVKT");
    IMC::FormState tmp_msg_0;
    tmp_msg_0.possimerr = 0.525832227315;
    tmp_msg_0.converg = 0.0919641955631;
    tmp_msg_0.turbulence = 0.524742562827;
    tmp_msg_0.possimmon = 178U;
    tmp_msg_0.commmon = 51U;
    tmp_msg_0.convergmon = 141U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.436060849473);
    msg.setSource(22849U);
    msg.setSourceEntity(59U);
    msg.setDestination(54966U);
    msg.setDestinationEntity(231U);
    msg.op = 240U;
    msg.snapshot.assign("PZGFYJQUTMCXFZZLYRTBGQDZAPADVIITVEILBJUQVEKWPEKFROQV");
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 76U;
    tmp_msg_0.lon_gain = 0.0729409360417;
    tmp_msg_0.lat_gain = 0.865325974459;
    tmp_msg_0.bond_thick = 0.265338782404;
    tmp_msg_0.lead_gain = 0.427443103764;
    tmp_msg_0.deconfl_gain = 0.604359195117;
    tmp_msg_0.accel_switch_gain = 0.942443906316;
    tmp_msg_0.safe_dist = 0.727598124559;
    tmp_msg_0.deconflict_offset = 0.601621757833;
    tmp_msg_0.accel_safe_margin = 0.43265093075;
    tmp_msg_0.accel_lim_x = 0.288674988799;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.33842403106);
    msg.setSource(32020U);
    msg.setSourceEntity(62U);
    msg.setDestination(11660U);
    msg.setDestinationEntity(95U);
    msg.op = 83U;
    msg.name.assign("DXJLZDECYDQJXPTBQBQVVKUHZWJYRSMBDTXGZPSACUNINYLYXMOATUBYFHIPMXADPIGTWYIZWUFILYNKBXSDINXHPOMVEVPSUAZMITYIGCHOKQUFGAMNHIVHD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.0759912189959);
    msg.setSource(59365U);
    msg.setSourceEntity(121U);
    msg.setDestination(50691U);
    msg.setDestinationEntity(53U);
    msg.op = 202U;
    msg.name.assign("HFSYOGCDZFZXOPPTHJTGYNWUMKTZLYCFXJPTSJDYWQHIRNTYZSROVIURFMZMVLQCJZAGXEGCLSEHHQMMPTTJYDIVPWONWLXCMETOFSIDNKAA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.722453416665);
    msg.setSource(20600U);
    msg.setSourceEntity(180U);
    msg.setDestination(8685U);
    msg.setDestinationEntity(178U);
    msg.op = 222U;
    msg.name.assign("VABVOBPSDGQORLRSZZHWDPTCCZEAMCNSORLUFGUGXCUMALAMEOKKSLUIXIYDMQYIOABORNFDAWXUHZJVMCQHJYISMXKPDHCP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.224043704889);
    msg.setSource(52813U);
    msg.setSourceEntity(130U);
    msg.setDestination(58471U);
    msg.setDestinationEntity(233U);
    msg.type = 89U;
    msg.htime = 0.804486674128;
    msg.context.assign("KNPQJYEDRJPVOOWAFPNMCNXAMTDGEMZLZVMCHAENEFYWTFFOGLZTIFSPKNGXYDHQOQCMURLCHUSFHKAJNUIWDCYSMEOHBFSVCOTQOIIPGXTVGUZEGJHPSNNQZKWRNYITQXRDP");
    msg.text.assign("PNIAPOOLOIXVQMCRETFOYRUNNBJFFMYRVBWLGSAEFJZUWIDIJAGQBGILYYZXQBIZVMODKRSINPDYJKMCUWNNWZDHARYVHACTESBMTKBQGNELVTOELKFPZMAHJRRWGQPWUKOSCYCZBDTHXJXFHLIHGUQOSEUOCJDFXGVJVDECVZFSLEYTMWTHZCLGOSDAYPMACBYVXFTHAKXQHBDK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.842809503892);
    msg.setSource(5606U);
    msg.setSourceEntity(224U);
    msg.setDestination(49582U);
    msg.setDestinationEntity(188U);
    msg.type = 128U;
    msg.htime = 0.807613817462;
    msg.context.assign("JNWZVNHCAEUJHJRPHHSDCGUFGSRMADXGRFKBNJXDDQJWZNLTXCEJMSAONFLORTKQTEOUNPQLPNLRBLAMZTVVWRRNMKDWVTUGIZDMMPASCSECXQKFNYIBSGWIBUKUJOKUAGJSYCEIZYREEKFCYPDCOIMIOXZPEUQWDGKTHEK");
    msg.text.assign("ZGIBARZGQJKUPWLNVYQOCWKCTYUWHKRYTIRFXYQAMXVLKGWTDGFKGHYCMTCLKZKVASIIKCETOHXEGPOXQUYAPJOSNFDHWHXFBUM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.248734918056);
    msg.setSource(51881U);
    msg.setSourceEntity(55U);
    msg.setDestination(8920U);
    msg.setDestinationEntity(243U);
    msg.type = 114U;
    msg.htime = 0.279079040414;
    msg.context.assign("VGYAIBNEHACXZTNASGJURWOZIYXGGUMTMOKJXCDTKXPJFXJOYMINBDAVCVWDIAZUOVCQHLNQPHGYLKVTWAEPHVKUSAXMUSSHYFNIXYZQDXBTNRJKJMDAK");
    msg.text.assign("RZBSKEZWTMYLMCLUDODNZACUSULGTJAQDXVJFRKZVOVEKOXEMFGDGTACWSRYPMCCYHIJQTEHJXLDVSBPLPBXZDMXZQBBULHRNFPUBQGFHQNLCWXOPLFABGVLHKJMHXHOCMFIPSVFUWUAJRSDVIEJETNCQUKLAFJDORHSEMVBOUNBJGDQQWYKRPXIZTPTWHEDWARIMKIIPOOWX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.244674282294);
    msg.setSource(11846U);
    msg.setSourceEntity(89U);
    msg.setDestination(1284U);
    msg.setDestinationEntity(195U);
    msg.command = 160U;
    msg.htime = 0.471747043356;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.783730966482);
    msg.setSource(4138U);
    msg.setSourceEntity(151U);
    msg.setDestination(51890U);
    msg.setDestinationEntity(16U);
    msg.command = 20U;
    msg.htime = 0.9402963594;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.474213610979);
    msg.setSource(20586U);
    msg.setSourceEntity(116U);
    msg.setDestination(23566U);
    msg.setDestinationEntity(122U);
    msg.command = 203U;
    msg.htime = 0.343853451135;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.170391251048);
    msg.setSource(27620U);
    msg.setSourceEntity(7U);
    msg.setDestination(20484U);
    msg.setDestinationEntity(43U);
    msg.op = 92U;
    msg.file.assign("MTMQIRNBGYPQWXNYZTZGVEHZGKRZTSVISWIYDQTWBEWUUPXBAYHKNACLGDQSLHKNO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.0533216533573);
    msg.setSource(36743U);
    msg.setSourceEntity(177U);
    msg.setDestination(16124U);
    msg.setDestinationEntity(247U);
    msg.op = 55U;
    msg.file.assign("ZSTQVWJCUTASKXDXEOJTMARRTWZOYIDBSHXUVHEWMJWXCJNLCEQQYMYBNYULNGDKNAJYTQLSJXUMABNBARAULAKQIAPRMTZCPIMFYQZMJNXBOSGMFWXIWVTG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.984392184258);
    msg.setSource(11576U);
    msg.setSourceEntity(44U);
    msg.setDestination(56062U);
    msg.setDestinationEntity(94U);
    msg.op = 201U;
    msg.file.assign("IRATARBBPEZKZCNLQBFDYBPPFYDSERUOJUJQNUQKOLLFDZKQPGOBCRSYCPEFRCSRNJPDAHODWSLVOQBENTJVSMGEWXXXLWISAUBHQMGMBHMSTGRFWQQYFIWCGNOYQPZXPAAVSJHNRVXGJDWKJUZNXVIAXHYVUCKTXGKMTIMZQC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.021257139849);
    msg.setSource(19699U);
    msg.setSourceEntity(187U);
    msg.setDestination(46001U);
    msg.setDestinationEntity(3U);
    msg.op = 141U;
    msg.clock = 0.424201783835;
    msg.tz = -93;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.0229344239959);
    msg.setSource(34220U);
    msg.setSourceEntity(219U);
    msg.setDestination(24362U);
    msg.setDestinationEntity(45U);
    msg.op = 169U;
    msg.clock = 0.509018089195;
    msg.tz = 124;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.17033745916);
    msg.setSource(44031U);
    msg.setSourceEntity(128U);
    msg.setDestination(25923U);
    msg.setDestinationEntity(57U);
    msg.op = 79U;
    msg.clock = 0.817667108522;
    msg.tz = -93;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.519448481354);
    msg.setSource(59737U);
    msg.setSourceEntity(237U);
    msg.setDestination(30417U);
    msg.setDestinationEntity(249U);
    msg.conductivity = 0.842373776943;
    msg.temperature = 0.0172040241047;
    msg.depth = 0.947969017936;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.446226926206);
    msg.setSource(3716U);
    msg.setSourceEntity(155U);
    msg.setDestination(60458U);
    msg.setDestinationEntity(92U);
    msg.conductivity = 0.309201589987;
    msg.temperature = 0.980145115662;
    msg.depth = 0.867150689981;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.626087258804);
    msg.setSource(46218U);
    msg.setSourceEntity(85U);
    msg.setDestination(15985U);
    msg.setDestinationEntity(91U);
    msg.conductivity = 0.0543813617749;
    msg.temperature = 0.422488792092;
    msg.depth = 0.00970303303677;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.68608996123);
    msg.setSource(56128U);
    msg.setSourceEntity(200U);
    msg.setDestination(31757U);
    msg.setDestinationEntity(249U);
    msg.altitude = 0.733450620162;
    msg.roll = 20547U;
    msg.pitch = 27897U;
    msg.yaw = 24323U;
    msg.speed = -11497;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.109407456744);
    msg.setSource(39931U);
    msg.setSourceEntity(181U);
    msg.setDestination(46081U);
    msg.setDestinationEntity(95U);
    msg.altitude = 0.205154418783;
    msg.roll = 57119U;
    msg.pitch = 60203U;
    msg.yaw = 65279U;
    msg.speed = -24600;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.946546193485);
    msg.setSource(43740U);
    msg.setSourceEntity(251U);
    msg.setDestination(11575U);
    msg.setDestinationEntity(142U);
    msg.altitude = 0.36596785154;
    msg.roll = 36374U;
    msg.pitch = 3994U;
    msg.yaw = 31182U;
    msg.speed = -138;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.726499474171);
    msg.setSource(48663U);
    msg.setSourceEntity(158U);
    msg.setDestination(3716U);
    msg.setDestinationEntity(145U);
    msg.altitude = 0.834661272908;
    msg.width = 0.348331649846;
    msg.length = 0.79698211339;
    msg.bearing = 0.0905932638182;
    msg.pxl = 31147;
    msg.encoding = 213U;
    const char tmp_msg_0[] = {86, -43, -96, 38, -25, -106, 98, -78, -23, 8, 92, -21, -84, -125, -119, 125, 24, 18, -100, -60, 16, 80, 12, 30, -71, -52, 84, -8, 116, -27, -92, -108, -124, 28, -22, 55, 49, 67, -113, -7, -47, 76, 77, -66, 10, 115, 4, -57, 10, -68, 13, -25, -85, 80, 73, -124, 29, -126, -40, 63, 51, -13, -10, -124, -4, 81, 89, -89, -59, 12, -38, 91, -56, -8, 35, 32, -12, -126, -116, -49, -102, -20, -80, -19, 26, -114, 126, -28, 6, -63, 46, -99, -28, -34, -11, 52, 59, -95, 94, 84, -25, 9, -24, -9, -72, -83, -78, 39, 7, 67, 71, -15, -9, -60, -17, 123, -85, -37, -14, -54, 51, -56, 45, -69, -90, 96, 72, 59, -69, -33, -90, -50, -26, 71, 103, -108, -122, 24, -109, -32, 63, -19, -110, 7, 109};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.420440395027);
    msg.setSource(11315U);
    msg.setSourceEntity(66U);
    msg.setDestination(29284U);
    msg.setDestinationEntity(251U);
    msg.altitude = 0.604701794308;
    msg.width = 0.871114188407;
    msg.length = 0.518048753698;
    msg.bearing = 0.766541333145;
    msg.pxl = -1578;
    msg.encoding = 190U;
    const char tmp_msg_0[] = {-49, -52, 0, -102, -44, 71, 108, -60, -23, -39, 15, -94, -35, 46, -51, 75, 28, 21, -70, 52, 1, -89, 69, 14, -20, 24, 95, -25, 82, -71, 124, 14, -42, 28, 90, -83, 28, -7, 93, 121, 32, 21, 96, 100, -126, -14, -74, -82, 80, -52, -52, 78, 3, -51, 86, -67, -115, -117, 88, -6, 103, -54, 28, 12, -18, 81, -107, 103, -75, 34, 27, -127, 46, -117, -93, -121, 67, 21, 110, -54, 23, -1, -57, 7, -37, 55, -76, -128, 109, -101, -2, 74, 89, -58, 39, 109, 23, 62, 36, -95, 11, 75, 84, -120, -2, 1, -93, -59, 25, -68, -48, -18, 122, 18, 71, -89, -52, 94, 125, -15, 11, 66, 63, -63, 110, 22, 73, -82, -68, 98, 98, -118, 37, -10, 103, 22, 122, 1, 21, -53, 80, -15, 23, -120, 50, -29, 75, -25, 83, 7, -15, 119, -14, 9, -62, -99, -16, -76, -35, -101, 6, 48, 56, -36, -37, 116, 124, 94, -30, -17, 71, 123, 75, -94, -49, 90, -78, -82, 9, -23, 39, -86, 96, -20, -119, 43, -5, -69, -112, 76, -80, -6, -51, -9, 23, 50, 55, 36};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.564798761424);
    msg.setSource(35397U);
    msg.setSourceEntity(170U);
    msg.setDestination(11061U);
    msg.setDestinationEntity(194U);
    msg.altitude = 0.606677157908;
    msg.width = 0.429410846807;
    msg.length = 0.448261203804;
    msg.bearing = 0.395412838398;
    msg.pxl = -7069;
    msg.encoding = 223U;
    const char tmp_msg_0[] = {-128, 100, -9, 86, -34, 83, -50, 94, 83, -47, 19, -121, 113, 67, -63, 37, 98, -27};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.352533389446);
    msg.setSource(45741U);
    msg.setSourceEntity(137U);
    msg.setDestination(35708U);
    msg.setDestinationEntity(98U);
    msg.text.assign("QGBYGHILEQRHRSWU");
    msg.type = 40U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.812203892051);
    msg.setSource(23401U);
    msg.setSourceEntity(152U);
    msg.setDestination(6023U);
    msg.setDestinationEntity(3U);
    msg.text.assign("ADFECOAVYXPYRUFEJTRGAKJIEDQQHGUIWSTEMHTZQKSKWQCBRPZGKZSBMCFFQNEOCLUNHQTXGLYOVNPIZCXBSFTLXAJLHBWCISIDFWIQAJWUHIMUELTMHQYKKONEGUISNWGPPGVTZXGSBRUZLZPSK");
    msg.type = 150U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.878767963705);
    msg.setSource(2799U);
    msg.setSourceEntity(201U);
    msg.setDestination(33649U);
    msg.setDestinationEntity(158U);
    msg.text.assign("ZUCWICSLUYSR");
    msg.type = 240U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.114126912003);
    msg.setSource(30523U);
    msg.setSourceEntity(23U);
    msg.setDestination(17007U);
    msg.setDestinationEntity(187U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.3400221787);
    msg.setSource(6098U);
    msg.setSourceEntity(221U);
    msg.setDestination(50844U);
    msg.setDestinationEntity(81U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.217485072873);
    msg.setSource(46392U);
    msg.setSourceEntity(210U);
    msg.setDestination(14938U);
    msg.setDestinationEntity(147U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.558823503309);
    msg.setSource(10592U);
    msg.setSourceEntity(214U);
    msg.setDestination(12398U);
    msg.setDestinationEntity(182U);
    msg.sys_name.assign("HRBGVUMUJIE");
    msg.sys_type = 81U;
    msg.owner = 50521U;
    msg.lat = 0.335210862286;
    msg.lon = 0.0790275223284;
    msg.height = 0.987263183833;
    msg.services.assign("PAVKCYMUGENSQPXPVOIBPHHORIODFAISJXITMBQNUFORAYBQWOUFRXYGVEXHSFOPLZYGTWVMBCEISCKRJLZDNWHFYESQGEYWPRILKASCWATYCZLNMGZFHEVPKJMZKCTWJNOHUOOGUCPLDIQVYXDTWMLWQRCQOJKCFHLAVDDUDCTUZRTASLGGESXXZPBTFDRVXMJPBFIRUBDKDIEZEKWTLWVZMNIJSYQYQEBVATAKJHNGHUJQXLMSZHMBA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.306617187094);
    msg.setSource(38836U);
    msg.setSourceEntity(130U);
    msg.setDestination(33439U);
    msg.setDestinationEntity(114U);
    msg.sys_name.assign("SAEKRPKOCGBJCWBMTDQFSSVHBXLJLWLYWXNXWOZVOJSTHDRXSNGPJHEOGKRPAFPOKTOBVOPZIRCBVYIBEDMMVHOTMISIHRAZZKFPDGZPDRZLCTNWME");
    msg.sys_type = 230U;
    msg.owner = 39650U;
    msg.lat = 0.610338444019;
    msg.lon = 0.872216718001;
    msg.height = 0.0116432513894;
    msg.services.assign("LNMDYVTEFKCPEXXTGSGQDVVLUSFBNKBTIU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.0835248659517);
    msg.setSource(51072U);
    msg.setSourceEntity(153U);
    msg.setDestination(58429U);
    msg.setDestinationEntity(226U);
    msg.sys_name.assign("NGUPMFABWIWZYLEPMSASMEXYPQDCSVDQUNYHGGNSFJSZSXFZDMYVMBZAPOYHPKNUFLACKUJUXBNEHTHJBHXSOQFODGYRCTFNWKATJEDJPYVZLTIRTQXANUFIWJBRJZRZSEPKFAGUHIAHRZQOBGKCIFUOQTPFIWSYNMXVEMDLGIVASQGVTXCKOWRLRRYBUWHVTCLTELKPLKWICRLC");
    msg.sys_type = 178U;
    msg.owner = 59516U;
    msg.lat = 0.669148091389;
    msg.lon = 0.0359286663197;
    msg.height = 0.222127266205;
    msg.services.assign("XHBDOBKYRHISUEQFGGDCFKXYRFRFDAJWBEYHWAQMZJTHTRGXXOMZSKDINJEUCIYNVGHQWNJEGJQVZBUACVYCPJYFITDABUSPBUIZRQNEPEAWWPEXDEVIV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.177566490768);
    msg.setSource(5777U);
    msg.setSourceEntity(247U);
    msg.setDestination(39515U);
    msg.setDestinationEntity(150U);
    msg.service.assign("JXLFPWKEWNFLGLGDRGTF");
    msg.service_type = 133U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.206610316643);
    msg.setSource(22141U);
    msg.setSourceEntity(211U);
    msg.setDestination(9869U);
    msg.setDestinationEntity(7U);
    msg.service.assign("TPRZGHFKBICMGKBENBBN");
    msg.service_type = 236U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.686459764978);
    msg.setSource(20175U);
    msg.setSourceEntity(212U);
    msg.setDestination(35325U);
    msg.setDestinationEntity(105U);
    msg.service.assign("LYDCBKGLWQEPINZYACFFBMHDRCJEVVBCDSOWHMAYYCFLOLLEMZBRSPFDZC");
    msg.service_type = 29U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.852743975298);
    msg.setSource(10143U);
    msg.setSourceEntity(146U);
    msg.setDestination(56256U);
    msg.setDestinationEntity(12U);
    msg.value = 0.868006838288;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.0237845624944);
    msg.setSource(10931U);
    msg.setSourceEntity(95U);
    msg.setDestination(54308U);
    msg.setDestinationEntity(19U);
    msg.value = 0.331977805438;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.744921950057);
    msg.setSource(14210U);
    msg.setSourceEntity(34U);
    msg.setDestination(4762U);
    msg.setDestinationEntity(210U);
    msg.value = 0.773753265557;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.678932976032);
    msg.setSource(63549U);
    msg.setSourceEntity(90U);
    msg.setDestination(61855U);
    msg.setDestinationEntity(115U);
    msg.value = 0.69457108501;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.344582817929);
    msg.setSource(11213U);
    msg.setSourceEntity(69U);
    msg.setDestination(19832U);
    msg.setDestinationEntity(102U);
    msg.value = 0.549934729553;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.593644770454);
    msg.setSource(28566U);
    msg.setSourceEntity(14U);
    msg.setDestination(54145U);
    msg.setDestinationEntity(159U);
    msg.value = 0.0657218729723;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.436324868415);
    msg.setSource(55666U);
    msg.setSourceEntity(158U);
    msg.setDestination(2409U);
    msg.setDestinationEntity(114U);
    msg.value = 0.0322117882299;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.289728448947);
    msg.setSource(4967U);
    msg.setSourceEntity(92U);
    msg.setDestination(57634U);
    msg.setDestinationEntity(19U);
    msg.value = 0.794625954447;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.998284237632);
    msg.setSource(34478U);
    msg.setSourceEntity(12U);
    msg.setDestination(62381U);
    msg.setDestinationEntity(119U);
    msg.value = 0.050283944921;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.195178972437);
    msg.setSource(4312U);
    msg.setSourceEntity(6U);
    msg.setDestination(36131U);
    msg.setDestinationEntity(190U);
    msg.number.assign("WNHNUDYAWEOLTMNMFAQPIPVFVBGNWBFRCOTXOVDJYXNXSZANMKXUYVQPQSZDXPITXUWRYRQMZHTJAIBYLIGHZDRGLJDLBEKGOCBQOWRAAPHKJGOSLBZVTJEEBLTJCDONSXKMRFSPYDJIKUUSCGFFMVAHZEXWBCCUVAFLSMCWTIAEDTUJERCOLNDEEPQZKHXMHOYHMVVEGRBIJUHCNKLPDWQPXTQTKFFAGJSGZZVU");
    msg.timeout = 666U;
    msg.contents.assign("ACHXPXZXNSVBXQMEKTEYOQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.871633760597);
    msg.setSource(56173U);
    msg.setSourceEntity(151U);
    msg.setDestination(22342U);
    msg.setDestinationEntity(206U);
    msg.number.assign("EYCUKIQSQA");
    msg.timeout = 23703U;
    msg.contents.assign("XWDICVNBJWIUVAWRYRFQLRHPTOKXXPDUHNLEHUBIZQDUXLLCMWXFUONNESQCYCARBOFEXPHKYZJGOVKZMVDLRGERPOSOWQKYCNMKEIEPMPTOGGIUIDZKOUYVSDZFDILWZSHHFNQNAMJBNCJAGAZAMNGZASVQTTYBFENLXHRIXAJVBEYVYJQPAWPHTJBYSO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.18891155748);
    msg.setSource(25357U);
    msg.setSourceEntity(146U);
    msg.setDestination(50810U);
    msg.setDestinationEntity(164U);
    msg.number.assign("ODZFYMGJFYOPUPAWSRHRLSXTBUBZLKJCDTEBCZVWFQRJPWSTILUHDLIDQWPMQVXPONULTOTOGUHJGGUSYTMOAQVYNHGBVXKNPNWAZLDSNXHEMSYCYMGWXIOQDHATUYRQELVYPQBMDFKZMZTREUZQEJRZKRZVXVSUGRNJXCJWKTRKIYWIPO");
    msg.timeout = 27375U;
    msg.contents.assign("JYSLMNMGFEBGLPHRTNHIUFGCYWXVIXUOOUCHDICJOJHBZXQRNKQCVIQPWEYYAMUGTUBIFJSMRTVKRJXFWQEPFYIHBWUIROGFKNAKSWLINZLOOQNUZLSDHEHUSSYAZLXFDKPOCWSAYLAGTEZABEDLZFVMBRAKSTJNQVPEMYEHRICDQWVMTCPGFCQYEUZBUPXAPRDGVOAVTLBQJDMKZGGOYWKBSDCTXVWRDVJWJOPAPRMZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.174323201112);
    msg.setSource(24905U);
    msg.setSourceEntity(88U);
    msg.setDestination(42811U);
    msg.setDestinationEntity(1U);
    msg.seq = 999168056U;
    msg.destination.assign("GXWIOUAWYORNMPQCZKZREDYFKYYTTXGJMMBCJFWFIAKWEMJYNANDBSWGQERCZXSVIRBHXEODQICDPLJINSJRMTSLLHKZRIZSBMUSZQCOQSTHQIUVFLQTRCUFNWDJUPRWOLXHDEGPNONYPOFVJMCKXV");
    msg.timeout = 13502U;
    const char tmp_msg_0[] = {-30, -6, 78, 86, -58, -118, -114, 39, -18, 90, -33, 56, 77, -9, -33, 105, 86, 109, -32, 94, -22, 46, 121, -108, 43, -121, -38, -36, -8, 97, -38, -52, 13, -16, 106, -32, 94, -94, -104, 72, 40, -112, -108, 7, -114, -23, -51, 124, -115, 12, 95, 56, -100, 44, 3, -122, 101, -57, 100, -36, 80, -76, -78, 38, -30, -41, -43, -61, -100, -3, -53, -85, 64, -68, -17, -71, -40, 110, 90, 9, 19, 95, -58, 72, 95, -74, -93, -46, 65, -24, 26, 4, 4, -16, -107, 101, -22, -101, 88, -18, -51, 105, 78, -60, 75, 93, 62, -70, -105, -65, -17, -115, 52, -123, -96, -106, -11, -3, -48, -51, 70, 18, -24, 19, 83, 86, 66, 78, -46, -9, -46, -3, -21, 22, -62, 73, -33, -98, -73, 77, -97, 121, 26, -121, 96, 4, 102, -104, 91, -123, -72, -85, -109, -26, 78, -96, 62, 63, -77, -117, 57, 76, -123, -77, 23, -102, 113, 83, 78, 10, -63, -30, 87, 118, -77, -25, 88, 30, -2, -105, 108, 97, -123, -100, 2, 32, 72, -5, 98, 27, -28, 66, 42, -53, 36, -109, -90, -79, -98, -37, -75, -71, 119, -100, -114};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.853453026867);
    msg.setSource(8658U);
    msg.setSourceEntity(125U);
    msg.setDestination(8898U);
    msg.setDestinationEntity(104U);
    msg.seq = 4231156340U;
    msg.destination.assign("TQAGPNBJDCOPRRKENEKMMCMFTNDTIOWMOSZNGBXFQRKDSKKWSIVVWECYHBJEVUISBJWGEVAKAFAQHXZVAQWMBUIJPCFHSJUTHLXESW");
    msg.timeout = 61809U;
    const char tmp_msg_0[] = {-84, 72, 96, -28, -108, 19, -36, 41, 19, -60, 41, -116, -99, -96, -45, 94, 59, -64, 92, 96, 28, 68, -12, -92, -88, 61, -66, -106, 4, -90, -89, 111, -11, 57, -15, 95, -49, 91, -55, 34, -110, 0, -17, 34, -7, -105, -115, 109, 87, -44, -54, 10, -30, -83, 0, -103, 96, 108, -82, -24, -23, 22, 67, -115, -38, 64, -58, -82, 126, -126, -34, -24, 124, 76, -113, 69, -99, 39, -125, -10, 106, 17, 64, 89, 120, 51, 85, -75, 27, 89, 81, 100, 77, -70, 32, 119, 49, -29, 2, -115, 20, 32, 59, -50, 65, 20, 4, 82, 109, -95, 120, 32, 108, -64, 80, 13, -42, -85, 39, 87, -59, -89, -75, 15, 28, -62, -102, 119, 20, 12, 35, -42, 73, 54, -10, -97, 107, 48, -85, -95, -112, -124, 57, 46, 48, -92, -82, 121, 69, 107, 19, -123, -81, 67};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.0957519162385);
    msg.setSource(21551U);
    msg.setSourceEntity(96U);
    msg.setDestination(22173U);
    msg.setDestinationEntity(130U);
    msg.seq = 3693841993U;
    msg.destination.assign("YQRUICWIDFJJYFKBSOFMYSKHIITUQBMBIDQODRPKDIAAMSWUAREVTQSGVYDVODCPHNUBRJDJTXYWOUHXLEGQHVIKZKGVNBXNHHTRCAPQTLLFAMZQSJSXCGNXDTPTVTIMXKCWLRTBSWLGZEUXFGNQYLWDYEOKNOPAZHEOWZEWKKFGNLMBJSOVCUCLCJVQHYLEXZBGCWUAPTFWIRYAUVPNMEHBZJEJMCRA");
    msg.timeout = 38271U;
    const char tmp_msg_0[] = {109, 53, 64, -57, 116, 78, 9, -86, 94, 111, -11, -108, -22, 60, -81, -53, 115, -24, 117, 3, 83, 82, 96, -111, -123, -30, 23, -68, 36, -45, 96, -30, 60, -62, -81, -21, -104, -20, 79, 109, -62, -93, -27, 21, -19, -85, 94, -76, 95, -74, 110, -93, 70, 91};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.519210410378);
    msg.setSource(53928U);
    msg.setSourceEntity(203U);
    msg.setDestination(55669U);
    msg.setDestinationEntity(246U);
    msg.source.assign("JEXPGWHFCGTMWITGPDRVKUPFZCLENTSFQMABSRQJDSCGTJAYCQJYUMVWBXGXONEFZVUNWHGNRXKXYNWMWOXELDAJTTOHMMJFDGVDSOIGXUFCDBPAYAFMNZKYMIQHOTETHQCOKYDOEZULHQIIWEEJPCPCYWTVLULHNJSHIPLLDZOZB");
    const char tmp_msg_0[] = {-60, 119, 109, 66, 14, -125, 80, 80, 59, -56, 104, 68, -93, 104, 0, 32, 109, 16, 52, -122, -67, -22, 88, 24, -6, 24, 61, -29, -113, -94, -126, 32, 34, 41, -13, 16, 4, 91, 46, 51, -111, -61, -30, -34, -104, -21, -119, 26, 121, 52, -36, 87, 55, -91, -23, 40, -17, -37, 54, 105, 63, -109, 108, 19, 79, -22, -120, -4, 117, -80, 33, -43, 91, 44, -61, 27, 53, -69, -117, 57, 102, -101, 78, -13, -96, -75, 76, 105, 65, 11, 81, -33, 53, -3, 100, 20, -34, 33, 72, -89, -116, -18, -30, -114, -38, 110, 86, 85, -102, -53, -42, -105, 56, 72, -66, 85, -6, 71, 34, 40, 30, -34, 56, 72, -40, 60, 90, -99, -65, -38, 89, -31, -62, 25, 76, 87, 94, 70, -121, 51, -87, -24};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.143591571793);
    msg.setSource(47199U);
    msg.setSourceEntity(243U);
    msg.setDestination(53675U);
    msg.setDestinationEntity(47U);
    msg.source.assign("PSDFRNWNKRLKAIMAEWQYRAFZDUGRQRZUHGCQRBNXIUYVTEHOZYVLCAOFDLBRJBDIGWPUSOFRJOPYZGZUMEFAKDOBZLTDTNQXQKEXYVPSKJWXWCKTVATYNCKTVHWHHBLVUHBFSZELEQJSOTPNXKGKIYCSGODVIORLMIISNWCTZXHXYENMQBPXGXQSTAFRWVGDMCLSWJZJAQEPLY");
    const char tmp_msg_0[] = {113, -109, 104, 108, 93, 26, -87, -1, -56, 105, 26, 55, 44, 15, -48, -72, 72, 95, -23, -87, 105, 38, 62, 10, 93, -17, -46, -40, 11, -41, -15, 104, -6, -32, 14, -12, -12, 82, -44, 50, 37, 5, 106, -89, 22, -115, 97, -13, 126, 50, 59, -49, -2, 114, 48, -43, -123, -88, -77, 114, 105, 86, 54, 10, 23, 2, -40, -78, 108, 33, -89, -73, -70, 12, -2, 65, -73, -86, 45, 53, -15, 17, -125, 42, -8, -25, -71, -58, 89, -92, 50, 13, 115, -77, 13, 77, -29, 44, -125, -57, -33, 64, 111, -104, 124, 100, 120, -73, 36, 32, 43, 42, 55, 54, -112, -114, -81, 17, -53, -62, 47, -119, 116, -46, -93, -60, 77, -92, 93, 74, -62, 107, 26, 26, 23, -38, -5, -121, 56, 107, 69, 7, 26, 79, 102, 93, -102, -95, 107, 113, -9, 86, -26, 78, -32, 15, -31, 30, 59, -101, -75, 43, -9, -111, -125, 117, -101, -32, 105, 52, -14, -38, 11, -112, 47, 78, -121, 98, -108, -51, -6, -107, -46, -16, 81, 42, 124, 90, -40, 86, -80, 71, 3, 32, -94};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.992281965518);
    msg.setSource(37167U);
    msg.setSourceEntity(112U);
    msg.setDestination(54359U);
    msg.setDestinationEntity(97U);
    msg.source.assign("OCJQZLTJSFRQXROXUSALCWJVPOKMGVHJMZHXGVBXNFLXZBMQENKTCRALBKPJSGTADEJZESDUJUFFISLFBKNSDFVMCWPKTOXZUQPFM");
    const char tmp_msg_0[] = {61, 74, -50, 14, 109, -40, -56, -22, -112, 35, 100, -58, -113, -51, 24, -41, -88, -93, 92, -32, -99, 0, -61, 102, -86, 12, 26, -77, -86, -60, -103, 96, -44, 54, 71, -49, -16, -114, -70, 12, 37, -79, -66, -73, 70, 80, -72, 51, 121, 67, 8, -96, 84, -121, 88, -107, 42, -94, -8, -117, -52, -43, 65, 93, -127, 0, -127, 70, -19, 104, 63, 25, 109, 40, -121, -127, 96, -104, -84, -47, -115, -82, 3, -2, -16, 102, 103, -74, 41, 73, -29, -103, -69, -58, -3, -39, -112, -60, 22, -24, -91, 89, 75, -99, 3, -70, -69, 28, 112, -77, 84, -111, 102, 119, -51, 58, 18, -47, -65, 15, 112, -83, -127, 103, -2, -110, 18, 55, 28, 51, -80, -38, 29, 81, 71, 18, 74, 75, 116, 57, 55, -30, -20, -63, -109, -60, -61, -99, 0, -88, 37, 17, 32, -71, -61, -51, 47, -112, 56, 120, -58, -61, -24, -8, 62, 98, -58, -88, 23, 119, -83, 90, 70, -36, 98, 65, -76, 54, -5, -96, -127, -90, 80, -9, -15, -98, -84, 102, 111, 20, -112, 82, 86, -46, 80, 24, -87, -19, -71, -37, 93, 83, 113, -40, 54, -80, -31, 101, -34, -11, -98, -82, -105, 17, -10, 1};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.858719084576);
    msg.setSource(61686U);
    msg.setSourceEntity(110U);
    msg.setDestination(15307U);
    msg.setDestinationEntity(169U);
    msg.seq = 3409381313U;
    msg.state = 104U;
    msg.error.assign("SQGCQJQOMDRKIXCRXDMHWIIRNAYPUROEVFBYSODIFAAQBIKFJWCOSNEYHHNLVTXZMVQEYNWOFVMRHVIPOENJZRDYTCGLMPGXXGCTTEJURBXCUHUYFYUGPPVOLNEXWULJHBFNZMPGFPCVWYZLJJIGWBBETAAQNAPDEASMOPTUBATIZMEFLKOXWBLQGZSKSZPFSJBXOITFHZKCLDUNSYDRVWSBCGN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.335054988588);
    msg.setSource(43250U);
    msg.setSourceEntity(87U);
    msg.setDestination(24143U);
    msg.setDestinationEntity(133U);
    msg.seq = 2689212277U;
    msg.state = 6U;
    msg.error.assign("QQOMOYIXCCVBLFBDVPACPYJOYTZVDRUTRMXUVDEOYSKWNBSAHGCRMBHNDUQALWNFPCPUEKVEVGWNXQRGACJYQHLRBKXFTWQDSOHILNLQJLBTOCLZJKRKLMOBBQXUSWUICNRJDDZMXHVKGRMYZTDEYFFFGIXRAWXJDWTEPPCVGHGJOOTIWMJPZFCBHQSSSEZXIZIUXJYRAAEKGIVHEOIEKUZWAFPMHQNH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.271048212645);
    msg.setSource(54756U);
    msg.setSourceEntity(84U);
    msg.setDestination(9143U);
    msg.setDestinationEntity(106U);
    msg.seq = 1161548133U;
    msg.state = 231U;
    msg.error.assign("PIUTEYFNWPJXOHAFCHZMKFWOPABOEWIZMFBRZBJEDRVARNVCVGSGJASWGVCBAUUMCXNRBQNSTCVNWEBIXPYXYZWXGJTQSFXVEDXZSKOZJVILGNRHDWEL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.648692397188);
    msg.setSource(21527U);
    msg.setSourceEntity(177U);
    msg.setDestination(56193U);
    msg.setDestinationEntity(38U);
    msg.origin.assign("ACZIQTDHQSTWESFVHQFPTZUFNUHJOQWBPMDMYXKSKDKMDNPXEVCG");
    msg.text.assign("LYYXBIINMMGXLBKJXDRCKFBEPTABGTTLACDOZDAPLTE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.782903852648);
    msg.setSource(55291U);
    msg.setSourceEntity(55U);
    msg.setDestination(13568U);
    msg.setDestinationEntity(67U);
    msg.origin.assign("TFZXUNKOQBGNXJDUXSSAGREAAJYHWJSQEVHCUSNZPEHFSUNDOPKWNDXUDJGVRHTLTBJOPRRNAPIWMACDWUJAQLJVVMSQCEYPFLGTOSUEMOFVOYJLQMQDTMDVZXRBUBRNIRYETETAIUTF");
    msg.text.assign("BPFGUPLSFIYWWTGYZOJZELDWSGSMZCFASRBTCCJPTAEJLCLFDBMOBORLWZIJGXQUUBQKNTMNAYSFXXLEAUAQPINBGOYOXTKYMJMIRUMEATLXTRNIUHVDROBPXBEKHEHNHZGCNPIVGJNTRMSRRKNXKXPQNVVFOTDLNKHCWQWFPKQOFHMGAKZDVJMICJHR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.407568424544);
    msg.setSource(22317U);
    msg.setSourceEntity(162U);
    msg.setDestination(15926U);
    msg.setDestinationEntity(176U);
    msg.origin.assign("BGZLPETJJOXGAXNEFCRBJRJDSQONILLYTXDMJWEMOGCNIOAEMTCOMWUKLNIIBZWZFSQRVNHEDIFSSQECNZHKZLIVCCAKIPFVJVWFHPRNSAZTDDQOLXMGTSLNMWXHVYIGYTZVPYUKYRUFDPCMYVAUCAMKHBAZBPWYHAPBFDYJPLUESITGXOTJVUORWTZRNEXEQKZRGSCHSKTDQXBEUHOQAWBMDKUAR");
    msg.text.assign("DZYROWVAWIXGMBPTZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.96633994922);
    msg.setSource(42190U);
    msg.setSourceEntity(9U);
    msg.setDestination(44563U);
    msg.setDestinationEntity(7U);
    msg.origin.assign("ARZNWGBZDFKCHVZVDGUGCASLATKMIHOUKTVZGYFMHUQGLEILBEJXPXWQLICRHOMXDKPJONUDVDQBCPHN");
    msg.htime = 0.279939059895;
    msg.lat = 0.188502465523;
    msg.lon = 0.57674345688;
    const char tmp_msg_0[] = {-25, -42, -7, -5, -2, 46, 85, -112, -72, -117, -91, 68, 90, -85, -3, -59, -95, 2, -108, 76, -36, -113, -56, 79, 80, 59, -107, -68, 33, -65, 80, 50, 73, -63, 116, -51, -70, -90, -57, -75, 15, 97, -54, -67, 53, -2, 117, 43, -58, -110, -14, 115, -34, -111, 78, 0, -107, -86, -9, 84, -66, 19, 46, 96, 33, -22, -15, -117, -120, -97, -54, -89, -15, -8, 37, -11, 48, 112, 29, -85, -60, -68, 52, 16, -4, 56, 111, -18, 1, -76, -96, -53, 51, -77, 120, 19, 91, 96, -93, 120, 67, 81, 72, -69, 0, 56, 111, -112, -27, 34, -127, -103, 52, -63, -29, -10, 25, 94, -124, 103, -68, 97, -33, 38, -112, 113, 70, -27, 21, 87, -31, -69, 86, 116, 88, 78, 107, 52, -69, 108, -82, 126, -49, -20, -52, 126, -115, -85, 122, 11, -60, -118, -44, 19, -124, -68, 72, -60, 105, 74, -54, -71, -46, 6, 95, -51, -84, 86, 54, -122, -40, -15, 32, 58, -61, -53, -67, -118, -127, -14, -22, -56, 11, -93, -105, -111, 5, 71, 74, -31, 6, -24, 107, 84, -43, -97, -15, -20, 89, -70, 29, 48, 19, 25, 31, -54, -93, -101, -14, 83, 50, 117, -88, 40, 2, 121, -97, 12, 28, -104, 121, -54, -76, -127, -69, 50, -89, -40};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.78867517688);
    msg.setSource(11329U);
    msg.setSourceEntity(120U);
    msg.setDestination(61212U);
    msg.setDestinationEntity(216U);
    msg.origin.assign("CLWKYHHADJIWOWCWCQATVTYHYZCFLRLSGXOGRJUCEEQVYKSEXPJDXZNXVRVNBDJYHVDAIZYPEPQHGPAJRNYXUKRGIWMMPUAUDLTKOXWPCDDBNSMIOAKLOHFSQJWOGTJXGEAUNBPBBMOKEVVXUJRVFBOVZPAFMTUTTVZZESRCACITGNUGRMKEMNAHNNFWQRKZQDLFKYDTTQEESBLMYXSYGWZSUGNCBI");
    msg.htime = 0.400222010316;
    msg.lat = 0.44682065483;
    msg.lon = 0.421588019481;
    const char tmp_msg_0[] = {-111, -92, 111, 33, -38, -27, -13, -104, 113, 39, 58, -103, -52, -103, 84, 22, 106, -118, 0, -116, 103, 48, 35, 119, -13, 111, -109, 92, 32, 102, 122, 93, 84, 97, 82, 23, -19, -22, -105, 70, -79, -53, 49, -56, -111, 99, -37, -22};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.817914811137);
    msg.setSource(31250U);
    msg.setSourceEntity(76U);
    msg.setDestination(62001U);
    msg.setDestinationEntity(204U);
    msg.origin.assign("GCBVTZWAJVEXPHYVIWHUADQEOFBTWFNDIYYALDSAJZTJHXSJKLDDLZBTGJXFQOUKRHPFMMHSIDCPRNJUKXCRJXUAUNDGQVYBEJYGAQCAAWBLPRZVXGEJDCVLIRVQIZMDYSNWNFHWLSMJUFAUPIWTICBZIBTNYQUCIVOFKRFQPNUXGPUMMCOKSFVRGYEWOBCZTMTRELTNKSGHPPBOSXHDSLHRMZOXKYKNCRSFLQZWMZGKE");
    msg.htime = 0.105470233378;
    msg.lat = 0.981341899987;
    msg.lon = 0.639639745318;
    const char tmp_msg_0[] = {-12, 71, -1, -85, 13, 39, -63, -118, 36, 31, -67, -31, 124, 102, 115, -61, -101, 39, -28, -16, -75, 67, 108, -66, -87, -7, -3, -42, -38, 100, 80, -72, 120, -36, -67, -80, 29, -106, 83, -90, 80, 31, 42, -84, 59, 72, 120, 126, 11, -111, 7, 121, 26, -55, -4, -92, -42, 25, -110, -63, 54, 25, -86, -62, -107, -91, -128, 121, 37, -55, 57, -61, -122, -115, 11, -110, 7, 63, 95, 110, 30, 111, 1, 70, -63, 59, 30, -80, 49, -26, 21, -70, 125, 94, 88, -22, -122, -90, -101, -13, -59, -81, 112, -114, 123, -36, -82, -24, 106, -126, 8, 38};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.690251049123);
    msg.setSource(31426U);
    msg.setSourceEntity(38U);
    msg.setDestination(20626U);
    msg.setDestinationEntity(166U);
    msg.req_id = 16940U;
    msg.ttl = 37474U;
    msg.destination.assign("YDWJAHEQJNQJMBICWOPBVHUUQQYADEGRJWDMZLMCMIQACKWZYYHXWNRNQXNCEJALPIPZUYQDNKSJEHSVYOADXSBDOSLSHEDEKRUKVSTBVIKTTGZCAMADOKYD");
    const char tmp_msg_0[] = {56, -30, -62, 51, -32, 32, -6, 35, -84, -96, 41, -126, -58, -45, -109, -86, -112, 82, -118, 45, 78, 87, -19, -18, -120, -85, -62, 23, -87, 101, -48, -86, -116, 15, -24, 6, -82, -88, -7, 24, -59, -115, 39, -87, -65, -78, 68, -50, -20, 4, 45, -4, 54, -51, -98, 47, 30, 100, 111, 40, 1, 0, -43, -109, 29, -121, 53, -70, -120, 95, 123, -124, 8, 106, -117, 77, -20, -32, -58, 42, -29, 48, 36, -52, 32, 54, 0, 56, 92, 72, -37, 11, 89, -3, -25, -76, 33, -122, 47, 90, -112, -51, 80, -78, 123, 1, -23, 97, 110, -18, -115, 70, 81, -22, -125, 83, -93, -66, 83, -123, -111, -89, 75, -69};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.981892829308);
    msg.setSource(53061U);
    msg.setSourceEntity(210U);
    msg.setDestination(2U);
    msg.setDestinationEntity(228U);
    msg.req_id = 18382U;
    msg.ttl = 55976U;
    msg.destination.assign("DSXILMIBWHSOGVIKTZJCLZKXCTJAAOXPLYJQZNKESKPDSJGNGGHDUWQEUFNTBGBIDFFOHUUTAZFVQBBEHVU");
    const char tmp_msg_0[] = {-64, -23, -91, -122, 25, 97, 82, -69, 70, -35, -119, 20, 93, 3, 77, -30, 108, 79, -39, -19, 18, -28, -48, 96, 77, -101, 29, -111, -19, -9, 99, 12, 27, -53, -122, -43, 114, 111, 48, 99, -64, 33, 90, 102, -101, -43, 2, 23, 98, 2, 114, 29, 18, 30, -54, -76, -111, -55, -93, -94, 54, -8, 36, -31, 18, 53, -52, 123, -16, 118, -21, -102, -16, 28, 70, 102, -127, -19, 65, -123, 69, -7, 55, -43, -87, 32, -66, 88, -21, 17, -29, -23, 77, 82, -89, 16, 117, 112, 17, 47, 126, 108, -73, 17, 111, 81, -18, 107, 33, -95, -101, 48, 55, -26, 96, -104, 47, -17, 65, 114, 16, -113, 94, 26, -37, -35, 49, -90, 87, -81, -96, -66, -46, 11, -14, -111, 56, -12, -33, 120, 53, -19, -103, 55, -99, -45, -101, 5, 14, -9, -53, 28, 43, -20, 94, 77, 21, 30, 51, 14};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.890081883756);
    msg.setSource(61398U);
    msg.setSourceEntity(241U);
    msg.setDestination(16143U);
    msg.setDestinationEntity(173U);
    msg.req_id = 26747U;
    msg.ttl = 58198U;
    msg.destination.assign("ZOQRGWVMTYPWZRISDULPNNBMKPUWJPMJEAQYCERRHADDCQXXUOUKIZAHBVVXTEBFLOQDVZWBRENCBRITADQVHYIRUXCTWYBKWJUCGN");
    const char tmp_msg_0[] = {-37, 52, -113, 44, -29, -34, -23, -109, -21, 107, -49, -28, -38, -26, -58, 126, -47, 75, 53, 104, 82, 73, 7, 27, -106, -4, -49, 120, 24, 52, 24, -22, -53, -30, -40, 51, -84, 124, -98, 123, -117, -63, 101, -83, -111, -121, -112, -53, 98, 54, 25, -69, 15, 51, -111, 113, 45, 101, 115, 0, 20, -55, 124, 91, -11, -112, -38, 61, -93, -1, 59, -89, 113, -67, 34, 88, -82, -124, -65, 63, 42, 95, -3, -38, 57, -28, -93, 39, 48, -79, -6, -124, 34, -92, 71, 19, 92, 37, -60, -85, -60, -3, -97, 40, 111, 13, -15, 106, -80, -10, 126, 34, 25, -101, 14, 71, -54, 105, 89, 39, 54, 4, 14, -110, 118, 57, 38, -84, -68, 19, -4, 87, 87, 120, -24, -89, 82, -11, 57, 6, -91, -60, -84, -84, 100, -11, -86, -117, -79, 32, -117, -94, -80, 80, 58, 123, -28, -98, 20, -10, -25, 95, -12, -4, 65, 39, 91, 1, 97, -13, -123, -113, 7, 91, 97, 19, 123, 65, -53, 123};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.157732912721);
    msg.setSource(26977U);
    msg.setSourceEntity(73U);
    msg.setDestination(59717U);
    msg.setDestinationEntity(75U);
    msg.req_id = 30458U;
    msg.status = 39U;
    msg.text.assign("WRBKWOADGCANUDHNKGXZSEHFVLVEHPICUNYCZDNKAJWFYBIMMXMMSLHECOINRYONVELXARIRW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.584773550056);
    msg.setSource(41195U);
    msg.setSourceEntity(65U);
    msg.setDestination(7818U);
    msg.setDestinationEntity(119U);
    msg.req_id = 55747U;
    msg.status = 87U;
    msg.text.assign("ERKSXNXWIGXRBLFEIWIZPSCDMQJZUWXUSOCZWVLLYOBLKSNAPTJUNLVRWHWQQR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.224348073452);
    msg.setSource(5304U);
    msg.setSourceEntity(152U);
    msg.setDestination(31541U);
    msg.setDestinationEntity(10U);
    msg.req_id = 7833U;
    msg.status = 149U;
    msg.text.assign("YWBTYOUIDFUKEJODMMACLYIGXBERRJPAAMGUTZXFAOUAQBLBVFZVJOHYDNMAWHHLIKCPNKVWAQTHDDRNIUNARTZQBXJZPCCQMWOCXUCEJIMENVEHFZOYZHRAGOFCSTVIZQKU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.726434350889);
    msg.setSource(17997U);
    msg.setSourceEntity(61U);
    msg.setDestination(41693U);
    msg.setDestinationEntity(44U);
    msg.group_name.assign("SDIOOHTKVHGJQGPKHLYQNFUXFQNGXPNBFWGHWIERCJJKLECGRLGOMYJJJNMN");
    msg.links = 399581094U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.161237876271);
    msg.setSource(55584U);
    msg.setSourceEntity(230U);
    msg.setDestination(5081U);
    msg.setDestinationEntity(193U);
    msg.group_name.assign("TQVCPTQSBKUXUOXUXSDPOYRWPKJPAVDZEYQUPKLLITQWFZZMWXZBXHGKWFLHQWZUXQFTIWHDOTRVIVOGYIRNELRCGYZXXATFNZDDKBSNMKSUFSLIKFJHEPUEEMGJDTGJRIMJLLEIHBHIUTJOONMMQMCROQHJCYYKJPQBNBFMGEASYCLMVCTABKXV");
    msg.links = 168493864U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.938307302768);
    msg.setSource(29102U);
    msg.setSourceEntity(197U);
    msg.setDestination(44590U);
    msg.setDestinationEntity(136U);
    msg.group_name.assign("XEKIZDBBZN");
    msg.links = 640736377U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.842914319685);
    msg.setSource(19176U);
    msg.setSourceEntity(53U);
    msg.setDestination(39821U);
    msg.setDestinationEntity(187U);
    msg.groupname.assign("VZMHDLFCCUAVNRAEWWMIPUOPZQSXJRDVUIYOALUTODFESVQIWPKQKLVYEXNBADFETLLYSGBNXZGLAJVO");
    msg.action = 189U;
    msg.grouplist.assign("VYRSHGMKSZNWJBQSXSPYYKLAAHROLBMARABUXZWHHTAIJCBZVCCKJQDNPBSRYLHQNSPJZWPGZWWTXGHYUBGCAXDCCEKXSDFFBYWPGTBRQTDAEKVNPYLMVHQILMCVOLEKOJMFBGCNZIIJKNVIMPVWIFKMURRRLDTUTJGNNHXZTEDO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.365322457398);
    msg.setSource(49973U);
    msg.setSourceEntity(183U);
    msg.setDestination(59005U);
    msg.setDestinationEntity(80U);
    msg.groupname.assign("YHVUSZQCNRUDUHXHLEXERJZJWYDIINHYFZHZIBXRFYKMNDXKDUBCEAJSOMVRGBQNGIWNFLTVNKPYOTXJBCZVGYZXCQXBHACSAFFMEPLHPSQIVZGRGBAUGWJJCXLEMBSBFDWTUOSPWGIYFHTFLGWSDINLFKLPXALEJSERYOOJBJPOUOCGLZVQDHAPAMCKPTMMLUQDRUQMCDWTBZRPWITHKFQVYTEQOVCSEEVDJQKZPNXKRUVAIRTOIAYMKNMO");
    msg.action = 244U;
    msg.grouplist.assign("JUIJRIOJAFBRJQEPXNFELKUVWWTDJUYAOGBUNKNZJHGQUAUHMPTGQZYAIVLQRPKDBDKDNOFDAELGFAKFRESMHSPIVWCQLQCPLLQXCXRWWLIHXNWOTZDUYQMVYDIVYZZWOHJCTKPUIACCIZSBGGQGJXNA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.592627874619);
    msg.setSource(8052U);
    msg.setSourceEntity(205U);
    msg.setDestination(36675U);
    msg.setDestinationEntity(124U);
    msg.groupname.assign("RUKLWXEJONSMCBKIKVRAUFSFZWXPCBXGOIXMKYYPGFRDAA");
    msg.action = 241U;
    msg.grouplist.assign("SVTMLLIXNHCIUDAUPEBAZNBXTMOOONCSURBXRZINYSHUHWCIAGFLYQBDYRSDUASADMFUPYPPQJGTB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.574235519262);
    msg.setSource(30562U);
    msg.setSourceEntity(163U);
    msg.setDestination(5892U);
    msg.setDestinationEntity(41U);
    msg.value = 0.359884793852;
    msg.sys_src = 8333U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.0308903457858);
    msg.setSource(15363U);
    msg.setSourceEntity(44U);
    msg.setDestination(31860U);
    msg.setDestinationEntity(186U);
    msg.value = 0.2983092763;
    msg.sys_src = 13142U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.139654911586);
    msg.setSource(9886U);
    msg.setSourceEntity(144U);
    msg.setDestination(52199U);
    msg.setDestinationEntity(40U);
    msg.value = 0.572958888945;
    msg.sys_src = 40978U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.43069696054);
    msg.setSource(58793U);
    msg.setSourceEntity(134U);
    msg.setDestination(39364U);
    msg.setDestinationEntity(29U);
    msg.value = 0.760084805145;
    msg.units = 107U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.177675292932);
    msg.setSource(33109U);
    msg.setSourceEntity(31U);
    msg.setDestination(37119U);
    msg.setDestinationEntity(164U);
    msg.value = 0.521676207314;
    msg.units = 210U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.732683984819);
    msg.setSource(12791U);
    msg.setSourceEntity(160U);
    msg.setDestination(38504U);
    msg.setDestinationEntity(181U);
    msg.value = 0.2851301915;
    msg.units = 70U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.601626635331);
    msg.setSource(10504U);
    msg.setSourceEntity(43U);
    msg.setDestination(32296U);
    msg.setDestinationEntity(180U);
    msg.base_lat = 0.776582147694;
    msg.base_lon = 0.490528269818;
    msg.base_time = 0.127614486118;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.819232209028);
    msg.setSource(18614U);
    msg.setSourceEntity(148U);
    msg.setDestination(20790U);
    msg.setDestinationEntity(40U);
    msg.base_lat = 0.954230754361;
    msg.base_lon = 0.186923816148;
    msg.base_time = 0.867061721348;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.352536225245);
    msg.setSource(3379U);
    msg.setSourceEntity(215U);
    msg.setDestination(27749U);
    msg.setDestinationEntity(243U);
    msg.base_lat = 0.725629976974;
    msg.base_lon = 0.572147759377;
    msg.base_time = 0.0744487377217;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.797021344129);
    msg.setSource(46859U);
    msg.setSourceEntity(211U);
    msg.setDestination(14159U);
    msg.setDestinationEntity(242U);
    msg.base_lat = 0.811989756936;
    msg.base_lon = 0.198979969969;
    msg.base_time = 0.317442047144;
    const char tmp_msg_0[] = {60, -18, -87, 123, 44, 46, -117, -123, -23, -119, 29, 57, -31, 108, -50, -53, -127, 48, -56, 72, 22, -89, 69, -124, 93, -106, 84, -63, -17, -20, -34, 10, 54, -10, -3, -107, 78, 70, 106, -51, -118, -45, 4, -58, -75, -38, -71, 37, -25, -25, 31, 41, 37, -57, -79, -105, -10, 69, 120, -24, 40, -40, 92, -89, -45, -63, -85, 52, -79, -92, 49, -33, -64, -110, -98, -8, 45, 64, 61, 44, 98, -5, 39, 79, -53, -79, -37, -39, 102, -13, 118, 69, 110, -107, 84, 86, 32, -20, 105, 12, 7, -49, -21, -54, 113, -55, -88, 81, 32, -93, -121, -21, 79, 5, -28, 34, 90, -2, -124, 43, 90, -30, 121, -127, -127, 126, -25, -77, -22, -112, -126, 91, -121, -128, -48, 73, -72, -100, -113, -27, 88, 116, 11, 117, 60, -76, 108, 124, -48, -7, -15, -67, 31, 84, 45, 2, 87, -2, 117, 116, 83, -109, 31, 7, -39, -12, 27, 114, 126, 70, -35, 36, 5, -88, -24, -83, -20, 0, -3, 114, 45, 67, -53, -79, -10, 16, -83, -35, 26, 0, 36, -14, -77, 61, 99, -120, -95, 53, 117, 89, -78, -122, 30, 100, -68, 49, -23, -26, -13, -111, -37, 45, 9, 32, 105, -121, -89, -1, -120, -81, -74, 23, 112, 57};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.98046609284);
    msg.setSource(29411U);
    msg.setSourceEntity(55U);
    msg.setDestination(29970U);
    msg.setDestinationEntity(45U);
    msg.base_lat = 0.521321986855;
    msg.base_lon = 0.811028559086;
    msg.base_time = 0.82504229318;
    const char tmp_msg_0[] = {-19, -113, 64, -72, 18, 115, -44, -70, 63, -35, -10, 28, -10, 57, -3, -53, -75, -121, 16, -56, -38, 56, 120, -67, -48, 119, 46, -8, 1, 3, 40, -121, 16, 10, -104, -19, -4, 87, -79, 108, 48, 74, -89, -58, -89, 110, 95, -18, 12, 65, 106, 94, 31, -99, 6, -24, -107, 34, -13, -105, 123, 80, -91, 125, -15, -117, 60, 32, 71, 40, -38, 22, -29, 70, -43, 55, 49, -122, 105, 40, 19, -123, 90, 118, -69, -43, -52, -128, -27, 50, -101, 110, -38, 49, -119, 8, 120, 36, -65, 39, 9, 69, 100, 121, 64, -59, -40, -35, 33, -17, 24, -114, -115, 15, 35, 83, -115, -125, 86, -49, -51, 88, -57, 63, -61, -91, -91, 39, 102, 73, -53, -118, -105, -80, 126, -59, 3, 106, 69, -19, 42, 123, -10, -31, 111, -88};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.241058841417);
    msg.setSource(24152U);
    msg.setSourceEntity(119U);
    msg.setDestination(63300U);
    msg.setDestinationEntity(248U);
    msg.base_lat = 0.746520569432;
    msg.base_lon = 0.986069126659;
    msg.base_time = 0.528468165905;
    const char tmp_msg_0[] = {44, 62, 122, 19, -102, -123, 4, 96, 112, 124, 27, -94, 116, 80, -81, -42, -113, -46, -65, -87, -1, 117, -25, -85, -57, 51, 115, 39, -110, 72, -77, -84, 69, -46, -73, -123, 63, 98, -40, -118, -29, 82, 120, -63, -60, 85, 110, 101, 76, -7, 11, 122, 30, -122, -128, -113, -52, -117, -126, -49, -20, -76, -76, 87, 89, -125, 125, 79, 5, 80, 79, -38, -80, -1, 57, -106, -94, -98, 13, 112, 125, -42, -51, -76, 69, 9, 50, -72, 31, -27, -45, -51, 11, -67, -48, 42, 58, 55, -24, -122, 59, -7, 114, 55, 8, -45, -120};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.321016196984);
    msg.setSource(21080U);
    msg.setSourceEntity(142U);
    msg.setDestination(6387U);
    msg.setDestinationEntity(246U);
    msg.sys_id = 38957U;
    msg.priority = 105;
    msg.x = -22746;
    msg.y = 20131;
    msg.z = -14687;
    msg.t = -24890;
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.879912353974;
    tmp_msg_0.lat = 0.222481147647;
    tmp_msg_0.lon = 0.241487253249;
    tmp_msg_0.z = 0.0570491993479;
    tmp_msg_0.z_units = 169U;
    tmp_msg_0.travel_z = 0.414246229687;
    tmp_msg_0.travel_z_units = 33U;
    tmp_msg_0.delayed = 175U;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.415620618204);
    msg.setSource(42895U);
    msg.setSourceEntity(217U);
    msg.setDestination(26460U);
    msg.setDestinationEntity(24U);
    msg.sys_id = 2827U;
    msg.priority = 16;
    msg.x = 27350;
    msg.y = -11381;
    msg.z = -7360;
    msg.t = 18276;
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.393461053699;
    tmp_msg_0.lon = 0.0679894570958;
    tmp_msg_0.z = 0.47486936772;
    tmp_msg_0.z_units = 15U;
    tmp_msg_0.speed = 0.642325726586;
    tmp_msg_0.speed_units = 147U;
    tmp_msg_0.abort_z = 0.411468915893;
    tmp_msg_0.bearing = 0.690120796516;
    tmp_msg_0.glide_slope = 59U;
    tmp_msg_0.glide_slope_alt = 0.854042182135;
    tmp_msg_0.custom.assign("AEQHORNNEXOFOAMBVHLO");
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.738763297687);
    msg.setSource(11135U);
    msg.setSourceEntity(24U);
    msg.setDestination(19558U);
    msg.setDestinationEntity(104U);
    msg.sys_id = 19928U;
    msg.priority = 106;
    msg.x = 19006;
    msg.y = -24672;
    msg.z = -14172;
    msg.t = -26469;
    IMC::DevDataBinary tmp_msg_0;
    const char tmp_tmp_msg_0_0[] = {119, -73, -83, -104, 84, -99, -71, -18, 46, 88, -85, 121, 67, 89, 27, 7, -94};
    tmp_msg_0.value.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.132562689183);
    msg.setSource(36547U);
    msg.setSourceEntity(131U);
    msg.setDestination(30953U);
    msg.setDestinationEntity(157U);
    msg.req_id = 25757U;
    msg.type = 74U;
    msg.max_size = 10162U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.45440904198;
    tmp_msg_0.base_lon = 0.156218144343;
    tmp_msg_0.base_time = 0.699499443053;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.444498187182);
    msg.setSource(5161U);
    msg.setSourceEntity(128U);
    msg.setDestination(50553U);
    msg.setDestinationEntity(140U);
    msg.req_id = 14713U;
    msg.type = 4U;
    msg.max_size = 22395U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.958075755384;
    tmp_msg_0.base_lon = 0.389509873621;
    tmp_msg_0.base_time = 0.519467613887;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.3952665708);
    msg.setSource(35282U);
    msg.setSourceEntity(61U);
    msg.setDestination(6676U);
    msg.setDestinationEntity(188U);
    msg.req_id = 40290U;
    msg.type = 48U;
    msg.max_size = 41935U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.730093365172;
    tmp_msg_0.base_lon = 0.708403685644;
    tmp_msg_0.base_time = 0.758143948608;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 64408U;
    tmp_tmp_msg_0_0.destination = 11486U;
    tmp_tmp_msg_0_0.timeout = 0.49842319947;
    IMC::EstimatedStreamVelocity tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.945828196691;
    tmp_tmp_tmp_msg_0_0_0.y = 0.141418108589;
    tmp_tmp_tmp_msg_0_0_0.z = 0.662234214678;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.820278750995);
    msg.setSource(7622U);
    msg.setSourceEntity(241U);
    msg.setDestination(38365U);
    msg.setDestinationEntity(179U);
    msg.original_source = 56970U;
    msg.destination = 15995U;
    msg.timeout = 0.346516855003;
    IMC::MagneticField tmp_msg_0;
    tmp_msg_0.time = 0.548354190288;
    tmp_msg_0.x = 0.269110520463;
    tmp_msg_0.y = 0.178776012418;
    tmp_msg_0.z = 0.408129375018;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.0628462418046);
    msg.setSource(13207U);
    msg.setSourceEntity(213U);
    msg.setDestination(61202U);
    msg.setDestinationEntity(199U);
    msg.original_source = 2105U;
    msg.destination = 19147U;
    msg.timeout = 0.551811157331;
    IMC::ReportControl tmp_msg_0;
    tmp_msg_0.op = 174U;
    tmp_msg_0.comm_interface = 13U;
    tmp_msg_0.period = 44483U;
    tmp_msg_0.sys_dst.assign("SCBJYNVUCDGLGHXUFFZIBDDIFUXIGQAANGOPNFAKPTQVTNOQKBCPOETZBKQXFJEIPQFTRAHOGPHBSHNJDNXRSJAJTWXGEYAXESSVGLZLFLKTOTQCXHLRMERZKNDCTMWYEAZOONYLMKUFKUQCMACJYIPLWIAWLVKSSYGFIVMIMCZUKVMEHZZHEIOBZAXRQWUSLJBOPP");
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.0971103719759);
    msg.setSource(46093U);
    msg.setSourceEntity(153U);
    msg.setDestination(33931U);
    msg.setDestinationEntity(121U);
    msg.original_source = 3545U;
    msg.destination = 34403U;
    msg.timeout = 0.678890456378;
    IMC::Throttle tmp_msg_0;
    tmp_msg_0.value = 0.041603731281;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.223670030794);
    msg.setSource(60965U);
    msg.setSourceEntity(147U);
    msg.setDestination(2204U);
    msg.setDestinationEntity(87U);
    msg.id = 157U;
    msg.range = 0.326155581431;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.312675836537);
    msg.setSource(63690U);
    msg.setSourceEntity(199U);
    msg.setDestination(38021U);
    msg.setDestinationEntity(243U);
    msg.id = 95U;
    msg.range = 0.279052132012;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.536119069495);
    msg.setSource(33864U);
    msg.setSourceEntity(226U);
    msg.setDestination(36802U);
    msg.setDestinationEntity(52U);
    msg.id = 13U;
    msg.range = 0.494729216523;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.532463161392);
    msg.setSource(1808U);
    msg.setSourceEntity(2U);
    msg.setDestination(40643U);
    msg.setDestinationEntity(50U);
    msg.beacon.assign("FQNFNLDTSPKOQRNEBEAJRGHSUBKJANPPTIKHBXQKSWSHDWXXEWTXCWOJKBLUMNLTKDMCYRMNYGVBHYJGHSXRICJSBAMVFGDZFUALQEREOXDPLOGHWACGXROEKQDVDJOVWYUVMUTSEVCVTSCYJLLNVWFQEEGNFSMXZHZVLUBZZYIWZRATAHPJUXHOCFPKCPUBOKHIIPTDIFVEIQBJSMOABWUZCLOGYMPLQNWMDFIDXYZPJZQC");
    msg.lat = 0.365933122796;
    msg.lon = 0.96478679365;
    msg.depth = 0.848482859667;
    msg.query_channel = 98U;
    msg.reply_channel = 143U;
    msg.transponder_delay = 15U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.595086702837);
    msg.setSource(26427U);
    msg.setSourceEntity(194U);
    msg.setDestination(19661U);
    msg.setDestinationEntity(129U);
    msg.beacon.assign("VAFMPAVUXVGNGPOZGXUYADVQKPESBDTOQTBKQSGRSJKYALUVBUVCWQXRCSFTVDMEJEWOIUUCMRYNTHPADULIFZDFZQZNWKVSXKDHDBIIKGHJFYNPLHBRYJTIMNJHTWVELNYCAOALIWONPTBUGDERYRJEEHYWXFBGMXHOMKXDMMXBWLYIPJZMQQZQFHLRLSII");
    msg.lat = 0.682144694074;
    msg.lon = 0.714036992066;
    msg.depth = 0.936022869224;
    msg.query_channel = 160U;
    msg.reply_channel = 12U;
    msg.transponder_delay = 61U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.583921411842);
    msg.setSource(51084U);
    msg.setSourceEntity(136U);
    msg.setDestination(16412U);
    msg.setDestinationEntity(177U);
    msg.beacon.assign("ZKDMHSXWLEPSDDJXXODSGHFSFKUMIQYOQWVKIVYFWWRADXANSKPAJOOYDRHLLLZTYBDGTURRZYFJQDGIOIKHWIYLQBIJCSPPWMZACAVTZUGXXAQQOWTEPMPHLNTQZCUYPCVLHIXWDYRWBFTFQBSKQGVEYLZFJMBRITQORNVHBCGTCKVRENNCEBKMTIUNPPJIJEJUVFHFKXPGMAFUSEYACCU");
    msg.lat = 0.359408191715;
    msg.lon = 0.76128527586;
    msg.depth = 0.657731459233;
    msg.query_channel = 239U;
    msg.reply_channel = 125U;
    msg.transponder_delay = 80U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.65315005271);
    msg.setSource(19733U);
    msg.setSourceEntity(65U);
    msg.setDestination(59868U);
    msg.setDestinationEntity(97U);
    msg.op = 7U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RXVPVWHRBWKMDVWXQXXREJTWOFZJXSYXDSZWTFLBHEJQITAKIXWBNCGVXQBJUGUEYERLCFVHCESDVZTUDMIZLKGPMPKLBSXMWHANAIYVYCDWNOORJHZMRBQLYASQMJPAHICDYZBNIAQESDGML");
    tmp_msg_0.lat = 0.545599830239;
    tmp_msg_0.lon = 0.116492658121;
    tmp_msg_0.depth = 0.605647364043;
    tmp_msg_0.query_channel = 151U;
    tmp_msg_0.reply_channel = 102U;
    tmp_msg_0.transponder_delay = 39U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.795632297615);
    msg.setSource(45576U);
    msg.setSourceEntity(63U);
    msg.setDestination(51280U);
    msg.setDestinationEntity(110U);
    msg.op = 56U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GQMXZLJBAEBJTVERATQTTFWKBOEWKPXYYEEKRIAMI");
    tmp_msg_0.lat = 0.553999244807;
    tmp_msg_0.lon = 0.368032067016;
    tmp_msg_0.depth = 0.709311916247;
    tmp_msg_0.query_channel = 155U;
    tmp_msg_0.reply_channel = 248U;
    tmp_msg_0.transponder_delay = 91U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.49523022634);
    msg.setSource(34272U);
    msg.setSourceEntity(153U);
    msg.setDestination(23115U);
    msg.setDestinationEntity(109U);
    msg.op = 77U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.280845524671);
    msg.setSource(24111U);
    msg.setSourceEntity(169U);
    msg.setDestination(2573U);
    msg.setDestinationEntity(132U);
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("MSVBRAHXWSTPTXSUGAZLWGVZZYRJMSAPHDWEDQILULTSVZUKBWFQLFNYBRGXXAIOBJHJNRKZQZPFVPDNBQKMOYAOERACWESREINVJQYPNDMCWMWIQKDPBKXJHFGCWETWXRADRBVVNZRZOGXKOWCZSLEHBJJMNODPQDOISJENKKGGUIVOXTTYGFSGIGV");
    tmp_msg_0.service_type = 189U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.848219298189);
    msg.setSource(11668U);
    msg.setSourceEntity(47U);
    msg.setDestination(2313U);
    msg.setDestinationEntity(147U);
    IMC::DepthOffset tmp_msg_0;
    tmp_msg_0.value = 0.698474817605;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.86980642738);
    msg.setSource(54756U);
    msg.setSourceEntity(253U);
    msg.setDestination(15112U);
    msg.setDestinationEntity(122U);
    IMC::FormationEvaluation tmp_msg_0;
    tmp_msg_0.type = 185U;
    tmp_msg_0.op = 104U;
    tmp_msg_0.err_mean = 0.108621534973;
    tmp_msg_0.dist_min_abs = 0.630172790903;
    tmp_msg_0.dist_min_mean = 0.0425900976077;
    tmp_msg_0.roll_rate_mean = 0.673919782927;
    tmp_msg_0.time = 0.194925189035;
    IMC::FormationControlParams tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 205U;
    tmp_tmp_msg_0_0.lon_gain = 0.483754726012;
    tmp_tmp_msg_0_0.lat_gain = 0.732586676582;
    tmp_tmp_msg_0_0.bond_thick = 0.415920175719;
    tmp_tmp_msg_0_0.lead_gain = 0.600275890263;
    tmp_tmp_msg_0_0.deconfl_gain = 0.0933915730596;
    tmp_tmp_msg_0_0.accel_switch_gain = 0.412182938323;
    tmp_tmp_msg_0_0.safe_dist = 0.832003392878;
    tmp_tmp_msg_0_0.deconflict_offset = 0.996773817718;
    tmp_tmp_msg_0_0.accel_safe_margin = 0.330299284709;
    tmp_tmp_msg_0_0.accel_lim_x = 0.58236607748;
    tmp_msg_0.controlparams.set(tmp_tmp_msg_0_0);
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.0748340954517);
    msg.setSource(14241U);
    msg.setSourceEntity(185U);
    msg.setDestination(61717U);
    msg.setDestinationEntity(35U);
    msg.op = 112U;
    msg.system.assign("PZRCZHSBIRJZWCZZXVLNUNRPKEINSKHPPDJHIYMDXUMGBTFFKKROAJAFZIWVZ");
    msg.range = 0.378045687384;
    IMC::LinkLevel tmp_msg_0;
    tmp_msg_0.value = 0.161942302677;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.330459357924);
    msg.setSource(5605U);
    msg.setSourceEntity(106U);
    msg.setDestination(63098U);
    msg.setDestinationEntity(179U);
    msg.op = 66U;
    msg.system.assign("ZLWGABCJZLUQCCEPSJSMOVQNWOQPOYSBOEXDDTGEXCPNIEMQNWWAWOSAQMFEEVUMSVLCMXVJFKHUHPRLZYUBLTTNPKXGXILHPJWMGHIUPCIRVXUCZFLTJYYGRCHZOJBPFKDZTBNNVKKDAWSHROHBKZXVYNFYWGTDQMANSRUEKZJFZKAGGXQIBAAIGMTVDQXJIXQDIRUSFTM");
    msg.range = 0.602513447149;
    IMC::FormationState tmp_msg_0;
    tmp_msg_0.type = 170U;
    tmp_msg_0.op = 92U;
    tmp_msg_0.possimerr = 0.175796775797;
    tmp_msg_0.converg = 0.195837541027;
    tmp_msg_0.turbulence = 0.681724591174;
    tmp_msg_0.possimmon = 211U;
    tmp_msg_0.commmon = 58U;
    tmp_msg_0.convergmon = 124U;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.195399565254);
    msg.setSource(31173U);
    msg.setSourceEntity(63U);
    msg.setDestination(61430U);
    msg.setDestinationEntity(148U);
    msg.op = 110U;
    msg.system.assign("BIYJKODHZRZAPWWONFJVNKQMUJWVVSES");
    msg.range = 0.994446303173;
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 2643495736U;
    tmp_msg_0.destination.assign("GHFESZKBBPWNJOYYOJVCHPSGYDKQOICQZLHFTPUVFUCABWFOVCRHYSALRJATZBGOGUNXHESWYOFJKVGWMYIKLNUQULMOUAANECCLS");
    tmp_msg_0.timeout = 7409U;
    const char tmp_tmp_msg_0_0[] = {-120, 65, 23, 3, 5, -65, 103, -4, 108, 5, -125, -93, -24, 67, 72, 79, 8, 77, -6, 126, 42, -74, -122, -100, -65, -45, 21, 94, -71, -4, 65, -41, 75, -93, 43, 42, 8, 116, -101, -68, -31, -62, -3, 22, -50, 120, -38, 72, 49, -100, -17, -122, -124, 15, 18, -26, 116, -82, 124, -43, -33, -116, -71, 100, -88, -42, 30, 80};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.54095624838);
    msg.setSource(36735U);
    msg.setSourceEntity(73U);
    msg.setDestination(13249U);
    msg.setDestinationEntity(142U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.587107051135);
    msg.setSource(40580U);
    msg.setSourceEntity(155U);
    msg.setDestination(28931U);
    msg.setDestinationEntity(153U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.325138447836);
    msg.setSource(17150U);
    msg.setSourceEntity(114U);
    msg.setDestination(29683U);
    msg.setDestinationEntity(139U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.510684486245);
    msg.setSource(53612U);
    msg.setSourceEntity(169U);
    msg.setDestination(20163U);
    msg.setDestinationEntity(25U);
    msg.list.assign("NURVMFJVRUUFAZVLGTACESWNBBDXUPATMOXPBZSJIKFTTCKOSBFBAHW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.579183156431);
    msg.setSource(43197U);
    msg.setSourceEntity(180U);
    msg.setDestination(888U);
    msg.setDestinationEntity(33U);
    msg.list.assign("NZPBQPWCDXMKSVVSZERYBQUGNQJTMLYDUIYYRRQEDUW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.946467788891);
    msg.setSource(26307U);
    msg.setSourceEntity(82U);
    msg.setDestination(22893U);
    msg.setDestinationEntity(17U);
    msg.list.assign("GNDAWTRRBLFZLENOJFOMFWFMCRVUWBCCBKBKXMQZIHMSOZLPPSNXIHCLUORFRALXDMIIWWYXFTMUHSGHMATZCQYGEGXNZTEPJCYMKVJJPSGYTQQRANXVJYZVRWDPJENZAMXXDUJS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.90691134613);
    msg.setSource(16447U);
    msg.setSourceEntity(86U);
    msg.setDestination(26198U);
    msg.setDestinationEntity(98U);
    msg.peer.assign("VISCHRZFBFXCPJADZFUZINEHNIQUYAXKBMGSXJCSGOEEWWBLPMDSRNFIRQQCOZDYBISLXANGHWAFQEZPPSTMFWGEUGTJTKPBBNIBKTPUVOBVALOWHSQBNTOECLMOPHXROGOZMSXEFOIIKZVYNKDNQPWWARWIAQURPLJTFYW");
    msg.rssi = 0.788123715802;
    msg.integrity = 2349U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.837859566781);
    msg.setSource(14699U);
    msg.setSourceEntity(152U);
    msg.setDestination(8364U);
    msg.setDestinationEntity(60U);
    msg.peer.assign("XAJRKQEHHRTOSVFMTLTCJLBUQZAYNEVYNNOSUOLKGDHWWAOPJMZAFJNWHCRXJGCFKPQXXVGQSQRZPMZIUAYRBCGBVKJUMVUJFHDBZHWMGANMDMEBNTTDLWYWMEL");
    msg.rssi = 0.0770411242874;
    msg.integrity = 62498U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.826984592347);
    msg.setSource(52604U);
    msg.setSourceEntity(81U);
    msg.setDestination(36492U);
    msg.setDestinationEntity(23U);
    msg.peer.assign("DGAATQZRWRUIWKPAJXFSLWGTXQCFCEHFUQRRFHIEUXWHPDMSXAIJAKSQLDHNSMBOLNZWHBCYMSMROONPTAEVIGK");
    msg.rssi = 0.918912532371;
    msg.integrity = 64908U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.872974852914);
    msg.setSource(4086U);
    msg.setSourceEntity(99U);
    msg.setDestination(32608U);
    msg.setDestinationEntity(110U);
    msg.value = 13119;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.556016478692);
    msg.setSource(44635U);
    msg.setSourceEntity(81U);
    msg.setDestination(2629U);
    msg.setDestinationEntity(207U);
    msg.value = 13318;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.916334498071);
    msg.setSource(25239U);
    msg.setSourceEntity(158U);
    msg.setDestination(19752U);
    msg.setDestinationEntity(42U);
    msg.value = -23377;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.271221704496);
    msg.setSource(46044U);
    msg.setSourceEntity(116U);
    msg.setDestination(11512U);
    msg.setDestinationEntity(190U);
    msg.value = 0.543951816346;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.609474464735);
    msg.setSource(58977U);
    msg.setSourceEntity(5U);
    msg.setDestination(35790U);
    msg.setDestinationEntity(212U);
    msg.value = 0.989330112832;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.26185086704);
    msg.setSource(50942U);
    msg.setSourceEntity(176U);
    msg.setDestination(6587U);
    msg.setDestinationEntity(217U);
    msg.value = 0.800011339895;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.269386918473);
    msg.setSource(38846U);
    msg.setSourceEntity(57U);
    msg.setDestination(52262U);
    msg.setDestinationEntity(146U);
    msg.value = 0.189026800686;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.190558485007);
    msg.setSource(10824U);
    msg.setSourceEntity(11U);
    msg.setDestination(25977U);
    msg.setDestinationEntity(213U);
    msg.value = 0.40183653065;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.28254085893);
    msg.setSource(58811U);
    msg.setSourceEntity(164U);
    msg.setDestination(11753U);
    msg.setDestinationEntity(215U);
    msg.value = 0.0784567641138;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.0797966272907);
    msg.setSource(10782U);
    msg.setSourceEntity(196U);
    msg.setDestination(15344U);
    msg.setDestinationEntity(133U);
    msg.validity = 30909U;
    msg.type = 92U;
    msg.utc_year = 13935U;
    msg.utc_month = 219U;
    msg.utc_day = 122U;
    msg.utc_time = 0.458899980464;
    msg.lat = 0.00411576520953;
    msg.lon = 0.6706200097;
    msg.height = 0.678500337682;
    msg.satellites = 32U;
    msg.cog = 0.22718192983;
    msg.sog = 0.490608692505;
    msg.hdop = 0.57544341315;
    msg.vdop = 0.0700682910584;
    msg.hacc = 0.610987502769;
    msg.vacc = 0.445897217946;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.39822111693);
    msg.setSource(56055U);
    msg.setSourceEntity(2U);
    msg.setDestination(5216U);
    msg.setDestinationEntity(83U);
    msg.validity = 18988U;
    msg.type = 160U;
    msg.utc_year = 24950U;
    msg.utc_month = 206U;
    msg.utc_day = 34U;
    msg.utc_time = 0.692548774704;
    msg.lat = 0.288817317202;
    msg.lon = 0.794477259172;
    msg.height = 0.599067495085;
    msg.satellites = 219U;
    msg.cog = 0.170455175615;
    msg.sog = 0.271407377121;
    msg.hdop = 0.524358081154;
    msg.vdop = 0.293629025415;
    msg.hacc = 0.405991233636;
    msg.vacc = 0.204801481398;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.413524184359);
    msg.setSource(30068U);
    msg.setSourceEntity(178U);
    msg.setDestination(50259U);
    msg.setDestinationEntity(18U);
    msg.validity = 44892U;
    msg.type = 175U;
    msg.utc_year = 65160U;
    msg.utc_month = 185U;
    msg.utc_day = 152U;
    msg.utc_time = 0.486460727422;
    msg.lat = 0.370983790919;
    msg.lon = 0.794259550677;
    msg.height = 0.629979572007;
    msg.satellites = 94U;
    msg.cog = 0.103613694827;
    msg.sog = 0.877542103;
    msg.hdop = 0.200889318536;
    msg.vdop = 0.34420277471;
    msg.hacc = 0.248245610096;
    msg.vacc = 0.84378856995;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.718051771433);
    msg.setSource(27914U);
    msg.setSourceEntity(17U);
    msg.setDestination(14326U);
    msg.setDestinationEntity(252U);
    msg.time = 0.715526219631;
    msg.phi = 0.90351016174;
    msg.theta = 0.0140699926567;
    msg.psi = 0.220960403227;
    msg.psi_magnetic = 0.282069894066;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.175152660201);
    msg.setSource(420U);
    msg.setSourceEntity(8U);
    msg.setDestination(3757U);
    msg.setDestinationEntity(188U);
    msg.time = 0.333284813895;
    msg.phi = 0.369407546952;
    msg.theta = 0.383066955173;
    msg.psi = 0.919993358799;
    msg.psi_magnetic = 0.991076745246;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.994732451519);
    msg.setSource(24335U);
    msg.setSourceEntity(19U);
    msg.setDestination(25776U);
    msg.setDestinationEntity(21U);
    msg.time = 0.53358717985;
    msg.phi = 0.929226627766;
    msg.theta = 0.738564348404;
    msg.psi = 0.121336406997;
    msg.psi_magnetic = 0.932276121868;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.108185285082);
    msg.setSource(10107U);
    msg.setSourceEntity(236U);
    msg.setDestination(49398U);
    msg.setDestinationEntity(178U);
    msg.time = 0.179207773004;
    msg.x = 0.0294578825966;
    msg.y = 0.0123796418167;
    msg.z = 0.122255288001;
    msg.timestep = 0.898151812694;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.536121664581);
    msg.setSource(52603U);
    msg.setSourceEntity(131U);
    msg.setDestination(26144U);
    msg.setDestinationEntity(83U);
    msg.time = 0.683609905738;
    msg.x = 0.514891652975;
    msg.y = 0.174022611129;
    msg.z = 0.311050963516;
    msg.timestep = 0.185353739913;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.623385405251);
    msg.setSource(45273U);
    msg.setSourceEntity(223U);
    msg.setDestination(50587U);
    msg.setDestinationEntity(46U);
    msg.time = 0.246720483168;
    msg.x = 0.013649903722;
    msg.y = 0.657187414179;
    msg.z = 0.496311305951;
    msg.timestep = 0.456946549722;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.68045775955);
    msg.setSource(34617U);
    msg.setSourceEntity(161U);
    msg.setDestination(60440U);
    msg.setDestinationEntity(106U);
    msg.time = 0.556497223733;
    msg.x = 0.542330022561;
    msg.y = 0.0512408435496;
    msg.z = 0.600822681176;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.811722866911);
    msg.setSource(15965U);
    msg.setSourceEntity(80U);
    msg.setDestination(33921U);
    msg.setDestinationEntity(151U);
    msg.time = 0.334066063214;
    msg.x = 0.73494283887;
    msg.y = 0.346705143284;
    msg.z = 0.281430623418;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.94091717189);
    msg.setSource(17021U);
    msg.setSourceEntity(6U);
    msg.setDestination(5962U);
    msg.setDestinationEntity(39U);
    msg.time = 0.444147811512;
    msg.x = 0.0514165741344;
    msg.y = 0.357767254424;
    msg.z = 0.95760707152;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.902017877119);
    msg.setSource(22333U);
    msg.setSourceEntity(222U);
    msg.setDestination(9536U);
    msg.setDestinationEntity(127U);
    msg.time = 0.379622858532;
    msg.x = 0.319617062165;
    msg.y = 0.784725685208;
    msg.z = 0.99501399225;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.303689216182);
    msg.setSource(24892U);
    msg.setSourceEntity(212U);
    msg.setDestination(23579U);
    msg.setDestinationEntity(73U);
    msg.time = 0.219791483764;
    msg.x = 0.543563643608;
    msg.y = 0.690423837438;
    msg.z = 0.595692393507;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.957508235606);
    msg.setSource(16146U);
    msg.setSourceEntity(195U);
    msg.setDestination(38770U);
    msg.setDestinationEntity(58U);
    msg.time = 0.793969070393;
    msg.x = 0.082518131973;
    msg.y = 0.53896333155;
    msg.z = 0.181509495273;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.107972111279);
    msg.setSource(16176U);
    msg.setSourceEntity(157U);
    msg.setDestination(35862U);
    msg.setDestinationEntity(118U);
    msg.time = 0.482239216167;
    msg.x = 0.30282282714;
    msg.y = 0.895855788388;
    msg.z = 0.71012776602;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.155058954159);
    msg.setSource(40917U);
    msg.setSourceEntity(119U);
    msg.setDestination(33669U);
    msg.setDestinationEntity(123U);
    msg.time = 0.192928162472;
    msg.x = 0.848320900749;
    msg.y = 0.722452968209;
    msg.z = 0.151052057506;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.589910173783);
    msg.setSource(23404U);
    msg.setSourceEntity(189U);
    msg.setDestination(65374U);
    msg.setDestinationEntity(225U);
    msg.time = 0.823228995264;
    msg.x = 0.824148797599;
    msg.y = 0.147860332841;
    msg.z = 0.648803472372;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.0979544422178);
    msg.setSource(27193U);
    msg.setSourceEntity(124U);
    msg.setDestination(50894U);
    msg.setDestinationEntity(249U);
    msg.validity = 193U;
    msg.x = 0.183537085707;
    msg.y = 0.588458916268;
    msg.z = 0.571898741355;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.453733290314);
    msg.setSource(25732U);
    msg.setSourceEntity(4U);
    msg.setDestination(13136U);
    msg.setDestinationEntity(32U);
    msg.validity = 110U;
    msg.x = 0.39118013556;
    msg.y = 0.036692646129;
    msg.z = 0.387182809956;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.767203319246);
    msg.setSource(47649U);
    msg.setSourceEntity(127U);
    msg.setDestination(26719U);
    msg.setDestinationEntity(237U);
    msg.validity = 190U;
    msg.x = 0.920060157876;
    msg.y = 0.138276185109;
    msg.z = 0.457027209688;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.235264021992);
    msg.setSource(57422U);
    msg.setSourceEntity(222U);
    msg.setDestination(9936U);
    msg.setDestinationEntity(183U);
    msg.validity = 67U;
    msg.x = 0.36535317056;
    msg.y = 0.93889514781;
    msg.z = 0.792970858768;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.639075328565);
    msg.setSource(24413U);
    msg.setSourceEntity(59U);
    msg.setDestination(1222U);
    msg.setDestinationEntity(173U);
    msg.validity = 215U;
    msg.x = 0.358537250361;
    msg.y = 0.120697053806;
    msg.z = 0.185473541677;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.722640175465);
    msg.setSource(46251U);
    msg.setSourceEntity(140U);
    msg.setDestination(49248U);
    msg.setDestinationEntity(111U);
    msg.validity = 56U;
    msg.x = 0.687102176489;
    msg.y = 0.315054599604;
    msg.z = 0.425684940026;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.336574096846);
    msg.setSource(27305U);
    msg.setSourceEntity(240U);
    msg.setDestination(329U);
    msg.setDestinationEntity(36U);
    msg.time = 0.313595443077;
    msg.x = 0.564716749972;
    msg.y = 0.819948176634;
    msg.z = 0.791481343604;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.865090745856);
    msg.setSource(22116U);
    msg.setSourceEntity(214U);
    msg.setDestination(28135U);
    msg.setDestinationEntity(124U);
    msg.time = 0.489177343891;
    msg.x = 0.188752345258;
    msg.y = 0.280118781073;
    msg.z = 0.53364037954;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.393006243451);
    msg.setSource(54338U);
    msg.setSourceEntity(244U);
    msg.setDestination(6613U);
    msg.setDestinationEntity(1U);
    msg.time = 0.221873562888;
    msg.x = 0.00865337462951;
    msg.y = 0.410060305039;
    msg.z = 0.494306055843;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.349982004535);
    msg.setSource(34367U);
    msg.setSourceEntity(26U);
    msg.setDestination(57705U);
    msg.setDestinationEntity(223U);
    msg.validity = 48U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.772153513257;
    tmp_msg_0.y = 0.422332007087;
    tmp_msg_0.z = 0.663938604378;
    tmp_msg_0.phi = 0.998991037231;
    tmp_msg_0.theta = 0.883397942649;
    tmp_msg_0.psi = 0.535489102189;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.47559777295;
    tmp_msg_1.beam_height = 0.1772989785;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.958834975304;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.644942944719);
    msg.setSource(33704U);
    msg.setSourceEntity(231U);
    msg.setDestination(60469U);
    msg.setDestinationEntity(84U);
    msg.validity = 181U;
    msg.value = 0.790798168758;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.328505586361);
    msg.setSource(33573U);
    msg.setSourceEntity(146U);
    msg.setDestination(47791U);
    msg.setDestinationEntity(163U);
    msg.validity = 32U;
    msg.value = 0.120324197398;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.320327897438);
    msg.setSource(26369U);
    msg.setSourceEntity(154U);
    msg.setDestination(64051U);
    msg.setDestinationEntity(92U);
    msg.value = 0.359960717684;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.492624565329);
    msg.setSource(62652U);
    msg.setSourceEntity(244U);
    msg.setDestination(43043U);
    msg.setDestinationEntity(189U);
    msg.value = 0.173000572769;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.0220382070426);
    msg.setSource(14947U);
    msg.setSourceEntity(236U);
    msg.setDestination(63807U);
    msg.setDestinationEntity(166U);
    msg.value = 0.81655674043;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.362052184245);
    msg.setSource(22727U);
    msg.setSourceEntity(152U);
    msg.setDestination(1424U);
    msg.setDestinationEntity(185U);
    msg.value = 0.864890493266;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.816597492727);
    msg.setSource(5170U);
    msg.setSourceEntity(189U);
    msg.setDestination(59944U);
    msg.setDestinationEntity(195U);
    msg.value = 0.73481473157;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.0206773701778);
    msg.setSource(29408U);
    msg.setSourceEntity(1U);
    msg.setDestination(1581U);
    msg.setDestinationEntity(152U);
    msg.value = 0.352485479535;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.25177475237);
    msg.setSource(43307U);
    msg.setSourceEntity(91U);
    msg.setDestination(3881U);
    msg.setDestinationEntity(121U);
    msg.value = 0.17158753197;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.642540875364);
    msg.setSource(12878U);
    msg.setSourceEntity(203U);
    msg.setDestination(32166U);
    msg.setDestinationEntity(17U);
    msg.value = 0.233072863793;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.806279354159);
    msg.setSource(10554U);
    msg.setSourceEntity(133U);
    msg.setDestination(32203U);
    msg.setDestinationEntity(173U);
    msg.value = 0.030184920028;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.651102371426);
    msg.setSource(41114U);
    msg.setSourceEntity(108U);
    msg.setDestination(39062U);
    msg.setDestinationEntity(243U);
    msg.value = 0.609786639988;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.291115406368);
    msg.setSource(36210U);
    msg.setSourceEntity(81U);
    msg.setDestination(49967U);
    msg.setDestinationEntity(211U);
    msg.value = 0.82090974229;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.0835795795687);
    msg.setSource(20502U);
    msg.setSourceEntity(109U);
    msg.setDestination(38727U);
    msg.setDestinationEntity(206U);
    msg.value = 0.327386710947;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.578282929571);
    msg.setSource(46634U);
    msg.setSourceEntity(46U);
    msg.setDestination(46361U);
    msg.setDestinationEntity(112U);
    msg.value = 0.638581834213;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.788256315273);
    msg.setSource(26894U);
    msg.setSourceEntity(180U);
    msg.setDestination(34343U);
    msg.setDestinationEntity(96U);
    msg.value = 0.904982552371;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.972482441232);
    msg.setSource(12034U);
    msg.setSourceEntity(118U);
    msg.setDestination(22513U);
    msg.setDestinationEntity(11U);
    msg.value = 0.812889614901;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.664629194877);
    msg.setSource(56725U);
    msg.setSourceEntity(61U);
    msg.setDestination(31833U);
    msg.setDestinationEntity(113U);
    msg.value = 0.699192445167;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.106855421999);
    msg.setSource(41336U);
    msg.setSourceEntity(102U);
    msg.setDestination(36176U);
    msg.setDestinationEntity(143U);
    msg.value = 0.104322229292;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.366976388277);
    msg.setSource(26733U);
    msg.setSourceEntity(229U);
    msg.setDestination(9328U);
    msg.setDestinationEntity(217U);
    msg.value = 0.472580129375;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.606490010487);
    msg.setSource(23041U);
    msg.setSourceEntity(6U);
    msg.setDestination(2529U);
    msg.setDestinationEntity(102U);
    msg.value = 0.162876744152;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.297096363881);
    msg.setSource(41396U);
    msg.setSourceEntity(52U);
    msg.setDestination(65034U);
    msg.setDestinationEntity(233U);
    msg.value = 0.638133931756;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.348390040367);
    msg.setSource(38001U);
    msg.setSourceEntity(249U);
    msg.setDestination(160U);
    msg.setDestinationEntity(178U);
    msg.value = 0.0468554413787;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.356357704906);
    msg.setSource(53604U);
    msg.setSourceEntity(192U);
    msg.setDestination(42825U);
    msg.setDestinationEntity(95U);
    msg.value = 0.755944810106;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.524976870659);
    msg.setSource(42195U);
    msg.setSourceEntity(248U);
    msg.setDestination(24754U);
    msg.setDestinationEntity(24U);
    msg.value = 0.235763328096;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.621839372932);
    msg.setSource(26202U);
    msg.setSourceEntity(98U);
    msg.setDestination(49709U);
    msg.setDestinationEntity(110U);
    msg.value = 0.363772411141;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.0880670530233);
    msg.setSource(14677U);
    msg.setSourceEntity(106U);
    msg.setDestination(26990U);
    msg.setDestinationEntity(21U);
    msg.direction = 0.906206511042;
    msg.speed = 0.332363017766;
    msg.turbulence = 0.181106802647;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.00179310115509);
    msg.setSource(65021U);
    msg.setSourceEntity(66U);
    msg.setDestination(39419U);
    msg.setDestinationEntity(129U);
    msg.direction = 0.118429865248;
    msg.speed = 0.965961242957;
    msg.turbulence = 0.739634563257;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.128337625119);
    msg.setSource(39845U);
    msg.setSourceEntity(240U);
    msg.setDestination(1605U);
    msg.setDestinationEntity(179U);
    msg.direction = 0.763932471989;
    msg.speed = 0.812340453431;
    msg.turbulence = 0.184000339019;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.348743978937);
    msg.setSource(12991U);
    msg.setSourceEntity(86U);
    msg.setDestination(11431U);
    msg.setDestinationEntity(120U);
    msg.value = 0.0308517356617;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.936121131355);
    msg.setSource(63581U);
    msg.setSourceEntity(55U);
    msg.setDestination(63259U);
    msg.setDestinationEntity(122U);
    msg.value = 0.468975761466;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.0558457731273);
    msg.setSource(10148U);
    msg.setSourceEntity(83U);
    msg.setDestination(28835U);
    msg.setDestinationEntity(176U);
    msg.value = 0.01828119121;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.764073828081);
    msg.setSource(20946U);
    msg.setSourceEntity(139U);
    msg.setDestination(7898U);
    msg.setDestinationEntity(135U);
    msg.value.assign("SEFKWBECWNBSTRASJBCYHWKNFAISPADRRZTQOMJPWTFZECPXVGORGTVXRQDBDVEAGVPEWPRHIWONWNZLXVFUYEOGUNDPYVOYCBAZIIHTMHJTLT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.850428701011);
    msg.setSource(17676U);
    msg.setSourceEntity(57U);
    msg.setDestination(20231U);
    msg.setDestinationEntity(135U);
    msg.value.assign("YARROFBYPHQOHALLUCGCIXFQVSQSWMLVANWJVQTWPICNPPBEKYNIHXRHLHVYPLWYMVUIJEICNLXDFKJBXPMAQLGKQGIGWJRDNTOKKDVCAWCBKPXUKXCBCXBMLAOIEXLRMQWDGXZZJGXLOZVRBSJGA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.105806521738);
    msg.setSource(3049U);
    msg.setSourceEntity(222U);
    msg.setDestination(21864U);
    msg.setDestinationEntity(35U);
    msg.value.assign("GEGPIHYTLWVPHDBQRALKDCGYDNMHAWBRFYQFHKVKMBTRHTBVSULZXXZMCCSUWNNATXTZMJBDQSBSLGTGNSIREHBPEQKQDWUOMQJLHXNRLTRXEVNRYUEEJTOVJIDMYPSOGKVNUIHUIZYZPUVFKHHIOMEFNQCOSWPWPBVYXLAYDMEGCSXYTAUGSCPKUXEGJCLACOXCLAAKJOOEJZICZZKWJFYDU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.49459669241);
    msg.setSource(8013U);
    msg.setSourceEntity(26U);
    msg.setDestination(51697U);
    msg.setDestinationEntity(164U);
    const char tmp_msg_0[] = {-99, -34, -6, 17, -67, -11, -101, 79, 36, 100, -25, -41, -77, -34, 19, -34, -41, -62, 8, -126, -112, 86, -35, 86, -119, -123, 108, -23, 80, 106, -100, -38, -97, 36, 0, 124, -8, -90, 126, -92, 51, 100, -58, -124, 116, -73, 15, 117, 51, 82, 7, -55, -2, -6, -38, -76, -11, -126, 37, 102, -91, 70, -104, -66, -6, -42, 75, 38, -28, -96, 90, -68, 112, -30, -113, 107, -66, -86, -47, 23, -13, 50, 75, -90, 63, 2, -60, 0, -42, -61, -8, -76, 50, -63, 17, 9, -79, -4, 4, 39, 57, -40, -118, -115, 31, 103, 117, -6, -20, -82, -86, 85, -121, -5, -106, -90, 116, 15, -27, -120, 79, 19, -22, -39, -86, -39, -53, -11, -23, -93, 18, -52, -13, -34, 57, 20, 1, 104, 19, -41, -118, -19, 86, -115, 95, 33, 103, -20, -47, 51, 108, -106, -103, -83, 20, -43, 115, 26, -45, -18, -9, 84, 34, -78, -94, -64, -61, 125, 29, 31, -39, -119, 75, -73, -99, -97, -2, 41, -75, -18, 122, -83, 83, 62, 20, 119, -121, 52, -9, 97, -7, 20, -51, -92, 10, 13, 55, 99, 117, -23, 78, -70, 10, 77, 63, -21, -80, 20, -110, -99, -61, 50, -21, -78, -93, 89, 80, 62, -9, 51, 48, 123, -102, -43, 6, -118, -67};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.681096229008);
    msg.setSource(37705U);
    msg.setSourceEntity(78U);
    msg.setDestination(40555U);
    msg.setDestinationEntity(46U);
    const char tmp_msg_0[] = {78, 97, -10, 117, -30, 21, 34, -6, -16, 6, -44, 52, -125, -21, -87, -11, 59, 9, -10, 109, -108, -95, -2, 30, -18, 38, -91, 86, -42, -81, -16, 74, -79, -125, 56, 72, 12, 94, -27, 84, -79, 19, -111, -91, 55, -33, -40, -11, -103, -104, 26, -115, -32, 76, 17, -77, -25, 66, 15, -69, -41, 2, 39, -38, 31, 54, -103, -72, -44, 0, -42, -116, 23, -108, -83, -128, -74, -22, -107, -100, 108, 26, -77, -27, 73, -43, 54, 3, 58, 79, -93, -35, -106, 89, 22, 106, 122, -58, -102, -108, -15, 108, 56, -56, 34, 16, 85, 2, 101, 126, 42, -95, -57, -60, 46, 70, 71, 75, -113, 50, -73, 49, -101, 73, 24, 42, 47, 8, 101, -13, 2, 85, -27, -75, -125, -120, 22, 24, -127, 42, -68, -2, -57, 75, 114, 65, -102, 5, 66, 121, -58, -33, -115, 26, 110, 9, 84, 117, 25, -70, 125, 3, 9, 43, -1, -97, 98, -71, -50, -106, -85, -102, -58, 33, -50, -34, -59, -14, 73, 56, -22, -125, -31, 68, 39};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.144928669042);
    msg.setSource(55787U);
    msg.setSourceEntity(136U);
    msg.setDestination(32430U);
    msg.setDestinationEntity(220U);
    const char tmp_msg_0[] = {77, -119, 98, -14, -31, -34, 92, -106, -25, 20, -103, -110, -60, -30, -58, 44, -76, -20, 19, 82, 18, 6, 67, 71, -28, 64, 91, 51, 94, 26, 100, 16, 72, -28, -64, 109, -5, 52, -76, -40, -103, -13, -28, 62, 11, -35, 6, 115, 95, -109, 20, 59, -17, 113, 101, 94, 31, 27, 47, 99, 16, -18, 44, 116, -36, 16, -113, 79, -116, -32, -59, -44, 86, -76, -13, -105, 20, 96, 75, -87, 119, -113, -45, 91, -78, -85, -99, 22, -32, -36, 89, 88, 32, -49, -116, -12, -100, 68, 20, 1, -94, 70, 27, -79, 11, 50, 121, 90, -81, -51, -104, 97, -88, -67, 9, -89, 91, 33, 95, 5, -22, 94, -125, -127, -38, -53, 52, -98, 42, -71, -68, -49, 34, 67, 23, 66, 105, -63, -117, 81, 94, 59, -25, -33, -107, -28, -87, -73, 62, -49, 36, 126, -81, -21, -29, 11, 84, 44, 13, -70, 10, 17, -35, 108, 114, 97, -68, 23, -54, 43, 95, 6, -24, 119, -17, -89, -39, -84, -24, -99, -41};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.199709961769);
    msg.setSource(21277U);
    msg.setSourceEntity(213U);
    msg.setDestination(4703U);
    msg.setDestinationEntity(193U);
    msg.type = 147U;
    msg.frequency = 2352950353U;
    msg.min_range = 39107U;
    msg.max_range = 17270U;
    msg.bits_per_point = 179U;
    msg.scale_factor = 0.083195659695;
    const char tmp_msg_0[] = {-27, 90, -107, 30, 6, 112, 48, 103, -79, -47, 41, 28, 59, 43, -77, 103, -119, -85, -1};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.719156633413);
    msg.setSource(29923U);
    msg.setSourceEntity(201U);
    msg.setDestination(19835U);
    msg.setDestinationEntity(98U);
    msg.type = 59U;
    msg.frequency = 202215895U;
    msg.min_range = 57081U;
    msg.max_range = 46078U;
    msg.bits_per_point = 11U;
    msg.scale_factor = 0.69708380794;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.123861869001;
    tmp_msg_0.beam_height = 0.448554921037;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-100, 105, -48, -43, 37, -55, -92, 28, 107, -119, 23, -70, 42, -42, -2, 84, -84, -105, 25, 25, 116, -9, 54, 96, 49, 56, -107, 100, -101, 0, -120, 24, 118, -100, 89, -119, 15, 61, 85, -62, 116, 107, -77, -79, 89, 106, -108};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.399840917965);
    msg.setSource(64784U);
    msg.setSourceEntity(202U);
    msg.setDestination(8881U);
    msg.setDestinationEntity(145U);
    msg.type = 233U;
    msg.frequency = 1930965645U;
    msg.min_range = 7224U;
    msg.max_range = 52569U;
    msg.bits_per_point = 81U;
    msg.scale_factor = 0.0913458136569;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.162507599837;
    tmp_msg_0.beam_height = 0.493951882407;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-63, -3, -114, -19, -81, -26, 76, 99, 58, 105, 54, 107, -91, 26, 31, 121, -57, -54, -45, -128, 58, -112, -71, 118, 20, -127, -92, -71, 107, -126, 82, 74, -93, 26, -39, 105, -71, -42, -8, 43, 99, 120, 83, -43, 46, 11, 66, 126};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.771664513617);
    msg.setSource(51956U);
    msg.setSourceEntity(114U);
    msg.setDestination(44784U);
    msg.setDestinationEntity(145U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.755020563246);
    msg.setSource(12076U);
    msg.setSourceEntity(139U);
    msg.setDestination(32833U);
    msg.setDestinationEntity(50U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.671752982733);
    msg.setSource(12836U);
    msg.setSourceEntity(204U);
    msg.setDestination(53545U);
    msg.setDestinationEntity(160U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.351845266699);
    msg.setSource(64070U);
    msg.setSourceEntity(227U);
    msg.setDestination(9353U);
    msg.setDestinationEntity(245U);
    msg.op = 39U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.929998638147);
    msg.setSource(36922U);
    msg.setSourceEntity(140U);
    msg.setDestination(29931U);
    msg.setDestinationEntity(0U);
    msg.op = 142U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.548903803267);
    msg.setSource(43341U);
    msg.setSourceEntity(43U);
    msg.setDestination(30674U);
    msg.setDestinationEntity(20U);
    msg.op = 167U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.092968416075);
    msg.setSource(24917U);
    msg.setSourceEntity(58U);
    msg.setDestination(15164U);
    msg.setDestinationEntity(145U);
    msg.value = 0.576959970503;
    msg.confidence = 0.350228620426;
    msg.opmodes.assign("CVISTLIXANKKGCISQNWTSBDZXZAGOQRITOMOGPBTZLNUUBEGOKHCYORAEPMVPYGTCDEUQLNINBEEFTJUWJWPKJHVLVXJRZYYDENYCAJWTIDZKSCXPFNMSEELZVWDQPQARKRXXFHJOECWVRHHGSZLUKRBALYSHPPAQLJOQDNOFSTHFPMMOKTFLXCBLUZBSUPMGOYEGFDYSQRHX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.855608946055);
    msg.setSource(61576U);
    msg.setSourceEntity(95U);
    msg.setDestination(23888U);
    msg.setDestinationEntity(155U);
    msg.value = 0.27876248479;
    msg.confidence = 0.836987027425;
    msg.opmodes.assign("BHJHWCGHBAUIWYPWBAHNNSNRYMSLT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.974448825856);
    msg.setSource(13157U);
    msg.setSourceEntity(48U);
    msg.setDestination(18711U);
    msg.setDestinationEntity(137U);
    msg.value = 0.338104107312;
    msg.confidence = 0.558030939898;
    msg.opmodes.assign("QLTTJUVNVOVFFUJEBDDAPAHVHAGFDCGGONNKQURSHMLQHBJMVFKKAGXDOSCFAGIMIIEEKKROSOUJNIKCQPHWNEZVNOLCOUKDQJZXMQIWALGWCUJQXCFLTSZVJUPWHFTIYYBXXAIDTWDWGMXYLXQJXLHCXZOASBIBVBTASQKLOSBBYSRUUEFPZJNKINEJCWUXRBVZNCPRTEOMWRYLGIZMDGESRYWCTYZFFGPZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.868031797114);
    msg.setSource(47621U);
    msg.setSourceEntity(34U);
    msg.setDestination(38933U);
    msg.setDestinationEntity(137U);
    msg.itow = 2033884662U;
    msg.lat = 0.857968849224;
    msg.lon = 0.816632129817;
    msg.height_ell = 0.322291849807;
    msg.height_sea = 0.30136120041;
    msg.hacc = 0.578432371288;
    msg.vacc = 0.627063016397;
    msg.vel_n = 0.834226859183;
    msg.vel_e = 0.940993927097;
    msg.vel_d = 0.165345572841;
    msg.speed = 0.870397803352;
    msg.gspeed = 0.382971556346;
    msg.heading = 0.762754694646;
    msg.sacc = 0.522957066225;
    msg.cacc = 0.930334754885;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.105254508494);
    msg.setSource(60658U);
    msg.setSourceEntity(252U);
    msg.setDestination(20728U);
    msg.setDestinationEntity(8U);
    msg.itow = 2035364063U;
    msg.lat = 0.357365760453;
    msg.lon = 0.00486547998884;
    msg.height_ell = 0.418483520301;
    msg.height_sea = 0.686927155123;
    msg.hacc = 0.223862207861;
    msg.vacc = 0.452322916908;
    msg.vel_n = 0.624330486644;
    msg.vel_e = 0.57294619318;
    msg.vel_d = 0.656909415209;
    msg.speed = 0.962053746549;
    msg.gspeed = 0.256218217911;
    msg.heading = 0.486522558213;
    msg.sacc = 0.845711805391;
    msg.cacc = 0.831299907969;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.586609799136);
    msg.setSource(23339U);
    msg.setSourceEntity(239U);
    msg.setDestination(54028U);
    msg.setDestinationEntity(187U);
    msg.itow = 3064825514U;
    msg.lat = 0.659747738685;
    msg.lon = 0.0925931158598;
    msg.height_ell = 0.0702638325055;
    msg.height_sea = 0.782359940696;
    msg.hacc = 0.474067601326;
    msg.vacc = 0.330043776749;
    msg.vel_n = 0.749822472205;
    msg.vel_e = 0.216564548851;
    msg.vel_d = 0.951116705596;
    msg.speed = 0.761271946233;
    msg.gspeed = 0.796067698835;
    msg.heading = 0.569347798343;
    msg.sacc = 0.830540825544;
    msg.cacc = 0.731570125255;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.0306518174888);
    msg.setSource(41091U);
    msg.setSourceEntity(163U);
    msg.setDestination(12226U);
    msg.setDestinationEntity(233U);
    msg.id = 202U;
    msg.value = 0.861762374013;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.272785315939);
    msg.setSource(16551U);
    msg.setSourceEntity(96U);
    msg.setDestination(36314U);
    msg.setDestinationEntity(225U);
    msg.id = 162U;
    msg.value = 0.438151119536;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.357388904506);
    msg.setSource(25977U);
    msg.setSourceEntity(93U);
    msg.setDestination(3553U);
    msg.setDestinationEntity(165U);
    msg.id = 185U;
    msg.value = 0.785235677059;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.768393892442);
    msg.setSource(38428U);
    msg.setSourceEntity(135U);
    msg.setDestination(14067U);
    msg.setDestinationEntity(49U);
    msg.x = 0.564738917705;
    msg.y = 0.309079606816;
    msg.z = 0.305043507376;
    msg.phi = 0.633260265371;
    msg.theta = 0.115381129503;
    msg.psi = 0.353298761296;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.122752447429);
    msg.setSource(38649U);
    msg.setSourceEntity(162U);
    msg.setDestination(47512U);
    msg.setDestinationEntity(5U);
    msg.x = 0.427874492055;
    msg.y = 0.15554326833;
    msg.z = 0.667577906514;
    msg.phi = 0.943316333077;
    msg.theta = 0.478387464361;
    msg.psi = 0.0429847551043;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.685164198942);
    msg.setSource(6142U);
    msg.setSourceEntity(141U);
    msg.setDestination(53669U);
    msg.setDestinationEntity(60U);
    msg.x = 0.193233780518;
    msg.y = 0.975041162572;
    msg.z = 0.38275860656;
    msg.phi = 0.288667967223;
    msg.theta = 0.0890849660164;
    msg.psi = 0.383240329565;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.507445096144);
    msg.setSource(19463U);
    msg.setSourceEntity(138U);
    msg.setDestination(3621U);
    msg.setDestinationEntity(50U);
    msg.beam_width = 0.145994209352;
    msg.beam_height = 0.208400109072;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.895175940976);
    msg.setSource(52551U);
    msg.setSourceEntity(44U);
    msg.setDestination(47080U);
    msg.setDestinationEntity(162U);
    msg.beam_width = 0.368438111565;
    msg.beam_height = 0.69347191729;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.293208279223);
    msg.setSource(42380U);
    msg.setSourceEntity(254U);
    msg.setDestination(50308U);
    msg.setDestinationEntity(23U);
    msg.beam_width = 0.580422328062;
    msg.beam_height = 0.246065047937;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.324346799758);
    msg.setSource(54285U);
    msg.setSourceEntity(220U);
    msg.setDestination(6215U);
    msg.setDestinationEntity(160U);
    msg.sane = 72U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.365339639);
    msg.setSource(859U);
    msg.setSourceEntity(50U);
    msg.setDestination(58227U);
    msg.setDestinationEntity(170U);
    msg.sane = 5U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.540689492356);
    msg.setSource(32405U);
    msg.setSourceEntity(197U);
    msg.setDestination(42137U);
    msg.setDestinationEntity(94U);
    msg.sane = 150U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.870798105478);
    msg.setSource(52835U);
    msg.setSourceEntity(64U);
    msg.setDestination(20929U);
    msg.setDestinationEntity(156U);
    msg.value = 0.0692477096642;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.133066630705);
    msg.setSource(41766U);
    msg.setSourceEntity(248U);
    msg.setDestination(59361U);
    msg.setDestinationEntity(111U);
    msg.value = 0.306468958998;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.195444263447);
    msg.setSource(62119U);
    msg.setSourceEntity(13U);
    msg.setDestination(19559U);
    msg.setDestinationEntity(30U);
    msg.value = 0.132773434043;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.0961872731951);
    msg.setSource(10320U);
    msg.setSourceEntity(51U);
    msg.setDestination(2563U);
    msg.setDestinationEntity(90U);
    msg.value = 0.499787131602;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.61144261389);
    msg.setSource(43856U);
    msg.setSourceEntity(102U);
    msg.setDestination(58469U);
    msg.setDestinationEntity(128U);
    msg.value = 0.358637432465;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.349460706271);
    msg.setSource(50295U);
    msg.setSourceEntity(239U);
    msg.setDestination(24263U);
    msg.setDestinationEntity(65U);
    msg.value = 0.788044624486;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.906913963039);
    msg.setSource(54096U);
    msg.setSourceEntity(245U);
    msg.setDestination(24163U);
    msg.setDestinationEntity(196U);
    msg.value = 0.760359445644;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.481614257472);
    msg.setSource(20293U);
    msg.setSourceEntity(187U);
    msg.setDestination(53650U);
    msg.setDestinationEntity(51U);
    msg.value = 0.72872976313;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.402396647737);
    msg.setSource(31564U);
    msg.setSourceEntity(143U);
    msg.setDestination(16314U);
    msg.setDestinationEntity(2U);
    msg.value = 0.544675139464;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.0156898535784);
    msg.setSource(32814U);
    msg.setSourceEntity(170U);
    msg.setDestination(19069U);
    msg.setDestinationEntity(78U);
    msg.value = 0.0141116185606;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.649466882416);
    msg.setSource(47344U);
    msg.setSourceEntity(144U);
    msg.setDestination(60397U);
    msg.setDestinationEntity(120U);
    msg.value = 0.369999135308;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.842230407548);
    msg.setSource(50524U);
    msg.setSourceEntity(93U);
    msg.setDestination(17048U);
    msg.setDestinationEntity(98U);
    msg.value = 0.493770898696;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.736707763329);
    msg.setSource(11151U);
    msg.setSourceEntity(210U);
    msg.setDestination(53163U);
    msg.setDestinationEntity(102U);
    msg.value = 0.88514407274;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.766395328758);
    msg.setSource(48370U);
    msg.setSourceEntity(107U);
    msg.setDestination(45553U);
    msg.setDestinationEntity(16U);
    msg.value = 0.946792784496;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.267117809892);
    msg.setSource(65268U);
    msg.setSourceEntity(120U);
    msg.setDestination(24072U);
    msg.setDestinationEntity(54U);
    msg.value = 0.692290573826;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.813560908554);
    msg.setSource(54810U);
    msg.setSourceEntity(85U);
    msg.setDestination(7651U);
    msg.setDestinationEntity(232U);
    msg.value = 0.718305813187;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.882738082981);
    msg.setSource(2622U);
    msg.setSourceEntity(111U);
    msg.setDestination(25505U);
    msg.setDestinationEntity(165U);
    msg.value = 0.411749967373;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.450342758838);
    msg.setSource(49254U);
    msg.setSourceEntity(37U);
    msg.setDestination(3198U);
    msg.setDestinationEntity(173U);
    msg.value = 0.763675392207;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.0201460857569);
    msg.setSource(41254U);
    msg.setSourceEntity(22U);
    msg.setDestination(26137U);
    msg.setDestinationEntity(128U);
    msg.value = 0.83510770907;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.188170046465);
    msg.setSource(30736U);
    msg.setSourceEntity(19U);
    msg.setDestination(11632U);
    msg.setDestinationEntity(141U);
    msg.value = 0.786785951286;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.822475147703);
    msg.setSource(62486U);
    msg.setSourceEntity(117U);
    msg.setDestination(58597U);
    msg.setDestinationEntity(187U);
    msg.value = 0.562772426736;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.688790174951);
    msg.setSource(46191U);
    msg.setSourceEntity(248U);
    msg.setDestination(48694U);
    msg.setDestinationEntity(27U);
    msg.value = 0.226039343727;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.612930989083);
    msg.setSource(29880U);
    msg.setSourceEntity(109U);
    msg.setDestination(38802U);
    msg.setDestinationEntity(127U);
    msg.value = 0.578432473505;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.0587928702215);
    msg.setSource(5582U);
    msg.setSourceEntity(170U);
    msg.setDestination(29303U);
    msg.setDestinationEntity(15U);
    msg.value = 0.651311319343;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.102397781206);
    msg.setSource(18669U);
    msg.setSourceEntity(59U);
    msg.setDestination(52860U);
    msg.setDestinationEntity(161U);
    msg.validity = 36131U;
    msg.type = 119U;
    msg.tow = 1406456496U;
    msg.base_lat = 0.374316775245;
    msg.base_lon = 0.296701427994;
    msg.base_height = 0.776869985981;
    msg.n = 0.797832291076;
    msg.e = 0.00153601858477;
    msg.d = 0.840458019039;
    msg.v_n = 0.731541044562;
    msg.v_e = 0.291332834914;
    msg.v_d = 0.035261064547;
    msg.satellites = 46U;
    msg.iar_hyp = 54209U;
    msg.iar_ratio = 0.0619549172819;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.892057027748);
    msg.setSource(63765U);
    msg.setSourceEntity(123U);
    msg.setDestination(5674U);
    msg.setDestinationEntity(91U);
    msg.validity = 21515U;
    msg.type = 221U;
    msg.tow = 1973308335U;
    msg.base_lat = 0.305858633695;
    msg.base_lon = 0.651381373462;
    msg.base_height = 0.218737852364;
    msg.n = 0.679247400951;
    msg.e = 0.77850410645;
    msg.d = 0.104028611931;
    msg.v_n = 0.17937446557;
    msg.v_e = 0.0284007754012;
    msg.v_d = 0.81067897361;
    msg.satellites = 11U;
    msg.iar_hyp = 48403U;
    msg.iar_ratio = 0.814996731011;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.311613912762);
    msg.setSource(22147U);
    msg.setSourceEntity(63U);
    msg.setDestination(57005U);
    msg.setDestinationEntity(142U);
    msg.validity = 53481U;
    msg.type = 25U;
    msg.tow = 3067082489U;
    msg.base_lat = 0.433365890457;
    msg.base_lon = 0.335206992812;
    msg.base_height = 0.325190866907;
    msg.n = 0.411899434364;
    msg.e = 0.437514771829;
    msg.d = 0.0760453374126;
    msg.v_n = 0.924926900387;
    msg.v_e = 0.322702763633;
    msg.v_d = 0.257428591044;
    msg.satellites = 202U;
    msg.iar_hyp = 39236U;
    msg.iar_ratio = 0.167880185753;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.11787451917);
    msg.setSource(40212U);
    msg.setSourceEntity(192U);
    msg.setDestination(18991U);
    msg.setDestinationEntity(92U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.257656517162;
    tmp_msg_0.lon = 0.392684749093;
    tmp_msg_0.height = 0.588105190215;
    tmp_msg_0.x = 0.915549471822;
    tmp_msg_0.y = 0.999705622018;
    tmp_msg_0.z = 0.722498069348;
    tmp_msg_0.phi = 0.543523151823;
    tmp_msg_0.theta = 0.342376194567;
    tmp_msg_0.psi = 0.0691510443083;
    tmp_msg_0.u = 0.812061023896;
    tmp_msg_0.v = 0.48998598504;
    tmp_msg_0.w = 0.812072906706;
    tmp_msg_0.vx = 0.472352104857;
    tmp_msg_0.vy = 0.783166055715;
    tmp_msg_0.vz = 0.89552199329;
    tmp_msg_0.p = 0.648226972961;
    tmp_msg_0.q = 0.299032288599;
    tmp_msg_0.r = 0.659944551799;
    tmp_msg_0.depth = 0.986459044717;
    tmp_msg_0.alt = 0.497925792692;
    msg.state.set(tmp_msg_0);
    msg.type = 107U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.0868991555755);
    msg.setSource(8569U);
    msg.setSourceEntity(132U);
    msg.setDestination(34855U);
    msg.setDestinationEntity(166U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.469637549812;
    tmp_msg_0.lon = 0.840501153172;
    tmp_msg_0.height = 0.470573705914;
    tmp_msg_0.x = 0.0811001041306;
    tmp_msg_0.y = 0.85655205776;
    tmp_msg_0.z = 0.516290049596;
    tmp_msg_0.phi = 0.578595608507;
    tmp_msg_0.theta = 0.613773023223;
    tmp_msg_0.psi = 0.982882548116;
    tmp_msg_0.u = 0.220841197963;
    tmp_msg_0.v = 0.0884619636622;
    tmp_msg_0.w = 0.336936428776;
    tmp_msg_0.vx = 0.520672435331;
    tmp_msg_0.vy = 0.882969932927;
    tmp_msg_0.vz = 0.90863834312;
    tmp_msg_0.p = 0.477899708314;
    tmp_msg_0.q = 0.935223901844;
    tmp_msg_0.r = 0.557933390084;
    tmp_msg_0.depth = 0.924189571369;
    tmp_msg_0.alt = 0.357457190439;
    msg.state.set(tmp_msg_0);
    msg.type = 236U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.447682260083);
    msg.setSource(58765U);
    msg.setSourceEntity(216U);
    msg.setDestination(1118U);
    msg.setDestinationEntity(161U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.640455501718;
    tmp_msg_0.lon = 0.0670353621408;
    tmp_msg_0.height = 0.803683595865;
    tmp_msg_0.x = 0.399710029938;
    tmp_msg_0.y = 0.723501075037;
    tmp_msg_0.z = 0.99648806582;
    tmp_msg_0.phi = 0.646139887163;
    tmp_msg_0.theta = 0.658778145044;
    tmp_msg_0.psi = 0.610039973506;
    tmp_msg_0.u = 0.250833998153;
    tmp_msg_0.v = 0.534228744241;
    tmp_msg_0.w = 0.141821188452;
    tmp_msg_0.vx = 0.237707296129;
    tmp_msg_0.vy = 0.250489090702;
    tmp_msg_0.vz = 0.956313085574;
    tmp_msg_0.p = 0.309119530247;
    tmp_msg_0.q = 0.0324858455844;
    tmp_msg_0.r = 0.2311713347;
    tmp_msg_0.depth = 0.438837357108;
    tmp_msg_0.alt = 0.945325216817;
    msg.state.set(tmp_msg_0);
    msg.type = 69U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.922506476061);
    msg.setSource(49533U);
    msg.setSourceEntity(126U);
    msg.setDestination(21909U);
    msg.setDestinationEntity(7U);
    msg.value = 0.860893356813;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.131843760107);
    msg.setSource(32149U);
    msg.setSourceEntity(252U);
    msg.setDestination(25980U);
    msg.setDestinationEntity(194U);
    msg.value = 0.454273699233;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.685222365807);
    msg.setSource(10326U);
    msg.setSourceEntity(106U);
    msg.setDestination(61288U);
    msg.setDestinationEntity(111U);
    msg.value = 0.553965140212;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.747789176786);
    msg.setSource(63392U);
    msg.setSourceEntity(11U);
    msg.setDestination(2427U);
    msg.setDestinationEntity(183U);
    msg.value = 0.773307544658;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.265444024562);
    msg.setSource(6595U);
    msg.setSourceEntity(101U);
    msg.setDestination(30951U);
    msg.setDestinationEntity(175U);
    msg.value = 0.718214175777;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.828241086365);
    msg.setSource(49483U);
    msg.setSourceEntity(174U);
    msg.setDestination(59223U);
    msg.setDestinationEntity(100U);
    msg.value = 0.139162418495;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.992596562877);
    msg.setSource(26795U);
    msg.setSourceEntity(59U);
    msg.setDestination(44379U);
    msg.setDestinationEntity(202U);
    msg.value = 0.327199837318;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.175669118799);
    msg.setSource(27443U);
    msg.setSourceEntity(59U);
    msg.setDestination(2024U);
    msg.setDestinationEntity(147U);
    msg.value = 0.613436660974;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.42481060467);
    msg.setSource(22397U);
    msg.setSourceEntity(201U);
    msg.setDestination(16426U);
    msg.setDestinationEntity(184U);
    msg.value = 0.770324233922;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.223282928475);
    msg.setSource(33379U);
    msg.setSourceEntity(216U);
    msg.setDestination(55386U);
    msg.setDestinationEntity(136U);
    msg.value = 0.331277855825;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.28345919112);
    msg.setSource(47019U);
    msg.setSourceEntity(191U);
    msg.setDestination(60650U);
    msg.setDestinationEntity(120U);
    msg.value = 0.987904702123;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.185626963236);
    msg.setSource(54343U);
    msg.setSourceEntity(220U);
    msg.setDestination(34008U);
    msg.setDestinationEntity(96U);
    msg.value = 0.979953312354;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.013607990261);
    msg.setSource(51815U);
    msg.setSourceEntity(223U);
    msg.setDestination(4210U);
    msg.setDestinationEntity(8U);
    msg.value = 0.0911562484124;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.383537433979);
    msg.setSource(37622U);
    msg.setSourceEntity(25U);
    msg.setDestination(15558U);
    msg.setDestinationEntity(93U);
    msg.value = 0.74881376927;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.285717182679);
    msg.setSource(33203U);
    msg.setSourceEntity(254U);
    msg.setDestination(21720U);
    msg.setDestinationEntity(174U);
    msg.value = 0.350774412524;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.080475595282);
    msg.setSource(44993U);
    msg.setSourceEntity(109U);
    msg.setDestination(12331U);
    msg.setDestinationEntity(108U);
    msg.id = 60U;
    msg.zoom = 114U;
    msg.action = 66U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.7091218578);
    msg.setSource(6214U);
    msg.setSourceEntity(184U);
    msg.setDestination(44641U);
    msg.setDestinationEntity(153U);
    msg.id = 162U;
    msg.zoom = 80U;
    msg.action = 194U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.232920914171);
    msg.setSource(47760U);
    msg.setSourceEntity(209U);
    msg.setDestination(30753U);
    msg.setDestinationEntity(21U);
    msg.id = 176U;
    msg.zoom = 38U;
    msg.action = 12U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.522679502668);
    msg.setSource(34303U);
    msg.setSourceEntity(101U);
    msg.setDestination(13804U);
    msg.setDestinationEntity(196U);
    msg.id = 129U;
    msg.value = 0.14017049609;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.895242867085);
    msg.setSource(33916U);
    msg.setSourceEntity(76U);
    msg.setDestination(14944U);
    msg.setDestinationEntity(102U);
    msg.id = 116U;
    msg.value = 0.421303412733;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.574809520309);
    msg.setSource(42569U);
    msg.setSourceEntity(83U);
    msg.setDestination(51958U);
    msg.setDestinationEntity(91U);
    msg.id = 4U;
    msg.value = 0.137100404796;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.959545794645);
    msg.setSource(50949U);
    msg.setSourceEntity(191U);
    msg.setDestination(862U);
    msg.setDestinationEntity(39U);
    msg.id = 112U;
    msg.value = 0.241025863375;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.664659819867);
    msg.setSource(57799U);
    msg.setSourceEntity(197U);
    msg.setDestination(47352U);
    msg.setDestinationEntity(81U);
    msg.id = 74U;
    msg.value = 0.542912659338;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.859528171718);
    msg.setSource(57818U);
    msg.setSourceEntity(161U);
    msg.setDestination(37785U);
    msg.setDestinationEntity(58U);
    msg.id = 161U;
    msg.value = 0.897903361731;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.405050333197);
    msg.setSource(22837U);
    msg.setSourceEntity(39U);
    msg.setDestination(33043U);
    msg.setDestinationEntity(150U);
    msg.id = 195U;
    msg.angle = 0.404240029737;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.378848830484);
    msg.setSource(39324U);
    msg.setSourceEntity(6U);
    msg.setDestination(28126U);
    msg.setDestinationEntity(61U);
    msg.id = 217U;
    msg.angle = 0.218672188308;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.413952348658);
    msg.setSource(53490U);
    msg.setSourceEntity(6U);
    msg.setDestination(30509U);
    msg.setDestinationEntity(128U);
    msg.id = 166U;
    msg.angle = 0.131184633892;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.753870242371);
    msg.setSource(26940U);
    msg.setSourceEntity(138U);
    msg.setDestination(60655U);
    msg.setDestinationEntity(76U);
    msg.op = 254U;
    msg.actions.assign("OLKMTBMGATKKZMYKUGGYSUOFNNOPFHLEMWQNEWXRRIQQHDTRAZJVVPXJUPXIXJEFEHCVXGWBNYVMKETKSBAZDKWGTPZNXPCTESUFCLDN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.606033751349);
    msg.setSource(29790U);
    msg.setSourceEntity(114U);
    msg.setDestination(57154U);
    msg.setDestinationEntity(115U);
    msg.op = 170U;
    msg.actions.assign("DVWOJYZKGRNVIYCY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.752271184525);
    msg.setSource(23730U);
    msg.setSourceEntity(161U);
    msg.setDestination(31711U);
    msg.setDestinationEntity(44U);
    msg.op = 24U;
    msg.actions.assign("PXFRTRVFKZMBSWSZFBISDPTWUZOYGJORBEYGEUWGLSFYQQW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.0579446085107);
    msg.setSource(47970U);
    msg.setSourceEntity(157U);
    msg.setDestination(30909U);
    msg.setDestinationEntity(200U);
    msg.actions.assign("EEGMNPNECAKTIFFDHQUHBTQHYMRACGZSVBHEYTVONRTDKDLIURJLPOYUXYRPKJCLEYSRDFIRKHCEARNJGSAITNXBZJNQSCDQP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.00619591389385);
    msg.setSource(50926U);
    msg.setSourceEntity(65U);
    msg.setDestination(20029U);
    msg.setDestinationEntity(85U);
    msg.actions.assign("HTXNLWLWHVOVTBMSYEJHPXDAJRSVBZDUCMYINNXPYYOFKNXLXZQDQABVAKFEIBPCUSTRFTDDHTLW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.163635395994);
    msg.setSource(23112U);
    msg.setSourceEntity(168U);
    msg.setDestination(47696U);
    msg.setDestinationEntity(199U);
    msg.actions.assign("MDCQVOWDDOPVEPRSXEOQBBLRTXITPESXLOUVUYMBZIPLLMBWYGTQGKJXJHDANKGUEWGTAFPRCFRFFQUHSBHDALFYMTTSNSAJNNNDWSVPEERRVMVXKSAJBHZISMHCUFCP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.521316660778);
    msg.setSource(39030U);
    msg.setSourceEntity(160U);
    msg.setDestination(42094U);
    msg.setDestinationEntity(165U);
    msg.button = 33U;
    msg.value = 128U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.202075448946);
    msg.setSource(6776U);
    msg.setSourceEntity(61U);
    msg.setDestination(48283U);
    msg.setDestinationEntity(140U);
    msg.button = 0U;
    msg.value = 2U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.882034013242);
    msg.setSource(16910U);
    msg.setSourceEntity(181U);
    msg.setDestination(59924U);
    msg.setDestinationEntity(5U);
    msg.button = 41U;
    msg.value = 240U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.11554847029);
    msg.setSource(52835U);
    msg.setSourceEntity(49U);
    msg.setDestination(59620U);
    msg.setDestinationEntity(218U);
    msg.op = 87U;
    msg.text.assign("FNEIKNSMMNHEBYJXWRIEJKQGXFMCLFAPJDUZSVDEFOHYGTQPSLYPUZUWNBVLCHBZSKLAPWXHFTHREZTXAGRFEXTGYPLOOBDANLULGVKVIRBATECDAVORMPUJNVOESESYSDJMLUQKQWZGIAICQTGRNWMUJOCGYHMJSABQSWFBXHOFUMORWFTRGSYZAHYHTDJJVEQXDGRKCNKAWXCVDRUVKKZBMJFWNZDPMLXCOCPTTUCIXQZLBWIPI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.302334924251);
    msg.setSource(53885U);
    msg.setSourceEntity(77U);
    msg.setDestination(59698U);
    msg.setDestinationEntity(192U);
    msg.op = 58U;
    msg.text.assign("KDEEBCHMIRRIFMNYWGOGVQTIDVMKOYOMLEFTXOAUJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.111774902366);
    msg.setSource(62649U);
    msg.setSourceEntity(119U);
    msg.setDestination(21931U);
    msg.setDestinationEntity(242U);
    msg.op = 158U;
    msg.text.assign("RCDOODGAEQDXRDZRDKNEGCRMUOHKPCSJHTTFRUTJHZLYJVQBAIJXRBXQMUWXFAXFMPGBQOSMMLYPFHOYVGTKTFBYVNVJAFLOMNIHLBZNTSI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.585549265717);
    msg.setSource(57753U);
    msg.setSourceEntity(46U);
    msg.setDestination(51079U);
    msg.setDestinationEntity(71U);
    msg.op = 246U;
    msg.time_remain = 0.897959812256;
    msg.sched_time = 0.116780440258;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.292476909126);
    msg.setSource(25663U);
    msg.setSourceEntity(157U);
    msg.setDestination(9957U);
    msg.setDestinationEntity(39U);
    msg.op = 247U;
    msg.time_remain = 0.309702892202;
    msg.sched_time = 0.685817707248;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.819897046185);
    msg.setSource(14359U);
    msg.setSourceEntity(114U);
    msg.setDestination(25416U);
    msg.setDestinationEntity(188U);
    msg.op = 0U;
    msg.time_remain = 0.226584785322;
    msg.sched_time = 0.19307700692;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.896737841867);
    msg.setSource(52440U);
    msg.setSourceEntity(141U);
    msg.setDestination(18208U);
    msg.setDestinationEntity(136U);
    msg.name.assign("CKWIORTGQRYILPFFJUJWENRRUMDKPBMEPPSYIDBJRGCTFHFCFXOLAFZDKQDYAXAPJNDSZLREMSBUKXGHMOMWKPIGAVUVAJBWLSYQZMYVOINHGLFEXQOCNTYVTQYDCZKZIPSN");
    msg.op = 48U;
    msg.sched_time = 0.98543012661;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.495610384819);
    msg.setSource(739U);
    msg.setSourceEntity(231U);
    msg.setDestination(28323U);
    msg.setDestinationEntity(97U);
    msg.name.assign("OGKWQKBKFHLAYRKXLYHKZSBAHDSSMUPNSMDJNDGRGIJLCJXEAATERDXPETNMYYFHZCCUPBHQDPYBVYPNNJZAUOMREJXOOWKTTDYAUWHOVCIGTSVFMXHZLGXCBWXZYCMHWVOJWTPIHRVWEMFFSLZTAPCWFNUIILGPZGULVRQSANVVRGCUYFLTCHLEQD");
    msg.op = 74U;
    msg.sched_time = 0.882699185469;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.372989298645);
    msg.setSource(27345U);
    msg.setSourceEntity(110U);
    msg.setDestination(19987U);
    msg.setDestinationEntity(13U);
    msg.name.assign("NTVEPFIIUCJPMUNLGIAWWJDYAMOLCEUETQASMBFXZLPIDXGFRNMRQPJVBZXASQJYDFDBW");
    msg.op = 4U;
    msg.sched_time = 0.953117681235;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.848824853449);
    msg.setSource(7179U);
    msg.setSourceEntity(126U);
    msg.setDestination(59326U);
    msg.setDestinationEntity(213U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.917851277121);
    msg.setSource(26570U);
    msg.setSourceEntity(254U);
    msg.setDestination(56752U);
    msg.setDestinationEntity(203U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.538567769084);
    msg.setSource(20054U);
    msg.setSourceEntity(37U);
    msg.setDestination(26811U);
    msg.setDestinationEntity(216U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.140991731201);
    msg.setSource(13103U);
    msg.setSourceEntity(94U);
    msg.setDestination(57190U);
    msg.setDestinationEntity(228U);
    msg.name.assign("NIZRIKRUWYSYUFCOLXWUSQJLVLGJORBECNAEAMTQNCPBGKU");
    msg.state = 4U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.55155982617);
    msg.setSource(17598U);
    msg.setSourceEntity(43U);
    msg.setDestination(31782U);
    msg.setDestinationEntity(191U);
    msg.name.assign("HCPXPNWJRJUHONIXZSRIZIMKZPMTEKLKXHICTSAUTMEAOFCDODHGXWZTCZDVZSEEVWAETWIPQCAHLIKUHFLNMNJNWLQLMEFQSGXLPTODFKDFOFFBBUSLYUGXTKBUARJNOUCIHKHRPVWRLMHFBCDMPKBPLQVXVIRVNFYWNJRBQJQYPQEIBBTOTZURVZYUEGBSQZYWAFDDTOYZVJGOKISNCHSJGV");
    msg.state = 130U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.327660908583);
    msg.setSource(44863U);
    msg.setSourceEntity(243U);
    msg.setDestination(62576U);
    msg.setDestinationEntity(190U);
    msg.name.assign("EWEIQNMNXFMFEZTVAYALHTZUBQPDQKEMUDOHCNLDOPZGPZPPHFHWGXKSWYDCTOTSTKUCARKF");
    msg.state = 46U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.88920950464);
    msg.setSource(43947U);
    msg.setSourceEntity(151U);
    msg.setDestination(25428U);
    msg.setDestinationEntity(136U);
    msg.name.assign("EFLVZXCWVQDWPKJZFSFCKCYLNPKJYFVMBRESAYCYDHTAOBLAYHQIMQLTVVFWFZEODBDISGPNCHIPMQNRELYJKMQSBTETVUBKIAXZIYPNTDUJZXGTRHGAQIHMFWXJHWOGORQOINCXRLWCHONTODPBZYMUPGWQSUOUQJFJUIZDEDYOVNUT");
    msg.value = 63U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.745598233547);
    msg.setSource(27973U);
    msg.setSourceEntity(110U);
    msg.setDestination(14120U);
    msg.setDestinationEntity(108U);
    msg.name.assign("IOQMLYZZIJRWUDJBLVOHTGHSDEQKQYBAUOXVCTMASAHFSKVWJQFVRJBEZIXYBPZURWAKQDLRTFEVMGRUNMKBMCYSTNRXSMPQFAGZIYOBHPCVVXIMBWVJXUAJGJBNLHEUKCTYCIKSDXIEDTXPGTRWQAXDPBHDSH");
    msg.value = 151U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.488187962383);
    msg.setSource(10043U);
    msg.setSourceEntity(182U);
    msg.setDestination(42672U);
    msg.setDestinationEntity(179U);
    msg.name.assign("WEPKVPYXSSTMMCDEGGORHPFXBWNAUBI");
    msg.value = 137U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.452100635893);
    msg.setSource(42526U);
    msg.setSourceEntity(237U);
    msg.setDestination(38674U);
    msg.setDestinationEntity(81U);
    msg.name.assign("EUAOMRZMCLOHWWIU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.142409777815);
    msg.setSource(33386U);
    msg.setSourceEntity(178U);
    msg.setDestination(4308U);
    msg.setDestinationEntity(159U);
    msg.name.assign("ORNLYPIVDDUFVBXBPVROMGDKHUQZYPTIMACLIYIHCQBTOPRWJKKLXIQFOCKHBIMHLSSFNWMNPQUNZTECIXEGKVLZZDOBFKXRCTBGHWTAUTIPDKZEJFLMGFATCPCRVIZZXMDQQNWGUB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.901321396586);
    msg.setSource(15814U);
    msg.setSourceEntity(250U);
    msg.setDestination(33923U);
    msg.setDestinationEntity(86U);
    msg.name.assign("RAFBGJTGOIZYNUQRJLOIMNQDIEMTWNQJUAAPWUINFWHOXKBFEQBLREBSUBJCWWTJFOGCXAWXMMCXZVHOULLKZKNSOZVJHTDRNRKUTPISPDVOAEAHYJSWCBBZQZOKAMGDGCSJHSVMJYPRFXALLDHLBNFHWETVPIUKDAJMIDSKRUOQASFPIHYYQZZVELXXZYGWHUCCQDRZYDNYGXSRPKQMDPO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.707466236649);
    msg.setSource(63301U);
    msg.setSourceEntity(236U);
    msg.setDestination(48030U);
    msg.setDestinationEntity(78U);
    msg.name.assign("SLXZULYSSPIZHWDHAVNMYWUSURNKHTRNLECPBPBIEVRGHHYTEXGAJOZEXJGUWNLDPITTYPFCZJHZCQOLFCKZAQDBFRQXIWQVBBPVLECYWODWJKDQRFSQZNTAPYMULCXVWMMRJRMJBTILIVQSMKVYZBOGIBFHJGENTAFWVOSRVIGUACFYMPNGAXPCDKNOMPHOOZEGBDNXRYSHOSOIAXCXHYVKTCMWKUUTLQKUEEFDXSQBJZFGIUK");
    msg.value = 211U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.559721484039);
    msg.setSource(24588U);
    msg.setSourceEntity(113U);
    msg.setDestination(25667U);
    msg.setDestinationEntity(113U);
    msg.name.assign("COMDGPMQPLRKMTXYXXZQLSUSNNIVBBDKJXLXQDCUJMNPBMEYGWKNCHWDGPZAPHWQAZQXXIFRNMOAGSQKFOAZFMUKDIEUYCCVHGLHCSKAIGXRUDKFSXGNZZFNCRIATVVSBCRTMGQQNTHLAFOTLYVFHERJEULJTUYQWZINBTAKVZJITCJPLIRFYYCGFYHDMNJZIVTJLDJSOEJSSDYOURQEHBTVHVMSKPEOAOUWYWWOPBDEEARZWERWBO");
    msg.value = 165U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.407624015123);
    msg.setSource(26920U);
    msg.setSourceEntity(66U);
    msg.setDestination(11896U);
    msg.setDestinationEntity(121U);
    msg.name.assign("XJNOFYALPYTRAAFIDCGHTDPIQNGBFADQKQJJTGKPGQQZVSRCZSZHDPEZGJTVARIUEMGVMFTPBYEOWYJUBYPGVDLNVSSOFXZAWRSDTMNPUMCNGRECCXBOBAJLSBTESELIQRVVQJYOXXWTAXNFDWDYBPCCUHPMOGXEBEKWOQQLQHOKTKJMCWFLIXUARAHZTWUZKHYFWCWDI");
    msg.value = 39U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.0929739659768);
    msg.setSource(13266U);
    msg.setSourceEntity(56U);
    msg.setDestination(45686U);
    msg.setDestinationEntity(192U);
    msg.id = 105U;
    msg.period = 709977999U;
    msg.duty_cycle = 3386581313U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.518025665748);
    msg.setSource(32282U);
    msg.setSourceEntity(218U);
    msg.setDestination(46172U);
    msg.setDestinationEntity(4U);
    msg.id = 150U;
    msg.period = 3787694610U;
    msg.duty_cycle = 3946168595U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.87678768017);
    msg.setSource(47831U);
    msg.setSourceEntity(75U);
    msg.setDestination(10743U);
    msg.setDestinationEntity(231U);
    msg.id = 143U;
    msg.period = 1513725468U;
    msg.duty_cycle = 124821294U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.847919372944);
    msg.setSource(3952U);
    msg.setSourceEntity(206U);
    msg.setDestination(5424U);
    msg.setDestinationEntity(180U);
    msg.id = 182U;
    msg.period = 933726899U;
    msg.duty_cycle = 2052655759U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.898895691471);
    msg.setSource(23629U);
    msg.setSourceEntity(5U);
    msg.setDestination(62851U);
    msg.setDestinationEntity(52U);
    msg.id = 113U;
    msg.period = 3123534001U;
    msg.duty_cycle = 1508015249U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.732165261339);
    msg.setSource(40944U);
    msg.setSourceEntity(171U);
    msg.setDestination(11375U);
    msg.setDestinationEntity(192U);
    msg.id = 138U;
    msg.period = 1320569454U;
    msg.duty_cycle = 2357591303U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.851661611106);
    msg.setSource(14936U);
    msg.setSourceEntity(193U);
    msg.setDestination(57215U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.900105877266;
    msg.lon = 0.857735005803;
    msg.height = 0.0893990485981;
    msg.x = 0.492363196476;
    msg.y = 0.770593262497;
    msg.z = 0.167083792057;
    msg.phi = 0.76276066678;
    msg.theta = 0.629099722888;
    msg.psi = 0.789718266066;
    msg.u = 0.607710316433;
    msg.v = 0.845534699681;
    msg.w = 0.354794042184;
    msg.vx = 0.217633386387;
    msg.vy = 0.495267001566;
    msg.vz = 0.946774520949;
    msg.p = 0.371922397543;
    msg.q = 0.507377598895;
    msg.r = 0.0461456197928;
    msg.depth = 0.881747021053;
    msg.alt = 0.118361052064;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.802925368047);
    msg.setSource(51816U);
    msg.setSourceEntity(83U);
    msg.setDestination(23602U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.493130744199;
    msg.lon = 0.113176290538;
    msg.height = 0.156840495321;
    msg.x = 0.254867000884;
    msg.y = 0.514321051142;
    msg.z = 0.121929320415;
    msg.phi = 0.309949107611;
    msg.theta = 0.531434254202;
    msg.psi = 0.403964454316;
    msg.u = 0.305475994187;
    msg.v = 0.89205539866;
    msg.w = 0.793107243577;
    msg.vx = 0.829459130848;
    msg.vy = 0.250245609454;
    msg.vz = 0.808360591973;
    msg.p = 0.273077170168;
    msg.q = 0.552596668622;
    msg.r = 0.840697494169;
    msg.depth = 0.659421126519;
    msg.alt = 0.690759710585;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.887752236081);
    msg.setSource(39761U);
    msg.setSourceEntity(149U);
    msg.setDestination(51588U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.627394262861;
    msg.lon = 0.0670199651804;
    msg.height = 0.838496711;
    msg.x = 0.768595164635;
    msg.y = 0.158895642944;
    msg.z = 0.504345675191;
    msg.phi = 0.38823690761;
    msg.theta = 0.0757595430434;
    msg.psi = 0.931288408211;
    msg.u = 0.378892177102;
    msg.v = 0.270960636752;
    msg.w = 0.928360089424;
    msg.vx = 0.157896039825;
    msg.vy = 0.907767584824;
    msg.vz = 0.796730986456;
    msg.p = 0.877195589163;
    msg.q = 0.0254070241714;
    msg.r = 0.775612097292;
    msg.depth = 0.575400806155;
    msg.alt = 0.0925599123311;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.659630834211);
    msg.setSource(20612U);
    msg.setSourceEntity(143U);
    msg.setDestination(42035U);
    msg.setDestinationEntity(119U);
    msg.x = 0.63693594793;
    msg.y = 0.24591510944;
    msg.z = 0.178097785366;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.329764449191);
    msg.setSource(16705U);
    msg.setSourceEntity(233U);
    msg.setDestination(9495U);
    msg.setDestinationEntity(118U);
    msg.x = 0.802592284805;
    msg.y = 0.366137687997;
    msg.z = 0.530629112574;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.960636613606);
    msg.setSource(64714U);
    msg.setSourceEntity(212U);
    msg.setDestination(1704U);
    msg.setDestinationEntity(154U);
    msg.x = 0.489846051603;
    msg.y = 0.215034405824;
    msg.z = 0.747610625626;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.757160641564);
    msg.setSource(45156U);
    msg.setSourceEntity(235U);
    msg.setDestination(45577U);
    msg.setDestinationEntity(73U);
    msg.value = 0.916239436745;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.779702392946);
    msg.setSource(22936U);
    msg.setSourceEntity(208U);
    msg.setDestination(37285U);
    msg.setDestinationEntity(11U);
    msg.value = 0.097680437965;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.257102150656);
    msg.setSource(9419U);
    msg.setSourceEntity(29U);
    msg.setDestination(24916U);
    msg.setDestinationEntity(217U);
    msg.value = 0.0924946447106;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.445583465116);
    msg.setSource(19105U);
    msg.setSourceEntity(33U);
    msg.setDestination(50162U);
    msg.setDestinationEntity(171U);
    msg.value = 0.623971339077;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.718398442461);
    msg.setSource(9986U);
    msg.setSourceEntity(239U);
    msg.setDestination(62984U);
    msg.setDestinationEntity(28U);
    msg.value = 0.228447393887;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.209752220484);
    msg.setSource(6218U);
    msg.setSourceEntity(239U);
    msg.setDestination(61576U);
    msg.setDestinationEntity(26U);
    msg.value = 0.128822783133;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.663246934216);
    msg.setSource(15008U);
    msg.setSourceEntity(240U);
    msg.setDestination(40975U);
    msg.setDestinationEntity(50U);
    msg.x = 0.969460230175;
    msg.y = 0.80990701207;
    msg.z = 0.970021588003;
    msg.phi = 0.904520413917;
    msg.theta = 0.648314271736;
    msg.psi = 0.669051180604;
    msg.p = 0.399449423312;
    msg.q = 0.191053883257;
    msg.r = 0.809237048654;
    msg.u = 0.322832101021;
    msg.v = 0.485309107517;
    msg.w = 0.592737763174;
    msg.bias_psi = 0.218313187333;
    msg.bias_r = 0.44012262889;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.18842566989);
    msg.setSource(44710U);
    msg.setSourceEntity(87U);
    msg.setDestination(19364U);
    msg.setDestinationEntity(82U);
    msg.x = 0.647639685384;
    msg.y = 0.260352302654;
    msg.z = 0.961546656254;
    msg.phi = 0.963798648812;
    msg.theta = 0.586670228743;
    msg.psi = 0.281148692458;
    msg.p = 0.90902984642;
    msg.q = 0.541230131573;
    msg.r = 0.305031449129;
    msg.u = 0.255889846245;
    msg.v = 0.709985720031;
    msg.w = 0.00771623452251;
    msg.bias_psi = 0.380022976203;
    msg.bias_r = 0.0350850439533;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.579768138758);
    msg.setSource(64211U);
    msg.setSourceEntity(140U);
    msg.setDestination(25326U);
    msg.setDestinationEntity(183U);
    msg.x = 0.140299039698;
    msg.y = 0.363699400858;
    msg.z = 0.446222642273;
    msg.phi = 0.0225231104937;
    msg.theta = 0.0647317643933;
    msg.psi = 0.582476264171;
    msg.p = 0.830945142274;
    msg.q = 0.113872629076;
    msg.r = 0.87477773992;
    msg.u = 0.216387492199;
    msg.v = 0.457040121773;
    msg.w = 0.441470078401;
    msg.bias_psi = 0.95252705219;
    msg.bias_r = 0.364725099598;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.0286763834293);
    msg.setSource(29690U);
    msg.setSourceEntity(251U);
    msg.setDestination(15858U);
    msg.setDestinationEntity(93U);
    msg.bias_psi = 0.0851282134475;
    msg.bias_r = 0.618880881708;
    msg.cog = 0.534772271341;
    msg.cyaw = 0.361471215076;
    msg.lbl_rej_level = 0.350502032679;
    msg.gps_rej_level = 0.70956708466;
    msg.custom_x = 0.644612273038;
    msg.custom_y = 0.697296236267;
    msg.custom_z = 0.0154652751068;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.847828425098);
    msg.setSource(25867U);
    msg.setSourceEntity(247U);
    msg.setDestination(65171U);
    msg.setDestinationEntity(121U);
    msg.bias_psi = 0.152907574514;
    msg.bias_r = 0.0599003683682;
    msg.cog = 0.643426651203;
    msg.cyaw = 0.241227797735;
    msg.lbl_rej_level = 0.0291938092521;
    msg.gps_rej_level = 0.625972273246;
    msg.custom_x = 0.18680019953;
    msg.custom_y = 0.749785575885;
    msg.custom_z = 0.0996942399159;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.159199830967);
    msg.setSource(7210U);
    msg.setSourceEntity(36U);
    msg.setDestination(30422U);
    msg.setDestinationEntity(186U);
    msg.bias_psi = 0.73062199052;
    msg.bias_r = 0.890325067495;
    msg.cog = 0.202593692024;
    msg.cyaw = 0.22795262418;
    msg.lbl_rej_level = 0.355144956875;
    msg.gps_rej_level = 0.766974198099;
    msg.custom_x = 0.0271740313741;
    msg.custom_y = 0.824877349957;
    msg.custom_z = 0.743861769761;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.0344694962086);
    msg.setSource(54079U);
    msg.setSourceEntity(234U);
    msg.setDestination(36215U);
    msg.setDestinationEntity(204U);
    msg.utc_time = 0.529743571335;
    msg.reason = 109U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.365098493952);
    msg.setSource(53902U);
    msg.setSourceEntity(14U);
    msg.setDestination(36104U);
    msg.setDestinationEntity(45U);
    msg.utc_time = 0.0893046030747;
    msg.reason = 97U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.0747515314001);
    msg.setSource(35305U);
    msg.setSourceEntity(177U);
    msg.setDestination(29219U);
    msg.setDestinationEntity(182U);
    msg.utc_time = 0.786023975679;
    msg.reason = 85U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.525967134868);
    msg.setSource(9519U);
    msg.setSourceEntity(32U);
    msg.setDestination(23943U);
    msg.setDestinationEntity(140U);
    msg.id = 37U;
    msg.range = 0.943497745371;
    msg.acceptance = 103U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.309532941353);
    msg.setSource(6073U);
    msg.setSourceEntity(9U);
    msg.setDestination(37224U);
    msg.setDestinationEntity(235U);
    msg.id = 244U;
    msg.range = 0.607733999593;
    msg.acceptance = 96U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.550493349236);
    msg.setSource(37552U);
    msg.setSourceEntity(29U);
    msg.setDestination(53530U);
    msg.setDestinationEntity(0U);
    msg.id = 92U;
    msg.range = 0.194731093324;
    msg.acceptance = 97U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.446400703037);
    msg.setSource(2552U);
    msg.setSourceEntity(3U);
    msg.setDestination(2440U);
    msg.setDestinationEntity(204U);
    msg.type = 1U;
    msg.reason = 225U;
    msg.value = 0.184893182445;
    msg.timestep = 0.680158199234;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.887265562434);
    msg.setSource(3703U);
    msg.setSourceEntity(126U);
    msg.setDestination(49115U);
    msg.setDestinationEntity(22U);
    msg.type = 87U;
    msg.reason = 232U;
    msg.value = 0.772049851698;
    msg.timestep = 0.0294080745364;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.885880085516);
    msg.setSource(4676U);
    msg.setSourceEntity(222U);
    msg.setDestination(44120U);
    msg.setDestinationEntity(238U);
    msg.type = 191U;
    msg.reason = 236U;
    msg.value = 0.611951208531;
    msg.timestep = 0.828130160525;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.962659796239);
    msg.setSource(46740U);
    msg.setSourceEntity(82U);
    msg.setDestination(44741U);
    msg.setDestinationEntity(72U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NYOHHQUJGEFJXDFWFJALHIGAUQRJEXDTXPMUFIICKWAVAS");
    tmp_msg_0.lat = 0.960748472336;
    tmp_msg_0.lon = 0.0862972582718;
    tmp_msg_0.depth = 0.85650020125;
    tmp_msg_0.query_channel = 42U;
    tmp_msg_0.reply_channel = 218U;
    tmp_msg_0.transponder_delay = 158U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.107618974433;
    msg.y = 0.131995218363;
    msg.var_x = 0.967922412472;
    msg.var_y = 0.201547156457;
    msg.distance = 0.258004307083;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.914620237473);
    msg.setSource(60178U);
    msg.setSourceEntity(101U);
    msg.setDestination(62274U);
    msg.setDestinationEntity(116U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WHWHJGUFLRTYASUCOXARVWZKDJXSOMLNSQCUKWSRTBNMZLVKUDBGOKFTIEBFQDGQYELMXFAAWDUNOHEAQPIAFEPBVWOWCTIMBXNYXGVETMLWNFYVMQRIOPWGCARA");
    tmp_msg_0.lat = 0.61683065222;
    tmp_msg_0.lon = 0.210002019579;
    tmp_msg_0.depth = 0.0023925756727;
    tmp_msg_0.query_channel = 207U;
    tmp_msg_0.reply_channel = 83U;
    tmp_msg_0.transponder_delay = 104U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.530503057611;
    msg.y = 0.308520310483;
    msg.var_x = 0.543297766855;
    msg.var_y = 0.127246681801;
    msg.distance = 0.794384739014;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.358478942054);
    msg.setSource(56281U);
    msg.setSourceEntity(14U);
    msg.setDestination(6702U);
    msg.setDestinationEntity(9U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QILOFZNPHDGKGCVVIOFJUAWAVZSDOVIGNOZORLBIQFMLBMHKTIOBHQQBECPNNYYVPGQCPORDNJALVWCRCYKWRFBEZKASZJWDWHYPGSBZHWEBULGRYMYLELEGJEKEXTTEAUGXLVVASJYPDOMWLZUTIEFXAGLDGBOVWJAUMPJRWUKCMXHPKTKJPBHXFIMJWPNXQFSDFHCRDBHRSUMSZJRAURSKDXIQYDOTXETFNAUFZIYT");
    tmp_msg_0.lat = 0.0658362666938;
    tmp_msg_0.lon = 0.228648130427;
    tmp_msg_0.depth = 0.291971534755;
    tmp_msg_0.query_channel = 176U;
    tmp_msg_0.reply_channel = 202U;
    tmp_msg_0.transponder_delay = 166U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.74997051411;
    msg.y = 0.516034711759;
    msg.var_x = 0.247630864908;
    msg.var_y = 0.88432582332;
    msg.distance = 0.678661917371;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.0771150727097);
    msg.setSource(65440U);
    msg.setSourceEntity(225U);
    msg.setDestination(56455U);
    msg.setDestinationEntity(100U);
    msg.state = 191U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.0698118262586);
    msg.setSource(20207U);
    msg.setSourceEntity(97U);
    msg.setDestination(14082U);
    msg.setDestinationEntity(253U);
    msg.state = 126U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.918889630455);
    msg.setSource(382U);
    msg.setSourceEntity(136U);
    msg.setDestination(57464U);
    msg.setDestinationEntity(48U);
    msg.state = 81U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.85025290786);
    msg.setSource(59304U);
    msg.setSourceEntity(58U);
    msg.setDestination(35154U);
    msg.setDestinationEntity(59U);
    msg.x = 0.0444581387542;
    msg.y = 0.573766679596;
    msg.z = 0.173633280233;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.694511210302);
    msg.setSource(50372U);
    msg.setSourceEntity(91U);
    msg.setDestination(42185U);
    msg.setDestinationEntity(247U);
    msg.x = 0.335523257345;
    msg.y = 0.874317584444;
    msg.z = 0.438941699204;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.327396710629);
    msg.setSource(7308U);
    msg.setSourceEntity(219U);
    msg.setDestination(51258U);
    msg.setDestinationEntity(227U);
    msg.x = 0.74754582983;
    msg.y = 0.993285439538;
    msg.z = 0.00020273690873;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.235453263023);
    msg.setSource(17495U);
    msg.setSourceEntity(9U);
    msg.setDestination(57058U);
    msg.setDestinationEntity(247U);
    msg.va = 0.296489421757;
    msg.aoa = 0.858949927883;
    msg.ssa = 0.713720840332;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.047307825013);
    msg.setSource(39770U);
    msg.setSourceEntity(22U);
    msg.setDestination(59016U);
    msg.setDestinationEntity(78U);
    msg.va = 0.254799587425;
    msg.aoa = 0.0932826535961;
    msg.ssa = 0.890282489902;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.823571981994);
    msg.setSource(28168U);
    msg.setSourceEntity(222U);
    msg.setDestination(31552U);
    msg.setDestinationEntity(252U);
    msg.va = 0.934845984291;
    msg.aoa = 0.562442804045;
    msg.ssa = 0.0340768720035;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.88993281064);
    msg.setSource(11346U);
    msg.setSourceEntity(196U);
    msg.setDestination(45244U);
    msg.setDestinationEntity(23U);
    msg.value = 0.407479550908;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.687911832334);
    msg.setSource(7289U);
    msg.setSourceEntity(124U);
    msg.setDestination(18942U);
    msg.setDestinationEntity(38U);
    msg.value = 0.446632574658;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.295017879164);
    msg.setSource(57023U);
    msg.setSourceEntity(45U);
    msg.setDestination(7324U);
    msg.setDestinationEntity(6U);
    msg.value = 0.951496850341;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.0656345618075);
    msg.setSource(30488U);
    msg.setSourceEntity(135U);
    msg.setDestination(27985U);
    msg.setDestinationEntity(139U);
    msg.value = 0.525297010526;
    msg.z_units = 152U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.0561935487486);
    msg.setSource(41618U);
    msg.setSourceEntity(187U);
    msg.setDestination(50254U);
    msg.setDestinationEntity(202U);
    msg.value = 0.204749118146;
    msg.z_units = 234U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.335104794999);
    msg.setSource(62797U);
    msg.setSourceEntity(202U);
    msg.setDestination(82U);
    msg.setDestinationEntity(215U);
    msg.value = 0.758590759614;
    msg.z_units = 131U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.480553947532);
    msg.setSource(29828U);
    msg.setSourceEntity(115U);
    msg.setDestination(18941U);
    msg.setDestinationEntity(18U);
    msg.value = 0.549191910019;
    msg.speed_units = 70U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.382578651198);
    msg.setSource(32583U);
    msg.setSourceEntity(83U);
    msg.setDestination(40885U);
    msg.setDestinationEntity(11U);
    msg.value = 0.0441192681298;
    msg.speed_units = 15U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.0672851602441);
    msg.setSource(43724U);
    msg.setSourceEntity(181U);
    msg.setDestination(64117U);
    msg.setDestinationEntity(228U);
    msg.value = 0.482787578578;
    msg.speed_units = 116U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.720288782591);
    msg.setSource(6809U);
    msg.setSourceEntity(101U);
    msg.setDestination(54031U);
    msg.setDestinationEntity(41U);
    msg.value = 0.95837033675;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.11376286709);
    msg.setSource(26405U);
    msg.setSourceEntity(45U);
    msg.setDestination(8824U);
    msg.setDestinationEntity(89U);
    msg.value = 0.26480861651;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.971856213169);
    msg.setSource(49866U);
    msg.setSourceEntity(192U);
    msg.setDestination(41319U);
    msg.setDestinationEntity(174U);
    msg.value = 0.0862388404421;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.194618179052);
    msg.setSource(34808U);
    msg.setSourceEntity(42U);
    msg.setDestination(30471U);
    msg.setDestinationEntity(170U);
    msg.value = 0.51115875485;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.662110494042);
    msg.setSource(61444U);
    msg.setSourceEntity(242U);
    msg.setDestination(32188U);
    msg.setDestinationEntity(253U);
    msg.value = 0.00108504203675;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.623586820848);
    msg.setSource(37674U);
    msg.setSourceEntity(247U);
    msg.setDestination(52885U);
    msg.setDestinationEntity(206U);
    msg.value = 0.539132764971;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.168821624381);
    msg.setSource(3776U);
    msg.setSourceEntity(27U);
    msg.setDestination(16000U);
    msg.setDestinationEntity(37U);
    msg.value = 0.952545482458;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.53184907059);
    msg.setSource(14904U);
    msg.setSourceEntity(101U);
    msg.setDestination(1845U);
    msg.setDestinationEntity(55U);
    msg.value = 0.613070805475;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.0350175146422);
    msg.setSource(58781U);
    msg.setSourceEntity(38U);
    msg.setDestination(25895U);
    msg.setDestinationEntity(113U);
    msg.value = 0.392808394188;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.824713492413);
    msg.setSource(55921U);
    msg.setSourceEntity(225U);
    msg.setDestination(49181U);
    msg.setDestinationEntity(98U);
    msg.path_ref = 1037760146U;
    msg.start_lat = 0.741072859401;
    msg.start_lon = 0.280132647124;
    msg.start_z = 0.0765144446783;
    msg.start_z_units = 207U;
    msg.end_lat = 0.880854546405;
    msg.end_lon = 0.10427119188;
    msg.end_z = 0.242093964662;
    msg.end_z_units = 171U;
    msg.speed = 0.968103268104;
    msg.speed_units = 84U;
    msg.lradius = 0.630099019737;
    msg.flags = 92U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.903796161486);
    msg.setSource(1373U);
    msg.setSourceEntity(94U);
    msg.setDestination(48495U);
    msg.setDestinationEntity(69U);
    msg.path_ref = 750245895U;
    msg.start_lat = 0.319326796939;
    msg.start_lon = 0.512134574059;
    msg.start_z = 0.939335758401;
    msg.start_z_units = 145U;
    msg.end_lat = 0.873065561465;
    msg.end_lon = 0.481640579197;
    msg.end_z = 0.436578730438;
    msg.end_z_units = 4U;
    msg.speed = 0.602025886679;
    msg.speed_units = 117U;
    msg.lradius = 0.275379903777;
    msg.flags = 23U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.728774808648);
    msg.setSource(62397U);
    msg.setSourceEntity(189U);
    msg.setDestination(64887U);
    msg.setDestinationEntity(52U);
    msg.path_ref = 2366584759U;
    msg.start_lat = 0.0994659676269;
    msg.start_lon = 0.165885449247;
    msg.start_z = 0.220498537865;
    msg.start_z_units = 90U;
    msg.end_lat = 0.776927803962;
    msg.end_lon = 0.632008576524;
    msg.end_z = 0.119038276174;
    msg.end_z_units = 226U;
    msg.speed = 0.125650931978;
    msg.speed_units = 238U;
    msg.lradius = 0.606067779195;
    msg.flags = 166U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.335223133469);
    msg.setSource(9088U);
    msg.setSourceEntity(92U);
    msg.setDestination(40150U);
    msg.setDestinationEntity(143U);
    msg.x = 0.566686632851;
    msg.y = 0.706244802645;
    msg.z = 0.921129835129;
    msg.k = 0.0480811440763;
    msg.m = 0.243434171229;
    msg.n = 0.485209607156;
    msg.flags = 183U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.205684072749);
    msg.setSource(12250U);
    msg.setSourceEntity(60U);
    msg.setDestination(29886U);
    msg.setDestinationEntity(252U);
    msg.x = 0.539009856982;
    msg.y = 0.921780899513;
    msg.z = 0.529463796691;
    msg.k = 0.839045895376;
    msg.m = 0.203774785589;
    msg.n = 0.929162437687;
    msg.flags = 169U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.0695033931205);
    msg.setSource(30897U);
    msg.setSourceEntity(23U);
    msg.setDestination(5973U);
    msg.setDestinationEntity(0U);
    msg.x = 0.271061048434;
    msg.y = 0.110126112781;
    msg.z = 0.353769569454;
    msg.k = 0.861362161575;
    msg.m = 0.779176474917;
    msg.n = 0.783149880023;
    msg.flags = 172U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.849810834856);
    msg.setSource(33773U);
    msg.setSourceEntity(97U);
    msg.setDestination(12211U);
    msg.setDestinationEntity(58U);
    msg.value = 0.253878179106;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.313618470631);
    msg.setSource(35148U);
    msg.setSourceEntity(118U);
    msg.setDestination(60177U);
    msg.setDestinationEntity(250U);
    msg.value = 0.240041179867;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.832346599151);
    msg.setSource(32274U);
    msg.setSourceEntity(205U);
    msg.setDestination(53094U);
    msg.setDestinationEntity(207U);
    msg.value = 0.911967143581;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.409552031366);
    msg.setSource(54451U);
    msg.setSourceEntity(220U);
    msg.setDestination(8803U);
    msg.setDestinationEntity(137U);
    msg.u = 0.679254751088;
    msg.v = 0.45044191845;
    msg.w = 0.297063070571;
    msg.p = 0.228112827479;
    msg.q = 0.0901791083734;
    msg.r = 0.516053165168;
    msg.flags = 69U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.644289089225);
    msg.setSource(56302U);
    msg.setSourceEntity(165U);
    msg.setDestination(62402U);
    msg.setDestinationEntity(43U);
    msg.u = 0.920321814611;
    msg.v = 0.82023621165;
    msg.w = 0.957200106519;
    msg.p = 0.0923885537742;
    msg.q = 0.288095932483;
    msg.r = 0.249420569822;
    msg.flags = 48U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.545566000954);
    msg.setSource(9066U);
    msg.setSourceEntity(226U);
    msg.setDestination(61744U);
    msg.setDestinationEntity(197U);
    msg.u = 0.0536414537274;
    msg.v = 0.733042373132;
    msg.w = 0.389988668049;
    msg.p = 0.323338748948;
    msg.q = 0.768401751788;
    msg.r = 0.62843215124;
    msg.flags = 237U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.193349364759);
    msg.setSource(49592U);
    msg.setSourceEntity(90U);
    msg.setDestination(51173U);
    msg.setDestinationEntity(128U);
    msg.path_ref = 2560982493U;
    msg.start_lat = 0.0196058509467;
    msg.start_lon = 0.893204348323;
    msg.start_z = 0.9837887317;
    msg.start_z_units = 178U;
    msg.end_lat = 0.979798573844;
    msg.end_lon = 0.191172428642;
    msg.end_z = 0.569512016273;
    msg.end_z_units = 119U;
    msg.lradius = 0.433784907599;
    msg.flags = 145U;
    msg.x = 0.0482600493457;
    msg.y = 0.629308315368;
    msg.z = 0.712119587537;
    msg.vx = 0.516579429468;
    msg.vy = 0.680522828115;
    msg.vz = 0.934338323856;
    msg.course_error = 0.229113054239;
    msg.eta = 40627U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.826249360475);
    msg.setSource(20202U);
    msg.setSourceEntity(199U);
    msg.setDestination(24686U);
    msg.setDestinationEntity(170U);
    msg.path_ref = 55886188U;
    msg.start_lat = 0.410319596583;
    msg.start_lon = 0.878268282352;
    msg.start_z = 0.744472655012;
    msg.start_z_units = 61U;
    msg.end_lat = 0.880809780336;
    msg.end_lon = 0.36392481344;
    msg.end_z = 0.712129334201;
    msg.end_z_units = 230U;
    msg.lradius = 0.506238732953;
    msg.flags = 149U;
    msg.x = 0.275530667776;
    msg.y = 0.193343468892;
    msg.z = 0.475954874428;
    msg.vx = 0.555000904789;
    msg.vy = 0.501584561211;
    msg.vz = 0.982108724739;
    msg.course_error = 0.758107031804;
    msg.eta = 14732U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.574960187332);
    msg.setSource(58088U);
    msg.setSourceEntity(105U);
    msg.setDestination(43912U);
    msg.setDestinationEntity(140U);
    msg.path_ref = 2500506391U;
    msg.start_lat = 0.450259762151;
    msg.start_lon = 0.496351408902;
    msg.start_z = 0.815212886738;
    msg.start_z_units = 33U;
    msg.end_lat = 0.0204085951881;
    msg.end_lon = 0.271749720181;
    msg.end_z = 0.605829604953;
    msg.end_z_units = 9U;
    msg.lradius = 0.503046405021;
    msg.flags = 17U;
    msg.x = 0.615961731305;
    msg.y = 0.574054495694;
    msg.z = 0.278160921744;
    msg.vx = 0.302056623205;
    msg.vy = 0.00395648722046;
    msg.vz = 0.153214425318;
    msg.course_error = 0.673868579893;
    msg.eta = 8893U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.608458876648);
    msg.setSource(28150U);
    msg.setSourceEntity(80U);
    msg.setDestination(34324U);
    msg.setDestinationEntity(245U);
    msg.k = 0.996096647186;
    msg.m = 0.132354449979;
    msg.n = 0.584618109055;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.0517569009276);
    msg.setSource(27778U);
    msg.setSourceEntity(191U);
    msg.setDestination(24371U);
    msg.setDestinationEntity(157U);
    msg.k = 0.0782991946316;
    msg.m = 0.83798848529;
    msg.n = 0.738362895079;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.911360521754);
    msg.setSource(54656U);
    msg.setSourceEntity(239U);
    msg.setDestination(59836U);
    msg.setDestinationEntity(152U);
    msg.k = 0.667890039514;
    msg.m = 0.344083525673;
    msg.n = 0.608785863145;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.667181042649);
    msg.setSource(15114U);
    msg.setSourceEntity(124U);
    msg.setDestination(39865U);
    msg.setDestinationEntity(74U);
    msg.p = 0.810963456881;
    msg.i = 0.906683119274;
    msg.d = 0.380006024143;
    msg.a = 0.823594123698;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.125942549184);
    msg.setSource(42934U);
    msg.setSourceEntity(195U);
    msg.setDestination(49709U);
    msg.setDestinationEntity(80U);
    msg.p = 0.229749936601;
    msg.i = 0.118666664156;
    msg.d = 0.67305590077;
    msg.a = 0.111090287083;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.549922055629);
    msg.setSource(56948U);
    msg.setSourceEntity(65U);
    msg.setDestination(50996U);
    msg.setDestinationEntity(50U);
    msg.p = 0.375420412991;
    msg.i = 0.20339770628;
    msg.d = 0.50754015095;
    msg.a = 0.129850158824;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.465552270424);
    msg.setSource(13022U);
    msg.setSourceEntity(74U);
    msg.setDestination(3687U);
    msg.setDestinationEntity(1U);
    msg.op = 28U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.561497236648);
    msg.setSource(42607U);
    msg.setSourceEntity(79U);
    msg.setDestination(30660U);
    msg.setDestinationEntity(146U);
    msg.op = 236U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.836707874582);
    msg.setSource(9845U);
    msg.setSourceEntity(18U);
    msg.setDestination(50804U);
    msg.setDestinationEntity(46U);
    msg.op = 212U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.369712737807);
    msg.setSource(5628U);
    msg.setSourceEntity(215U);
    msg.setDestination(41704U);
    msg.setDestinationEntity(74U);
    msg.x = 0.277950674646;
    msg.y = 0.952955325064;
    msg.z = 0.503013777709;
    msg.vx = 0.655580649326;
    msg.vy = 0.22429781409;
    msg.vz = 0.878506896194;
    msg.ax = 0.557815381048;
    msg.ay = 0.230956362026;
    msg.az = 0.790953089635;
    msg.flags = 13805U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.368913571252);
    msg.setSource(23340U);
    msg.setSourceEntity(166U);
    msg.setDestination(28743U);
    msg.setDestinationEntity(252U);
    msg.x = 0.33725067733;
    msg.y = 0.594098922093;
    msg.z = 0.942605405382;
    msg.vx = 0.243077578446;
    msg.vy = 0.313891076093;
    msg.vz = 0.158745945834;
    msg.ax = 0.796655530896;
    msg.ay = 0.398138137511;
    msg.az = 0.881940156966;
    msg.flags = 2502U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.889840727219);
    msg.setSource(48105U);
    msg.setSourceEntity(13U);
    msg.setDestination(29511U);
    msg.setDestinationEntity(158U);
    msg.x = 0.379692603896;
    msg.y = 0.702783313326;
    msg.z = 0.490215687274;
    msg.vx = 0.416386312857;
    msg.vy = 0.789357673226;
    msg.vz = 0.889459413726;
    msg.ax = 0.099303064784;
    msg.ay = 0.559663215221;
    msg.az = 0.782562334029;
    msg.flags = 39933U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.72434240292);
    msg.setSource(41690U);
    msg.setSourceEntity(173U);
    msg.setDestination(53733U);
    msg.setDestinationEntity(5U);
    msg.value = 0.691359069629;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.678803253143);
    msg.setSource(6955U);
    msg.setSourceEntity(35U);
    msg.setDestination(7654U);
    msg.setDestinationEntity(232U);
    msg.value = 0.827785086176;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.988883887443);
    msg.setSource(24387U);
    msg.setSourceEntity(67U);
    msg.setDestination(46207U);
    msg.setDestinationEntity(37U);
    msg.value = 0.200660815307;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.226826615426);
    msg.setSource(36602U);
    msg.setSourceEntity(141U);
    msg.setDestination(32017U);
    msg.setDestinationEntity(234U);
    msg.timeout = 52188U;
    msg.lat = 0.085747260959;
    msg.lon = 0.196740513561;
    msg.z = 0.31868337384;
    msg.z_units = 58U;
    msg.speed = 0.228974836432;
    msg.speed_units = 191U;
    msg.roll = 0.585235215914;
    msg.pitch = 0.50563155552;
    msg.yaw = 0.765206614215;
    msg.custom.assign("BNUENRQJLFQTOPKNTHYCZZUYBXUXZCIGPWXGVLDZIMDEWYAWJAAQUMDTBVCOAOXDWALBMACHSOEZSDOLONBPLZMYNEXYOFHDVJYWIVFGTWCMMVLVNNGPSHRFCZMNREKYGSKOKUSQFJESPHQRHBIHIBMARJAQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.138350524008);
    msg.setSource(7878U);
    msg.setSourceEntity(198U);
    msg.setDestination(60821U);
    msg.setDestinationEntity(196U);
    msg.timeout = 53381U;
    msg.lat = 0.324992110181;
    msg.lon = 0.172261011527;
    msg.z = 0.5432613083;
    msg.z_units = 25U;
    msg.speed = 0.966771752475;
    msg.speed_units = 142U;
    msg.roll = 0.75531086097;
    msg.pitch = 0.573928207629;
    msg.yaw = 0.234861153666;
    msg.custom.assign("XOXVCZPREZPCOKPJNXYMCDQFPZIHDTMWCVVCJPHHOIYDEAAZAGKNELZTNYGFHAXBDJXKRKFGBLVPQUJPWQVHRMTLUFMSBFZBIKCTUKSROSVASTLZTCNUASXLZWMIMOJLD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.662130317108);
    msg.setSource(27690U);
    msg.setSourceEntity(231U);
    msg.setDestination(47548U);
    msg.setDestinationEntity(1U);
    msg.timeout = 40601U;
    msg.lat = 0.0217325093006;
    msg.lon = 0.173341149311;
    msg.z = 0.0520286837828;
    msg.z_units = 50U;
    msg.speed = 0.155554756303;
    msg.speed_units = 248U;
    msg.roll = 0.393218286802;
    msg.pitch = 0.467327839536;
    msg.yaw = 0.504995798846;
    msg.custom.assign("NNAJPUQHSNUXMVUIZPDYBMUWJPJAIGXORGEIVVHSBXWDZHKNKALTWMK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.355514437707);
    msg.setSource(9899U);
    msg.setSourceEntity(208U);
    msg.setDestination(54717U);
    msg.setDestinationEntity(23U);
    msg.timeout = 65323U;
    msg.lat = 0.288130718455;
    msg.lon = 0.87660877939;
    msg.z = 0.888172530409;
    msg.z_units = 7U;
    msg.speed = 0.737076795105;
    msg.speed_units = 34U;
    msg.duration = 41933U;
    msg.radius = 0.841458685656;
    msg.flags = 145U;
    msg.custom.assign("YNLOOHEFSBAWBRGVFRDWQFDYCDXWCRQTSUKUYRIAPEYBBRFZNCKCHPPWGZFLXDFDRSOXZPYVAJMNEVFEHLOBJZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.462353602891);
    msg.setSource(31426U);
    msg.setSourceEntity(57U);
    msg.setDestination(23883U);
    msg.setDestinationEntity(254U);
    msg.timeout = 41910U;
    msg.lat = 0.828304505716;
    msg.lon = 0.779281753778;
    msg.z = 0.998215344751;
    msg.z_units = 219U;
    msg.speed = 0.64244369937;
    msg.speed_units = 243U;
    msg.duration = 54673U;
    msg.radius = 0.393171433102;
    msg.flags = 132U;
    msg.custom.assign("ZZKJBRCJCXBBRPMKORVTLAFFHEZPKWYVNRUEDNZQOWNPPICSCOIMTYOYYQXTUPGTJBLDDKUFYRPMHREDSXAVJDQWFMMIUACCBJDVHMOWPAYDKMGIUQCRNCORZEMDSSIQOGGVEOICXLUEZNZNQLTYWMHNGNLZIRPKTKVAXBSHXSYOVWUTFTH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.982825994685);
    msg.setSource(20146U);
    msg.setSourceEntity(219U);
    msg.setDestination(16307U);
    msg.setDestinationEntity(18U);
    msg.timeout = 44758U;
    msg.lat = 0.693580789286;
    msg.lon = 0.0775289575558;
    msg.z = 0.477941640776;
    msg.z_units = 108U;
    msg.speed = 0.343965389903;
    msg.speed_units = 188U;
    msg.duration = 30949U;
    msg.radius = 0.447717084849;
    msg.flags = 113U;
    msg.custom.assign("TVBNZOBOEDUEJGHX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.322824887594);
    msg.setSource(18113U);
    msg.setSourceEntity(112U);
    msg.setDestination(62429U);
    msg.setDestinationEntity(20U);
    msg.custom.assign("FZTVINWPWSSAMBGGPEUNECWBHMYJWVROGYTIFMHSIBXNNHPMRHKIMEULJJRTWOMYGAUCMXIAZZSQLHYLNXLYJSFSGTEAOFKAUVQFOJQXVKYQRNUFL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.410168570002);
    msg.setSource(52686U);
    msg.setSourceEntity(159U);
    msg.setDestination(42458U);
    msg.setDestinationEntity(60U);
    msg.custom.assign("HAOSQWHIQUDKBSSRYRBDWAHREDNGBWSUBEXQKFPQO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.968639560399);
    msg.setSource(20083U);
    msg.setSourceEntity(134U);
    msg.setDestination(6596U);
    msg.setDestinationEntity(128U);
    msg.custom.assign("QTBHUUVIGEYJGEPQWPMRFOKLIIFZAYQKOATTBYXRJVYPTXPCORBHDSAWXFGNPQZWKNKYUUAYWJDYCAVLKQTIZULEZCGZKZNCRRURMWNYNXJNHGCEONWNHZGCQVMRSFZGPPODWWGVBEKTQFSFUTX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.0914024910045);
    msg.setSource(31067U);
    msg.setSourceEntity(174U);
    msg.setDestination(6294U);
    msg.setDestinationEntity(61U);
    msg.timeout = 35406U;
    msg.lat = 0.0768675556971;
    msg.lon = 0.970216950559;
    msg.z = 0.87897581982;
    msg.z_units = 32U;
    msg.duration = 32612U;
    msg.speed = 0.659642397619;
    msg.speed_units = 144U;
    msg.type = 244U;
    msg.radius = 0.154895767973;
    msg.length = 0.647959915541;
    msg.bearing = 0.837041787575;
    msg.direction = 82U;
    msg.custom.assign("TZXIMYPBYDSGHCYJFSKWVBPWGSONCVNJEAJRKIPFLNYYRZRXQCAFGSNBMSEOCGZHOZETUPZKWQOEVFDVXXYLVOLUVZBOWVYLLSDAUSCBTKTUAWNWPBMHIVPPKEJHKLNBFGJUNAHGSYCHLEQIBMDGGAWZVEZOQPCMBIITQKXATWEXMUZMUXAYXCEKIDNQUFHOVJOH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.493566214645);
    msg.setSource(2687U);
    msg.setSourceEntity(215U);
    msg.setDestination(24012U);
    msg.setDestinationEntity(168U);
    msg.timeout = 19231U;
    msg.lat = 0.960723810709;
    msg.lon = 0.312236613009;
    msg.z = 0.398044451788;
    msg.z_units = 170U;
    msg.duration = 41072U;
    msg.speed = 0.334615688737;
    msg.speed_units = 20U;
    msg.type = 23U;
    msg.radius = 0.802052757261;
    msg.length = 0.1324810367;
    msg.bearing = 0.805442769317;
    msg.direction = 207U;
    msg.custom.assign("KELDKFOIKVPQTTHNEIYMRSPXLUJGZTPMYNMUZNMEFSAQORBOWSNHYCIRKZUEDRWGOBWOIGGE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.564167987304);
    msg.setSource(16492U);
    msg.setSourceEntity(139U);
    msg.setDestination(62354U);
    msg.setDestinationEntity(112U);
    msg.timeout = 36640U;
    msg.lat = 0.885370713858;
    msg.lon = 0.561854360366;
    msg.z = 0.976824280992;
    msg.z_units = 82U;
    msg.duration = 61099U;
    msg.speed = 0.51138809061;
    msg.speed_units = 206U;
    msg.type = 207U;
    msg.radius = 0.727691547818;
    msg.length = 0.886361566863;
    msg.bearing = 0.597342879643;
    msg.direction = 46U;
    msg.custom.assign("ACBTZDMNOWWVOLVATLFUYKUL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.36717550288);
    msg.setSource(47630U);
    msg.setSourceEntity(6U);
    msg.setDestination(34846U);
    msg.setDestinationEntity(110U);
    msg.duration = 28733U;
    msg.custom.assign("MPYGCKDGZZXTKVJLHVJRWDEHASEPZOIMGADZKXWVRTBAOEBHTSFMDXIOBFCKLLTUCASHTGLWHXOVCPZWCUWSDJXLQATZJIKNSKF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.513015416039);
    msg.setSource(22293U);
    msg.setSourceEntity(166U);
    msg.setDestination(43458U);
    msg.setDestinationEntity(65U);
    msg.duration = 57190U;
    msg.custom.assign("RNVQZSCLZZKJUQGRYTGROXDPKKDECUGYVSTHIDNFHWMNAZBZCGRUUDJTITQEZUFBMAWGE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.727772471709);
    msg.setSource(27870U);
    msg.setSourceEntity(185U);
    msg.setDestination(60372U);
    msg.setDestinationEntity(193U);
    msg.duration = 9962U;
    msg.custom.assign("VHPDAGZEJEYKAXLUBEIDFFOZJEGBVQWTMRVHTEIVRYNYRNADT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.282672067807);
    msg.setSource(55719U);
    msg.setSourceEntity(144U);
    msg.setDestination(51088U);
    msg.setDestinationEntity(24U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.888437458085;
    msg.control.set(tmp_msg_0);
    msg.duration = 9184U;
    msg.custom.assign("BOJXUJGLDJYZPQJNNOJAQEGCGVWNRXMZUFESOLSPQAUUUFTHEKRECVUPYVMQKXFWYFABMZESDAHRRNWXFXYQDQSZYPMOSDDDMCTQTWXWMKTIHLNVJPHWK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.981242403085);
    msg.setSource(58821U);
    msg.setSourceEntity(155U);
    msg.setDestination(3281U);
    msg.setDestinationEntity(248U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.957273407389;
    msg.control.set(tmp_msg_0);
    msg.duration = 30186U;
    msg.custom.assign("CMIYWNMHSWXVTQFGIQYBPILLJVCMQWDYTNZCMIAMFETCXYZNDEYWKMEJFVGUAGOCWLMUSAHJOHWHEHIEPRANMGXIIXVUZCHQPOIDOJLTTBGVGHFVAZUXJMNESDSKSGLCXXAQXVGRTIRKGSBYRPDPZDOLWBUXJCFJFZNYSOTPFAUQJUODBNYIQVBONRSESJKUHDOZWBDZXACPQFBHWKKDELLVTC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.710520786435);
    msg.setSource(39454U);
    msg.setSourceEntity(66U);
    msg.setDestination(52707U);
    msg.setDestinationEntity(170U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.51303577226;
    msg.control.set(tmp_msg_0);
    msg.duration = 6392U;
    msg.custom.assign("HJQVCOENGHJFGJAPBMZEUKZYTCCPSJCIPDOZLXYZAAWUAQZKIVISOFWWOSUMSVNMQFMDOCRJOFYJLEELONSWMBMIGPCUSXZCRWIKYKHPOXKXHUHUTMXUZMKKBYVUYNTLFLHNFTXDTXXLETQVGWNDBRYCDORDNDIBH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.993175031818);
    msg.setSource(55613U);
    msg.setSourceEntity(235U);
    msg.setDestination(63544U);
    msg.setDestinationEntity(32U);
    msg.timeout = 44479U;
    msg.lat = 0.877935369392;
    msg.lon = 0.37582626056;
    msg.z = 0.773062355861;
    msg.z_units = 213U;
    msg.speed = 0.980784961596;
    msg.speed_units = 197U;
    msg.bearing = 0.581021505918;
    msg.cross_angle = 0.55573030622;
    msg.width = 0.445347246917;
    msg.length = 0.944235754484;
    msg.hstep = 0.523015417026;
    msg.coff = 75U;
    msg.alternation = 224U;
    msg.flags = 184U;
    msg.custom.assign("DYKMZXBUWLUMINSXQTJROPEYUIAFVEOUYUNYVALKEKVHSKOQWAFPIAFGIUPPCRYABKBVOXZRGGNSBMCPGNXZBGVHQHRJJMRDCMTLDJERCSHYOAYAAZOBFHJOFSRNXHEFQTXGGVWVTBLIRUQZCLQBWZXHDBSKSMTKNYKOLZSETPDQHGPPADFKTLIOYJCVNEVRDJISMNND");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.260158142223);
    msg.setSource(34068U);
    msg.setSourceEntity(251U);
    msg.setDestination(19469U);
    msg.setDestinationEntity(62U);
    msg.timeout = 25040U;
    msg.lat = 0.0695732486853;
    msg.lon = 0.277493963163;
    msg.z = 0.502620052748;
    msg.z_units = 203U;
    msg.speed = 0.0248368136873;
    msg.speed_units = 195U;
    msg.bearing = 0.236053438355;
    msg.cross_angle = 0.113012503361;
    msg.width = 0.671400538559;
    msg.length = 0.940643551261;
    msg.hstep = 0.974314124918;
    msg.coff = 13U;
    msg.alternation = 40U;
    msg.flags = 32U;
    msg.custom.assign("MKSWKJRVRDDHJFNBPJBQPVXZANYOZFGTHFDC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.693768139785);
    msg.setSource(18861U);
    msg.setSourceEntity(34U);
    msg.setDestination(32828U);
    msg.setDestinationEntity(35U);
    msg.timeout = 32356U;
    msg.lat = 0.984294161491;
    msg.lon = 0.00681166805171;
    msg.z = 0.71519543858;
    msg.z_units = 247U;
    msg.speed = 0.869685761439;
    msg.speed_units = 166U;
    msg.bearing = 0.802083387207;
    msg.cross_angle = 0.741570348811;
    msg.width = 0.0913934115661;
    msg.length = 0.432730753424;
    msg.hstep = 0.523579946804;
    msg.coff = 181U;
    msg.alternation = 152U;
    msg.flags = 21U;
    msg.custom.assign("PTEQQWZARCJGNXFYOLYOPGTRCBXHCOWBGRUGPZPGDXETM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.877572958231);
    msg.setSource(37711U);
    msg.setSourceEntity(177U);
    msg.setDestination(49925U);
    msg.setDestinationEntity(106U);
    msg.timeout = 4379U;
    msg.lat = 0.74080178168;
    msg.lon = 0.329499332193;
    msg.z = 0.433192025451;
    msg.z_units = 179U;
    msg.speed = 0.273232979893;
    msg.speed_units = 130U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.799955813677;
    tmp_msg_0.y = 0.793085746976;
    tmp_msg_0.z = 0.0570082811526;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VMESJTFBEJWMENBLTFMRZRPKLYHLRIFQQHZRKGNTCLLOXOUCXKKUSYLCZISBMAAUMQSDVCEUGYZWLOOANDPFMJGEFYQNSWKWQZYOHPQXUAERLAVDOSDRFGXKJGAWUOLHPVMBSNHMHAXFRNKHTUDIHUCTTWPKGFIJQHJUNQUTCBIEPFRVGKYZDODIXGCSAHLVZJWNMXYTOQWIEZSNBJRVCFPYVAOBTXDGXYBXIKNRVCPMSWEIBCE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.20425167683);
    msg.setSource(37925U);
    msg.setSourceEntity(133U);
    msg.setDestination(33294U);
    msg.setDestinationEntity(77U);
    msg.timeout = 62918U;
    msg.lat = 0.545340761434;
    msg.lon = 0.157171641919;
    msg.z = 0.749709061549;
    msg.z_units = 232U;
    msg.speed = 0.219873257969;
    msg.speed_units = 189U;
    msg.custom.assign("BOCNSNZTWDISWNVEETQRBNMKJLBPJSDQXKWKJIGXBDYIXNYLPURJUEQIGXNTXMHPQLPVJPYKWAZYUFDZZUFKHLBSBMVMTGBVQBCXRCQIOUMXCHCQJTLTCYNDCWGSDLHAAMEOXRBTAZXTGFFVISOFVPHEDOOAUPYYRZFHAQJBAKGKUMNLLAOISEDFQP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.306404888289);
    msg.setSource(28390U);
    msg.setSourceEntity(198U);
    msg.setDestination(16749U);
    msg.setDestinationEntity(234U);
    msg.timeout = 41751U;
    msg.lat = 0.507718349498;
    msg.lon = 0.348883546164;
    msg.z = 0.353375347611;
    msg.z_units = 208U;
    msg.speed = 0.646110553151;
    msg.speed_units = 1U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.792082219461;
    tmp_msg_0.y = 0.796787398832;
    tmp_msg_0.z = 0.701744488127;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TCYJDTEZASIRZYHWUJDNWESMGHBRTCXSGNZJWFBNBCSAQZNKBYKFWVHIWUWVGVPTCEVFGRMYFZKWOPFMBUPAGDTKPVQYEKVSHEYIPJMNVZVIJCOZLCLXSSSNLKFXPEIMLKBYPFUMDB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.831995228939);
    msg.setSource(18601U);
    msg.setSourceEntity(117U);
    msg.setDestination(21061U);
    msg.setDestinationEntity(154U);
    msg.x = 0.239378731495;
    msg.y = 0.872970145521;
    msg.z = 0.0627131642349;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.46118458435);
    msg.setSource(52199U);
    msg.setSourceEntity(67U);
    msg.setDestination(1908U);
    msg.setDestinationEntity(0U);
    msg.x = 0.036064734896;
    msg.y = 0.9805838013;
    msg.z = 0.068882249497;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.935867093333);
    msg.setSource(47509U);
    msg.setSourceEntity(23U);
    msg.setDestination(35602U);
    msg.setDestinationEntity(78U);
    msg.x = 0.422243767584;
    msg.y = 0.0293234557465;
    msg.z = 0.90391528955;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.207041197848);
    msg.setSource(48824U);
    msg.setSourceEntity(187U);
    msg.setDestination(65208U);
    msg.setDestinationEntity(124U);
    msg.timeout = 58248U;
    msg.lat = 0.271317907283;
    msg.lon = 0.321633177378;
    msg.z = 0.392335891479;
    msg.z_units = 215U;
    msg.amplitude = 0.628267721791;
    msg.pitch = 0.872298950572;
    msg.speed = 0.91319313354;
    msg.speed_units = 11U;
    msg.custom.assign("VSTJSVDJCYBQIOCWHNYUTWYLXLPMBAGGLXYPONNCBNVTNFOMBSVFHFNKNWIAPEPFNULNHBYQXDUF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.88118819722);
    msg.setSource(50015U);
    msg.setSourceEntity(239U);
    msg.setDestination(45549U);
    msg.setDestinationEntity(232U);
    msg.timeout = 63070U;
    msg.lat = 0.228939150297;
    msg.lon = 0.674338504436;
    msg.z = 0.656873419529;
    msg.z_units = 214U;
    msg.amplitude = 0.79431413649;
    msg.pitch = 0.798915856263;
    msg.speed = 0.798845666916;
    msg.speed_units = 56U;
    msg.custom.assign("ZOHWPTIGKODVCHGJGVJFAWXNJJGNVRQYGSOKQQGWRLYCYLFEXDZTGDKQOGXDKMEIJBYKZUDZNXQSARANLKDSPITBXAXUXZPZWYCCOWQJLFHYVB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.0718191926516);
    msg.setSource(16349U);
    msg.setSourceEntity(233U);
    msg.setDestination(41617U);
    msg.setDestinationEntity(64U);
    msg.timeout = 45593U;
    msg.lat = 0.420086673481;
    msg.lon = 0.83221528793;
    msg.z = 0.694677953308;
    msg.z_units = 171U;
    msg.amplitude = 0.989724325573;
    msg.pitch = 0.34278886118;
    msg.speed = 0.544101215737;
    msg.speed_units = 153U;
    msg.custom.assign("LPGUUHDSRYBXXNUCJCPTKZPNJQOFYOKWDAQFVMFSIZBPRAHEYSWZGKUO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.839743967747);
    msg.setSource(46720U);
    msg.setSourceEntity(190U);
    msg.setDestination(2845U);
    msg.setDestinationEntity(224U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.538494166872);
    msg.setSource(7059U);
    msg.setSourceEntity(108U);
    msg.setDestination(20187U);
    msg.setDestinationEntity(37U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.549934320767);
    msg.setSource(42753U);
    msg.setSourceEntity(119U);
    msg.setDestination(55815U);
    msg.setDestinationEntity(154U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.853352594138);
    msg.setSource(60528U);
    msg.setSourceEntity(60U);
    msg.setDestination(58956U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.961287247529;
    msg.lon = 0.746560391864;
    msg.z = 0.272170579119;
    msg.z_units = 32U;
    msg.radius = 0.00668208487797;
    msg.duration = 43036U;
    msg.speed = 0.280568010025;
    msg.speed_units = 43U;
    msg.custom.assign("MGDIVIFSZZUFCKFYEKJVTQUUYJGDTWOJBRWMMOYBQELMZWULKROCLNKNBKYGUJFWTEWWDZDXYPWDSNJOSASPOJKEQQNOHMAOQNPFUUGYIGMVVVINSRWLDLJIEBCMITOBNMC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.855268788206);
    msg.setSource(35665U);
    msg.setSourceEntity(30U);
    msg.setDestination(47838U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.248699737536;
    msg.lon = 0.899729378319;
    msg.z = 0.16647629515;
    msg.z_units = 222U;
    msg.radius = 0.76801625055;
    msg.duration = 34546U;
    msg.speed = 0.868309957795;
    msg.speed_units = 180U;
    msg.custom.assign("AQFCIRZHUHVCMDKPKUWFKDRCIDNBLVMSMYHLHMNZFYPEJGKPQZTLPFQNLINSXTGCVYUQLXONIPAXBWVKM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.867068101665);
    msg.setSource(64975U);
    msg.setSourceEntity(59U);
    msg.setDestination(28044U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.430598348221;
    msg.lon = 0.692876503418;
    msg.z = 0.938656002028;
    msg.z_units = 253U;
    msg.radius = 0.472043133458;
    msg.duration = 38937U;
    msg.speed = 0.189256036055;
    msg.speed_units = 114U;
    msg.custom.assign("KGQJYZIPTKIIBRHOEZYVALLGNJMPVARVUPMYCFMWIOATDRJEFDSTBUHNUOCXFDXOTDNSGSKHFUYZEVKQLCWNKGTOTPRXEWQFNWNFTENHQFRPUFGXRSUXHEAIDIPWWBWRGOJVQYABTAXYIKOFLSJJZMQLEVQWPLSQKZDMMNALXYBDCXSM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.464167671644);
    msg.setSource(10489U);
    msg.setSourceEntity(55U);
    msg.setDestination(20603U);
    msg.setDestinationEntity(222U);
    msg.timeout = 1274U;
    msg.flags = 134U;
    msg.lat = 0.292786000828;
    msg.lon = 0.746622302891;
    msg.start_z = 0.94218331895;
    msg.start_z_units = 237U;
    msg.end_z = 0.179315614982;
    msg.end_z_units = 232U;
    msg.radius = 0.153847671992;
    msg.speed = 0.492175526733;
    msg.speed_units = 25U;
    msg.custom.assign("YBTDLAWTCVDQCBROGQWZSFNCCHROSWGZMARLKBEDGWTJXQJRYAPETWVHEUOPTDXMHPNJLFKCGPNLJLHZGWJQXRBABDVNIOUWVZRHJKNTLSEUIECUIBLRMOJJVOLYRMIUTGYVKOXECZZKJMDRFDUQXPANYW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.382734998895);
    msg.setSource(26707U);
    msg.setSourceEntity(209U);
    msg.setDestination(62226U);
    msg.setDestinationEntity(169U);
    msg.timeout = 40475U;
    msg.flags = 86U;
    msg.lat = 0.702478507202;
    msg.lon = 0.55369515249;
    msg.start_z = 0.874401930131;
    msg.start_z_units = 225U;
    msg.end_z = 0.374982597244;
    msg.end_z_units = 114U;
    msg.radius = 0.104317629718;
    msg.speed = 0.104298590038;
    msg.speed_units = 177U;
    msg.custom.assign("YFATFIHXMGJTUMXIHNANOPWGAXEFPOKZSWXCSMWUJGLYXEGPQMXBBWDHSNUBJXOOUTVGRPCVNIAOSHZLAELUYVRRSABIYGUCQFMCNKLRYBHJELOLRST");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.334759418711);
    msg.setSource(49U);
    msg.setSourceEntity(42U);
    msg.setDestination(32292U);
    msg.setDestinationEntity(248U);
    msg.timeout = 42422U;
    msg.flags = 65U;
    msg.lat = 0.164091827174;
    msg.lon = 0.484751932347;
    msg.start_z = 0.590972506924;
    msg.start_z_units = 242U;
    msg.end_z = 0.492982518088;
    msg.end_z_units = 225U;
    msg.radius = 0.907223249813;
    msg.speed = 0.868784228981;
    msg.speed_units = 35U;
    msg.custom.assign("OPFVRACSQWVAOYXLTZTUBLRPKTFLPMOIQQUQQNSRWWKEKWGUEJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.582460972782);
    msg.setSource(8714U);
    msg.setSourceEntity(19U);
    msg.setDestination(32865U);
    msg.setDestinationEntity(225U);
    msg.timeout = 57644U;
    msg.lat = 0.744605795715;
    msg.lon = 0.149271229432;
    msg.z = 0.903118896783;
    msg.z_units = 219U;
    msg.speed = 0.157754913723;
    msg.speed_units = 217U;
    msg.custom.assign("TXRYASJKYDFICZTUCKQHJAUXWRYVYPVXCQVSOJJAOTIGYVYZWGPMBEMOERWCFKQHFZXPXFSEJGMKUFUXWGIVRULLCUCZVHNWOCNXLNNHBKXWMELWMNZNMJLYCVLEQIFSSECKLPGBRSDBIADPSWFEWNCHZBJKBATGAZMIISLVSTBMGVARDKZTHPQPMJMODBPFFOHBTBQPZEKHNTTZJYIRUDNIYPAOULGWHAVKEDSEIOXRRQQJDATQGNLGYRQX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.280186304116);
    msg.setSource(14206U);
    msg.setSourceEntity(209U);
    msg.setDestination(19265U);
    msg.setDestinationEntity(161U);
    msg.timeout = 24063U;
    msg.lat = 0.722110865188;
    msg.lon = 0.807487461238;
    msg.z = 0.372343346013;
    msg.z_units = 77U;
    msg.speed = 0.0943148917153;
    msg.speed_units = 246U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.955181795084;
    tmp_msg_0.y = 0.440363217125;
    tmp_msg_0.z = 0.476749771064;
    tmp_msg_0.t = 0.389931497076;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("DULPSXQLLEENZFWBZEFLUTHMIMRGCCQFUJZCFLOTZFLXHBUAGZNSVHVATODWRYXDZHSVEYIYBRERHMMOIGYYYNJZDRJWOWPQNXOPUKHHVKNPKKQMYALWNKPBICJNIIVTULZATBNGXZTMDVUBKVCGBGERXJCPASKMRZYCIMXHQMENGAPKSSFEFQDRAIFSVDXVIKPJPXOSQGFXAWTGPFSDEJHCUWOYVTWROCOJNCODWKGJAEBLWQMURHLIDBT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.969358818357);
    msg.setSource(26097U);
    msg.setSourceEntity(240U);
    msg.setDestination(48704U);
    msg.setDestinationEntity(48U);
    msg.timeout = 60489U;
    msg.lat = 0.774174258726;
    msg.lon = 0.198231705884;
    msg.z = 0.11152514236;
    msg.z_units = 121U;
    msg.speed = 0.199684905022;
    msg.speed_units = 135U;
    msg.custom.assign("GYBHKEAWGSFKLULIESMKDDIUYZLONSMOLGDOFEJBOTWFEHXMXLBQFQZCNDOXIVBXYEYSPTDURXNANFPBWHYMEJZPDVBNRKLIDAVMXZJDQVHSISMYCMWYGOKXAEXQEMTTLBVXIARUFPZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.180472485341);
    msg.setSource(40894U);
    msg.setSourceEntity(117U);
    msg.setDestination(57465U);
    msg.setDestinationEntity(45U);
    msg.x = 0.57909434589;
    msg.y = 0.966131671097;
    msg.z = 0.12584246335;
    msg.t = 0.00700114963325;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.954005376726);
    msg.setSource(33871U);
    msg.setSourceEntity(213U);
    msg.setDestination(62562U);
    msg.setDestinationEntity(155U);
    msg.x = 0.320965710407;
    msg.y = 0.123239563627;
    msg.z = 0.936679626531;
    msg.t = 0.99682276509;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.273629175164);
    msg.setSource(51532U);
    msg.setSourceEntity(140U);
    msg.setDestination(3541U);
    msg.setDestinationEntity(111U);
    msg.x = 0.505381633262;
    msg.y = 0.870562224453;
    msg.z = 0.601493508413;
    msg.t = 0.352275128259;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.983587447277);
    msg.setSource(44101U);
    msg.setSourceEntity(68U);
    msg.setDestination(105U);
    msg.setDestinationEntity(242U);
    msg.timeout = 23274U;
    msg.name.assign("LFMDKQYMVWVJETSFMDCTEV");
    msg.custom.assign("DUERUJZJIXOLSXPLAVMRPAMRKNWJWCILMQFBLPOHKIWXDKOOIGEBIYTPFMTZCLXYKJLSVBHXYGDKEJDBTADUMVUVRFKKZBSVAWBWREQSNGDGAWTNODCVEZLUESYCIREUPLLYCABKOZHFMLNIMPHQI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.413750366735);
    msg.setSource(34554U);
    msg.setSourceEntity(91U);
    msg.setDestination(14049U);
    msg.setDestinationEntity(57U);
    msg.timeout = 33948U;
    msg.name.assign("NKMWAHXKXSIIDTXFGDQSFWQIWKEUKTBDJIBTGY");
    msg.custom.assign("ENRXIXHTTEQVIVUBSHPXNZFKKBEOHRXJYVAOFNKANMOSOAEPCYCSQWTGUMUTGYBLZUJILKGDFXHDRFHQGRUXPSTHDCDDMGACNNKKSRVSTPZETBPYSJGPATZJCNFDNVWOQKMDPCZIEE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.954184674453);
    msg.setSource(48343U);
    msg.setSourceEntity(252U);
    msg.setDestination(27173U);
    msg.setDestinationEntity(6U);
    msg.timeout = 4540U;
    msg.name.assign("BLQSMAVJUNDSXRTCYUQRQMMQPBERKWFVNOZDEAYTECRAJNKYBPVYJLBIDZINBHFALUUAHDTPYCOGTNWVEBIQEBMJUXZHGZZQLKMKPDWGTWIHYMZYFKCOJECHLNRUSBSGHBGQRAXKKDOPWOIJWWEDUNUGNVMXZJQFMMVGVWWKFSXUZGHTYRUQDKJWTCFIR");
    msg.custom.assign("FXPKHPQRRZNKXOQCDQUFMNYXVWGNQJJKIWVCORHAOZRBQSBWTIESOSXPTRGDWLJVUSPPZASUPJEAYTMRPJHKNFFIOKNCMCQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.355994259445);
    msg.setSource(63822U);
    msg.setSourceEntity(200U);
    msg.setDestination(20866U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.923269813789;
    msg.lon = 0.631784770695;
    msg.z = 0.325316002129;
    msg.z_units = 111U;
    msg.speed = 0.545965222328;
    msg.speed_units = 205U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.780777318063;
    tmp_msg_0.y = 0.966868538942;
    tmp_msg_0.z = 0.350960069763;
    tmp_msg_0.t = 0.770174979966;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.643906732877;
    msg.custom.assign("HAXKJMFGQBGVSODDFIPVDLWWORFVZFLZIVNHBAYOUVRSJNPJDNSCDCOKAXCFETRYWLTTYPEXSDLIEILZIVUAYPNDUMAIBXPH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.150513313669);
    msg.setSource(60406U);
    msg.setSourceEntity(56U);
    msg.setDestination(51766U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.871025613943;
    msg.lon = 0.0198763312252;
    msg.z = 0.00456550653135;
    msg.z_units = 176U;
    msg.speed = 0.963565225262;
    msg.speed_units = 99U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.133778591788;
    tmp_msg_0.y = 0.734115272625;
    tmp_msg_0.z = 0.772122897523;
    tmp_msg_0.t = 0.00305034040989;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.607006866271;
    msg.custom.assign("ZOMCRJRCJQTYOVQMSHGBTWCKSFJQXEIZGYSTPMWNPOKYOHNNCCCXGMQWVJODSISWVPTMGMEBNARWDRGSBILDVPCZKULZIQLQPRGXFHWYYLXIJSFAWPNZQTCRNOIUUHUFASLUGVBPLPWJLUGKTNXYKVBKDXOOIBRHBVFWNADMIQMIDJBXKCZZJGEAVYNERDOQFX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.549547767264);
    msg.setSource(16215U);
    msg.setSourceEntity(92U);
    msg.setDestination(28435U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.0251171972843;
    msg.lon = 0.877995461728;
    msg.z = 0.201958535506;
    msg.z_units = 231U;
    msg.speed = 0.205844294017;
    msg.speed_units = 44U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.230370913666;
    tmp_msg_0.y = 0.384335602467;
    tmp_msg_0.z = 0.298245285227;
    tmp_msg_0.t = 0.181408453417;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 42285U;
    tmp_msg_1.off_x = 0.990780936064;
    tmp_msg_1.off_y = 0.14740171075;
    tmp_msg_1.off_z = 0.610317258063;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.445003904565;
    msg.custom.assign("WTKGGTGUIWYEPMWVGXENUXSOXLGKBUXVRCKWPYKKFLLMSSSPOCAEZCZXIXRXWQNPQSZRJQGETSFQADMZWJFTBWUTLCPIYBIJAKOOCMQBUHJNXOBVAQDEIVHTBWHUOGCRTBOMRPZFLUNVNFMHWRAYYQCKGIOECDYEPPHFDKQAVZEMACLRMGHNSJT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.145085173916);
    msg.setSource(56103U);
    msg.setSourceEntity(189U);
    msg.setDestination(46153U);
    msg.setDestinationEntity(207U);
    msg.vid = 64358U;
    msg.off_x = 0.673460052935;
    msg.off_y = 0.485362333756;
    msg.off_z = 0.965165656429;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.0115966085085);
    msg.setSource(55124U);
    msg.setSourceEntity(149U);
    msg.setDestination(39377U);
    msg.setDestinationEntity(127U);
    msg.vid = 65448U;
    msg.off_x = 0.288906821562;
    msg.off_y = 0.673017736818;
    msg.off_z = 0.157632013087;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.177790456795);
    msg.setSource(3285U);
    msg.setSourceEntity(177U);
    msg.setDestination(34510U);
    msg.setDestinationEntity(121U);
    msg.vid = 10805U;
    msg.off_x = 0.087578937305;
    msg.off_y = 0.76095060231;
    msg.off_z = 0.255037580144;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.192241671328);
    msg.setSource(17788U);
    msg.setSourceEntity(150U);
    msg.setDestination(30522U);
    msg.setDestinationEntity(97U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.35883666337);
    msg.setSource(31121U);
    msg.setSourceEntity(120U);
    msg.setDestination(3183U);
    msg.setDestinationEntity(229U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.459985610222);
    msg.setSource(11949U);
    msg.setSourceEntity(109U);
    msg.setDestination(56257U);
    msg.setDestinationEntity(156U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.0851250478611);
    msg.setSource(15132U);
    msg.setSourceEntity(88U);
    msg.setDestination(12638U);
    msg.setDestinationEntity(40U);
    msg.mid = 31589U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.957409589451);
    msg.setSource(31476U);
    msg.setSourceEntity(228U);
    msg.setDestination(30510U);
    msg.setDestinationEntity(25U);
    msg.mid = 22011U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.218944366801);
    msg.setSource(30414U);
    msg.setSourceEntity(14U);
    msg.setDestination(10467U);
    msg.setDestinationEntity(194U);
    msg.mid = 36656U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.398990956573);
    msg.setSource(9829U);
    msg.setSourceEntity(74U);
    msg.setDestination(42579U);
    msg.setDestinationEntity(47U);
    msg.state = 92U;
    msg.eta = 22138U;
    msg.info.assign("EOLRWVULDIVBNCVHSYTHGJAKJPETXMEIGGBGBSCUIZNFKFRPCXUVCUCYGTAFWCRBJTOJCUPZAZUQZZNDERUKXNAPAAFANVWPXQRTMOXBXUVOMWQSSNHJJJLGCYFXYAEWVVXIAOYHENBAUTFPWTHDDWBPYRGWWURHOQK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.608800211292);
    msg.setSource(15598U);
    msg.setSourceEntity(55U);
    msg.setDestination(49765U);
    msg.setDestinationEntity(61U);
    msg.state = 228U;
    msg.eta = 35608U;
    msg.info.assign("SWRGFUIPHPHGXZWRDRSDGKLYOAOBZBAYDXNVGUYEIHJLLQDRMLAHHWVJLWHFNAJGICEWMOZJYBWIPQJJTFRZJWLLAQBBTOFQBKXIFECKRHOHHWGZOLFBGYADBNCTNYKQUYSJSPCVEQNLVCMUTJONPFRMMBTVTPNDEAIUFQGMWAXXKMYTPMIYXCE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.61782852953);
    msg.setSource(46166U);
    msg.setSourceEntity(254U);
    msg.setDestination(47991U);
    msg.setDestinationEntity(38U);
    msg.state = 140U;
    msg.eta = 8282U;
    msg.info.assign("LDVOUHOQQMRXNJFFGBYQBSXIAVKMEYBGQBPNKZNQUPNAVDSDUEKYUWAHOOPJOBERRJHIEZUOXUWJYYXCJBLDFOMPNVLPTAJZIXCWUELKCLQMCTZOVXILFKFHHJIMFJQTRPSODRWISTJSWGMAVZHGHPQLESCDGZTAYRLCWSMVJQRKWNGIFCKYTKDYKAXESHNKLWXPGPFGTEURDTZWRHPBAXICBHYMTABIG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.566829532281);
    msg.setSource(13565U);
    msg.setSourceEntity(140U);
    msg.setDestination(23124U);
    msg.setDestinationEntity(148U);
    msg.system = 33433U;
    msg.duration = 16075U;
    msg.speed = 0.182539159518;
    msg.speed_units = 212U;
    msg.x = 0.116051543748;
    msg.y = 0.3491655569;
    msg.z = 0.816588170833;
    msg.z_units = 77U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.273991734226);
    msg.setSource(44547U);
    msg.setSourceEntity(87U);
    msg.setDestination(40734U);
    msg.setDestinationEntity(212U);
    msg.system = 34443U;
    msg.duration = 18847U;
    msg.speed = 0.0530445877391;
    msg.speed_units = 76U;
    msg.x = 0.688724082659;
    msg.y = 0.935276368081;
    msg.z = 0.0258453745081;
    msg.z_units = 91U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.758371212368);
    msg.setSource(25537U);
    msg.setSourceEntity(14U);
    msg.setDestination(49632U);
    msg.setDestinationEntity(94U);
    msg.system = 11009U;
    msg.duration = 53187U;
    msg.speed = 0.90092013709;
    msg.speed_units = 147U;
    msg.x = 0.925917125083;
    msg.y = 0.25139742601;
    msg.z = 0.210706756645;
    msg.z_units = 197U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.0766785656568);
    msg.setSource(52353U);
    msg.setSourceEntity(239U);
    msg.setDestination(41197U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.371022977643;
    msg.lon = 0.316409524594;
    msg.speed = 0.261705827631;
    msg.speed_units = 191U;
    msg.duration = 30248U;
    msg.sys_a = 9289U;
    msg.sys_b = 51963U;
    msg.move_threshold = 0.877250758843;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.55889164992);
    msg.setSource(42460U);
    msg.setSourceEntity(130U);
    msg.setDestination(4129U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.670263349362;
    msg.lon = 0.95624139647;
    msg.speed = 0.333221080376;
    msg.speed_units = 249U;
    msg.duration = 28601U;
    msg.sys_a = 29449U;
    msg.sys_b = 13190U;
    msg.move_threshold = 0.492389902061;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.845959449474);
    msg.setSource(46436U);
    msg.setSourceEntity(7U);
    msg.setDestination(25989U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.750070946206;
    msg.lon = 0.618104012086;
    msg.speed = 0.999674178854;
    msg.speed_units = 153U;
    msg.duration = 56871U;
    msg.sys_a = 3611U;
    msg.sys_b = 60216U;
    msg.move_threshold = 0.743284781825;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.134918020923);
    msg.setSource(36850U);
    msg.setSourceEntity(114U);
    msg.setDestination(22291U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.643257134131;
    msg.lon = 0.288590713791;
    msg.z = 0.373370599202;
    msg.z_units = 150U;
    msg.speed = 0.811348513166;
    msg.speed_units = 232U;
    msg.custom.assign("OYVUJPIEWIQDBGYCWANAIFUMBKSTKCYZTXCZFYNTVTJZGRVLKXSGMTAIWP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.961752163117);
    msg.setSource(32534U);
    msg.setSourceEntity(73U);
    msg.setDestination(57588U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.79263705527;
    msg.lon = 0.895450558957;
    msg.z = 0.118299598383;
    msg.z_units = 31U;
    msg.speed = 0.290923069942;
    msg.speed_units = 224U;
    msg.custom.assign("OPFTVQDLBQPETYFOJWUBADEIRQJN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.0266354280286);
    msg.setSource(53865U);
    msg.setSourceEntity(193U);
    msg.setDestination(43142U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.332603850766;
    msg.lon = 0.748669143324;
    msg.z = 0.612151775779;
    msg.z_units = 62U;
    msg.speed = 0.477010284024;
    msg.speed_units = 84U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.275747744056;
    tmp_msg_0.lon = 0.66004801077;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("RCKTDJATRQPQPEKEXMRIRNRBFMHNXKJPZVDCFQOHXIGTGGGMVJRLSHSJXTUHPBGHBBYTCJNCEPCNAVEEBOPLNORATJFSRTYLIGPCIZCSZTUDTCAYIDMLIYFHUSZVPZGVSSN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.45309937885);
    msg.setSource(14253U);
    msg.setSourceEntity(188U);
    msg.setDestination(14011U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.364355301559;
    msg.lon = 0.437457816362;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.316659022815);
    msg.setSource(17324U);
    msg.setSourceEntity(191U);
    msg.setDestination(3949U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.834965931721;
    msg.lon = 0.823505460052;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.942729726851);
    msg.setSource(1036U);
    msg.setSourceEntity(12U);
    msg.setDestination(3593U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.639359612576;
    msg.lon = 0.276328215517;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.484599091527);
    msg.setSource(56118U);
    msg.setSourceEntity(72U);
    msg.setDestination(55641U);
    msg.setDestinationEntity(102U);
    msg.timeout = 59459U;
    msg.lat = 0.417062907116;
    msg.lon = 0.968803739238;
    msg.z = 0.963098995941;
    msg.z_units = 217U;
    msg.pitch = 0.316244668913;
    msg.amplitude = 0.7626589474;
    msg.duration = 25130U;
    msg.speed = 0.83251799326;
    msg.speed_units = 206U;
    msg.radius = 0.121255666793;
    msg.direction = 131U;
    msg.custom.assign("LJCPBNWIZWNYOWLLNUSZVUCANEAOYKQRDNMQFIAVUGGLSSVQXFEQIZPSWPYVYYPKCGZMOULUKGDFYWWIAEMXXABKPACDAGSFVKUIQRJXGCCNRDWUCWZCTKVOIGJZTFFJDRJJFNZLFRJYWEZLXOHOCHAAMIJXHBXITMQDZGREEPMHTQSPGPJMTWKXMELHVUSLVOPRBHRDAZGFRHJQIYBHEUQTTVNB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.722071516517);
    msg.setSource(50430U);
    msg.setSourceEntity(3U);
    msg.setDestination(9013U);
    msg.setDestinationEntity(55U);
    msg.timeout = 64080U;
    msg.lat = 0.749199978147;
    msg.lon = 0.597065394057;
    msg.z = 0.38702386104;
    msg.z_units = 159U;
    msg.pitch = 0.619997508831;
    msg.amplitude = 0.899976030858;
    msg.duration = 49347U;
    msg.speed = 0.223679895696;
    msg.speed_units = 237U;
    msg.radius = 0.914405983835;
    msg.direction = 142U;
    msg.custom.assign("JEFSTKQUDOQXAXDAULGWPRQRVGJAXEQYTNHCYLOCKREGCMYTLCDLACKMSZKRLJWYVVIZZZTIYVAPSJIOGORAZNWTCGICAFLSUHFMUMWLZLGTJCWIKHCGEUGUUSFKWADFUJFVHDGQXYEVDVBOSMMOBZXZLNDBNJRHQPHKKSNIVKIPNHMPGEVXQRDJPBNVIHOSBSFOEFXJRNPOMXWHEMZFBDBXRPYBP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.506035889142);
    msg.setSource(26641U);
    msg.setSourceEntity(130U);
    msg.setDestination(10646U);
    msg.setDestinationEntity(131U);
    msg.timeout = 36369U;
    msg.lat = 0.0581707452107;
    msg.lon = 0.318069699274;
    msg.z = 0.710814277477;
    msg.z_units = 73U;
    msg.pitch = 0.0712497696621;
    msg.amplitude = 0.159670808545;
    msg.duration = 20529U;
    msg.speed = 0.104506653942;
    msg.speed_units = 53U;
    msg.radius = 0.180104185102;
    msg.direction = 12U;
    msg.custom.assign("BHZZZTCGXSQEESGBQHJABEPXHWUTQGJXISOLOCIJRJHKLCWCLOMHSYAPFNTPIJQLCKNOHEUDOTHZSAJRYMZOZRQPGMAJFBRXLIHWTKKXYEUBBKEZNHPYRGYZITPNADUYVUDCADYNYDIBLMTABCUGMQCGQASMYWTZIXVNUQRXCAEFVUWJMMONDKVSKPXUFJSWGXVTFLVYSLMDKDN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.108585680133);
    msg.setSource(38290U);
    msg.setSourceEntity(82U);
    msg.setDestination(57789U);
    msg.setDestinationEntity(77U);
    msg.formation_name.assign("CUWTPNILCLYXZDFXEVHDRIPRBQJSQPTYKXQGWQUMTDKEKFXWYRNNSWMAPQRDOZGJZVIHWVRQORYGTQXXIMJJAHHNCFXJEHLVKZR");
    msg.reference_frame = 207U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 52756U;
    tmp_msg_0.off_x = 0.628162054815;
    tmp_msg_0.off_y = 0.0719298376428;
    tmp_msg_0.off_z = 0.893894263606;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("LYNCQCAKVPKNCPLOBSECZMSAFVBJXGUNIBVOSFIYCYGOGOFETBENRYNTLMIEDAVCBGAHANUEKZYGJZTMHEZWBOWZDMSVZRPSDPY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.832065551132);
    msg.setSource(22096U);
    msg.setSourceEntity(59U);
    msg.setDestination(17598U);
    msg.setDestinationEntity(243U);
    msg.formation_name.assign("HZTLYJNJCTBRRJLUEXJAUZQACZRCDXZZSNPLQSUQPBUZYXFPHIVKDMIWGNIOHJXYFECMGWLTPXSOQHEMHEWYZFNPTAHWWRJSQWQIKCUWOVVTYDQKKFELTHYMOPFSPRIEMTUINFHJGOGVNUAHYIEMDCPKGTUDXEM");
    msg.reference_frame = 198U;
    msg.custom.assign("HTFIBPOKXUYTJBEIDLROEYUELGJEXGHSTZRTAALEBXFTNDCXEUOZQJRWNYGHKCHFXAACKCVJYERUTIPCGPSDWTLZQQVBDWKKUQRPWBDDUWRXKEFLGILUOVFQOKHBQKJIIBCGHMBYGAKQNVZRUOUAAIKESZHVMMWTMWFVLNJMVWNLYT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.693074632096);
    msg.setSource(40776U);
    msg.setSourceEntity(108U);
    msg.setDestination(2423U);
    msg.setDestinationEntity(7U);
    msg.formation_name.assign("YDROMPVQHOCYRKSIEGBJURKQVZVUENYLBOYFQUY");
    msg.reference_frame = 61U;
    msg.custom.assign("QRSQENOLGHGHCBOSMCSYEBBZIOIMDHNKDIK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.0427662148945);
    msg.setSource(26686U);
    msg.setSourceEntity(6U);
    msg.setDestination(35290U);
    msg.setDestinationEntity(157U);
    msg.group_name.assign("XITREPKFGILJLDC");
    msg.formation_name.assign("WBAVEJLSBLQNILLZWUGFKIIISMFBWCZTHUIDTKRKIOSDQQSRYNEPZXLTIEMDFSBOVRXHTWAMAGGQJPDMGHLUZKRZDZNPFGRL");
    msg.plan_id.assign("UZIAVUXYLFGUYCAGCJIRCXNSOSSYXVYMUKMYZOXLFQGSRQTLLBDMIHMDUKHSPMHVPZIJAEVVNYFJNHCDAHIEQUZLMPUIYDLBVESAPRZOLEPDEGQHKFSGZOCGBWLERIXWORWRTNTYNTGFVBBKXJBFMWVQKIAMOXTRXBSOMYJGQKIYTEKVFQFSHCKEDQUA");
    msg.description.assign("ZTDJAGNDFYLXHRXEHTBOJQDVQYCGKWEJXPCDRLARVH");
    msg.leader_speed = 0.0908648224072;
    msg.leader_bank_lim = 0.0406868568885;
    msg.pos_sim_err_lim = 0.490343628477;
    msg.pos_sim_err_wrn = 0.140785967734;
    msg.pos_sim_err_timeout = 27309U;
    msg.converg_max = 0.325501704863;
    msg.converg_timeout = 63346U;
    msg.comms_timeout = 36224U;
    msg.turb_lim = 0.845178138198;
    msg.custom.assign("FILFEKZCXDCKMQVYPVLJTQSLOQXPPBWJRPZCIVQTEUGADLTDXZMOFWAUEUNWJYAMHLJFGDUJFYABGBGMJMGDVLZHTWKEMTHZQUBYCZYUZRKABSGQOWSCIRWIG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.511566628465);
    msg.setSource(21964U);
    msg.setSourceEntity(7U);
    msg.setDestination(26134U);
    msg.setDestinationEntity(59U);
    msg.group_name.assign("OTEJRTPSQNUIXNMQHHSRYXAKBMHFCQTEWSCQMIPSZLBEVYJWRHGBIKUUHBDIOGKLYV");
    msg.formation_name.assign("VLIUPTYUNAGOZHRLRM");
    msg.plan_id.assign("ZBVUQSBOYOTMYMLDFEGKLGVGKMMNUWULZVDHTZBJCFCZDTBJXSLTCNLBHIJRKGSJSFAROPXYWOYRIFNRJKXIWSEFXHEYUZLUPJPODACMINNQFOAHCBKQGTVQYHVYOVJIABTVWAQXPHXWQLXHRWREAMKNJATUBRCSIZCINSZBEGZTEFUPODSIROPHGBYLGKQQNPGLMJEOUCUIRMYVWDMEEWFPTNPCRYDCGDKMSXHLFWQAHEAXQZ");
    msg.description.assign("KUCDBXOXSBHVGLYMRRUCNWDFSRSTTIJTDHGVPCLMVIPASNEHDFPAPVZOWRIIQRIUXXFYHFTCSBGUTXNYWVOOGNZYUAYTZLBBRLFJQITAJEBNOTBEHOQMLNAMOJJUSJRPLFFIWUXHKXPNSZNKOKELVQDVIQKUNWSDRXYNOZVBDSEZHCQGCGDDAP");
    msg.leader_speed = 0.418188824716;
    msg.leader_bank_lim = 0.357135580863;
    msg.pos_sim_err_lim = 0.320512952008;
    msg.pos_sim_err_wrn = 0.366932544956;
    msg.pos_sim_err_timeout = 39204U;
    msg.converg_max = 0.902270951275;
    msg.converg_timeout = 36772U;
    msg.comms_timeout = 19682U;
    msg.turb_lim = 0.105012635294;
    msg.custom.assign("DTGEPCIPDJIVWAJCIYAQLCEVDPPJXXRQIMUKTAGDWOVTOVKJQBXARKDENUMWHFHNHRHELGVTUUOYIJKESCYBCNGHXMRSQCJYQOGRMGHLVERXYNGZDPCIHAEYLMBEPODFDKBQFAVATAYGKTZTFCQZNTYWKSQTLVWJNXUORJUCEFMFXRSSWNIOFMFTMZGQYQWLSMXGZKLZBUJWXCSZBPP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.586646279382);
    msg.setSource(5813U);
    msg.setSourceEntity(150U);
    msg.setDestination(12147U);
    msg.setDestinationEntity(120U);
    msg.group_name.assign("LLPWCPFWAOHZOIUAGQOZSUGZNEEHGVMFXWECCBBWAHIQLJMWWKSCZARKUFOASMZFYRNHGBBUWXHIKVDKGNINIRAEJLRCFVIQUKRYWXCTNHPMFMVJNETQOULPTYXFBDQJATFDDNMXYFBDCGQETDWRLVLPHSMVKISZPDXWBIYUGUZVGBQJCYHBSRAIPOHYGEPBAHRZKLXOSMJXKNOISDVGYXCQMVRSTMJCAVFETQJJPRXTDLK");
    msg.formation_name.assign("WKIHLQSNQUMOVUHEJTBPGEBJQGGAIKFLGNXSLIWUCYCCBIZBVKALKFCFMFAQANCTNPMOXEODJEYWYTSSRJYVAAPSPHDCXMSPDIBLHKEZARQTNDSXUFOQGRIPBDNMEBWDBDCJWZNZGFFBWCMSJOOUYXHIVRCZ");
    msg.plan_id.assign("STMMIODWRBXOGXWGDPXG");
    msg.description.assign("BVCQLUFPTELHCBOXWGPGFAXZQMVYDWOAJPKZQHZXGWLTFNZETQDQOHHGCEZJCFPIJHHYKZZTUBCMVORGDGHCMPLYUQBLAPERIHNSISDIFCHNPBBOTJMIDJRQBWMLAWBJFNXJOVUXGFR");
    msg.leader_speed = 0.433187327125;
    msg.leader_bank_lim = 0.0731340171811;
    msg.pos_sim_err_lim = 0.421036031563;
    msg.pos_sim_err_wrn = 0.433656502207;
    msg.pos_sim_err_timeout = 45492U;
    msg.converg_max = 0.0353174170952;
    msg.converg_timeout = 40566U;
    msg.comms_timeout = 48650U;
    msg.turb_lim = 0.118906766839;
    msg.custom.assign("CDBTCCZXCRQAWFVUGFWXCEYWNHPXN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.874719785819);
    msg.setSource(38861U);
    msg.setSourceEntity(187U);
    msg.setDestination(48812U);
    msg.setDestinationEntity(190U);
    msg.control_src = 19514U;
    msg.control_ent = 140U;
    msg.timeout = 0.0167037038553;
    msg.loiter_radius = 0.63719475893;
    msg.altitude_interval = 0.40071364446;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.850521845039);
    msg.setSource(61709U);
    msg.setSourceEntity(125U);
    msg.setDestination(50746U);
    msg.setDestinationEntity(192U);
    msg.control_src = 23918U;
    msg.control_ent = 211U;
    msg.timeout = 0.052554905736;
    msg.loiter_radius = 0.168342605275;
    msg.altitude_interval = 0.96538267963;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.0573762167426);
    msg.setSource(61467U);
    msg.setSourceEntity(223U);
    msg.setDestination(31547U);
    msg.setDestinationEntity(56U);
    msg.control_src = 4603U;
    msg.control_ent = 115U;
    msg.timeout = 0.73855676277;
    msg.loiter_radius = 0.661221672903;
    msg.altitude_interval = 0.36110925182;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.435928834805);
    msg.setSource(55449U);
    msg.setSourceEntity(33U);
    msg.setDestination(17410U);
    msg.setDestinationEntity(133U);
    msg.flags = 63U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.539766418549;
    tmp_msg_0.speed_units = 149U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.321257350463;
    tmp_msg_1.z_units = 157U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.958328990586;
    msg.lon = 0.82153244573;
    msg.radius = 0.520695271488;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.781639662987);
    msg.setSource(63541U);
    msg.setSourceEntity(226U);
    msg.setDestination(36373U);
    msg.setDestinationEntity(172U);
    msg.flags = 23U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.714123240622;
    tmp_msg_0.speed_units = 110U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.08432859209;
    tmp_msg_1.z_units = 246U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.528316096613;
    msg.lon = 0.101541236302;
    msg.radius = 0.531396861389;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.360821216726);
    msg.setSource(10429U);
    msg.setSourceEntity(200U);
    msg.setDestination(11273U);
    msg.setDestinationEntity(156U);
    msg.flags = 202U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.290644903419;
    tmp_msg_0.speed_units = 125U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.117244833539;
    tmp_msg_1.z_units = 116U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.638891400417;
    msg.lon = 0.057636389545;
    msg.radius = 0.164811373261;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.763527943872);
    msg.setSource(22040U);
    msg.setSourceEntity(216U);
    msg.setDestination(29185U);
    msg.setDestinationEntity(143U);
    msg.control_src = 11861U;
    msg.control_ent = 140U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 188U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.37068979416;
    tmp_tmp_msg_0_0.speed_units = 223U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.394985014198;
    tmp_tmp_msg_0_1.z_units = 180U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.282540932112;
    tmp_msg_0.lon = 0.340347612904;
    tmp_msg_0.radius = 0.321126854111;
    msg.reference.set(tmp_msg_0);
    msg.state = 245U;
    msg.proximity = 82U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.291171100905);
    msg.setSource(4128U);
    msg.setSourceEntity(146U);
    msg.setDestination(34625U);
    msg.setDestinationEntity(29U);
    msg.control_src = 45245U;
    msg.control_ent = 216U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 43U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.3265977095;
    tmp_tmp_msg_0_0.speed_units = 138U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.250307903271;
    tmp_tmp_msg_0_1.z_units = 83U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0460165291501;
    tmp_msg_0.lon = 0.814659235064;
    tmp_msg_0.radius = 0.51252803183;
    msg.reference.set(tmp_msg_0);
    msg.state = 47U;
    msg.proximity = 207U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.294010898422);
    msg.setSource(65209U);
    msg.setSourceEntity(134U);
    msg.setDestination(23981U);
    msg.setDestinationEntity(142U);
    msg.control_src = 9563U;
    msg.control_ent = 61U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 233U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0128159609421;
    tmp_tmp_msg_0_0.speed_units = 185U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.945443254246;
    tmp_tmp_msg_0_1.z_units = 143U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.410833380245;
    tmp_msg_0.lon = 0.576610594186;
    tmp_msg_0.radius = 0.750011085338;
    msg.reference.set(tmp_msg_0);
    msg.state = 33U;
    msg.proximity = 69U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.438928708232);
    msg.setSource(61177U);
    msg.setSourceEntity(47U);
    msg.setDestination(13842U);
    msg.setDestinationEntity(130U);
    msg.ax_cmd = 0.247684726411;
    msg.ay_cmd = 0.259461295878;
    msg.az_cmd = 0.791316914141;
    msg.ax_des = 0.348849426731;
    msg.ay_des = 0.420473736664;
    msg.az_des = 0.515474148795;
    msg.virt_err_x = 0.524235452276;
    msg.virt_err_y = 0.480216991325;
    msg.virt_err_z = 0.929947864614;
    msg.surf_fdbk_x = 0.926142164598;
    msg.surf_fdbk_y = 0.132775964016;
    msg.surf_fdbk_z = 0.114074906508;
    msg.surf_unkn_x = 0.324571352166;
    msg.surf_unkn_y = 0.189092775733;
    msg.surf_unkn_z = 0.981483748164;
    msg.ss_x = 0.459796307695;
    msg.ss_y = 0.238617669971;
    msg.ss_z = 0.44457994942;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.770587457981);
    msg.setSource(3749U);
    msg.setSourceEntity(0U);
    msg.setDestination(41138U);
    msg.setDestinationEntity(101U);
    msg.ax_cmd = 0.893424596566;
    msg.ay_cmd = 0.71713711265;
    msg.az_cmd = 0.207217902768;
    msg.ax_des = 0.75164091081;
    msg.ay_des = 0.982495857516;
    msg.az_des = 0.774132568693;
    msg.virt_err_x = 0.954826869905;
    msg.virt_err_y = 0.873079538397;
    msg.virt_err_z = 0.446170094379;
    msg.surf_fdbk_x = 0.406221843376;
    msg.surf_fdbk_y = 0.980097298092;
    msg.surf_fdbk_z = 0.30767076868;
    msg.surf_unkn_x = 0.378434962942;
    msg.surf_unkn_y = 0.300677103754;
    msg.surf_unkn_z = 0.0453812017941;
    msg.ss_x = 0.057431305977;
    msg.ss_y = 0.415563533009;
    msg.ss_z = 0.256730768462;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.439145647158);
    msg.setSource(19203U);
    msg.setSourceEntity(248U);
    msg.setDestination(42150U);
    msg.setDestinationEntity(153U);
    msg.ax_cmd = 0.438419670597;
    msg.ay_cmd = 0.919445664924;
    msg.az_cmd = 0.874631188691;
    msg.ax_des = 0.72275622666;
    msg.ay_des = 0.059875969861;
    msg.az_des = 0.836043353749;
    msg.virt_err_x = 0.896434285805;
    msg.virt_err_y = 0.929683082951;
    msg.virt_err_z = 0.442510014614;
    msg.surf_fdbk_x = 0.417598491462;
    msg.surf_fdbk_y = 0.578770143525;
    msg.surf_fdbk_z = 0.0810801830623;
    msg.surf_unkn_x = 0.565135766863;
    msg.surf_unkn_y = 0.847570195549;
    msg.surf_unkn_z = 0.769707562194;
    msg.ss_x = 0.600752269902;
    msg.ss_y = 0.730017734534;
    msg.ss_z = 0.0288158933244;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("JQUQZXZKMHBEWNYBFMCRIWOOHBJYUSAJKAZLOOSGIMMSUONQYOXJGLTRPPGFETXUXCFZWQZNDDUTDAYPTYQSVXMLLPBFDIGEGIDINPABLCPLWQRVAWQCESLSUHVENGAXDTWK");
    tmp_msg_0.dist = 0.843300932465;
    tmp_msg_0.err = 0.83140632373;
    tmp_msg_0.ctrl_imp = 0.381233467187;
    tmp_msg_0.rel_dir_x = 0.547617002799;
    tmp_msg_0.rel_dir_y = 0.942332110141;
    tmp_msg_0.rel_dir_z = 0.876094201941;
    tmp_msg_0.err_x = 0.585006804655;
    tmp_msg_0.err_y = 0.854207843248;
    tmp_msg_0.err_z = 0.51370665186;
    tmp_msg_0.rf_err_x = 0.841867201233;
    tmp_msg_0.rf_err_y = 0.159115810005;
    tmp_msg_0.rf_err_z = 0.264153555853;
    tmp_msg_0.rf_err_vx = 0.301034536093;
    tmp_msg_0.rf_err_vy = 0.247876634155;
    tmp_msg_0.rf_err_vz = 0.913453787936;
    tmp_msg_0.ss_x = 0.470445345749;
    tmp_msg_0.ss_y = 0.0388241569101;
    tmp_msg_0.ss_z = 0.784298055181;
    tmp_msg_0.virt_err_x = 0.947836566305;
    tmp_msg_0.virt_err_y = 0.218162554475;
    tmp_msg_0.virt_err_z = 0.715782153063;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.284575550808);
    msg.setSource(14213U);
    msg.setSourceEntity(102U);
    msg.setDestination(29596U);
    msg.setDestinationEntity(94U);
    msg.s_id.assign("CGJRMKXJLGCINNRVYEDRWCRTXOBPSQGIQEHABOMPNZKXMDXAKPPXBUVFOTQOFNKKFSWRCPDTZVLQRYTSBPJWWAUHMCJYANMAQDVNOUBTFIEPYKOKVEDLCHBIPGFJZHCEJZEXDMJQJSIGILDUQYSSKWBJPGXBNVQTUEKDNMXALOTEGGWJOXYFVTALYMSFNAHFLINFTCWWZIGRZIMGUZIKUEUMCOOPLHDCUYWUAQSBBVVVR");
    msg.dist = 0.0545105980097;
    msg.err = 0.158158580818;
    msg.ctrl_imp = 0.861668011506;
    msg.rel_dir_x = 0.686731105199;
    msg.rel_dir_y = 0.214242538909;
    msg.rel_dir_z = 0.316039003431;
    msg.err_x = 0.0326421502362;
    msg.err_y = 0.881807998124;
    msg.err_z = 0.719756227382;
    msg.rf_err_x = 0.174228773937;
    msg.rf_err_y = 0.595963212766;
    msg.rf_err_z = 0.57657245829;
    msg.rf_err_vx = 0.161303746338;
    msg.rf_err_vy = 0.279217080106;
    msg.rf_err_vz = 0.755733850596;
    msg.ss_x = 0.277526479328;
    msg.ss_y = 0.0135062155286;
    msg.ss_z = 0.832909449899;
    msg.virt_err_x = 0.329981928713;
    msg.virt_err_y = 0.740356016923;
    msg.virt_err_z = 0.667305191262;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.990821181883);
    msg.setSource(60439U);
    msg.setSourceEntity(186U);
    msg.setDestination(59894U);
    msg.setDestinationEntity(182U);
    msg.s_id.assign("RNFUZSVSMAPTVJYFEHJYLSCOIUYWDFQWVDBOQNAQOOGRQGEJCVAGJMMKMPCTEVKFFORWLUSKATDBARGQZGIYDCITCOE");
    msg.dist = 0.813157227154;
    msg.err = 0.415506413808;
    msg.ctrl_imp = 0.0465568536786;
    msg.rel_dir_x = 0.566252550343;
    msg.rel_dir_y = 0.308763546668;
    msg.rel_dir_z = 0.582694775351;
    msg.err_x = 0.218902084527;
    msg.err_y = 0.590102038323;
    msg.err_z = 0.518805536639;
    msg.rf_err_x = 0.222295624806;
    msg.rf_err_y = 0.141525720471;
    msg.rf_err_z = 0.145580717255;
    msg.rf_err_vx = 0.591926069171;
    msg.rf_err_vy = 0.87131229158;
    msg.rf_err_vz = 0.817586646952;
    msg.ss_x = 0.993134708563;
    msg.ss_y = 0.0131699710769;
    msg.ss_z = 0.399658264371;
    msg.virt_err_x = 0.71285968485;
    msg.virt_err_y = 0.537956535672;
    msg.virt_err_z = 0.286628707793;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.128507238614);
    msg.setSource(29589U);
    msg.setSourceEntity(31U);
    msg.setDestination(21147U);
    msg.setDestinationEntity(100U);
    msg.s_id.assign("KJSOXWFREPRYV");
    msg.dist = 0.2427158313;
    msg.err = 0.239721021771;
    msg.ctrl_imp = 0.408190528246;
    msg.rel_dir_x = 0.401495607456;
    msg.rel_dir_y = 0.24558959509;
    msg.rel_dir_z = 0.34575767434;
    msg.err_x = 0.463855636437;
    msg.err_y = 0.416858910709;
    msg.err_z = 0.182338739227;
    msg.rf_err_x = 0.815342451661;
    msg.rf_err_y = 0.825004524708;
    msg.rf_err_z = 0.381672435963;
    msg.rf_err_vx = 0.673709505906;
    msg.rf_err_vy = 0.437387183047;
    msg.rf_err_vz = 0.77410587693;
    msg.ss_x = 0.14941627037;
    msg.ss_y = 0.0457527465653;
    msg.ss_z = 0.537842799942;
    msg.virt_err_x = 0.75577775758;
    msg.virt_err_y = 0.218449109098;
    msg.virt_err_z = 0.328513204444;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.234716655701);
    msg.setSource(42364U);
    msg.setSourceEntity(47U);
    msg.setDestination(17011U);
    msg.setDestinationEntity(101U);
    msg.timeout = 45491U;
    msg.rpm = 0.0020839153325;
    msg.direction = 41U;
    msg.custom.assign("WSEBKFXZIKGUBXWSZGEKY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.323500693097);
    msg.setSource(47933U);
    msg.setSourceEntity(153U);
    msg.setDestination(62163U);
    msg.setDestinationEntity(51U);
    msg.timeout = 3639U;
    msg.rpm = 0.950104568638;
    msg.direction = 176U;
    msg.custom.assign("IBZSLFEZRYHIBYLTFZMRLSKXXADQPJCYOYUHKEOMEUXVRNVDNNSGXEBFEPPCJDEKCITURYQTGXMUKXIFHWYYBQHQTUOOXHHYBRALW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.661676233323);
    msg.setSource(15778U);
    msg.setSourceEntity(88U);
    msg.setDestination(53305U);
    msg.setDestinationEntity(56U);
    msg.timeout = 19987U;
    msg.rpm = 0.632221910492;
    msg.direction = 72U;
    msg.custom.assign("YLBFASGRQUSYPEONRSYMTKETLOKRZUKNKLAEBNJBNETJJUMCMUQTWUYLFVMAZKJROPMFKWTLIDXYZLUIEMOPVSCAYQVXIMQSRODWBABMEZYEHWRDLLPRTCJYNCJWFGRPUKYSOHZCOUQJZVXIPNUATXVZGZKIHAKNNVJGAPRAWVMFEHBTWDBIOGHSLOFXDJXEZHBLIPBXCFQUWV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.794856261799);
    msg.setSource(24561U);
    msg.setSourceEntity(41U);
    msg.setDestination(58475U);
    msg.setDestinationEntity(30U);
    msg.formation_name.assign("RVYZQSQTFSBMXLDLPQANOQSTGILMTIWNPORLBHBSINVBWREGQTPUOOMXGYOGMHFGDVFONPPXBUQZRTKYGUMEJYCHEWWVDCDAYYKVFWAWXQODDJTIRDHFAQQEKLBMKLHFAIXCTMJUYSYQPSUCIIESEUCKNVXZZYXFDKIXMDAHFVEW");
    msg.type = 36U;
    msg.op = 224U;
    msg.group_name.assign("JCHAQTIHNEVZXFDJLBPWALGSOWYJDZDECUFTNVMKUYVNHAOXXBJGPVNIKTRSEGEFBMSAKMLJGUJFBFTCAZBCCQYBBPDQDUFJBNBOZKWZGZSPYXAKHICPVDCIRRWJLROGMADUNLXHUVXLOQPTVSRZSINTEEWKDGTNZ");
    msg.plan_id.assign("KSZBSSIXWCTGDZENIEIAHRKECDFGQUUOOARGDEPNAUWFXRCHSJOVNLBSNFIYNURVACHNUBNJQEQPMLRMOQDFGXJNHWAAYWHVKUSKUDPBSRJJQBVXFIOXYQWTALDESZPBPLJWDEWTGJQLRBBGFDTCCQVQYDPFOKC");
    msg.description.assign("DEBMKOTFSLFXXJJVPSPYTMUBJIIMNBEJHXYUELKTGGPRVTTENLSFULUHWNHWNJYAVYRFHAKLWPMUDIDDESZLBWFCOXORQNDQQOUEMJZFWCYFRXOZITWXIQEFPUWCMBAZJXESOGOMZZOFOKYGOKPAGCRBZJPRIVANYCNYCBKMKKZWQKSVDNVTHTBQCGINAPHVCHDTHRGREPEGVAZWVDGLBLUSXKRAVQXQYZQUCN");
    msg.reference_frame = 219U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 17801U;
    tmp_msg_0.off_x = 0.739405832843;
    tmp_msg_0.off_y = 0.536768721875;
    tmp_msg_0.off_z = 0.34099036042;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.74303250808;
    msg.leader_speed_min = 0.131338915446;
    msg.leader_speed_max = 0.746215655104;
    msg.leader_alt_min = 0.0811285312514;
    msg.leader_alt_max = 0.891609786355;
    msg.pos_sim_err_lim = 0.581291150397;
    msg.pos_sim_err_wrn = 0.897679527021;
    msg.pos_sim_err_timeout = 39427U;
    msg.converg_max = 0.265293992196;
    msg.converg_timeout = 10049U;
    msg.comms_timeout = 53398U;
    msg.turb_lim = 0.229901341791;
    msg.custom.assign("SKZTAXKIHXYECNJBAAAOXUPVGZDTSCNSFDJDREYKTJUDBNTGMFTFSGJSYBELCHZVL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.546316920418);
    msg.setSource(53684U);
    msg.setSourceEntity(185U);
    msg.setDestination(2225U);
    msg.setDestinationEntity(106U);
    msg.formation_name.assign("MILNZGLXHEEQYUBXEZYIRDVLQPPPSMPFRXCLLRFMDHKAWAVABZKBUGMMDOJCVGXGGNDKNBQMHV");
    msg.type = 99U;
    msg.op = 182U;
    msg.group_name.assign("HOTALEPZVWRZVIQTTGOHBBGVIADCDBBWYENALHDKMQVZGZOIITETLJBWOJIKOFLKCRRCRMQJQUZTUPLKVKAYNFEM");
    msg.plan_id.assign("RMELHLDVMCWQWETOYVLRBRJXLIQWYBEBUKIYQBELIXAJSPSITETYFPVOTHHQCSGVHFLHKEGPAPJXDFSGFIOXPMWNKYCHSUIVSMNPYDFAACOIZGCFQLKKTXJNJECRYPDHTXCUVWWJZMADUJOAKGWSXPMBQIFUALWVSMXDNHKNDOQJVDJANNOAFBYRYEGCUBBMPOLVNMHPTBUVZURKZFLOABQZKRQXGJZ");
    msg.description.assign("QFVYPMNFPRMDWRSXE");
    msg.reference_frame = 87U;
    msg.leader_bank_lim = 0.630915034391;
    msg.leader_speed_min = 0.860191634033;
    msg.leader_speed_max = 0.537751801373;
    msg.leader_alt_min = 0.216915209555;
    msg.leader_alt_max = 0.485748786463;
    msg.pos_sim_err_lim = 0.494656311503;
    msg.pos_sim_err_wrn = 0.404030558614;
    msg.pos_sim_err_timeout = 26365U;
    msg.converg_max = 0.83515608482;
    msg.converg_timeout = 58316U;
    msg.comms_timeout = 61926U;
    msg.turb_lim = 0.763513293991;
    msg.custom.assign("VWCHGHOFMUUAGZDQYZTRZEUIYYWIXKILZLAUSBCCPRWMGFAUFJSVMIDVFEJBLSWLQQMSUGORAXILRXPTRDINDOHHKGXMYWAXEYNXFLOMTWNTSGABLOVVYCPHTUDCTMGBVYDFOJWPJQMYZNUQILBISFPZEIXPQTHSAKPNDPQOSAENCGRHKYCXJKCNGTNSCKNBQALVVBDKBERQEJZBJONYJHEZRFZOUVTAUFWXVKJIMMKDXOBR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.535748718945);
    msg.setSource(52157U);
    msg.setSourceEntity(191U);
    msg.setDestination(29517U);
    msg.setDestinationEntity(119U);
    msg.formation_name.assign("ABKHVZEQRIJGQYPYEXLDAFDVDAUFHIIIRVYTLNBPOSXSCXFADSUJNOBOAKDJAIKWPTMDBBJMNGKWMLSHGTYITCDZIAEHEJHYGWNIENHWLCCZZVCNUWRCVKQQXTRKOLLVWDXJCPZGUFRRAEBUYPCRCIEIFLGRFAPOMMOQJXPQTSTOHKZKGKPSFKZGBSMJSYQUMDLLHNWUMFYWVNBLHVEZWPNEMDVWUOVBNZTETUJCXXTXHQRZJOUFYSQGQBFP");
    msg.type = 199U;
    msg.op = 102U;
    msg.group_name.assign("RTIJSRIUWZAICOZAQZYOWRVKDEZYADIIGPGJYQDPSJZYTZ");
    msg.plan_id.assign("WUXSHHZTUKEVRTPRDUEFDZNQNKWWYTANWNPZIYDHCDUUBTLCAVGWHMKHEJOZBQJPEBUXTOFQLQVRKAZQCSNDLAYXBISBAWMMGFICTMGMOWRGUVXMCKVOSQXCOYAFAZOOGQNKHPKJODMWJBZAVYWRSEFPTUK");
    msg.description.assign("FNGOOQZHBJNBBXDDYIKS");
    msg.reference_frame = 213U;
    msg.leader_bank_lim = 0.294952857975;
    msg.leader_speed_min = 0.502760202518;
    msg.leader_speed_max = 0.214394286572;
    msg.leader_alt_min = 0.00437275956552;
    msg.leader_alt_max = 0.927340525887;
    msg.pos_sim_err_lim = 0.870210181733;
    msg.pos_sim_err_wrn = 0.0507062987519;
    msg.pos_sim_err_timeout = 19097U;
    msg.converg_max = 0.722235754011;
    msg.converg_timeout = 9277U;
    msg.comms_timeout = 44078U;
    msg.turb_lim = 0.759633239761;
    msg.custom.assign("AUNHPTMSBZTVCSPGXPLGOFKNJEDQSBGBMHZZYPBULORKNFCSYHIVSAQVNZDTRURSZMZFGQPSLAQCAQKUBJYCZYXAFJCCANKQRKUMEXORYWTORWPPDJITKKXFDTGVYVNEULGRFOGHGMSCKDIROEORLJBJGNTXHDINPRECBHLJZILQNWHFVBCJWMVYTKEA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.180832735347);
    msg.setSource(41605U);
    msg.setSourceEntity(64U);
    msg.setDestination(23064U);
    msg.setDestinationEntity(45U);
    msg.timeout = 7994U;
    msg.lat = 0.692364009366;
    msg.lon = 0.299314978985;
    msg.z = 0.617862205806;
    msg.z_units = 129U;
    msg.speed = 0.935240276085;
    msg.speed_units = 96U;
    msg.custom.assign("WPTVGSFYIWCEMLOQJMIWBBUNUYPFNNXINOEKYHILJDLKGXPATQJHCEOBMMPPPHHACSLYUKVTHLISDXXFODMQJASMFOAICQKLXZCGQRLQBWSTZWYVNZQTJZUTQEHXOFWDAWBGIRJRDXPUSBJHSULNBFQGFCRAVQXFMOKVVTKKXBML");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.318217320867);
    msg.setSource(18150U);
    msg.setSourceEntity(65U);
    msg.setDestination(1945U);
    msg.setDestinationEntity(14U);
    msg.timeout = 65340U;
    msg.lat = 0.787595911641;
    msg.lon = 0.365940126763;
    msg.z = 0.806964488257;
    msg.z_units = 154U;
    msg.speed = 0.0483220701649;
    msg.speed_units = 178U;
    msg.custom.assign("HECPJBKZAYWXEFUXBKBDYQQCINYFFFFVOHW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.374656885531);
    msg.setSource(24199U);
    msg.setSourceEntity(139U);
    msg.setDestination(44653U);
    msg.setDestinationEntity(62U);
    msg.timeout = 1643U;
    msg.lat = 0.915577790905;
    msg.lon = 0.0662462083673;
    msg.z = 0.392756671095;
    msg.z_units = 82U;
    msg.speed = 0.736657556495;
    msg.speed_units = 168U;
    msg.custom.assign("CVNXANQPAIYEEAGWBKMNLYXIXCHFNQRJDVTJNKPSZROXINQEXDSUWVNLKRACWJHKODWYZUTGHWIGQTCKJFFQBMRWXOTFSPHJDDVIB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.984468525643);
    msg.setSource(16277U);
    msg.setSourceEntity(6U);
    msg.setDestination(21466U);
    msg.setDestinationEntity(166U);
    msg.timeout = 42653U;
    msg.lat = 0.847396416924;
    msg.lon = 0.677536619683;
    msg.z = 0.582553871722;
    msg.z_units = 123U;
    msg.speed = 0.465138222364;
    msg.speed_units = 221U;
    msg.custom.assign("VCLITYEQUCCBXQGNJGWEJPVSFKZOBCUYPVNCIIQJMKAAFKYLAAOHJA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.764300487631);
    msg.setSource(17746U);
    msg.setSourceEntity(56U);
    msg.setDestination(11120U);
    msg.setDestinationEntity(116U);
    msg.timeout = 64314U;
    msg.lat = 0.160446608482;
    msg.lon = 0.833314375014;
    msg.z = 0.00699649623976;
    msg.z_units = 99U;
    msg.speed = 0.28772415332;
    msg.speed_units = 164U;
    msg.custom.assign("MQITGDHZWWARKHXLAYGDBVCGXVHLREYUCGSMJIGJSSQHXNRJSKLLDIQIMPYJCRUSZRWWYOTOPEIRFHQJRPSFAKUENBYBVKJCEZCXPHNQUROIOTNKPMOFYAAZLVMRNAACY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.98212182938);
    msg.setSource(57517U);
    msg.setSourceEntity(107U);
    msg.setDestination(31999U);
    msg.setDestinationEntity(32U);
    msg.timeout = 25023U;
    msg.lat = 0.456757382632;
    msg.lon = 0.0297278233997;
    msg.z = 0.818905922745;
    msg.z_units = 62U;
    msg.speed = 0.658530491679;
    msg.speed_units = 36U;
    msg.custom.assign("AJZGJWTVFFVVDOVUUYTN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.768464576911);
    msg.setSource(15126U);
    msg.setSourceEntity(123U);
    msg.setDestination(25973U);
    msg.setDestinationEntity(182U);
    msg.arrival_time = 0.762285769355;
    msg.lat = 0.642634770099;
    msg.lon = 0.253962141333;
    msg.z = 0.331770888063;
    msg.z_units = 172U;
    msg.travel_z = 0.83479424046;
    msg.travel_z_units = 10U;
    msg.delayed = 223U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.0140341834197);
    msg.setSource(2076U);
    msg.setSourceEntity(4U);
    msg.setDestination(39730U);
    msg.setDestinationEntity(171U);
    msg.arrival_time = 0.778266157455;
    msg.lat = 0.556452800889;
    msg.lon = 0.498902641749;
    msg.z = 0.316564147829;
    msg.z_units = 215U;
    msg.travel_z = 0.365469553811;
    msg.travel_z_units = 149U;
    msg.delayed = 140U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.0397000642117);
    msg.setSource(23745U);
    msg.setSourceEntity(191U);
    msg.setDestination(63335U);
    msg.setDestinationEntity(132U);
    msg.arrival_time = 0.260968193115;
    msg.lat = 0.70336817157;
    msg.lon = 0.718146123942;
    msg.z = 0.596261101606;
    msg.z_units = 19U;
    msg.travel_z = 0.85614613652;
    msg.travel_z_units = 229U;
    msg.delayed = 180U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.640140507825);
    msg.setSource(47727U);
    msg.setSourceEntity(133U);
    msg.setDestination(42884U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.77957803314;
    msg.lon = 0.564528006719;
    msg.z = 0.79212027665;
    msg.z_units = 202U;
    msg.speed = 0.553743305037;
    msg.speed_units = 103U;
    msg.bearing = 0.769422897437;
    msg.cross_angle = 0.0624413648054;
    msg.width = 0.991744153004;
    msg.length = 0.409157933022;
    msg.coff = 59U;
    msg.angaperture = 0.259440435365;
    msg.range = 51318U;
    msg.overlap = 140U;
    msg.flags = 162U;
    msg.custom.assign("ZRQSONPBLQMUSBDGYYIIQIQFCJDVWESWEDPQYXUCPKXQKJOSVWONECSGJGMMDDVGXTPGKXHHOKLUGDJARQRVXITEBKUPWCVHYJLFLBBXDYHBZIDZSQORPTTYMELNMHMVTKSBTBMHYPVCZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.289454697852);
    msg.setSource(17652U);
    msg.setSourceEntity(5U);
    msg.setDestination(21085U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.16999556323;
    msg.lon = 0.194041741323;
    msg.z = 0.883715769969;
    msg.z_units = 137U;
    msg.speed = 0.69065794468;
    msg.speed_units = 182U;
    msg.bearing = 0.060085081295;
    msg.cross_angle = 0.715014886092;
    msg.width = 0.0482595808874;
    msg.length = 0.848749268681;
    msg.coff = 108U;
    msg.angaperture = 0.499447202096;
    msg.range = 7256U;
    msg.overlap = 21U;
    msg.flags = 75U;
    msg.custom.assign("CDWKXLBRJOGVXVDHRHZJFGEINOPOMBDUCXVGBHAXOFWBURRAZSJQSFUIFGVSKFSXPQKEZGYIKMDJLQPYT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.785277075044);
    msg.setSource(31732U);
    msg.setSourceEntity(6U);
    msg.setDestination(20696U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.628224645205;
    msg.lon = 0.95970211527;
    msg.z = 0.898503429744;
    msg.z_units = 202U;
    msg.speed = 0.713763934539;
    msg.speed_units = 237U;
    msg.bearing = 0.779983874118;
    msg.cross_angle = 0.181248765545;
    msg.width = 0.10362393869;
    msg.length = 0.999522914431;
    msg.coff = 97U;
    msg.angaperture = 0.398841174943;
    msg.range = 52799U;
    msg.overlap = 116U;
    msg.flags = 20U;
    msg.custom.assign("PKETKZIBIUOODKGTKVIXDPJAOHFCFGIKPPPJJAYXIVLEHZYZHYQFYTSVKMUQQSGGOLCZNHGZRZWYYJVTCEERILXOULIHWMPKUWACVLSOVHURDNJPEMRONBFCWLPNJWTNNURVZERDZSBAXCFBMSYTVEJFJYTZQFFGNZKWUDLSBXNKDFCBUDNTWMFXSYSGAODHNXBEMIDWKRV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.967158394059);
    msg.setSource(50220U);
    msg.setSourceEntity(26U);
    msg.setDestination(57973U);
    msg.setDestinationEntity(124U);
    msg.timeout = 28522U;
    msg.lat = 0.181328711654;
    msg.lon = 0.338997947181;
    msg.z = 0.534684100953;
    msg.z_units = 186U;
    msg.speed = 0.440968648267;
    msg.speed_units = 201U;
    msg.syringe0 = 6U;
    msg.syringe1 = 77U;
    msg.syringe2 = 85U;
    msg.custom.assign("SFSUIXWHBBWDFQOMNRAQECNDKJWVR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.595612119061);
    msg.setSource(34981U);
    msg.setSourceEntity(23U);
    msg.setDestination(21299U);
    msg.setDestinationEntity(3U);
    msg.timeout = 33661U;
    msg.lat = 0.664689862834;
    msg.lon = 0.750706081619;
    msg.z = 0.444749838571;
    msg.z_units = 147U;
    msg.speed = 0.463544990576;
    msg.speed_units = 135U;
    msg.syringe0 = 181U;
    msg.syringe1 = 223U;
    msg.syringe2 = 46U;
    msg.custom.assign("TFRYGLORWOQTNEPCDUNVSOPPBPQHVRJIXGDKOXIWLILUUSCTUHEMBTDJOOXEDCWHYJAABVEDYFFYSGEZKIWNQUCPMVADIFMNAEJMPZVDNYIUBBSOBYQBJRBMGGGFZWJLTKNFZTMWOICPWSFXTYZJHFSEMJVRFKMCOQWQVRIXDBQVOSLAHAWKJRRIKVNZPAGXBZUHIWYKLQNKAKQHTEYHUALCNXVZJXZALTSDYDETQCP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.716857590991);
    msg.setSource(178U);
    msg.setSourceEntity(47U);
    msg.setDestination(24093U);
    msg.setDestinationEntity(194U);
    msg.timeout = 11473U;
    msg.lat = 0.960269277847;
    msg.lon = 0.287470660247;
    msg.z = 0.960575871501;
    msg.z_units = 93U;
    msg.speed = 0.132390473814;
    msg.speed_units = 236U;
    msg.syringe0 = 103U;
    msg.syringe1 = 252U;
    msg.syringe2 = 74U;
    msg.custom.assign("XPKJCKYQDLSCRPZXWASZMDSLLZIOHVEMFQZGDXYUJMYAVNVVCPFAOTJIZUCTCPJUWRGP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.893382238541);
    msg.setSource(47417U);
    msg.setSourceEntity(1U);
    msg.setDestination(18542U);
    msg.setDestinationEntity(20U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.143867200053);
    msg.setSource(41815U);
    msg.setSourceEntity(230U);
    msg.setDestination(44562U);
    msg.setDestinationEntity(234U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.203564953497);
    msg.setSource(4508U);
    msg.setSourceEntity(137U);
    msg.setDestination(45172U);
    msg.setDestinationEntity(8U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.938345921563);
    msg.setSource(11299U);
    msg.setSourceEntity(165U);
    msg.setDestination(15058U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.24414694428;
    msg.lon = 0.902084410689;
    msg.z = 0.292205302375;
    msg.z_units = 13U;
    msg.speed = 0.414013064612;
    msg.speed_units = 67U;
    msg.takeoff_pitch = 0.752946839434;
    msg.custom.assign("OHEFLMAKTEUERNMCUASFZDUVLXABRGOG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.67919039311);
    msg.setSource(49869U);
    msg.setSourceEntity(164U);
    msg.setDestination(9527U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.243038057618;
    msg.lon = 0.0377079679294;
    msg.z = 0.610667506483;
    msg.z_units = 71U;
    msg.speed = 0.164998781009;
    msg.speed_units = 214U;
    msg.takeoff_pitch = 0.920452239862;
    msg.custom.assign("ULSFJKEKIWQCHHJZHLQOGZRVJTZENFYQLJPXJHRNTZJMIYAFN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.254793917023);
    msg.setSource(60301U);
    msg.setSourceEntity(82U);
    msg.setDestination(37902U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.163052236212;
    msg.lon = 0.695243684781;
    msg.z = 0.98951689031;
    msg.z_units = 48U;
    msg.speed = 0.726885619695;
    msg.speed_units = 29U;
    msg.takeoff_pitch = 0.464561364819;
    msg.custom.assign("WKQMYLVYLHQOUQZHUDVEXWMOCASYGXGXWPKTBT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.719454110817);
    msg.setSource(20967U);
    msg.setSourceEntity(211U);
    msg.setDestination(49014U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.896480176475;
    msg.lon = 0.515931425449;
    msg.z = 0.546090230746;
    msg.z_units = 87U;
    msg.speed = 0.259394730624;
    msg.speed_units = 251U;
    msg.abort_z = 0.781459013629;
    msg.bearing = 0.460183256084;
    msg.glide_slope = 5U;
    msg.glide_slope_alt = 0.772177447742;
    msg.custom.assign("ZTHQVGCERHSRMWLTENNUWFUJUFOBMTNGGTRCGWEUCBTYTGVBLFMTOIAQPVXXOLSUUYOJBTWYDDCAQZGFYCHIXJZIFNIISGKYBZDNGJFVLDSYQAKQGBPTXVRXLKAMQNEIK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.672073366222);
    msg.setSource(6514U);
    msg.setSourceEntity(89U);
    msg.setDestination(36540U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.288569439508;
    msg.lon = 0.654348227975;
    msg.z = 0.958946738902;
    msg.z_units = 86U;
    msg.speed = 0.421837684303;
    msg.speed_units = 141U;
    msg.abort_z = 0.056206253411;
    msg.bearing = 0.154792388528;
    msg.glide_slope = 8U;
    msg.glide_slope_alt = 0.202741788983;
    msg.custom.assign("DXSZFUVLKEQXFKCPIRCDLUKWBPJZLLRELDJRAWHFSFQMHMQKDOSDUQBVWLIBSEAHTRS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.637832463729);
    msg.setSource(24163U);
    msg.setSourceEntity(246U);
    msg.setDestination(21085U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.251298498309;
    msg.lon = 0.854128062022;
    msg.z = 0.0112453916125;
    msg.z_units = 250U;
    msg.speed = 0.384398284175;
    msg.speed_units = 173U;
    msg.abort_z = 0.191400352937;
    msg.bearing = 0.758641619467;
    msg.glide_slope = 47U;
    msg.glide_slope_alt = 0.814526659928;
    msg.custom.assign("XUFYIRVNKEOMAYLUGBSKMUTVICZHWIJZPCYPUVIWTUIOEXHFOSBTAACYDXJEAAUZGSQDIBY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.96419996452);
    msg.setSource(19726U);
    msg.setSourceEntity(119U);
    msg.setDestination(7338U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.842425994405;
    msg.lon = 0.362559876471;
    msg.speed = 0.471501929437;
    msg.speed_units = 86U;
    msg.limits = 230U;
    msg.max_depth = 0.474087623738;
    msg.min_alt = 0.00449026003354;
    msg.time_limit = 0.379006978172;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.248063705567;
    tmp_msg_0.lon = 0.576355474245;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("PNEZYMLQSPYBHHNFAGFDXKEHGAXILZLM");
    msg.custom.assign("VXTQVSDPGSGSWGZXWCJBDOPWOEKQNCHKFDFPZPSAUZDEENLMHRUTBVFGUOLHQBNKTKAAJGMILTLGRBRCXQVKTFJRDOUIHFETJUFIQYNAFWGEATBBRLMWANY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.720024588595);
    msg.setSource(64774U);
    msg.setSourceEntity(80U);
    msg.setDestination(3114U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.922103453987;
    msg.lon = 0.143219764381;
    msg.speed = 0.185436993301;
    msg.speed_units = 71U;
    msg.limits = 168U;
    msg.max_depth = 0.341611079538;
    msg.min_alt = 0.499732663398;
    msg.time_limit = 0.602030789682;
    msg.controller.assign("UTKRAIAIIHOUGQPOREINYWESDKGWTLQLVIOORKWSDNBPKZXUUCRQAXXPWQFQQBKZUVGYZTVXPFWWMPGFEUSCJOJPUOXHQNIBKZDLAZIJLCVCORNMMDEHDHRBKSNLYAJEYJTGVVEPYMYENENRBZAVLMGTJTIHSLLQQSFYSSJZKHYCMNDFRKWWVMDGUSOXCEWBHPPCABRCDIZUZLOAGHMXMXZKWJHTACNFSFTUYEBTBTHVMGFYXVCFRGXDNDLQ");
    msg.custom.assign("QXXWDYGQIVKYMBILHOPKVLNFTVSFZWCYQPELAWNBFGOABPBMJHYSPCZZTIJGCKEN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.99171939101);
    msg.setSource(2800U);
    msg.setSourceEntity(113U);
    msg.setDestination(20740U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.0870365838827;
    msg.lon = 0.480762923298;
    msg.speed = 0.557313648036;
    msg.speed_units = 144U;
    msg.limits = 217U;
    msg.max_depth = 0.0836869307376;
    msg.min_alt = 0.552644439278;
    msg.time_limit = 0.0762650198053;
    msg.controller.assign("NJXYLFKJRWJNJYJVTFGUZTDASNVKKAI");
    msg.custom.assign("UEKKLWETKBOXSZQRIRLOUQUKIDSFINCGZQLKHMOZDMOMFDYCQYMPCGEBEVDXMHQJZNNRNXRFPJJDWBHIPALETVOLCWLUXGRJSUOWRUSQDOHFKLAGIISAYKCYIBWVVYGZLV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.90511480847);
    msg.setSource(49626U);
    msg.setSourceEntity(75U);
    msg.setDestination(27682U);
    msg.setDestinationEntity(77U);
    msg.target.assign("BYOZGLXJSPIUIVYDNYTPNVICMKQSHYWCXANABGLOZXSKRGENZJITBEGTFASDZLW");
    msg.max_speed = 0.953575705849;
    msg.speed_units = 27U;
    msg.lat = 0.211212789609;
    msg.lon = 0.447534974974;
    msg.z = 0.165506568042;
    msg.z_units = 154U;
    msg.custom.assign("RVJFQZNHWGIAVWGRAGNHOSEKDMNYYNWPHUFKORETUXQKNDVDEJHBDWRDOIOLIJGKJYUPQECHCTZDLNEVSJMLLNJXLHUPQQAGBXYOEYDGNFZERQIFTOFZCRZJALWBAUUJRYJMBCBNVHFFZOCPVKIHTIACUVXUQZBXDCTMROANECYLSLWI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.713873594686);
    msg.setSource(54807U);
    msg.setSourceEntity(21U);
    msg.setDestination(64036U);
    msg.setDestinationEntity(179U);
    msg.target.assign("ITAXHCINKGSSOGZEQBAFPIRCVGJNUUVMTNHCKSYTQJENOHVYXFCGYRWQGYRZDWWIPZNXVPVDFRRWAYMYICUJXMVPWATWMLNOKENJEHLSTCKPDKMLNAKQNIDREZQIDQOXIHBOG");
    msg.max_speed = 0.781284244032;
    msg.speed_units = 226U;
    msg.lat = 0.433645708539;
    msg.lon = 0.231393975856;
    msg.z = 0.125723367932;
    msg.z_units = 51U;
    msg.custom.assign("AWIVJHDBEKFPJPYAFCKOMEDVKSNLUTIRNSGOELOQGDJXZWQZMDZCONRZAPZIOCHTGUMHWASDJYZQYPFEWTFBODEMMRFVUYPQOLABHEQCRDJKWNZFNTPTUVHSPSBJSWFJLIFLIRXJVMURXAHBNQKMDBCWTZGZLHHRCCSJKYNOZXVMOHXBQSVBNGDHIGCEUGANFQSXPYYKXBIMQTCLGKKLTGWCAEDIFIUPTWEXVOULATRKN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.318793841356);
    msg.setSource(46610U);
    msg.setSourceEntity(128U);
    msg.setDestination(24045U);
    msg.setDestinationEntity(150U);
    msg.target.assign("BSSFHLXVRHALOHFNWCXAOAODPRQYCBBJCRDHZKPP");
    msg.max_speed = 0.979766278473;
    msg.speed_units = 48U;
    msg.lat = 0.348223752466;
    msg.lon = 0.652259363714;
    msg.z = 0.738921891375;
    msg.z_units = 176U;
    msg.custom.assign("ZFMRDFCHNMGSUBNYLSVHADTY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.485992354218);
    msg.setSource(6230U);
    msg.setSourceEntity(243U);
    msg.setDestination(45913U);
    msg.setDestinationEntity(25U);
    msg.op_mode = 218U;
    msg.error_count = 240U;
    msg.error_ents.assign("ATAUIHIHTSLZPXHWBWXLYRHTTZOAVBYNGJBSDEYLJEFUEEZWBQCNIVUMZOQINTSGOPHSTJKFSQPXFOUYYUFVPRRIEVWVFBNPLIIWCQDMYKJHNRECLZDXASNZKOXVPEKQKGRYQQTKOYBHJLIFSKBWUCDGJRUFBGHTNCFHGADGEPUVCMYARNMMRLVGQLLFP");
    msg.maneuver_type = 51195U;
    msg.maneuver_stime = 0.328644636091;
    msg.maneuver_eta = 22804U;
    msg.control_loops = 2865946492U;
    msg.flags = 173U;
    msg.last_error.assign("VVYILAFPSIHSGCAWRXVKTIUGGRJTTCGBDSBYXQYXOLRGKPSUAGSQUPCMFHJKQHRAANXSKOYCTLWJBZVLDNZJKOJKGLZZGBFVZDJOPQHCMNEZUFIADHUCXDLUPQGWMYBNFLIMLHOMZTMJHAFXRVSOPECUKOXWQPYDSZOTJDNMNPMFBVIAKNBXXP");
    msg.last_error_time = 0.646869317194;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.56708307246);
    msg.setSource(47889U);
    msg.setSourceEntity(136U);
    msg.setDestination(51509U);
    msg.setDestinationEntity(220U);
    msg.op_mode = 226U;
    msg.error_count = 47U;
    msg.error_ents.assign("IGNLGMJWTYRWXMCWVKXLEONILQAHRBFONFDRTCNDNUZAVPTTPDVYGYNEONHFVOZYJLBPLEJPDKQAEYQJJCMKJRGAWDGPPSACEFQUCXMUTXBYIHTWCBXHIYJMGWSQHEBZIFFSUSKIUXJDRVFOQEXAEV");
    msg.maneuver_type = 48841U;
    msg.maneuver_stime = 0.901090958533;
    msg.maneuver_eta = 20296U;
    msg.control_loops = 1736047640U;
    msg.flags = 198U;
    msg.last_error.assign("YBJLQFKKCJZM");
    msg.last_error_time = 0.012567673844;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.33049779453);
    msg.setSource(49552U);
    msg.setSourceEntity(45U);
    msg.setDestination(57564U);
    msg.setDestinationEntity(39U);
    msg.op_mode = 165U;
    msg.error_count = 200U;
    msg.error_ents.assign("TMKVBWCUCQTRAQOFTSGOMUEWBES");
    msg.maneuver_type = 57476U;
    msg.maneuver_stime = 0.646701218664;
    msg.maneuver_eta = 22289U;
    msg.control_loops = 320467872U;
    msg.flags = 157U;
    msg.last_error.assign("YZFBCKYMHLBIFOCWVBAVXAEHQYACQTRNJEITWYUUSJADBICNBTKOIYUZCCLGCPSTSRMPDIJMUIDXSGAOTKUZODZJREFFMOEAGQZJAEWSQO");
    msg.last_error_time = 0.0992083086547;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.188347646119);
    msg.setSource(20086U);
    msg.setSourceEntity(34U);
    msg.setDestination(13641U);
    msg.setDestinationEntity(180U);
    msg.type = 210U;
    msg.request_id = 28299U;
    msg.command = 72U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 40066U;
    tmp_msg_0.lat = 0.252929480628;
    tmp_msg_0.lon = 0.524987513043;
    tmp_msg_0.z = 0.158891918433;
    tmp_msg_0.z_units = 96U;
    tmp_msg_0.pitch = 0.432158950716;
    tmp_msg_0.amplitude = 0.180304747459;
    tmp_msg_0.duration = 59522U;
    tmp_msg_0.speed = 0.484107190187;
    tmp_msg_0.speed_units = 202U;
    tmp_msg_0.radius = 0.147042626824;
    tmp_msg_0.direction = 234U;
    tmp_msg_0.custom.assign("MSHKSVXUCWOWYLKUMNLJPEKIUKRJIZSUWFOMRWHTQNQENTVMAFNNDDQYYAZWNEYEBLIXVTYMBYVBBNGDGUVSGBXAFBDCCOEFQNXSTZHGOCGYMFVRZRAHGJAKJOAWFKSWPYKWFTYSVNIBJBHLXMIZJZQALXUTGDEMKCPOPDXXKIIWCUJLLDJBMSDGWVRVORVUJTYIPQCDSCRCA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 8104U;
    msg.info.assign("ZSDXSXBKSASWNBVEVC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.639369562492);
    msg.setSource(57425U);
    msg.setSourceEntity(155U);
    msg.setDestination(9362U);
    msg.setDestinationEntity(161U);
    msg.type = 96U;
    msg.request_id = 23516U;
    msg.command = 225U;
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.646358400303;
    tmp_msg_0.lon = 0.437613580505;
    tmp_msg_0.z = 0.952951870684;
    tmp_msg_0.z_units = 88U;
    tmp_msg_0.speed = 0.338308046358;
    tmp_msg_0.speed_units = 253U;
    tmp_msg_0.abort_z = 0.819709438469;
    tmp_msg_0.bearing = 0.55377701529;
    tmp_msg_0.glide_slope = 77U;
    tmp_msg_0.glide_slope_alt = 0.853773538743;
    tmp_msg_0.custom.assign("UPJQLBVTWRXUOSVGWMKNFXAVMHCMQTGYNZJNOERHADXFPHYASYBMYCRUQBAUMHLWPKZQTYPJDMNFRATRDWUEYHJKBXFYJIFWXTWHEPIQUSDGHPXNVGRTDKLJLIJRPLZYEFADIKLNKXNZTRIZELMQAEOKQCOGSSUAWGKFHLEXRZPFCIGVCFXKOHOJMJBMCCTMADSZNBUPSCQWZJESKTOHVIIYZDVOBIRCGTOBEOWVPDCDNQVWXUUBSGFLLQZSN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 46356U;
    msg.info.assign("NGRMTVLTCVOIMRAECEZRFHZUAVXIGBEEAQIOVJYEQYKAKMNZICJXPPYXEZCUPRGVIZFROELNDNBUNXGKLKU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.258811727301);
    msg.setSource(41968U);
    msg.setSourceEntity(176U);
    msg.setDestination(14185U);
    msg.setDestinationEntity(11U);
    msg.type = 173U;
    msg.request_id = 60972U;
    msg.command = 166U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 2749U;
    tmp_msg_0.lat = 0.0538661965685;
    tmp_msg_0.lon = 0.0296394333206;
    tmp_msg_0.z = 0.413928208974;
    tmp_msg_0.z_units = 182U;
    tmp_msg_0.speed = 0.924385542233;
    tmp_msg_0.speed_units = 105U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.362546726287;
    tmp_tmp_msg_0_0.y = 0.888095298721;
    tmp_tmp_msg_0_0.z = 0.201199103816;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("ZCXLNTGZQYHJNDSSYUQFNUPCPHVFIOMPZJHAEUADWZBKXSVUJJDYFGMDG");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 21288U;
    msg.info.assign("YVBODKOMSFYUHSCFABHRUEQUXFKRRJZQCITDQXNHDBMUGNBMEHPYJGMXGREDYUCJNVSKWUTEYPZAYUPKZINTBVCPBZQNSVMZFL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.752994250332);
    msg.setSource(53694U);
    msg.setSourceEntity(172U);
    msg.setDestination(51066U);
    msg.setDestinationEntity(3U);
    msg.command = 246U;
    msg.entities.assign("AXBXSDPUQTYAEGJVPWAFZAV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.597847952189);
    msg.setSource(12484U);
    msg.setSourceEntity(190U);
    msg.setDestination(56449U);
    msg.setDestinationEntity(23U);
    msg.command = 149U;
    msg.entities.assign("WWNYJNRXVMWUELRFFTXSIAAHFGQNTIECSTCZBASAPDEYQNMPKFNCSOGQMPSHXPOHEBTWPWYFOWJSMNBPQCQASUBZVBEMTINXWAVLKFADPJUUVLXAOKUGWZPHOAXI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.229896765612);
    msg.setSource(47151U);
    msg.setSourceEntity(193U);
    msg.setDestination(27164U);
    msg.setDestinationEntity(53U);
    msg.command = 56U;
    msg.entities.assign("TYIYMTXZWQBNLAGQLKRSCGLSDXVYNCOMAKFRDOEBFURCEZYWSHVZDXPRIKTCBGHVJWSGRBWCAGJNPGVDVQZYHTZMETANIHAZQCFQJFXUCQBPLOFNITG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.90351331519);
    msg.setSource(23229U);
    msg.setSourceEntity(92U);
    msg.setDestination(36569U);
    msg.setDestinationEntity(230U);
    msg.mcount = 245U;
    msg.mnames.assign("YGVZLOCTEXKNTAEHRTZEYEBNBDTYPJXWFJXDIDSVDFJIYNKSEDFLPDJGMCHUXUEMRMBTMBAPNTTUGCAADVPXSBRPSNQMWCIRBLVOXEKKUQQHWURQSVZDAHCFXQKROBTGIGYZCQMFTUJFRGLKSPLELOVRYHJBNYKJWHUORVGFZDPHSBWOGFVDQFVJKLYWOKLQWWOINFLNWIHVIECAAAPQMXNJMMGXAXBEQSHUOZPGKYT");
    msg.ecount = 157U;
    msg.enames.assign("KZNJDKARMEQGMWXTDJCUFIIHPAIFBCKHASJVWRHTFQDARYSISIOUSQTAWNFIQZWPTHKHTQOKPOMXMCWTCHFSARMVTRXGWNDVEVECHDUBROZLGXLSDWZ");
    msg.ccount = 67U;
    msg.cnames.assign("HTEESMAPPTUWUSZTALWQQTMFCEDOJRQSFSMLJYHJUKXSXEWSJZWWVMKVNPKGPFHRIKIDFMDAXLGZKDRKSJGWKHEOIVRXOIXROYBYLSOETJPPBYXXCDPNFNIRZGDOTGYQCWZUFFVFCAZTLGMVHARRWMQKZEABLWAYSLONGBDYLKBJDC");
    msg.last_error.assign("CIPTNWMINIAXLUIQFEYCMYUDJVBIDHKSESEQIMVXLPECURHLORECHSVGXFYWJWMRADOEZJLLNVPJJBLQUCSSKKLUJKZZAUPFEBUBWORXPZZRPZKSBYQBFIWEOMDVAGFNPYVDIHLACFYOUQATAXVKZQDWWBFXPYQAQGCZSNRQWFBAMKHAWGSNOMVHVQMIMEOHNTHSGSTUDXBZXKEGOMTTOGROGJLHNUKRFLBYIKGYJXXRCNDRTTCDZGNVJ");
    msg.last_error_time = 0.954197299362;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.638298668589);
    msg.setSource(46886U);
    msg.setSourceEntity(149U);
    msg.setDestination(1586U);
    msg.setDestinationEntity(235U);
    msg.mcount = 170U;
    msg.mnames.assign("MXTLFTDGJUGMOBSOUKWXQKDYWLGHEPWOOSOKYENPQTVUEOTFVKINFISPCEJKFVMFNBLYRYQEQMNADNQOBRZSJBFHDRCCIWVLERABLELGLRZHPHKNYBITSBZODUDV");
    msg.ecount = 36U;
    msg.enames.assign("RBXIIYDGSCUJLZJVYZDSAALEUSHMBMRIJFSNEROQNTGDFYVMKUAPGEZGSMJCOYLBNWEJMGMXRTABPSPTVOVZNEDXADKHEEUKCBEQVFOAI");
    msg.ccount = 212U;
    msg.cnames.assign("LQNOKOCNUZVGTGLFQDENSOHWWCWPMDTDQIAPBEQLHIXMEKJIFGENIUD");
    msg.last_error.assign("ZWCCCBIEFDMPNHJHEGFYOERDKJLFNLKWTDIVUDWTPYNXQDQOXETMOCEDKTFZSVBIKEWKGGUSOBAEAZLMLBIAYGJORFIVRCBYMVNMJQBUEVQJWXXQSQPSNKAJHAPQNWSRYNTXRQZSWOLHUNQXLMPOMKOFHZXJGWFRL");
    msg.last_error_time = 0.693201905478;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.725726285659);
    msg.setSource(50128U);
    msg.setSourceEntity(108U);
    msg.setDestination(56413U);
    msg.setDestinationEntity(240U);
    msg.mcount = 178U;
    msg.mnames.assign("CMHZRGMXCTZGFIQZQYSRKFDYIBBKOUZMS");
    msg.ecount = 36U;
    msg.enames.assign("HTEBJTXCZXGOYPKQUFDVPVRZAEOZCFLWSDKLAXQXCAMWXRGNLLGPAKBATCAWBRXCPESKNUOZQGMPDRTRMLOBJWVPWREHDEQMLVSMDFICQMEDIRRUMJYESLUZOVJNKURWBLPTWKZTRQEWHBXAHPYVYDOHIYBFZJBIPT");
    msg.ccount = 30U;
    msg.cnames.assign("RAKOOUGBALHXQFCUMWAIIEPPBONGMTVJYHMWYHNYDIZOVCEDTGJSPAUTEZITUMCCNXQKWSFZXFCPQJEPCIBXKFOMJTZILURINKDRXDXNAOSCISRBKLCBGYJVGGNMLSJWYDHHHDBJAYGNJWUVDHRN");
    msg.last_error.assign("DTPOYGYENOBABRYOLFNHYRNRHBMUZVBEQQNFMMF");
    msg.last_error_time = 0.711635179601;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.113457694457);
    msg.setSource(33333U);
    msg.setSourceEntity(0U);
    msg.setDestination(45015U);
    msg.setDestinationEntity(136U);
    msg.mask = 108U;
    msg.max_depth = 0.364425224455;
    msg.min_altitude = 0.187323179404;
    msg.max_altitude = 0.695629396044;
    msg.min_speed = 0.486058302619;
    msg.max_speed = 0.817310105879;
    msg.max_vrate = 0.219906890933;
    msg.lat = 0.947662956379;
    msg.lon = 0.178702340035;
    msg.orientation = 0.108801908183;
    msg.width = 0.282049242606;
    msg.length = 0.445369134574;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.231500051423);
    msg.setSource(50997U);
    msg.setSourceEntity(135U);
    msg.setDestination(100U);
    msg.setDestinationEntity(198U);
    msg.mask = 210U;
    msg.max_depth = 0.0271611088264;
    msg.min_altitude = 0.955016194854;
    msg.max_altitude = 0.83079965378;
    msg.min_speed = 0.284879508457;
    msg.max_speed = 0.874349644121;
    msg.max_vrate = 0.223104835167;
    msg.lat = 0.249790713236;
    msg.lon = 0.569433524383;
    msg.orientation = 0.197411495765;
    msg.width = 0.972362753264;
    msg.length = 0.588774724988;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.647269004395);
    msg.setSource(36023U);
    msg.setSourceEntity(95U);
    msg.setDestination(14025U);
    msg.setDestinationEntity(182U);
    msg.mask = 141U;
    msg.max_depth = 0.857872051587;
    msg.min_altitude = 0.424615649267;
    msg.max_altitude = 0.671213251549;
    msg.min_speed = 0.483940015503;
    msg.max_speed = 0.820830413418;
    msg.max_vrate = 0.623071988893;
    msg.lat = 0.248609649606;
    msg.lon = 0.14868106814;
    msg.orientation = 0.730150967095;
    msg.width = 0.0507776882731;
    msg.length = 0.49868775503;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.530096616168);
    msg.setSource(37455U);
    msg.setSourceEntity(5U);
    msg.setDestination(65378U);
    msg.setDestinationEntity(139U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.964754189126);
    msg.setSource(8924U);
    msg.setSourceEntity(101U);
    msg.setDestination(26222U);
    msg.setDestinationEntity(58U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.116645409453);
    msg.setSource(21417U);
    msg.setSourceEntity(157U);
    msg.setDestination(5433U);
    msg.setDestinationEntity(232U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.781768397096);
    msg.setSource(55775U);
    msg.setSourceEntity(84U);
    msg.setDestination(41621U);
    msg.setDestinationEntity(244U);
    msg.duration = 12932U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.648097215287);
    msg.setSource(43467U);
    msg.setSourceEntity(100U);
    msg.setDestination(59423U);
    msg.setDestinationEntity(92U);
    msg.duration = 56392U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.00691101896347);
    msg.setSource(57054U);
    msg.setSourceEntity(124U);
    msg.setDestination(64338U);
    msg.setDestinationEntity(218U);
    msg.duration = 15834U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.765371676768);
    msg.setSource(40704U);
    msg.setSourceEntity(79U);
    msg.setDestination(23043U);
    msg.setDestinationEntity(182U);
    msg.enable = 154U;
    msg.mask = 3343367473U;
    msg.scope_ref = 1134481346U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.232690728762);
    msg.setSource(27733U);
    msg.setSourceEntity(125U);
    msg.setDestination(61359U);
    msg.setDestinationEntity(81U);
    msg.enable = 105U;
    msg.mask = 779928833U;
    msg.scope_ref = 650793690U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.0122648546186);
    msg.setSource(56623U);
    msg.setSourceEntity(49U);
    msg.setDestination(1842U);
    msg.setDestinationEntity(173U);
    msg.enable = 1U;
    msg.mask = 854285774U;
    msg.scope_ref = 4075814262U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.673473805176);
    msg.setSource(48518U);
    msg.setSourceEntity(244U);
    msg.setDestination(19068U);
    msg.setDestinationEntity(151U);
    msg.medium = 203U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.842591009529);
    msg.setSource(41241U);
    msg.setSourceEntity(3U);
    msg.setDestination(55562U);
    msg.setDestinationEntity(213U);
    msg.medium = 179U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.991328492024);
    msg.setSource(4505U);
    msg.setSourceEntity(54U);
    msg.setDestination(44376U);
    msg.setDestinationEntity(126U);
    msg.medium = 40U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.726395234691);
    msg.setSource(23399U);
    msg.setSourceEntity(220U);
    msg.setDestination(63255U);
    msg.setDestinationEntity(111U);
    msg.value = 0.554995090865;
    msg.type = 149U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.0760142216143);
    msg.setSource(14725U);
    msg.setSourceEntity(22U);
    msg.setDestination(65376U);
    msg.setDestinationEntity(186U);
    msg.value = 0.765150487887;
    msg.type = 14U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.20722593805);
    msg.setSource(44191U);
    msg.setSourceEntity(9U);
    msg.setDestination(31253U);
    msg.setDestinationEntity(244U);
    msg.value = 0.645307949428;
    msg.type = 229U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.225619210892);
    msg.setSource(35050U);
    msg.setSourceEntity(85U);
    msg.setDestination(41642U);
    msg.setDestinationEntity(54U);
    msg.possimerr = 0.466260042153;
    msg.converg = 0.899728450758;
    msg.turbulence = 0.196335878937;
    msg.possimmon = 249U;
    msg.commmon = 115U;
    msg.convergmon = 171U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.561171179045);
    msg.setSource(5074U);
    msg.setSourceEntity(13U);
    msg.setDestination(51876U);
    msg.setDestinationEntity(122U);
    msg.possimerr = 0.155337790298;
    msg.converg = 0.935433061746;
    msg.turbulence = 0.548287167906;
    msg.possimmon = 85U;
    msg.commmon = 42U;
    msg.convergmon = 15U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.448144487205);
    msg.setSource(20314U);
    msg.setSourceEntity(96U);
    msg.setDestination(7996U);
    msg.setDestinationEntity(3U);
    msg.possimerr = 0.142615289912;
    msg.converg = 0.605914959278;
    msg.turbulence = 0.410494788028;
    msg.possimmon = 206U;
    msg.commmon = 119U;
    msg.convergmon = 77U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.745806348595);
    msg.setSource(39460U);
    msg.setSourceEntity(161U);
    msg.setDestination(15250U);
    msg.setDestinationEntity(251U);
    msg.autonomy = 146U;
    msg.mode.assign("DSLKCPPLGCGFJSNENWZFAGB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.275768546553);
    msg.setSource(34154U);
    msg.setSourceEntity(44U);
    msg.setDestination(24067U);
    msg.setDestinationEntity(125U);
    msg.autonomy = 184U;
    msg.mode.assign("KZTTJESPTNPSCEGHJBDGWKVFWFPRXEBMDFXVSWXYMMZGNRIQVFIVEIORPVDLI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.0499066102091);
    msg.setSource(42539U);
    msg.setSourceEntity(146U);
    msg.setDestination(35050U);
    msg.setDestinationEntity(36U);
    msg.autonomy = 56U;
    msg.mode.assign("MVVGCOTRSAXUCUFIAZUXIDQGHLPRJGQTSLORIHSFPSQEVESFVHZQSHYJLBCYZGWECDOUDAMYQIJXZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.0337420805086);
    msg.setSource(28292U);
    msg.setSourceEntity(35U);
    msg.setDestination(51864U);
    msg.setDestinationEntity(121U);
    msg.type = 18U;
    msg.op = 140U;
    msg.possimerr = 0.351505463296;
    msg.converg = 0.862173430081;
    msg.turbulence = 0.970312447974;
    msg.possimmon = 222U;
    msg.commmon = 194U;
    msg.convergmon = 144U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.470191334849);
    msg.setSource(31501U);
    msg.setSourceEntity(71U);
    msg.setDestination(45024U);
    msg.setDestinationEntity(66U);
    msg.type = 11U;
    msg.op = 11U;
    msg.possimerr = 0.255557570516;
    msg.converg = 0.933112175933;
    msg.turbulence = 0.893319005075;
    msg.possimmon = 188U;
    msg.commmon = 24U;
    msg.convergmon = 139U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.462800268704);
    msg.setSource(12042U);
    msg.setSourceEntity(207U);
    msg.setDestination(23265U);
    msg.setDestinationEntity(8U);
    msg.type = 40U;
    msg.op = 204U;
    msg.possimerr = 0.0789994476746;
    msg.converg = 0.304563106921;
    msg.turbulence = 0.137168436547;
    msg.possimmon = 11U;
    msg.commmon = 113U;
    msg.convergmon = 147U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.300586522903);
    msg.setSource(26844U);
    msg.setSourceEntity(231U);
    msg.setDestination(53435U);
    msg.setDestinationEntity(137U);
    msg.op = 44U;
    msg.comm_interface = 138U;
    msg.period = 32062U;
    msg.sys_dst.assign("XGQJUFITLJCRHUEBPKUMZILAVFYYTTFKXCHGBVRJTPMGWPMKVBCLLITCBUZEYUBRASQSVQECLRVWXMZLKHFSABRVXNBUWEETGSQASHXFLNKVYPHOQSNIJDWCANVOPFXCHOJPDVIYHOWJEQURDIWEXOWAKCBRKDHRFTLARHFGINYWMA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.0633218833804);
    msg.setSource(51751U);
    msg.setSourceEntity(19U);
    msg.setDestination(59484U);
    msg.setDestinationEntity(133U);
    msg.op = 92U;
    msg.comm_interface = 22U;
    msg.period = 41398U;
    msg.sys_dst.assign("YVZQCHKGZFRLWNHXGAUUGDFWZWEATSDBHGJZCNMHLJFCOTXYDLNKHXCOCSCBNK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.33279401259);
    msg.setSource(55832U);
    msg.setSourceEntity(33U);
    msg.setDestination(35471U);
    msg.setDestinationEntity(135U);
    msg.op = 228U;
    msg.comm_interface = 77U;
    msg.period = 48930U;
    msg.sys_dst.assign("KHJQCNBRMSSWUSTXDPIZJLYQEHGIHLLZMKXTQAJYRXDXTQNASAYKQVEOLUPBPTZUTZIDJBMBHDGKUWQVJSUWFHKINFAFDNQZHRBAWTMGDCUFX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.251867516427);
    msg.setSource(39831U);
    msg.setSourceEntity(60U);
    msg.setDestination(6404U);
    msg.setDestinationEntity(141U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.0628652661099);
    msg.setSource(3312U);
    msg.setSourceEntity(253U);
    msg.setDestination(32563U);
    msg.setDestinationEntity(149U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.329555839991);
    msg.setSource(28712U);
    msg.setSourceEntity(114U);
    msg.setDestination(42565U);
    msg.setDestinationEntity(33U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.00190540973953);
    msg.setSource(33018U);
    msg.setSourceEntity(172U);
    msg.setDestination(9329U);
    msg.setDestinationEntity(42U);
    msg.plan_id.assign("VXGLSKOEPCARYRMUOHRXYQBUNLEFFLURCXNYPTLPLYTYYU");
    msg.description.assign("FWZQGRIGOUBMHDEOZXIAPTAWBSTAWUBHJZWSSKSUCRCGBQPMDLCNHTANHPVNPJXAEUASKPIDCLALCGTYFXJDUJWUNU");
    msg.vnamespace.assign("MTCWAUOLGHOOABFQFFFBUGURDZTGLXXQLJVJTERX");
    msg.start_man_id.assign("MRVSTVJATMKWXCOLDKWXQGBLDDHHPHSDFSURXYFNIYWKATIFDSCVYLKJGJINWZZBJUQLZAZGWDRBTBPTOFZNXEO");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("AAWRUZDMTICOYIVGFFPIKEQXUFQYNNVXTXJECCNDYEITXSGQKDEBNHIUIWZWLCBUBKTKFRAYCGJOBFZOBPLUANDBAJHDZQBVMVEZCWKLWJCSQHCPASMBRYUMORHECQQJHOLAYXSPGUAGFMIOTYZYYRRLXMBUSILGDTHWWWTWGSWHUOAEPJVUSXMDRNJ");
    IMC::YoYo tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 31599U;
    tmp_tmp_msg_0_0.lat = 0.442531202206;
    tmp_tmp_msg_0_0.lon = 0.0423886498123;
    tmp_tmp_msg_0_0.z = 0.351206652466;
    tmp_tmp_msg_0_0.z_units = 73U;
    tmp_tmp_msg_0_0.amplitude = 0.591535311294;
    tmp_tmp_msg_0_0.pitch = 0.766276344881;
    tmp_tmp_msg_0_0.speed = 0.555848321962;
    tmp_tmp_msg_0_0.speed_units = 76U;
    tmp_tmp_msg_0_0.custom.assign("XHPXGWWIKOTDIVQUGIAENBJUIDYYXZWPKOVNTIFSETLFNSXVNEESKQKLHYONJKJZUWPLCERUGBLFMMATDUZIEVWWXSCYRHWJOUXFDCSUCIVQXKPJEZTRRGXBREJGBOBQYPMZLVYQNNDVCSUBPBYAFENTQFAJQOWRPSTDCLYPZQHMQSHRM");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Pressure tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.91249518063;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::DevDataText tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value.assign("OZJILDRVBXESKQRIVTLIXEFFVLHUALKXXCTNGPMNPDHXIOQUCQSWZMXNVXVSKNLDPYYWQUEPPKACWMPMYRBGAWGGCKZTOOAUHZCGENLITJAJJDDPBUQEQEPEEFUJKIHGDHYBRYRJZYTHIYGXLNYDWRAGCVQCCBMHNZOVZIZMTTNFWAUYJCWFPSIVQYRZNTPMMIBGSCLSSOKOEKGEVUHABWHFD");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("JXJAYLNGVRJSEUHAQGHSCEMNDIITFLY");
    tmp_msg_1.dest_man.assign("FDKDGYFMVJPQYYAXBQDGKKAPVLRNVFWISPXJOUWXKI");
    tmp_msg_1.conditions.assign("ENKGDPGNHSWSXBARNGSZMCGXQSRWTYKRNXZUNKRLMIPVNSNLDKXCZEDILFWAJSLCJDYRTHEBWURTYOVEKRTPFBHTXMBVPEFAGZLJHMFJQIGOISUBMIOVJQDCTXTWAIFMAXUSZAVWMCN");
    msg.transitions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.916574387944);
    msg.setSource(4898U);
    msg.setSourceEntity(91U);
    msg.setDestination(38179U);
    msg.setDestinationEntity(18U);
    msg.plan_id.assign("JCDBLIJMUCJVFJOIHBPJHSCWZLWKJDFGLEXBODAQEFQTRTXVSDOZSSXATNHSZKIVMDEAICNAZGJBLXWPHTUFLFRVHQKCIMSHYYTOWQXKFBRWKHQJCEVLTBNPZODGUMDP");
    msg.description.assign("ANVJWSTRMECELELGBBYFXQJXSVXVYSBWMYFQLCMKOFUUEGNNGZJMWQQHAVRTNNMSMVTJPCXAZJUFLBFCAACEKKBXXLUFPSCGIUPFHSICZKKIUKZODPLCHBRSJDXYUVDTWIGYXZZYOPKWEGQRGBWPTIVMQKRSUYPWQSAHRARDKXTLEOOCTPDRKNVRZVFOLVJIFDWBIHEZNNWPAGNUDJQMJNTDH");
    msg.vnamespace.assign("OSRFUWHMYQKY");
    msg.start_man_id.assign("KAFEIMHAWYPGVOGHXHUHIQFFIGSNCEWMOQWSKTBHXLFXIDWOFNRMYTYXUS");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("PWUJAZTMLXUDLRMHEOAVSABIMNIPAQCGQDJSAYPTJNSWWUYGPSIXNJHPBYNDCGUYUOKHZIYSRVRESNHEZCDPKHCAFAVFHEIBTNTTZESBKLLINJXPNXCAQOL");
    tmp_msg_0.dest_man.assign("VRCGVEUWBRBCXKAOADAMRLPNGDBMBGZCGPODXIRTHJJSWKVZRWVLEIDYQYUPBHDFLIFHHZNPYQYPLGGDJCMPEPTZMWMKIQMHLSXEIZJKZJRAUNZLFBJMZPKKUQTXDWMXNCJNHQJKCWJGQCACFFGWBHEVOUHIUYOXBMQWIAGQOFRAFVSOPXGSFEEQVYELDINZLNDVAAPOJLNYLHVNOTSUUS");
    tmp_msg_0.conditions.assign("QFSTNMXJMPDUOIZBWBSJCTHGSMBPESGASEYAVFLAEZELGNBAVACFYTOJOHKEGZDWRHWLSFBJRVIUZYVBGTQTHKSOCXHWXRNWYKLAVVCACYIIPIUDOBZTQEFKYNGJJPSNWPCFDEMEMDMXJHQEXBIPRIXPFZYIHKXTDEKFRDZGGQPKSCRQQDZGUKOFNALOBYLVPJAKRZNR");
    IMC::DesiredControl tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.524944679349;
    tmp_tmp_msg_0_0.y = 0.742718551536;
    tmp_tmp_msg_0_0.z = 0.816419227798;
    tmp_tmp_msg_0_0.k = 0.591845025729;
    tmp_tmp_msg_0_0.m = 0.981378258436;
    tmp_tmp_msg_0_0.n = 0.166927245928;
    tmp_tmp_msg_0_0.flags = 50U;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::EntityState tmp_msg_1;
    tmp_msg_1.state = 182U;
    tmp_msg_1.flags = 98U;
    tmp_msg_1.description.assign("YBEZPNWFPCRXAEQMAHTCAARMNUUKYLCLVVWMRGCBUPKOIAHFVXWHAZMDJXPOSMEPZYOQJREUQVXITFPIPFHRNQLIVMYNFKTGYKOUHBKGCQJ");
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.211953600009);
    msg.setSource(46654U);
    msg.setSourceEntity(43U);
    msg.setDestination(32642U);
    msg.setDestinationEntity(115U);
    msg.plan_id.assign("KNAEFBPKPVCUHHVIUVKRQRAQBETQFBRGRZVRWOCCRZSGNGTJMWLLDUXXATTBEFUQZMUOFBNNPHIHTYIPPJSVJKULDBDYPLSWTYYLGZRYWQOCSYBWGCMJAWXIZDALQINXVEXLFMVWVZQTINCSKEPUKRFEMOWVMMJFFEICDGLMEECVMGYXAHPLANKBSXOTONZFDGWQQXKXECIKCPTDPMJUYUYSHFAGBIUJ");
    msg.description.assign("MYNTRGKUFXRIXLMMMUOOZGVHOEWQSCZKNWQFUVYDFEIADUQUMSYUXVVVWCIQSCBPLTZLOKEGPBAIZBJQHDGJLSTAPRHPBCURMCXWFNHSICFDENQBRWWNTXQSWJHVQYMJERPMRHZTLRHFQNXDZQXLJORLABLGEYRKTKAOEAISGEADGBTSVFKDWZJFVGULSJICMUNKZNGBDJEJKBFWTPZYHCCKGXDLTUWPETOJIBAPOIMNCOOXI");
    msg.vnamespace.assign("TCFLJPGRTSTLBNEGYJSXEYFARPOQSUNAJYIHXLMSKDVULEQYHPFCTLWEIMOFWIYNQFVRUSXDCCIBMRDBBUZPSN");
    msg.start_man_id.assign("DQFFREZEUIGNMKLCDT");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("QIEOSSPJXWBUJEGZKJYAHVCPMLWDEXUGMMDYMCKILJAGBAFKNDYSUJTPXFWBFZPRRVWLRSFGZRLNAQOGKSTQYPLHGISXHNZETAWULKBAMAVCULMVXFYNIZZTRSQVOFUXZPTKKLPHJDQMULOEPVIHEOHECCKTGDZJYAJGMPSVNOYUDIWQZJYXGROSW");
    tmp_msg_0.dest_man.assign("YHZYPJJHLQSXCTQFZRRVPUXUHEHPKPUPMBUVPWAXALDIEWYMSVCNWRDHOLBEZHGFHNKONUGSYWMXHFFVFVGSAYRBFGMLLRTROOVSHCONDQNAOIXEQCMVNUKBGRNIXEOTMJSTTVIUOLQYTXKSIYPKGJBJVWLIEEDJVQBBZNRTUQCZJIURCTFPLCTAZMZKQTUZYPAJCJWG");
    tmp_msg_0.conditions.assign("CMCAHQRSNTULQWFBGEIPDVKUPBCCPKZUIVDQWUVVSOHYDXACKIVQJQJZSQMWKETDZOZRGMKSMOXRTYTMASQRJZGUDCHOBBKMTNINNANLGLENDJPDFFYRWVMXCIKYTSXBOTHHRSYWHKPZVWNLBEFWAICART");
    msg.transitions.push_back(tmp_msg_0);
    IMC::Pulse tmp_msg_1;
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.461707264541);
    msg.setSource(58126U);
    msg.setSourceEntity(176U);
    msg.setDestination(1375U);
    msg.setDestinationEntity(252U);
    msg.maneuver_id.assign("AYFWCTIUNUTEEOXBAYVNCYDFDBOWGBPMQMAMZVSLXUEKZUJYVGCMJZVDPSBNTKLGGQURDPEHIDCLBSKFTLLNEWWMKTSXLXAZUPWOBYNRJIFUJGMRVJHRHYZYOMZEJVRIJZQRVGKBQIWMVOUOKEHWSDAWRPYUQEAPRHAPHZTJVPLSXCBCCMQBWEGORHFVOQUYHK");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 62681U;
    tmp_msg_0.lat = 0.882717811855;
    tmp_msg_0.lon = 0.527542444498;
    tmp_msg_0.z = 0.226289630224;
    tmp_msg_0.z_units = 13U;
    tmp_msg_0.speed = 0.0194531453856;
    tmp_msg_0.speed_units = 240U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.783932852682;
    tmp_tmp_msg_0_0.y = 0.00409417931301;
    tmp_tmp_msg_0_0.z = 0.333437014082;
    tmp_tmp_msg_0_0.t = 0.47229373465;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("ZHNPORLGXXMIZXMYCWXQURWUOLNUTUCHPMBLNENWXADGKSQFAHNZTIHPMBQJRTKSKEGSVHGXZXDBPHFTDLJFCQCKYQVKQIUGGFYWODVNRCXRYKRNEMRBYCNWTPGMYPCVLMVMDSZSSRGPDOVESJUODVYMBHJOZKICYOSESVS");
    msg.data.set(tmp_msg_0);
    IMC::DesiredHeading tmp_msg_1;
    tmp_msg_1.value = 0.283600641617;
    msg.start_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.978529164859);
    msg.setSource(45083U);
    msg.setSourceEntity(219U);
    msg.setDestination(7676U);
    msg.setDestinationEntity(143U);
    msg.maneuver_id.assign("JLZWGGREOFYMSCEQNDPHWPFHAWKMPYIEXBLNZWNTCPCBWOMIKZVGQCDCLFLOPOTWHCOTVJUQUJRHKGSDAWS");
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.329662625377;
    tmp_msg_0.lat = 0.538569811008;
    tmp_msg_0.lon = 0.701473629434;
    tmp_msg_0.z = 0.904674530393;
    tmp_msg_0.z_units = 6U;
    tmp_msg_0.travel_z = 0.571582963502;
    tmp_msg_0.travel_z_units = 223U;
    tmp_msg_0.delayed = 13U;
    msg.data.set(tmp_msg_0);
    IMC::DissolvedOrganicMatter tmp_msg_1;
    tmp_msg_1.value = 0.846530738172;
    tmp_msg_1.type = 190U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::CompressedHistory tmp_msg_2;
    tmp_msg_2.base_lat = 0.521979275667;
    tmp_msg_2.base_lon = 0.686396144275;
    tmp_msg_2.base_time = 0.445445526439;
    const char tmp_tmp_msg_2_0[] = {-109, -49, 7, 50, -25, 122, -42, -16, -47, -87, -33, -27, -45, 37, -121, 124, -93, 40, -35, -97, -48, -89, -47, 32, 68, -27, 122, 47, 116, -85, 66, -74, -59, 86, -4, 37, 32, 117, 56, -52, -62, -77, 8, -103, -107, 38, 59, 18, 73, -42, 96, 120, -95, -83, 23, 100, 105, 83, -7, -91, 12, -67, -4, -113, 124, -77, -64, -88, -25, -9, -84, 19, -46, 40, -37, 19, -111, 121, 44, -127, 120, -64, -55, 96, -30, -48, 48, 72, 91, -51, -121, -15, -83, -99, 30, -70, 121, -104, 7, 22, -75, -6, 106, 82, 16, 109, 90, 83, -109, 59, -89, 109, -31, -12, 118, 29, 87, -120, 86, -115, -115, 21, -41, 12, -35, -20, -94, -11, 93, 43, 55, 110, 46, -64, -29, 56, 63, -128, -53, -43, -7, 27, -128, 83, 21, 56, 67, 25, -74, 8, 20, -20, 71, -98, -76, -82, 12, -75, 42, -79, -121, -111, 119, 115, -110, 8, 2, 110, -66, 126, 5, 100, 89, -23, 81, -82, -53, 126, -86, 65, 27, -93, 119, -120, 108, 119, 28, -76, -43, 108, -109, 41, -49, -47, -84, 57, -53, -73, 70, 90, -9, -47, -116, 0, -71, -76, -44, 94, -67, 75, -102, 126, -117, -128, -19, -53, -11, 104, 9, -92, -6, -62, 64};
    tmp_msg_2.data.assign(tmp_tmp_msg_2_0, tmp_tmp_msg_2_0 + sizeof(tmp_tmp_msg_2_0));
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.356845939965);
    msg.setSource(45165U);
    msg.setSourceEntity(96U);
    msg.setDestination(55221U);
    msg.setDestinationEntity(128U);
    msg.maneuver_id.assign("ZMQZPVRFUHOIZOYKFEPVZOWIHTMFXKJBUSDQHMNKIYNRJORSYHWNPUEAYDNSOCFAPDVUWQEHZMPGBMXVGCLXWCQBLRARNDSECLBIYKZYEXFUHWZWBYQLZRTGWNXUPLHQHDUSTYDOFNCCCXTJKGJJCVSUSAHFONPUWVOB");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.486227852473;
    tmp_msg_0.lon = 0.371324816435;
    tmp_msg_0.z = 0.785015703671;
    tmp_msg_0.z_units = 162U;
    tmp_msg_0.speed = 0.467220530444;
    tmp_msg_0.speed_units = 188U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.704639895366;
    tmp_tmp_msg_0_0.lon = 0.641132763189;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("ECFVGDRJRVXTLCRUCCIQRTXHDLTIZPHOG");
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.166448725503);
    msg.setSource(2072U);
    msg.setSourceEntity(11U);
    msg.setDestination(38717U);
    msg.setDestinationEntity(194U);
    msg.source_man.assign("AWFFSIUBTJDMCUOP");
    msg.dest_man.assign("HACQNUGMASCVUKWKNTANMFTLIDVWTRRXGHMDUBOBPZIPETMGVHMFEOLVMUONSBOPLDETTRWXFLCKLIYWQGYJZFLOKUPSZXPNSRZQEDIPCXLDKUXGMBUINCDFICTVHBHJHYYIYRLRQMCCTEKWDXRXVJNKXXJZBQKAVHSORHNEBPMSXQABCDOCQL");
    msg.conditions.assign("GCFVDEKNBLASPGXIXFDYDRGZJDAXCUDEGGYHJWRXYLLLHKJMCHRHFDOXDNLTMCUQRVNLMIKAPPHASIWMFKPTFECLQYZTVPKWXVZEWUGZNRAMZBXCZWWQJSQJIZUNZORKUSSBKYHHZTUQEHYNPQVXAOKQFUMBSFEPLOWUFEYOSCMYUTYYNIVFTTCXRNWMEWIZKCIPONIFHSVCHVGJXTBQJGAMQPLVPGEBOWJSREUBBTJJBODSVIAMD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.275758712738);
    msg.setSource(50314U);
    msg.setSourceEntity(225U);
    msg.setDestination(130U);
    msg.setDestinationEntity(74U);
    msg.source_man.assign("GLUUQMJYNYISXGBDHLVMXZTZRZSFCZQUMTKFHKIENKJAYLKQZYDTWSCTBDBOXFWOUFMGOUPLWDBCGTJONZJFYMRLFDEVNISIPPDBCPJTETCBRQQEVMILNKHINXJYITLYTPMXRRPCUMTJFKOWWQHAUPAWPKG");
    msg.dest_man.assign("PDTCPXORTSWULCEAWNBCXYFZLRXAVWGGAGOCQATJPQWSSFNMJPTJZPKJAHPPRKREDXNDTNZGGZCVAGBEQKRDWUGXNVACQWONTXLRKYLIXMIMYSDPOCZXUTSHKEUSUDTNMKHVJVUBLQOIYYERLHUIAFQWPQIRBYEMBCEIVCHEXEOLGBOHRJDPVWXISBZYA");
    msg.conditions.assign("FJCCHDMSTMDUBUFINLBOZWPYOPWSBVIBULIVFXVKTXMQRBLOZRHZRMBCYOUQYXDSLRYNUKECVQOTQALZXNUFCRVSJTMPQOCBDEMIDKXGAJFVIGTTVNZTXHXNGGWMQADPLKRG");
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 121U;
    tmp_msg_0.list.assign("JMDRWLIAFGKAPXHFCIKFEHMRJGYBOZBKUWPZHSOLVQNOXNYGSQEDZYXSUXCTAFRJEFNEMUHAMHNTJZOPUVPAQVIVGMMZFBVATBTUJDKIWEFCFONAUADTIKVPKASWCMBEHBTUDEHMKZPTSWYL");
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.287588847417);
    msg.setSource(28396U);
    msg.setSourceEntity(198U);
    msg.setDestination(39673U);
    msg.setDestinationEntity(214U);
    msg.source_man.assign("WDLQIFWPPEGHMFAJTZHAKJSXQHLNYQUUSUDLYSNJYVDBUOJMVXXGCDBCGHPKIEBENKKONTHZVQMOENSRUZYHCNHCJZZJTYVXBODMYZBFEEFESFNMVHBWASWLMZTUQITYNKBXWPGZCRXVUREWPEAOMFCKXGKRHLLIVFSYADS");
    msg.dest_man.assign("ZQETCIXYUOADVKVXBJVDMUBGWGBJBAJQNBUDCPMXRXFIZNLZBCGMZXKOHVJGOQRDIDINTILZBYAXOZLHUPFQSPTSYYCRRNJZUEPKFWUIVKVAYSBUNSMNNOOZNPAADKGTU");
    msg.conditions.assign("DJXQHPZMUXOGEFZOWQAAEGLCERMFBHFMWPTPHTRMDIRGUBOJIYKVUOWZHRREVAPTLEFASDVRGJVMQTQAFHIIDLVMATLIUAWJH");
    IMC::DissolvedOxygen tmp_msg_0;
    tmp_msg_0.value = 0.692199068588;
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.799847581382);
    msg.setSource(62328U);
    msg.setSourceEntity(117U);
    msg.setDestination(32948U);
    msg.setDestinationEntity(84U);
    msg.command = 89U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("AUTEEAIVLOEULQMDHQGFZLXUTDOEKTPJVIPDZPQYAVVCUEDXXSTTROZKFJLZXRCULVCZQNRWGWITBGELAMIBMKYCFNJLAHSOJTPPVHBREQRMDBTXXZOODDFUPTBYCMQYRKURPIUGXXRYOSYSBSBIOFKDJFAZLHEHOHVAJWPEISBWYNGWCKIPXYQWRSUJSKLJCIJWCV");
    tmp_msg_0.description.assign("UOYQOSEFTATVIYCGRIGKWICPFEDRUZBPWKNREHPXJMLDUBKMGUKBB");
    tmp_msg_0.vnamespace.assign("JKRECPYGTIKVIJXYXKCLZZNLKLCFEMDOUAGJOLVLYPPHJHKNJJPXHXMHQATMDCREEXSAGLVMABEGQSULULAZTRFBKUUNFSYEWTWPQLCRDZJOVROKYDNNSJWCFYUDCTQEGXWBFODYVMZPGVAMJNTUWMFANRIQWSKBTEZBTEMGHBTN");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UFYFHMHMVLTALMTNPWCFADXJIYESMHNXWQDERFQLNGKGTHJUZKRCGEGUNLMPTRFYHKXTFMKLXNSLPYIWKVIBUZOPANQIAIMBHYGSPBWDQWJYRFTZRWYKRVVDVUJOUOTREADXDBSQEGNOZBIXHBIAWAQXSZKGNMQVIUWQCQZCECVAO");
    tmp_tmp_msg_0_0.value.assign("GEBSBVPJEVVARIDOGDUAIYGVHMYBKQGTCEHTQSWNUICXXRDMHMSXDAPQKPFSFTRFFHOHLWJZQBWZLKGARZUQZFBJRUJKSVXRLOWWLLIYESCEINHUXKZANTYYTLCEGQFPFAI");
    tmp_tmp_msg_0_0.type = 154U;
    tmp_tmp_msg_0_0.access = 157U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("KMOOVLURLBZNAELQUTFPEWJMOZLQVQCQFU");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("HQENTXKAHYBOVPRPFBIFRYKQTMLSXISIUBFAUOZWEWMWGCVPXMQPAGROWUVGWAMSZVCIPRKXEXMZMGPBDFEMZZETNFHVDASWCYAPBDKOPEDQQBLBXVFUTKIWLLOCPLKHYUWL");
    tmp_tmp_msg_0_1.dest_man.assign("LPHNAKFWIOLSYNIXPQABVEIOHYEQWMKBCPJRIEAZDXADGGRRQMZXFCSRXOLYZSRUCGGSGVZQRGQMFJWPGVSTBJFANIFEHF");
    tmp_tmp_msg_0_1.conditions.assign("QPFSXRKZTMURDCBYLTQKQKOASFWINCHDHRMZPNUJHIAWTHOEKKAYBDXGULPYNBVHQJVKKXFBJVWSSFTJMXQTZNASORDCJYGEOURFLVBEOKGLVF");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::QueryEntityState tmp_tmp_msg_0_2;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.820379186421);
    msg.setSource(48465U);
    msg.setSourceEntity(159U);
    msg.setDestination(65286U);
    msg.setDestinationEntity(90U);
    msg.command = 161U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BEQTVXWKUOVNJSINIXGKWFKOYFTGLYQKAVLCYAJJNLJYYUDVJJPEUXJHUWCBRWIXMAZSUGKEVTCTKSHLYRMEZWVXQHLUHGONMJAIVQZDMWPEFBAAPLPBQNYXJRKPLRFLTCOZOIDIWQGMBRDUPZEOYSORFZVIQPOGCKCABDWSFKKHHCEHMMCPLYDFAHAPTZQ");
    tmp_msg_0.description.assign("EIMWQEQKNMBZBEPJCNPGPQYVIOJJOTYBKLDCXRHTWHFGTTRDMZAZEHQRZYRCLXJGTYGEJUAPTOBDVLTAAMSLWBIYKCQNXCYSDBBLZIZNNUEAIANXHOOSWMQGEKLSNOLTHAJSITXMDVNOUHZLTBMOUQVPHRWMWAOKDAXRHYLKZVHFJKUIBRSMFRCPCSXUVPESNEQMFGFUJIJXPWVSCIRFYXVFCIGQCXWRKSFPDYGHQBVLNUFWZAWYZFDEOV");
    tmp_msg_0.vnamespace.assign("IHWTUXZKIVGNJAYMZLALMWACJXAYPOKZQNBMORWKTOEANRKOUWZZDHTQDXEPDWSUSFUGUVEXJGSUSGSLMNV");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CNQUBQBVKVGCFROICHAAOQSBUUVSWHZPGQTBYFJGNJTJIOITQHLIXODEAYHMUEFNTJZWJDMMVZABVDEQFWDSYQUPXIYKYNGWIKEHMIIEGRJSGMWUCVXLEZFHSTTGLQSFQSWJZUNUZYLPFZBGIZSDXEBCLTKDWYTMLEARA");
    tmp_tmp_msg_0_0.value.assign("CCZKSYXFCRJIOFDUSRKPHDLRQUMGOWSOPWTYKDDCFGNJ");
    tmp_tmp_msg_0_0.type = 223U;
    tmp_tmp_msg_0_0.access = 127U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("GTPORQAKIUEMKCNVPWFLOMYAJBZRFPESMYNLLJYWSJPUYNDBMFMXQELSOQNWVYZPGVXVFKDDRUQCOHFUFCIJHJ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("WKYWYBTXRJHFCUBEJDDFOWNHTAIQPKDNKZIUFLDWCVJCAFTZXYWIGDPBKVPUTKIZIVQZVUEFZPYXJAWUHVILGBEQXRSDRXEPEMBYTPGHBZSGNFUSEAXQEOKSFTBGOHUFIAGTKGDHSLYCLLODONJZVPKLRWMJTONVLMXNBRYERSCYB");
    IMC::IdleManeuver tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.duration = 17127U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("NNPEDGPELEXHUTRSVZFZAMMZUUCCBSYEOTCDARODKTNILJNGK");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::PowerOperation tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.op = 236U;
    tmp_tmp_tmp_msg_0_1_1.time_remain = 0.779876420837;
    tmp_tmp_tmp_msg_0_1_1.sched_time = 0.370318872993;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::Redox tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.422781173353;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.612911416364);
    msg.setSource(29657U);
    msg.setSourceEntity(23U);
    msg.setDestination(7475U);
    msg.setDestinationEntity(202U);
    msg.command = 123U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SDSAGNJOXODSQY");
    tmp_msg_0.description.assign("SOMRQSCDCRLMSQEHZBVQTWMIAMNCIAUFXCTYTPYZDZRYASUFSAXMTXBOAXSTZNMFICGWRKRNLGOGKHCJPGQGYNCYEYYFLHJKIQLEDVQHGHIBZWHVBFGXDUJRJDKUJEDTVUTWUEYAOOKVZLMP");
    tmp_msg_0.vnamespace.assign("HGEEFMEDRZSVPVWWJDJZFPVUEZHKDSQJXHWBHAFXNPQYALLUFRCVXCOKPHUHWIDRHNHNRZNSSQBTEIYKSNSOBAQKZEYFTIUBSEGFJYAG");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BSGWFTPQZIRANMADIKRGYKMXXXZBBJTAATSCFEMTDLHWJZMTLQQHOOUGYLQRYXNFEQKHKBSXRAEU");
    tmp_tmp_msg_0_0.value.assign("JARMLZMHTRTENORKGBDQOJMTYQKFGGECJTIMLSICRGGCYIHGDVPANUBNZDPEFOPFFBJASYAPNTXCNJPMZVHOFLHBDWMXMRDBRAWYSDQYXVHKSGUUUDVZPKJAPMYXALWSOWLYYNJZCTZKAIUVNQWSPMSXKIIBQVJBXQOVAQZUTFFJRTGQZELVJCSGSEDOE");
    tmp_tmp_msg_0_0.type = 33U;
    tmp_tmp_msg_0_0.access = 90U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("IXALEJTXUZEBGIDUNRHKVTTLCEXUTQOCDQCGAYTFLCZIQYYRBJDDPGWWJFGGCWNVZUZMNRBQMSNQHASWMWOSECROBHVODPKXPLZFGXPEVFQUYFLSGDDGHYPPRMNNZRXJWUKZFIKKFFAADVASQXVCBANOPYOOMKJHIKCQFLUTATNMJIZUHOK");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("FSBHCCZRIHEZCQQYGWKJBHADSTEVNGEHPVTGMKULHKYYIKRRPIMJEXICTRKWPUOJXJMVUFPLTYNVDCGFILPBJVWMLONORKNBNYDAMGHKVRFAXXJOAMZNZATCCRKDBC");
    tmp_tmp_msg_0_1.dest_man.assign("QSKEWJTZAZQYVGQRLDGGOXXZLAMBXZKTIEYUUPBCFFWXUSOYIEQDVPVJNP");
    tmp_tmp_msg_0_1.conditions.assign("NNKQJVZQECRPSAGWFIWJEXVVLQSNLKOHSDXHGXBJZWUDUDWB");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::TrexAttribute tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.name.assign("WZFVNDTRALMBUEEOESOXLQZMGGJFFQDUCPDGQKKSHCWQGDYJFSBXKCTGLHENSKWEIJVWUMOVLHWDVUYCOZABZABUPHLZBICHJTSGCBHOVPBRGCDOHAADWOJQKFXTMQYSKTYIHRWCVRTFNQPJJEPIIXK");
    tmp_tmp_msg_0_2.attr_type = 79U;
    tmp_tmp_msg_0_2.min.assign("ORADHWDYITHUJKPLBISCVONARCLHRPXQEUFPRNXXQCCFEGIBQGFPFKTFGDIOCGRJNPZWQKOGNXOONDPHIHFCGLXOQUSIAMJJWTEIAUZEFK");
    tmp_tmp_msg_0_2.max.assign("UHVUYBKUCBAIMW");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.19584283948);
    msg.setSource(39014U);
    msg.setSourceEntity(116U);
    msg.setDestination(10971U);
    msg.setDestinationEntity(188U);
    msg.state = 47U;
    msg.plan_id.assign("ZKGOJSJFREOHAFVOGRNKCVMHZSQXWXIWDEZXMTCZUNIMGUYDJLXIWGVVLKSWNUSQDLGRSZXRITTMNEJQLYBTKUBJWEUCQITDMCNOLSPQXUNJXZTGAYMTMVBAAMRTOLEHMFOSRYMHBPJIRCQPWHKLPVEFWTYUFUFDVIWBQLDHHNYSQZPWCFEYGUYOIBKRVYRFVTGKZIIGDXAQCHAZJPBEODJCPODDWNPACZHPUEHAKNLLXBVKY");
    msg.comm_level = 173U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.4219732089);
    msg.setSource(48330U);
    msg.setSourceEntity(110U);
    msg.setDestination(64346U);
    msg.setDestinationEntity(250U);
    msg.state = 202U;
    msg.plan_id.assign("NMCWEBOGWVJMXNRASOYDJ");
    msg.comm_level = 79U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.160370774738);
    msg.setSource(50124U);
    msg.setSourceEntity(209U);
    msg.setDestination(3298U);
    msg.setDestinationEntity(76U);
    msg.state = 4U;
    msg.plan_id.assign("JJCUXMALIVYOITWJSLBYBCPRSCQKZFNZOMSCXHIEDNDDRLQHGWZEJAELLHLLZDZGUKPQMYHYHOEBYTDSJO");
    msg.comm_level = 165U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.619644386254);
    msg.setSource(21539U);
    msg.setSourceEntity(250U);
    msg.setDestination(33599U);
    msg.setDestinationEntity(205U);
    msg.type = 55U;
    msg.op = 57U;
    msg.request_id = 59982U;
    msg.plan_id.assign("CZATHBWZOFUYBBOGRVQYKTJAKYTGSQDGEGCQCNNVLDNASEAYORUFYCJMXYQRIMXKHBNWKRWYHWDGQIYVZBZMFIUFJOGGOHWPFMISFLDCATPBWREPJZKZLTLMIJHUE");
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 26056U;
    tmp_msg_0.lat = 0.643491837321;
    tmp_msg_0.lon = 0.0799857183491;
    tmp_msg_0.z = 0.0234544453364;
    tmp_msg_0.z_units = 83U;
    tmp_msg_0.speed = 0.797212892601;
    tmp_msg_0.speed_units = 219U;
    tmp_msg_0.syringe0 = 254U;
    tmp_msg_0.syringe1 = 111U;
    tmp_msg_0.syringe2 = 160U;
    tmp_msg_0.custom.assign("SLTUBLSRUNQZTXGDYBJNIOSHUEKGMITPNVPWAEXKXWFXUTSRJEBKAHDAPLIBSUNJOLIUMVPTLIFAKGUGRRLTGMFWCKOTENDLSDLMFDOOJPQFQDAKSWTIHVSGXCCDDIXJWVNQPBRYFJCESIJEKQAVUVPSMKGKMZVHOJYFXQWOZYENJZNAECQFQTRYNIDWZFVWZHOOCMMRYWYRYAQHEPBDMZHZCPXRHCBPHXYBLF");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OKIAJOZEWYDTVQKIHBUWRRQSIHJYMZGOHNEIXQLQUVSECZPLGMCKBTUKNWDFXGXLQKYWOIAXKODOWILGVENCXLVDJRPSMGOYYMHVIQRKAUCBNYEACRHBNIBGJCLJZJSEPKDXTTSCOFOHJCECSSXXNBFBU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.067747795418);
    msg.setSource(38345U);
    msg.setSourceEntity(228U);
    msg.setDestination(5183U);
    msg.setDestinationEntity(40U);
    msg.type = 29U;
    msg.op = 236U;
    msg.request_id = 56145U;
    msg.plan_id.assign("OKAAOCRZFCONMLVRVHDPVIPGDLRERASLEAQSAPZJLMDYJGQWPKZQUDTKPUVYWDIMIMMYYAHBTNBNQYEFIVJENBHCWHIQPVJNRTEEXHFMBTYFHZQKATUDQQXMFUGXGLNIXYYXPJFGSOZSMTOCFLSSXFE");
    IMC::Turbidity tmp_msg_0;
    tmp_msg_0.value = 0.459907472832;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TKFPZIEDGSZSHLMLXEZHTJVLRYBFXTPUQDDOLSFRCOTKXLYRDXDQAZKZXWRFMIUAKIUUKWVKCXDZPHMKGNOVEYCZGFDYOSLHMIEEYCUPSPLOUYPSDWOKNPBBATWQSYMMJAZPLIEUOONNGCDPJFLEGHJAETNYFAQFBQJVWKGSJJBUMOMDXWNABABHFLVTTNCSKWI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.334694843315);
    msg.setSource(25523U);
    msg.setSourceEntity(104U);
    msg.setDestination(45601U);
    msg.setDestinationEntity(85U);
    msg.type = 85U;
    msg.op = 47U;
    msg.request_id = 38657U;
    msg.plan_id.assign("ZQZRGYZSYKKTZSUWAMCACDXNVTQQOOQLMOFELWZBZFFUFRNDNPUHHVMDXKMUHWPGIBFGEQOTPQAKKSTLUOIYEPSVOJAMCZVJHIJEGOYNEVXLMBYPTAINRJCOYGTWVAVVDKAGHCFWEYBAGFTSKJCMJQQRHNNBIZNGMLDWRTLIVDKKJEDHRRXMAAWBQRBJPHRGYUKXPOBLVUFHXZYBHSXSDNBCCNGWWIFUECPERLSUUQPXXEI");
    IMC::ExtendedRSSI tmp_msg_0;
    tmp_msg_0.value = 0.814079251043;
    tmp_msg_0.units = 137U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DEVXNIHETMNKSRWYGLBWPVPJFFMOQUIHDQBHIKBSKVNZWPSNYVEOJHYZRYSUYQUEANBQSGZKCMVGJKLRFACMEUYQRP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.0251421846197);
    msg.setSource(51578U);
    msg.setSourceEntity(63U);
    msg.setDestination(5090U);
    msg.setDestinationEntity(248U);
    msg.plan_count = 8776U;
    msg.plan_size = 3798547182U;
    msg.change_time = 0.329705797758;
    msg.change_sid = 32746U;
    msg.change_sname.assign("SFUMPOQWTQESMFOUOJNOLDBCJKPXAUDICUZWBCKWNIXUBHGXBUAHCYZT");
    const char tmp_msg_0[] = {-66, -33, 122, -29, 82, 3, 21, -55, -19, -43, -67, -70, -97, -112, 62, 108, 60, -87, -24, 93, 99, -99, 25, 81, 87, 9, 80, -27, -58, -9, 63, 11, 57, -31, 30, -63, -104, -60, 86, 14, -19, -109, 120, -13, 23, 41, 38, -29, -88, -6, -121, 21, -19, -95, 49, 102, -99, 68, -45, -128, 8, 60, 43, -5, -71, -104, -120, 0, -60, -17, 94, -119, -102, 68, -92, -76, -95, 63, 85};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.924771610508);
    msg.setSource(28946U);
    msg.setSourceEntity(141U);
    msg.setDestination(64272U);
    msg.setDestinationEntity(137U);
    msg.plan_count = 13114U;
    msg.plan_size = 1973446471U;
    msg.change_time = 0.633384313981;
    msg.change_sid = 63862U;
    msg.change_sname.assign("MERQNZICANWHIBWNVOZTIWETVCHCEUOOAYJQYQKMMUKXTKMFXJGELOYHCEWEVZTMOUDXADXVDXOMLBUWTFYNPUAZUAIHDAXDRPHWHATJGBXLAPEDZEURABBLPUKTYGQQCPQGYNGLKWJLSKNFBJCESWVFOGSSOGZZPIIQILQDXUHPRFHRYFVIMSSZLCAVOWMKISIBZXKDJRCHGUSPXQLRFFWHDOTPPTC");
    const char tmp_msg_0[] = {-117, 7, -124, -121, -35, -64, 54, -111, -56, -16, -109, -114, -69, -20, 115, 34, -113, 24, -99, -36, 64, 112, 15, 10, 114, 57, 45, 92, -62, 103, -61, 83, -102, 104, -4, 61, -50, 113, -112, 75, 4, 124, -84, 18, 110, -10, -69, -5, -98, -29, 118, 121, 48, 26, 97, 21, -34, -64, 113, 0, -12, -79, -80, -108, 99, -28, 109, -47, 32, -47, -127, -34, 122, 68, 31, -127, -10, -18, -31, 97, -101, 122, 1, 2, -10, 99, -101, 80, 116, -72, -107};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("SOODIQJKSTZXOGWNIOGEFZIFDKGRGSFCHDKAZQEVWMXVBEWZXPIDYCSETJOWTRMZNOYDUOQVJEBTJBFJVOYJQDJYQVRPGSOYVZWVFTSAWCNWOVHTNEHCPAKBAWHLRLBXUPJAKBCAUXCKRQNTLSKEARPGDBXMDXYFGQMMWMTZICPYKHYNPRFMEABGU");
    tmp_msg_1.plan_size = 51750U;
    tmp_msg_1.change_time = 0.419845039347;
    tmp_msg_1.change_sid = 45935U;
    tmp_msg_1.change_sname.assign("VECELRXCJHYTFKHBHRRFXADYATBDKFFJIHOGWCWKMQPLDOPGYUJFSYJIZVZPIWVNHQSSUWZHDQXURIESCEJTATNSUYJLVIXQQYBVKUXMHTNLEQXKLONWBDDUPODCKOUHRDVEBNMWPQYRKGKECGZSONFIBUWSMIKCLJVCRTTSPGZGXXDOTAIGCZAWAVRQMNBZQAAPLIMZQBHPPVRBFZYASMWCOOLKELTWRZJSMNENEVMLXYTGFIGGA");
    const char tmp_tmp_msg_1_0[] = {52, 124, -20, -18, 101, -42, 14, -22, -57, 60, 76, -44, -101, 104, 50, -32, -20, 85, 98, 14, -8, 44, -58, 124, -127};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.113250945075);
    msg.setSource(42768U);
    msg.setSourceEntity(167U);
    msg.setDestination(27693U);
    msg.setDestinationEntity(5U);
    msg.plan_count = 62692U;
    msg.plan_size = 918078618U;
    msg.change_time = 0.170113582839;
    msg.change_sid = 13154U;
    msg.change_sname.assign("KPLLWXWUWISJVHGAYEDBWJJ");
    const char tmp_msg_0[] = {-101, 27, -50, 46, -80, 116, 5, -112, 24, -26, 25, -58, 80, 94, -3, -92, 23, 97, -38, -79, 76, -43, -2, -13, 17, 75, -59, 98, 80, 121, 62, -56, 52, -71, -15, 34, -79, 110, 10, -41, -109, -97, -28, -99, 60, 2, 53, -26, -28, 53, -38, 33, 116, 59, 8, -83, 85, 22, -112, -46, 49, -53, -19, -92, 60, 21, -55, 78, -126, 115, -10, -36, -70, -21, -69, -112, -10, -61, 7, -32, -44, 90, -107, 111, -43, -49, 86, 67, 22, 112, 35, -109, 76, -50};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.913619367117);
    msg.setSource(42244U);
    msg.setSourceEntity(207U);
    msg.setDestination(14698U);
    msg.setDestinationEntity(59U);
    msg.plan_id.assign("VDIPEFLTNRBJHYBWHMNSJRZYIWCLIDLOGKTU");
    msg.plan_size = 53864U;
    msg.change_time = 0.277266328171;
    msg.change_sid = 64785U;
    msg.change_sname.assign("FLQCCUOWCXEKKOAYBPZWFFMJGANQQJEDEUMQBAUTJCMTIASJIOQPIHBZZOCNLGDRTYZZEFYEJWSFDCOVQCGBXLKCLRL");
    const char tmp_msg_0[] = {1, -7, -46, -53, 107, 95, 69, 111, 101, 26, 107, -70, 45, -36, -72, -1, -21, 100, 115, 90, 84, -6, -51, -66, 125, 36, 44, -70, -10, 99, 32, 22, 8, 113, 80, 81, 118};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.643730661254);
    msg.setSource(41337U);
    msg.setSourceEntity(103U);
    msg.setDestination(16290U);
    msg.setDestinationEntity(110U);
    msg.plan_id.assign("MGAWOFXXPPYYKIJIXSVCRZWOCZNVAXGUIMSNKRMQJNEWYLTOATYQVLHHDXEOQTSYTHKZIVHMNVLFCGSZDCUEDKMRIUWAWCNUCHSYXHXSOALVPBZKPWJJVPQRPRMEYAFEBPUETRHLTWVFGFXPWNNVBBMITEUGQONJLGOJXHHINGYDDDTCBAYQZHOKFUUKNGUZQGZSXSLILDAEKT");
    msg.plan_size = 2929U;
    msg.change_time = 0.390059242961;
    msg.change_sid = 13857U;
    msg.change_sname.assign("CRXXAFEALKWGUSOEKJHZGZRTDIIVDMPIIITUWZQKSQTTWCETKIEHSOKMREYUKSDVZXBMVWVMDLBJHRZOVHFCKCDHZLEOZOLJANHBRWFBDFYGLURBFJWYMYVSKNQLGCJUPIXPASUFWTBBAMCJXPMJQTPDXNPAFPUMQAROYRXYFXSSONCJQSVQJVLAPILTKEQHZDRPKESTQUZEEVHOCOWWLVGPUGWYXIBNRHNNHI");
    const char tmp_msg_0[] = {-117, 79, -57, 24, 110, -45, -25, 26, 29, 89, -108, 107, -9, 19, 44, -93, -85, 6, 8, -87, 16, -113, -33, -105, -118, -110, -9, 6, -65, 108, -16, -50, 117, -34, 92, -83, -64, 4, 117, 75, -10, 83, 30, 2, -25, 83, 54, 77, -112, -66, 14, -105, -113, -38, -18, -82, -95, -97, 97, -61, -80, 73, 87, -72, 105, -66, 58, -63, 87, -92, 15, -28, -21, 105, -3, 106, -123, 2, -9, -1, -13, 28, 13, -44, 58, 119, 53, 83, 6, 18, -105, -53, 38, -124, -91, 13, -35, -5, -75, -52, -7, 77, -23, -57, -109, -65, 102, -24, 47, -32, -94};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.697320067362);
    msg.setSource(11810U);
    msg.setSourceEntity(208U);
    msg.setDestination(61229U);
    msg.setDestinationEntity(22U);
    msg.plan_id.assign("NBIGKKJXIGYEMSPIRDZRPJEHFMSFDFJVXOFEBJAFENWOWKKPEGLHDLIUVYAAMWSPCXJGFTNCNDUGVRVRLXZZNMTQHCOHGAWRJKTAHCOMZBDAVYIRNZBTRWIIMWSUD");
    msg.plan_size = 58012U;
    msg.change_time = 0.582666398661;
    msg.change_sid = 37113U;
    msg.change_sname.assign("IJASRVVTWNRHWPFEKCEXYTRYEKHGXOSWKDZWJWOBAZPIDXJMBDKZDQCXNTMILGCCBOHHRFLAPWXZMLJMGCVEFGUJIKYGDYUEMNUYOALYROVLMBMIZSRRFJKKHZPQTUDHICPVHNNQGLJTXZEUZLDBTFGAXSFUDKPBTAVODFQIQOSCENBGWBHWYVZIQSY");
    const char tmp_msg_0[] = {120, -117, 109, 43, 66, 73, 22, 56, 11, 94, 61, -123, 15, 88, -86, -50, 18, 63, 103, 83, -22, 98, 60, -73, -61, -54, 119, -50, -112, -124, -10, -13, 85, -44, 105, 103, -112, 101, -89, -106, -116, -115, 43, -64, -27, -20, 97, 85, 73, -69, -61, -92, -89, 112, 122, 34, -122, 66, -73, 7, 93, -2, 50, -61, -121, 69, -63, 78, 60, 4, 86, -82, 124, -25, 89, -99, -83, 77, -27, 95, 42, 30, -80, -9, -113, -67, -83, 10, 74, 34, -35, 55, 11, 87, -82, 77, -13, 2, 23, -25, -6, 59, -117, 79, -30, 3, -78, -48, 105, 119, -11, -121, 58, 0, -74, -119, -48, 105, 87, -46, -3, 88, -112, 47, -83, -30, -29, -22, -8, -73, -123, -44, -125, -20, 21, 68, 40, -65, 56, 25, 21, 29, -18, -3, -106};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.755662632382);
    msg.setSource(48458U);
    msg.setSourceEntity(248U);
    msg.setDestination(63218U);
    msg.setDestinationEntity(54U);
    msg.type = 190U;
    msg.op = 131U;
    msg.request_id = 5537U;
    msg.plan_id.assign("NYSZCLEUBVWPTAMLOPYLDJLXKDJPEZROEVSAIKGIMCDYHTIVSURRMQFEHOMGPMWWVCLXQBISIAYVAIPURYYHACXWWTODRQBCHCKTFQAQSGBFJYXPUGZETUAQYOVEMXZFRJMNMIVJZOQULGSNJXGDXLIFKHHSDBCNKZUKNGEAWPFGJNOUJZSZBZQFBOCAJLKNIEWEXDBYKRWONPJXFXDYOL");
    msg.flags = 64119U;
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.151617664363;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OWOJTRMHHMICXAUJKBVZWPHTGEYVTDFGFPQJCNPTBADEXXGYFCYANUSGCJBOBSKEQOZOTH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.506543932779);
    msg.setSource(12924U);
    msg.setSourceEntity(148U);
    msg.setDestination(39990U);
    msg.setDestinationEntity(15U);
    msg.type = 37U;
    msg.op = 116U;
    msg.request_id = 50476U;
    msg.plan_id.assign("ZDQGXPTIWUGLHKOFMLEVZVCEACHPYRNKRDGIEREQOJKHRJLLMNWLQFBVNVFCLSUNQNXWCZEHWAWYOUNFULPFUDHSSDJW");
    msg.flags = 60461U;
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.593212946719;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UGBAVOFAGSUTTHFRPUIAVWQZLAFWCKPGIAOYQVZFCAXSZIQZDVXJIOBNBUMRMJIPDOAKJYWLFONULHNYGIMNXRDJJTEQORCKGDKOEEUGYLLLJSVTPOMXVTFEKXDUJNJLMSIRBZSWHOYN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.876498676539);
    msg.setSource(23884U);
    msg.setSourceEntity(137U);
    msg.setDestination(37073U);
    msg.setDestinationEntity(189U);
    msg.type = 165U;
    msg.op = 56U;
    msg.request_id = 57287U;
    msg.plan_id.assign("WCTCCPFBDPKTQNQJCRJHNPINYSZDVNMSFRFXZLWSLTKTIIQBNOECOVBFHJQBUOMUKDAJVKOHLQSIUVYLXHQFHRVETCDJCNPSDKDDFPWJNEXESEUEOYQABTGMRIDEYSBOGZYZMIWMIYSRUHALCBMHWBSZZQLJ");
    msg.flags = 64297U;
    IMC::GroupStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.468612946255;
    tmp_msg_0.y = 0.902112700073;
    tmp_msg_0.z = 0.385466786791;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WZJOPWIJRYBSYXGJVTTVSPECOMBITGQDLTZZUJK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.860547546308);
    msg.setSource(42083U);
    msg.setSourceEntity(104U);
    msg.setDestination(2690U);
    msg.setDestinationEntity(88U);
    msg.state = 123U;
    msg.plan_id.assign("UTOXKFLCOJURJNYBEAECUEIKDJQKNSXMJU");
    msg.plan_eta = 792106525;
    msg.plan_progress = 0.755123070986;
    msg.man_id.assign("KRTCEYTJUCPNQTIBYNBZMUAMOZVKMLFBZTOIKRPUJXZAXPJFZNZBQSOZGUGYDBMWYRLQNBCYJVMKUHOCYWYQYSIEMZ");
    msg.man_type = 40638U;
    msg.man_eta = 75725446;
    msg.last_outcome = 33U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.2627578643);
    msg.setSource(53606U);
    msg.setSourceEntity(183U);
    msg.setDestination(1927U);
    msg.setDestinationEntity(103U);
    msg.state = 6U;
    msg.plan_id.assign("YTWZAZYWAGCJQKWZUSHBLOMMOWCSFBLFMEWYHQRVKCNBGKIRHIEVLTRWQMSZTFJEVFZSWXIXKQJUMCKJUDKERCDRAVJGANUBTYEDDAKPHQDWMRNGNREVNXXFINUTVPJUWSSOGCFQOAVZJYINSAHMVTHQMPQYBDPVKGTJSZCELYLDXPHPUJBTGISNLTCADXRTKQBBPYZDPYOMIMRZYRSCULPNOFEPLOHGCZFHLGXIOLAONGIEVKAEFUXDXUQIXH");
    msg.plan_eta = -227618377;
    msg.plan_progress = 0.28791198794;
    msg.man_id.assign("LWSOJCBRIDGNNCHEQANZCOZPRBMORUFBSCXAFARRETYILGHEGFNJVZMFSUKRPXYBSZMHWESWMZHGGQOPHMFZUPFKDTILPESTOAZHAVDTQKPGOJDLQEDYUEYDXONVWIEDITXBCPWHKKCIMPINVRFUCJSTQGX");
    msg.man_type = 40925U;
    msg.man_eta = -1718230190;
    msg.last_outcome = 145U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.13910660932);
    msg.setSource(57637U);
    msg.setSourceEntity(3U);
    msg.setDestination(39671U);
    msg.setDestinationEntity(8U);
    msg.state = 22U;
    msg.plan_id.assign("JZPMLRJPMNDKDGRNLMQICXVFOUTUUCOCYTWJMIYDXDYPYPEPFAVKFMDXQXQKWYLXKIPVEIBOBBQMKGVLFTLNLGAXDBGWBBRKSZJHUJLUFAQECJAVTVRTGYLEDGINUHMXBVROJJFPDREPQFHBFYOZENSXFLINJSGSHIRACCAZGUZLTIQWOCEHFOW");
    msg.plan_eta = -466875210;
    msg.plan_progress = 0.151374374722;
    msg.man_id.assign("RGGPLWEKELRPKGZHROJQXYOJJVMFCASUBMRRGQXUSPBRHSWLLDDNKTLBXLNURCKSYCTTXQNQFLGNUZKDFAADAMJIFECHNSLTMGBWHFAJPVAIKZOTHTUXLOQXVYIIPZZSPUHWFVCKZWYJHYBQZQDT");
    msg.man_type = 33038U;
    msg.man_eta = 1304854408;
    msg.last_outcome = 27U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.926878200677);
    msg.setSource(47247U);
    msg.setSourceEntity(191U);
    msg.setDestination(31768U);
    msg.setDestinationEntity(50U);
    msg.name.assign("EYXRRJFBWSGNGVXVNJLXWJZ");
    msg.value.assign("QANYXLJWKIDMITSSHNURBGJHQFADEQORCWBJOISBZSMKEXYQDIOKHXQOUCTIVAEBTTUPPZCEDOLCQRVPQSZYVIAQMWTK");
    msg.type = 224U;
    msg.access = 199U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.422152968142);
    msg.setSource(12740U);
    msg.setSourceEntity(252U);
    msg.setDestination(36945U);
    msg.setDestinationEntity(206U);
    msg.name.assign("PZLXACQHSIBIVPWRNZZDTXGTKKAEJHJDYTAFGPZSFEOPBZYSIJYIWUUMDMDQFOAIYNLKWQSRQWERLCKXBILZVHBPLWPOXKDQUNUCVFTRMVAKEYBJQTWZURAIAECNOHBLNHMXEQLCAJJAOWESIJGUULRYJPZVXWILFQPCJCLUOYYZHQOMXPKNXMQTNBSCBCFGSXODWREONFEUGMZTSRS");
    msg.value.assign("CJIYEJIDVPVRCAZFNBTLZTTIUZPWWZXKPSEXQJLEJTXEUXQAPYWYRQETWKXMNOKLZCHUMPTKBIRCMILXJMVFCNOJFGWXFAIOAYDCMHVGJYMYFWBKYUYPVOIHVLGNVLLAWNWABKDTUENZBNTZAHJNNMQKSSPRVHOLZDGCWYRTGQMYRXHOS");
    msg.type = 99U;
    msg.access = 64U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.916484348705);
    msg.setSource(24180U);
    msg.setSourceEntity(48U);
    msg.setDestination(1197U);
    msg.setDestinationEntity(143U);
    msg.name.assign("AIRYVLBNFTWOSZHKEJYVDAJEBXGJEMOLWYHANZZJMXZNLADIZXSWJPIULBYGTKHLNPICPXKVVJDICGARUCTQZGPWFRHSKXKAVTFYGKRXBTCVDPAKKDYXCXWAGBPUYTSRYMUUNUUJOSTHOOMNWJIFIHNHFRBQULGZMJECZBTHRFTDHSVXCQZPQQQFWCWEUDIBJRKDMNCZSFEPELVYDUQPMPASQYMROOAFRIOHQLXFLVSTELGQSNEI");
    msg.value.assign("OVFHPZHRKRUKOAULYFHXZTDGEXDNKQLDUJQFVCUIEBQTLCYEFCXMSGAPIQHTQMKKTUJOBINVHFIMCPSRBZOUMBYLQGPUHWQBYXGWNMPWVODZCOGWQQVLSYDGVXZFHTULRJRVJELWYEWCTILSDTIXXGUCTHNUXDMIFRGHZDEZFHBARIQCWPPJDONSSYMEMVPAAKOADWNMZBKIN");
    msg.type = 134U;
    msg.access = 6U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.593658560285);
    msg.setSource(31479U);
    msg.setSourceEntity(178U);
    msg.setDestination(38640U);
    msg.setDestinationEntity(167U);
    msg.cmd = 186U;
    msg.op = 221U;
    msg.plan_id.assign("OGDOJSSAXPIUDRIBLIKOCZVTAQBBVGNCEYMTOJDJ");
    msg.params.assign("RBQXTDAHNIVUJWKWDJCKIQOPHQZHMOPONABYRUOZRKVVKEGIWETHIDM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.610122252257);
    msg.setSource(42421U);
    msg.setSourceEntity(66U);
    msg.setDestination(4243U);
    msg.setDestinationEntity(238U);
    msg.cmd = 150U;
    msg.op = 98U;
    msg.plan_id.assign("EOACHABKLPAEABUNFWTOGOKAKGRGIEJABVTNKLMGMRWSEQRMDETZSHFZPBQJFXUWLHVDMMLUQVUCIPDSRRVJMYK");
    msg.params.assign("VERUPWGEEGOZGZWEOJYLHILIDBZLNPAAUHCRAVHKKVXFDLQJFYOYTROSMJAUEFWBBIIDLYAQHRTHKOKTOSKFVBAXZSZURYFBXDEKCJSBXLREOAUJQKBZJUZCAMPTLDZLNFNPNWIYYGIKLUDKGHOWVWUKXZVTMGPQTSMXEJGWMVQPCGQNQODFWNXTWNVCVFJPYCSBJRQNDPSQQDTA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.114162596342);
    msg.setSource(54511U);
    msg.setSourceEntity(17U);
    msg.setDestination(63074U);
    msg.setDestinationEntity(82U);
    msg.cmd = 57U;
    msg.op = 34U;
    msg.plan_id.assign("BGXDSCFHQJLPELINUTROIHAONRVQUUDYAEQIZNNBNNEFPWWAJGEOPWXAZEPDHPKQQDGEILJKKVYDUHWOCXFWCSUMJISUWLIGPJOFQFMQMAULKBZDOYYWXZBLYVXCWEZTKSAVAZDKVKPBVFRQHXGCWJDLXTFJTJYMHFCETIVSDERZXTYRTCNCMUGMDKCAVBB");
    msg.params.assign("OKLXUXRXGBNKGNWULMZRZBCRUHXPQVSMTKPCBIBJLPZCVXWUFRNTWTIOEEPHKOYRWIEVYJQVDBUHLGFZGUTPKCRQOAAYXUEWHJJLDAJIVVADMPFIOUSXCYWQEGZSHGOXSDEMOAWSCKINBUZFACHESLAFDYDJHTJAYHZJIMYZNCEHCQISKGSBZYNRDOIXFEVOLPIJDTQMSWREZQAYFUNMDNKVKWXK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.106505466753);
    msg.setSource(22170U);
    msg.setSourceEntity(36U);
    msg.setDestination(56152U);
    msg.setDestinationEntity(77U);
    msg.group_name.assign("LDFSQMZKHJRMCLVSZEFTZVDXSNIDOEHCXPTBAAXYBIBKVPMDMNJACCNGWDNWUELLONZYORZTMYQROIZUHCDKCSUKZJZQBUUGPOEFIHKUXWIUCDDXJWSVNPOYBGJOVRBAQAYNPAAIWXLZFKMYTRYWKGXHWXIDCWRVFGMTHEOECUIULHGWBQQFSHEWIJQUGMYSOBAJQIPPTZHTBLVVSMHJRYLPPRFAKDGELYEFAEMGSCOLVKVGNJT");
    msg.op = 231U;
    msg.lat = 0.0318090657589;
    msg.lon = 0.181270788032;
    msg.height = 0.343665698345;
    msg.x = 0.14554887505;
    msg.y = 0.940804483377;
    msg.z = 0.289454437885;
    msg.phi = 0.917929926783;
    msg.theta = 0.380873415519;
    msg.psi = 0.882028841864;
    msg.vx = 0.0608519659309;
    msg.vy = 0.777213596361;
    msg.vz = 0.626665037466;
    msg.p = 0.137735824507;
    msg.q = 0.835659888582;
    msg.r = 0.668780442183;
    msg.svx = 0.834476285668;
    msg.svy = 0.776203633199;
    msg.svz = 0.435256330896;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.00171108717491);
    msg.setSource(224U);
    msg.setSourceEntity(1U);
    msg.setDestination(63084U);
    msg.setDestinationEntity(27U);
    msg.group_name.assign("UXZLFFNFVQTHDUVTGZQRMLEKRPADOSXKKBJRYAMLHSUCZHPSDWHNNGOAPUHFWMORJXGAGBRLDJXYJVCMLGMACCBWZRQIGFUGCVUBWIBCPOUNSIVCZHXJTKYNRVZBGTDEKUWFGMFICPYQBTLXDQEAIDLWWZSJJVVLSEEXYHXDCIROWTTRDXORCSTLQWNUENHQPPYYKPZGZZQINEHMAYKAWPAQJKDIJYEMKTQHBVFNABUSMOO");
    msg.op = 40U;
    msg.lat = 0.400835604676;
    msg.lon = 0.293420082745;
    msg.height = 0.927670269712;
    msg.x = 0.406531408782;
    msg.y = 0.269625287791;
    msg.z = 0.381532740401;
    msg.phi = 0.891968560282;
    msg.theta = 0.379734824689;
    msg.psi = 0.939027444176;
    msg.vx = 0.0348177987509;
    msg.vy = 0.463090176555;
    msg.vz = 0.0916048575782;
    msg.p = 0.864021148985;
    msg.q = 0.601536494211;
    msg.r = 0.236559975949;
    msg.svx = 0.037033255059;
    msg.svy = 0.610687373524;
    msg.svz = 0.284898252241;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.260038774511);
    msg.setSource(56493U);
    msg.setSourceEntity(114U);
    msg.setDestination(34260U);
    msg.setDestinationEntity(232U);
    msg.group_name.assign("QPCCRLWDVXRSSBAIKUFJTGBGJYZHXMZBKQWLRFZEOZRWCDSSVCJJBVAFDVFKTIGEUEUPMWOXOWNKDETNTFGKIYJBMDTEVLUXKAUHAJURZELQPNHLUHYVYDQUPMOUHFETGEIMUHKBQQQQFPPOOOLLFYBYOCXALPINOXJXRSXOKPYDFSQSBHSIRTDW");
    msg.op = 18U;
    msg.lat = 0.956611313101;
    msg.lon = 0.493307798908;
    msg.height = 0.388438104585;
    msg.x = 0.692401817446;
    msg.y = 0.890657122977;
    msg.z = 0.707278491443;
    msg.phi = 0.498643508198;
    msg.theta = 0.0695951418372;
    msg.psi = 0.33855661357;
    msg.vx = 0.336934479766;
    msg.vy = 0.360556982346;
    msg.vz = 0.6707902335;
    msg.p = 0.272703430804;
    msg.q = 0.563227975557;
    msg.r = 0.896011762751;
    msg.svx = 0.00328274408979;
    msg.svy = 0.0302888340892;
    msg.svz = 0.416919289667;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.445082224789);
    msg.setSource(47698U);
    msg.setSourceEntity(118U);
    msg.setDestination(12687U);
    msg.setDestinationEntity(251U);
    msg.plan_id.assign("CWUEXHPWXKRPPEOZBTKSYYVNLUBPUKQZWGWFSVJZDMSGXVZBELYCUTITPDMTZMLGOAZBHACNXPLRUIVBRXIQXCGRHLCQVTADBYMEVDJFXCHUHUCRFRDOQZARXHNBRJWBPWOHNEZEZFNNGEKSDQLWCSASQTQMYMFIKVYYDISTUKWQRAYEOOJTEOATJUABKFJFIOCMCDLYLVVTHAQSNJXFQNPBFPZMMXG");
    msg.type = 239U;
    msg.properties = 191U;
    msg.durations.assign("CNZEFIGHECEWJJJLVZWBFIGAUPSESV");
    msg.distances.assign("QTGYASXENYBFACPZXRPTWDZQDILIQFUENUPONELHCNISOMUVWCKPGRBFHFBJEUXQZESSHPRJVNMEKNHJMSIJYQJZWAKJIOHSSMMWCPVOZGVXHKICAVEUXLRLOKQQTTWOJFBDBKWBFMRRFYGVDARFMTGYWGNLNETWZQAVIMCRBBYUFFQYQLITHCJASGYXCLKKGIPZEJVRSDZHUPXBXUTHMUVBLSWYLNERXUXGZOPKMITDAWKYVN");
    msg.actions.assign("GXYNBITKUKXZUJMOXEMOAYBLFVQXBUHRDQILAVBUDEJVERUIPRDKDINGAHPBSNQYFPNZOKTSIERFFGTYWPZCZISDRXZFRRVFESAPHWGLHTWYCZOFABEVJYMNYXJEUGYQVJMETVKCDSGCOMPWQNLSBALDPJXJMZXPWKZSVSTMUEGIFMITLRKKLVPHOMNCCGFTZBLQHHFHJUCXYATBAZTOJQDRWICQWNXPLSRNWWGEUDBNJKOMKULYWOHAGCOQ");
    msg.fuel.assign("CTHKFAEGKBTDFTEDROLOXDOVWCXYGWMAFRSZBONKSJUAETCSMAVWHTCOQANHMOGLPCNIVDBUURYXYJFIEQSTRKZEFPTNIOKUVXDEVXHYHJEJOWJUJDOMRKHWSZNSIABPRBULGMPGILUMWL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.126293060083);
    msg.setSource(42859U);
    msg.setSourceEntity(93U);
    msg.setDestination(16277U);
    msg.setDestinationEntity(18U);
    msg.plan_id.assign("RLNJJEYBPTCLSJEXLDDNOLEEVOOISIVZBADSJLXHCTQGTXGYNOXG");
    msg.type = 132U;
    msg.properties = 151U;
    msg.durations.assign("KPXBGYIDTANASSNBXFMAOHIHFKTKWXINVSOTPTHMMNIGRTRLUQOWNAXVTJZVGJBKIGUQGLCXUVQQCHGZDTLYCLSPCZHNVAETONYCUCKRDRBKRFJLHIFNXDAYPNACHLKPEQDKUUFTPZVUJYHXDWKYWJUJMROSYBCJZHX");
    msg.distances.assign("UWINLXFTCOGIASDUAJUFRPWHQQGXCBOMRQNOTFWKYTLSHWVMJEXZHGOSHYNWMNDXRIAZVPLDHJYKFDKVZAIOHTXQVGIWUBBXNGNJCPWEMRYIJXMQBFCUEGANWBERZUFOAVOBTYGLJPTJYZICWTSMFZRNKCVTRZBJFEAMHXKQNLDMPICUOSADBUNCYCFWIZLEERKFQHXLHGEDMYSVSGLUKI");
    msg.actions.assign("HEHQZKNWVLEJMWJKFJTOLXIJWZUUXDQRRVCAASPYYIALEAYMFWKOCZBMSRCISPKGBEYEURTAHFDDCMDPZSXDQMIUIQWJBOADTSYFMJCUKVZSFRPXNCDKRAXEETYVGIXQZGUPGMUUGITYTOCAPOPMLNLSGUYEQCHONKVNPIWHVNLCTGGQJITJOUQVSLMKXNV");
    msg.fuel.assign("MCRHQCTGUSNKTIKIVAXZTRDUAYIYQWVZW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.974276910117);
    msg.setSource(42651U);
    msg.setSourceEntity(8U);
    msg.setDestination(24167U);
    msg.setDestinationEntity(71U);
    msg.plan_id.assign("FBOEPYBYIKTTCBGHQDOHKSPKNLHOYANESUPMIXOMZLXTUHNYDFGPTKNFGFMUBCZEYGODLVTJOZDNIZKWUVJJBFFCZWMTGJYNIELXNSAZJPXRADAWBBRUZAMKALSVDQXAKIVXPCWUCQRPTGXDFMATPEAIQGMLYYBLOWJLRQEVCSZHTFZYWJEFJHXQKWPVICEDIVVCWSUIJDXHKHUCGNNMOQQURLRBWBSOXDKMLGH");
    msg.type = 1U;
    msg.properties = 103U;
    msg.durations.assign("CNVYLOFKSLXWLNRMOYBKLZIRZCHJUVEJCALGGYQHCHVMQNJIREBIIGHQOASVUNJYKZSEURGG");
    msg.distances.assign("NEOKCTQNWNCAUULTLKDAVIYUJMPGVPSLGSRGFBQHWUOBRHOVOCNXMLFFDBOQINHYFJWPXGRYOIDNLHOADLHEXSLZZCFKTMOQIUGRJPQYQTNHMCBDJGLUBTATDTIJPRSQO");
    msg.actions.assign("LYUZFJFXSKMJNHVKGQTRXEIAIUVTOJPMGZUHYPGBWFHPADGLXBMMXEVNURCTDAQTBSBXJBHOSOUFJNBVYKCPBVNPFWGRJJJUBZKAQDQTQOEAYTJVOJWHMTLZNDXQIOYQBPEHCWCPHHRZWAWQNXMXDYCDRQLITGROFWCE");
    msg.fuel.assign("EFDCJQBXLSKTKZCZUUUAWKQUWFYKEPYDCEFUDHNWVXRBVPGHIMBPNBNJIVPIRBMOHJLCUBDFSMIOZIEJLORYIRMZXSSAATYCPOJIFRFJEGRNIFAHXWYVYKFDHNXSVXAZGQIXPQTDSATEFYNRDOWOYGUPALXVJKWWIOQQAMXKBEHBQZMJQOPTWVKJMEXVLNYCEGRATKTZSUEMBRGULPYMR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.232225326629);
    msg.setSource(17306U);
    msg.setSourceEntity(104U);
    msg.setDestination(62520U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.359700899021;
    msg.lon = 0.041468264206;
    msg.depth = 0.148386589106;
    msg.roll = 0.0910816018291;
    msg.pitch = 0.02658642072;
    msg.yaw = 0.666497329033;
    msg.rcp_time = 0.549171921766;
    msg.sid.assign("EPQUXAMVYZESSUWJKDIWBTOYHAVNTZYCIHORIYRLACJCCJWNQMZLFTTNMGFFMVSVKLXNXEZWOOKPNAYQCAMFRWEEKELHZANIFYVCLDVAGSVNPHLOJLIDNDNLDXQXGCTZUT");
    msg.s_type = 48U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.378783433037);
    msg.setSource(13858U);
    msg.setSourceEntity(184U);
    msg.setDestination(14292U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.976920048138;
    msg.lon = 0.612791455711;
    msg.depth = 0.194829454267;
    msg.roll = 0.282300643844;
    msg.pitch = 0.592589707529;
    msg.yaw = 0.190283931325;
    msg.rcp_time = 0.172017998098;
    msg.sid.assign("ROJHADNHCSCJFDWOVMJYKCUHIEGKBBUMBNDHPUAVZNEFRLXXGRCGQPAJKFTZNPJSTLWANVIOYFRZWETSI");
    msg.s_type = 154U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.26726124221);
    msg.setSource(15621U);
    msg.setSourceEntity(230U);
    msg.setDestination(33437U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.292667063477;
    msg.lon = 0.592347235399;
    msg.depth = 0.267799697831;
    msg.roll = 0.820844380338;
    msg.pitch = 0.594378150089;
    msg.yaw = 0.404559075992;
    msg.rcp_time = 0.621803138309;
    msg.sid.assign("WGTEWZXWLQQVJSZOGX");
    msg.s_type = 77U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.6368736883);
    msg.setSource(61086U);
    msg.setSourceEntity(210U);
    msg.setDestination(44572U);
    msg.setDestinationEntity(149U);
    msg.id.assign("MIGFWKAVVIQHODDWXBPPJLNFLFJKOOXONVNBMQHRPFAAIHELXAJHEDEEYJYXWMIKZTOUFBKAPWMYLPXB");
    msg.sensor_class.assign("KIGTSRCTRZUFJHFQCAKOPWRYWTBMDQDRJTIUOUFNHABHYWNHMQQSQPNKINBGCZAKAEHCTWBCXLIZKAORMFSZNPIXEDTATOLELSDTDTVUGBZILGBFPVGSMXYZVYWVLXJECUVGVLAELKZZGERJCXFSDGYANPLEMNKYPRHNO");
    msg.lat = 0.490496884751;
    msg.lon = 0.450781166493;
    msg.alt = 0.580923832656;
    msg.heading = 0.607862999219;
    msg.data.assign("GAVRBWMXUXMDNUBCHOYMJZYQZDSCHTVAUGHBHVSRBJGZJBZOHASCITSRDERIFETJMMAQYBTKEPYUIYNCFYRYAE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.755236914338);
    msg.setSource(58349U);
    msg.setSourceEntity(127U);
    msg.setDestination(39318U);
    msg.setDestinationEntity(112U);
    msg.id.assign("UHZCDJFWXTTFZOQIWPKEXFMLACTINBDSRBDBEPYFJVYQLMTMKBNKOISFXXSUKHWBWNARCCZTFTGNAWOYLYIMPGBJKOLVUUDLWAHUZHMBAUYVCWDRTRNKZCIJNOYKSIRVEQUTOGNBIHISUDSPDXPYQVOEQTCQHHR");
    msg.sensor_class.assign("GJAQOTSJRMWYTPDAGUNBHFLJBQNEQEKOFQVNRZRWEUMQECKNKEZFHVCKOYXDVANXVOFAMPRIQUJGXWWLFNDSWJIOMOMLHTTEEBOGXHHILDULCHAYRAVNMYPZZHUXDHUWCXPFXXBBTFMZYYLFFMHZTWAHGJVVVENBOZGPSPBJVGYQIZYWTGXFNJCURCLUPNAEUQZQIPWCKSISSTDBTWRMSRMERXILKVCQYSDODJBGLKDYUORISK");
    msg.lat = 0.0317514450513;
    msg.lon = 0.994771448348;
    msg.alt = 0.360505111755;
    msg.heading = 0.0578002145992;
    msg.data.assign("ENLYTDVEGMXRYADLKRDMTXDUNFYLWEQCOHAHJQYVEVSNMXVQLUMOJSNVRJGQGHRLKPUYDFBCFIPXBZBWSTLHRMNFZKAQIFYZVWSZYLONOHDXFPHTAPKBWDATGOASEDIKXUCTIHIBJWYMCANOCPNWOGVCVIALGBSRCFHRBJMGVWWTRPWTEANKBZZSJJOIJDYQSKPEMZPJVQRBTUXSLXUJZOXMFUUZCWBUIQAEGOKFRLKIKPFUXGZINTQCEEGSQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.149417057356);
    msg.setSource(41045U);
    msg.setSourceEntity(165U);
    msg.setDestination(16233U);
    msg.setDestinationEntity(89U);
    msg.id.assign("YJRTVFYKENKACXEFPLXDMHDRQMGZPTHAFLXPEMLEUFNSGVHSUGHDOCAUECXQAXIGDEABITKBRAKPZRYIJXGNMFAJSLLCOJSUVNMTBMOPZHUBXZEQVFFKYSPYZVYCHZZSERCBUWGIDRTSULWPKDDDHLNEIZZJVKKDBGPBBDGSVTLGOQHUBOXNBKNXYAIMYPPQQRMIUFEHACVSTJFOWMRLRTNYWOTOJVLWIRCWJKMCVQWYNWUOAQJWQGSCX");
    msg.sensor_class.assign("KLFYQVIIXMHPYLTZADMTFTPQFQYBSSSVUJMTNYLEWCJVHPEAMTGWHBOIUNLTKYQMEOEZXFBLFWFMBONFIJQRHCPKXDPBGUAYKREYOVIBVIZUHKHCSDHMGSZDEZVRNWNPUJDDLJGNQGGESRWXOMNKAQWJGVAJJXEZYACZKSRGUAURSZXFCOBLTLEIIGWWCPCLPZROYBMUYSVZTRW");
    msg.lat = 0.455629013861;
    msg.lon = 0.283289863786;
    msg.alt = 0.500885269974;
    msg.heading = 0.615340493163;
    msg.data.assign("XEQNDTOXXWLAQZZKYTNPRZUSOZBSVEFOFFCDMRVGSJWVCPBESBAVVXGTGSPBKERJFDGMBVIXFNWWYLEXPHQCMTDNRJUIST");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.294706896046);
    msg.setSource(12693U);
    msg.setSourceEntity(172U);
    msg.setDestination(43242U);
    msg.setDestinationEntity(95U);
    msg.id.assign("DOREPDHXPHLNPSJXYOMULWEGTURAJQZOOTPQNSALXZSBMWCQBH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.213687540139);
    msg.setSource(62942U);
    msg.setSourceEntity(215U);
    msg.setDestination(60881U);
    msg.setDestinationEntity(138U);
    msg.id.assign("FBWFOZXDLIIVHJMGSHROCPQINTTAZEFCMSGFHCKKYCFUHQBNAUWPPMASNRTDJUDERKVUZHJHO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.268242699079);
    msg.setSource(53332U);
    msg.setSourceEntity(139U);
    msg.setDestination(7520U);
    msg.setDestinationEntity(213U);
    msg.id.assign("RYVKHUDWPQRPHGAKJRTMISACNOQDEVWUYKYSAXMXNQRVYQZHKDAJZMPWYLFIMJDVZZHIXLKTVBPRNZFEBTRXZODUBPOHTCFQR");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("HSKHJCJEUAXWYMAZAXTLNWRCAEYYXLMEACYJLWWGXGSZAWKSOQNEIHZGODFNOROJIFUWNBJUYZOTNKYJRKYRHWVJXIVWVOTDKPCMZGLFJAZKKMBEFZESMBPQICUDEMBWMRXPACVGOBPCXBDQNUWSOFSSNTFEFYUEVTUMVGIFKCYRQPRTVBXDQDRMGDPZPCESYNQLTALTFBSTCQLHFLPIQZIZKRGTVO");
    tmp_msg_0.feature_type = 34U;
    tmp_msg_0.rgb_red = 11U;
    tmp_msg_0.rgb_green = 172U;
    tmp_msg_0.rgb_blue = 84U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.875469631627;
    tmp_tmp_msg_0_0.lon = 0.359517282504;
    tmp_tmp_msg_0_0.alt = 0.219314140639;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.663215821838);
    msg.setSource(55387U);
    msg.setSourceEntity(197U);
    msg.setDestination(10719U);
    msg.setDestinationEntity(64U);
    msg.id.assign("BTOZBVPMDVZKGFQL");
    msg.feature_type = 246U;
    msg.rgb_red = 230U;
    msg.rgb_green = 140U;
    msg.rgb_blue = 20U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.575463361599;
    tmp_msg_0.lon = 0.855839114097;
    tmp_msg_0.alt = 0.116994435352;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.450681534086);
    msg.setSource(43467U);
    msg.setSourceEntity(234U);
    msg.setDestination(59654U);
    msg.setDestinationEntity(253U);
    msg.id.assign("TOUDACQLJRRYHWIXKPPVAJYRHTYFRQXKSLQEVGOZITGUNXMAEGJOXPUSLDEJFQBQHWZLCJNUWARVCNSDMXEIWRDPFMUKUYBKGLNLTKVZTZFJWC");
    msg.feature_type = 104U;
    msg.rgb_red = 136U;
    msg.rgb_green = 254U;
    msg.rgb_blue = 145U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.576134215111;
    tmp_msg_0.lon = 0.542771596398;
    tmp_msg_0.alt = 0.963958152028;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.0768487803006);
    msg.setSource(11637U);
    msg.setSourceEntity(221U);
    msg.setDestination(6716U);
    msg.setDestinationEntity(146U);
    msg.id.assign("SISHNMGVFJFNSTRCNBMKWKAFQXUUXOGKVHNBIBKYZDINLDUFOGPSFGWZSTLUZRAELFBYKIUJVKXWKTLWMOXDWCHQTRMDONPGVTUBOLOHJSAWGCPRTXPEJHFPUUTIYMNPLAKUMPCNAVLRZTGEFWPALBABICKXZCQHDXAEEDLAZIBDJOWXEQLNYYZVRHJQDFDINCMMROEYSGKBJRHYS");
    msg.feature_type = 246U;
    msg.rgb_red = 158U;
    msg.rgb_green = 26U;
    msg.rgb_blue = 104U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.70229879041;
    tmp_msg_0.lon = 0.335023545822;
    tmp_msg_0.alt = 0.924577231439;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.958982435072);
    msg.setSource(20120U);
    msg.setSourceEntity(122U);
    msg.setDestination(15422U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.256298373073;
    msg.lon = 0.512515163969;
    msg.alt = 0.993244108309;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.266559602959);
    msg.setSource(1244U);
    msg.setSourceEntity(139U);
    msg.setDestination(35625U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.915036140204;
    msg.lon = 0.108703701336;
    msg.alt = 0.0764551603463;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.15561095625);
    msg.setSource(54161U);
    msg.setSourceEntity(169U);
    msg.setDestination(40340U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.506038380323;
    msg.lon = 0.707629384928;
    msg.alt = 0.992500575285;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.530139530186);
    msg.setSource(7839U);
    msg.setSourceEntity(128U);
    msg.setDestination(45423U);
    msg.setDestinationEntity(234U);
    msg.type = 223U;
    msg.id.assign("KPNDFSEJJXULENSKZPIBMCYBBCVVZSMBZPDMJLCHXGOHLLXKGIMSTQDIRNQXRNBQVZNJHWODHAREJZEOPVAGUJSPFISSITMOSHGPEYTUWJTKQROYFWHYLPNAUVCKUQMGJTWOJMABLOUXWVVBDEXEDAXQWHYKYQFCNFGYKGUFNALGAELRVIHJRIIWKZWLPVFCZOAAIXRMNCTKPDBAQUDTVEHCOFTOG");
    IMC::QueryLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("WTBMRJTERPZWFJGIGSLGAFPORXPWBKTCUMSZRDQODJEKYIKGDPVQIYFUACXTJHBSBQCSYFONBOZOEEHVNTFLUHICAYLHXOLFEJJZUVWWDYMNQTABRQIQKVZAMFCP");
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.248353774666);
    msg.setSource(62484U);
    msg.setSourceEntity(177U);
    msg.setDestination(49627U);
    msg.setDestinationEntity(226U);
    msg.type = 71U;
    msg.id.assign("MIJWJSYMCNOVEYNPBTQANUTEEBMEFRKNZHOHTCVLPONCLKOXUMMIGBTZFKOUPFTRDSISHSMVJFMRYEYHKJYEKVPXXZRLCCANSEFXZGBTIMZRYNFZXXULHRBZDJDPAQDIQGUGCYOAHWSPYMWVTJPIHSDKUPVBNKYQZAQOJ");
    IMC::EstimatedStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.807125892416;
    tmp_msg_0.y = 0.154236056642;
    tmp_msg_0.z = 0.459216539471;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.544104880178);
    msg.setSource(33741U);
    msg.setSourceEntity(206U);
    msg.setDestination(4816U);
    msg.setDestinationEntity(213U);
    msg.type = 159U;
    msg.id.assign("YPVKDGICRMGFSGXAQJTREFJFDRKMNRVTJPNCWZIDAOMSRAENCDZEYGLDQUOETKJTTKJHYLSGNHUWBTYCVCLBZM");
    IMC::EntityInfo tmp_msg_0;
    tmp_msg_0.id = 171U;
    tmp_msg_0.label.assign("EINKFVWLUTQOCCBUPTQXW");
    tmp_msg_0.component.assign("UKNHADIZLCPLGDBHOLQVSEZUQHNMGDESCOBSXEZTXUZIVLJLGEXHKBKMERNQTCADLVHCGZDVSBLNCXPUUZGGJDAPKCOJCMFCVWJRBHJTITQXOJDJZY");
    tmp_msg_0.act_time = 62973U;
    tmp_msg_0.deact_time = 3702U;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.808383020933);
    msg.setSource(7648U);
    msg.setSourceEntity(200U);
    msg.setDestination(1956U);
    msg.setDestinationEntity(249U);
    msg.localname.assign("ZTUTRTFYTTSSCCWOJROBZYCUPHEHFME");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("DROFNJNWBFCQSOCXYQFCTZZTVRNDMEHFOIIZMEPEFARDZBRQJWHTVWWJROQHOHQCSPTZHBSVIPRBZGHCKTXQMOJLXYFSXGPBEBTVYEWNSAGCNDNCKJGECWJYPOKQLUJDVRUXMTGQHWZGNYKDVNIJHUTUVNUAKHDLYCYWVXMBMMKAHLGMAJTDZYSVBXAUZIISSPGZIA");
    tmp_msg_0.sys_type = 19U;
    tmp_msg_0.owner = 65026U;
    tmp_msg_0.lat = 0.669985327096;
    tmp_msg_0.lon = 0.117909047387;
    tmp_msg_0.height = 0.0231977236163;
    tmp_msg_0.services.assign("KEDWIZUVNBUNXPSKMFDKRXZEYXU");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.894548195993);
    msg.setSource(25691U);
    msg.setSourceEntity(158U);
    msg.setDestination(35348U);
    msg.setDestinationEntity(47U);
    msg.localname.assign("JGQVYVUOGWRLUTUCJBJDHYACLGKWKESMQLTFRCOWCAOPSTOLPPSIYQAMPRSCAWPVDJCFDOPQBYHOEDICQLMRSGDKFXEALNDMNVMYQQHEXZOKVFEDJFTPQPNAULMUNNMKRXKNTNJXPDVBOABWXOCOWBYTZYIMWHARUCIKGG");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("KNLFMQTRPVSXENXBDVVIZTDOZLPYPQYXXIRLWZUMQWAQOGRJEEWGAHJAXAAECOEUYHZKNPYSHTNOAIUJWUZCTABKFMHTJVEWWYCZPRGNREKGJQJZLEFKLIAVMRJIEYZKUIDCDDRIXWRLMFKPRGCBFSVFGDLNVFMYNSCGPQXIBQAVWFBOPDTBLBWSKZYDYCQSUNUCBMKOXHRHTUCKHSFNESWVJPGLJHHUIOMJVFOMGSHYTP");
    tmp_msg_0.sys_type = 93U;
    tmp_msg_0.owner = 34793U;
    tmp_msg_0.lat = 0.296183198378;
    tmp_msg_0.lon = 0.710500908259;
    tmp_msg_0.height = 0.743397986746;
    tmp_msg_0.services.assign("QFGBKETZSHDXBAXGPWBINTVSGFXJCFSNJEWFLQIUVUKDJPGTQIRHNNRTCSPURJVPQTOKIJVUTNJRAKJPIOLONLPCMXYZHHWSCAVSHTWXCFEILNXZBEBYUMBDQONOYDLSWBUKXZZDELYEAOWSKZPZAKMYZJVFGCCACOEUWLEWYWPDAKQVUPPABMBI");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.260296358646);
    msg.setSource(62959U);
    msg.setSourceEntity(251U);
    msg.setDestination(1601U);
    msg.setDestinationEntity(180U);
    msg.localname.assign("ZMMXBQJSHRNMBEDVASSHHLZDPIKGIAYTMWWCFKDQEPHHAYZHZCJVYRVEIFQQJ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("NEJOARPCNTZWYSRFVYWKCFIMMWZCCIZKYWVHHPJAOQWXKRQILXUDTGTTPBKJHUAGCEWTENTNJRIPZVQIQSOXGLRKYAOOLUBLD");
    tmp_msg_0.sys_type = 154U;
    tmp_msg_0.owner = 7331U;
    tmp_msg_0.lat = 0.706031652134;
    tmp_msg_0.lon = 0.747915332828;
    tmp_msg_0.height = 0.0563636921936;
    tmp_msg_0.services.assign("AHAODTNTSHGSFIELMZODDCM");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.72229923851);
    msg.setSource(37600U);
    msg.setSourceEntity(37U);
    msg.setDestination(30468U);
    msg.setDestinationEntity(76U);
    msg.timeline.assign("UXHSKYMCWMJCULOHHSRUSAUOVXVYZQFBRNWNXASKFNAECUTWXDEJTPGMAIRTWIJBNOFYBWTIVPVPDDGISQTUNTPQCPNOVZVDDJCVQZHESVWDEUFLBAMRXSNWELZCBTBFYYFIRFNEGQHHCYBNMDYWRXDKFWPGOMSRAKXLEZP");
    msg.predicate.assign("OBZJMYCPKTVERCZZRKSQVJRXPLQWGMPOOUUOFREYVDYODIWYSFDAKPXIBFBNNFTDAKGZTNCSNFWLJBEPEMAZXTQJZVDDWZPXCEMY");
    msg.attributes.assign("ITIOBBEDINBTZUGVLBFAOQQGSKDIHOFRFTFHNHSKJEMLOFYLKEZIPAJLIAFXWTLPCPPCTULAZXWUSSXYYOTPNGDCSDEXRJZHVQVRCDDRMUXKFXARVUUMEGGBMDEJWAMKPJWLXHJUWOEQNHRIVFOYAJNFMAQBMNLZZTWSXFTVTOYAGYXSHWIHDDSZVBMQBDMIWUWLCJVVQNKJYYAELEZYRIGYXSUZQRCZPKMPCHGNCQBGQOPKSUEGJKCNPWVTKB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.101179183882);
    msg.setSource(23516U);
    msg.setSourceEntity(195U);
    msg.setDestination(13019U);
    msg.setDestinationEntity(247U);
    msg.timeline.assign("VQAVMQTANEDYJGRSNFZHNTKCORUWPUGYOPFGMYKTXWQQHDCIKDOSBFEZRWCHLCGWQXSLLQOEEPSLGVCVSHJZRFDJTRUNXEMYYMUMVWMNKDYUYBSTANHIPTUOZFAGTYNFSVBIFJIJBTIOGYDKRRUHPFKEKALXNLBXWVCBDEOXZXBUJWTIDALCTS");
    msg.predicate.assign("NROLOQDVBGLGMSGCWAMRFAKCDOEQRCEUHNVUHHOVLXKDDAPTOIGUJLJRNNTYCMDBXNIAIWKKVOEQTHNIAVZNAAVAPZGNEYUVDTXILYSJIHQSBPGHWOELYQEMFBUCWYXSZOISDAXYQAOCLXSJPTKENGMQSVJXUMIGKGXLTHBYDUDZFGHQPRWWUYZUQOWKRQFP");
    msg.attributes.assign("QESBVTYZGFYSXVNADHQNBGNKRBAVXPWVKUHCFJMSIVLKWASMSEAXTDRXECMDNTCZFWCHQLNPPRWVRILFGUYEANQDPDHIFGOOEOYYRSLTOPXMAVGAJBBMUHUKCKUOCGYQWXVFQOZIMOKXZNKDJYWSHQORWILVAKIGCTBARIXPDPQSCOPBBBZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.426441325817);
    msg.setSource(25771U);
    msg.setSourceEntity(168U);
    msg.setDestination(52964U);
    msg.setDestinationEntity(229U);
    msg.timeline.assign("TSIGZAYMQANNAOHPVFYLQPSBUTLEZWEFTIASKIDDMSEXLIEFFRGARKXVRCWIVIEEWKW");
    msg.predicate.assign("QRPRLBYRAMRQUJHHIAXNHGVLTKH");
    msg.attributes.assign("MYAAWYBYIDZQDKNSNNOMURTTSIZBRBBZJVLDSMDRDUXMQEAUEQYHCZXGXNHGWUSTPZPRWPVSEVOOPNILCFOHMUFHMWITJWTIFGYCXCQLQMRPBJEIAIOVPFXRAJOILTPJPDUSYXKADOWWCXGVABPAKVJZBSKWRIVWFVNHUOLFYQQLLDNQKOWGKC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.871307643585);
    msg.setSource(3836U);
    msg.setSourceEntity(207U);
    msg.setDestination(23024U);
    msg.setDestinationEntity(193U);
    msg.command = 161U;
    msg.goal_id.assign("EBSQJTKUDXWJMGNWROHUXFSSMBHDKAOMVYTZPEYRGJVCRDHYDNWWBRYBDOAXFZUTPGMAGPMQPUYHWLWSGHCCLFXXCTETXX");
    msg.goal_xml.assign("DVRGSFKDTVMRMCBSWOANQMWKXFODXAGQBWNPDUTHRDCYKBQECKPTYEIXEMVWZWLFDJYXCLHZIOPUXSLCYCWFJDPCFEPIAHIOHSGJNVIZZBDNKBOCULULJREHQGERILVAAWJJNXVSKOFXU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.661561691399);
    msg.setSource(28563U);
    msg.setSourceEntity(206U);
    msg.setDestination(56436U);
    msg.setDestinationEntity(236U);
    msg.command = 148U;
    msg.goal_id.assign("KIWMGUZMDQLEIJOGUGFRRBNNEPTEEOHZBKBFYHLZXJTUZPZPACXHMNDOXAXKDIVNYORCQBXVKHLKCJFKGVQBBATLZGHLOQBUFDIYIBRKQ");
    msg.goal_xml.assign("RTFMVGWEOUPKBWZAQEKSTHVDXLOIVDBQGJFFSAVDLAZMEIYIEBEVUABCTNDPMJKUHNYXUHILMOVCHQWCOZBQRTGGUUKXXKNMJMCERGWARCRCYZAYWDNLMZFGHIESFGKAJXXCJWSEBEFFSUNDGWPJYOJWGTYNTMDSRB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.476363688713);
    msg.setSource(48717U);
    msg.setSourceEntity(176U);
    msg.setDestination(21222U);
    msg.setDestinationEntity(130U);
    msg.command = 103U;
    msg.goal_id.assign("XOSBULVHJZJCODMYNGCMZIGDPPROBXOENFHQXUYLALNAFIXHEEXWAELIVVHDGUBHQISVBWTTVKETOEXJAJYSREMMHMMRFNBKAUBVTLKZHWARCLZIPPFHKGJYFAQLTKQULTCEUZNTXVURCSXRJMSSFRGSSQYTOQDFWIOKBJPGYVAAPNBWRCUCRSUQZCHJIOJVDICMPHDFZITYTQBODWVBNPYNOPLFKMSQZEG");
    msg.goal_xml.assign("XJBBXKAMVBHDGPOUKJEBZSRDUHMTUOVFFKBCNOEZQEIZMEZLDFWYJEZHMWISMCJPTSMQIHKJJICPHDLKHBSSDYTHWQTGCIKNPYPPGSQNOILBEZNXFENCXSECGMBYYCEAGJXSLILNUEFBMUFZTXXNDGFILAKQCMFCAPJK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.400803358128);
    msg.setSource(7501U);
    msg.setSourceEntity(61U);
    msg.setDestination(33485U);
    msg.setDestinationEntity(85U);
    msg.op = 124U;
    msg.goal_id.assign("OSTHFVGYOKGWKMUJCZYINTACXJJAJWVXWTRBPVGKQROMZTRUSPVNRWECFDLQGTRZOAYMBZVKHPWOKKNNQUKRTAJHCQOZBTHUHESYNPIDMNKSMZLNVESWPBLQKMPIEYGOFWXALZDFSMQRSUEXOCWBVPDJUILINFPXQXUIOYYLVRRESSZIPDXEIGAAMABFELUFUJHBWTYDTXURCLGYQZJJBMFWNYA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HLSNBZZUAKGDPCBUMPJLDFSGHJRMXYGSECXAPHMHFHQNSBTQQBOHLOIOIFKBJMQCOTDLZREHNGUNAQETCUWYVYTSYWFPRXNANNXMGTZTKWNOGDYZSEAVEHMJVOIEQMOLJLKQXKYTMCSA");
    tmp_msg_0.predicate.assign("BUSHTPZWDMLLSKIKAEOMAEPGQXKCRDVFEUBTDVBQJXNYDVLSPBOFYKABVKQKFIZWXGENPFUUGORNXAWSCYXLFWIMMWYGZEVZYYXASIHQDGNWCP");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.747060805474);
    msg.setSource(55035U);
    msg.setSourceEntity(148U);
    msg.setDestination(2896U);
    msg.setDestinationEntity(99U);
    msg.op = 51U;
    msg.goal_id.assign("HUJSAKVPOKCXXQVWVPRMCLHWLAKUJRSUZTCCGHWUYSCBBKEMQVSIDUPNODYXNAIVTHGGEFZSEHMMDSNHQNXIYMDPCKEQRHMJIQACGDNYSZYZQDBOUXPQFPLYOFJUTGEZXNLBFBJLXWSRFFDEQRYBZMUJIVFWKXMGNNQOUDAWDRTIALUZEJKSYTIVFPIWIRKQCTPBKYEVDJWONZZBMPZRHGNBOTSMCOEHOBXETWKTVPJGAJOARLGIALHLA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RDEVROXYJVJVICVKTKNQQEELZSMPYAZBGEHUZJSYGOTZPPVDUCNFNNUBLDHQEJRUWCFYBLRQYVWCRQ");
    tmp_msg_0.predicate.assign("DGRCRKFXXTVVUUXTJUSZSUQEJCAYZGUIJLHKSVQINPOUOYHLJFDEYQNWBJXMFUGIWRUQ");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.853368112837);
    msg.setSource(60916U);
    msg.setSourceEntity(150U);
    msg.setDestination(3854U);
    msg.setDestinationEntity(22U);
    msg.op = 141U;
    msg.goal_id.assign("BNGEFAPHXQEEYDLWIQQHBHWWCWQRGSNNNSTAPCRMEIZGBAFUUNDOAXSEOASALJVPDTZOSMBJMWIVXILIUPRWPDHNQSDVZYZHUUHLZRFKJBZYMMEICAOVOTHFOXZYQYBUAPJYRKWVJCTLQPFBSFDRYOQUNHLLTSGDPJFNFEKAXCTCVPCCKYDGQGHZJVTMMVIYNITWEOKKDJYOFZCWLXGBLVTKPEUIWQXDBR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ETVLSWKUTOFNYJZYJZTAAAHYUABQWRVSOUOGXHKYFDPEAKVTATSISJRGEVKJZZF");
    tmp_msg_0.predicate.assign("JBAAPVBURNJGNAWUQDKCUMEUKBUQTVGCHYIGPAQ");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.0845698776834);
    msg.setSource(708U);
    msg.setSourceEntity(180U);
    msg.setDestination(14616U);
    msg.setDestinationEntity(148U);
    msg.name.assign("LTHMNZIJLKTKNZRKXGVVRAHEBBTZVXQBMLOSCRWGANFOLYABUPXAYCQFIMTTUVFCTYUDGENDBEQCEGEIVSLCOCFAHOGDINTNXRTHWERNKWYKMJRLCGVSYFVEPKOPULJFWCPDJPQXJJSYQGGRQTDYFADSCSKISDKOYHZOZXBZTAOWWQSFSOMVGIKXAUBHHMPVXJHPILUBBDYUEDVKZJUQJSMQPMHXXQEP");
    msg.attr_type = 144U;
    msg.min.assign("QQUCRJDGWIKBXBXHLMCPOVBGPXJQLJPOMVTERLVYFSOHJITKTFINZPKSMZWTIZZDYWGPKLJPUYROLIFBCUFHLSZMRFXQSPXHNEJRYXSIFACH");
    msg.max.assign("ODHYNXIFFXVLKNCTQYZJOGGJJZKDRNBUHWDWLHODEXTDZWDFPOWAGCESPIQQVVOAKNWSGMWKXLPUJKQEBBVRYAKGTGAOBJCRLSRSFTFEXHMARIZQMIGIQKORIBECRSSH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.226351572668);
    msg.setSource(32877U);
    msg.setSourceEntity(170U);
    msg.setDestination(46348U);
    msg.setDestinationEntity(61U);
    msg.name.assign("BFNBDDQZABLOHXYZWXFKTBYJJAGZTLSUNOBMDKSVLPGHYEGSAPBEERIUDRDGQPKIYCMPVOMPLFHGHDPXMUIREWXBWFPEQNFKGVUNDYMRQJTDDVVDSLTCBGBAIRMFPWCZQNCSCAPKHHSAKVLWXLRH");
    msg.attr_type = 245U;
    msg.min.assign("WERMGOIDPBXVNLRJMKOZPXADPEYS");
    msg.max.assign("FRLYVEEIEXQFONNYPURFBVWSYQERONOCRDKYMKTCOEIGHCPQTSLAATRIIXRXZUQSWECGTSHMSJBHLACLJGFJFRGNTXSVIFSWTYZVPKWRUWNZXUGUPAAOBUZOYPJIPAVHTPJXQJZEOJWHODAM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.3941044397);
    msg.setSource(18586U);
    msg.setSourceEntity(89U);
    msg.setDestination(28820U);
    msg.setDestinationEntity(193U);
    msg.name.assign("SCOFDSKJFDAXOMTTQNPRBVLHJFEPLSUHNDVIQIWZHLXCUYABGMHYFJGTLWWNHJSZHEZQGYDIIJLOULGXWNBXGZRQXDIBZUXCKREGOMKPTKPUOOZSBZECDTYGQQTZSSSSAEIWGYUHDMRIFCRBACWEVAINFYYXCWETPBLBNFPYCADZOOQOBVKXHAPNRRQKHETTRNRWZNJGRQMPCYVXTVLXHCK");
    msg.attr_type = 223U;
    msg.min.assign("CWVDNGJDIDQYPLESMTPUGYOFRHRBWVUPXPRHXOVUJGNWSFGYOVFIAIYLNSCVZOHSZNMJAZKVKQZEPSXEAQJWDGIJAKFFYONOOSUS");
    msg.max.assign("YLXSTBLNWWRQMPJRYCRMUXCKJITCIVAJOGISTWZQUDATVAXGDADWHNCIIRISPFQLT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.938161056522);
    msg.setSource(55243U);
    msg.setSourceEntity(232U);
    msg.setDestination(61966U);
    msg.setDestinationEntity(100U);
    msg.timeline.assign("EILENIHLYDQPDVDTPAMKHNKEJVRGLWQTOKPJSVLJHGFASJNPWILECTZBCEIQEVMUIUOMSTOMUAKKZTQXEAAKQMNTQREWIGYGSZWZPBVLNIYGTMRDPUYLHAQSXWBGUTHFZHOCKPAAWXVCKSFKEWNJEUGVFHSFBCLXWPQXBOOJMDYTQXCCCLGZBXCJMOVVIWIFXGJ");
    msg.predicate.assign("LVDXTKHVTXWDQZQHRWQSERFYTWOKXTSCBHNTCUCLAKQLEHHPAPHYOSLYOBDUDJMSXESXFEBYJZWOIXTDNCGQWVPGTRQDGXYZCVPYYEMQFPPGBIOFMILAMMWGVEURYMRURKAJSEMRDBFKSHLAUTFNUSBBCBPRGMMHJNNDZUSQGDUCZCFBNAELIXCDVQ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("YAOMWPGZWEHPCWJFAIUTKXQOWURTFUMLFKPVWLJRIKZLMBBTALFNSYPNGECTJXEXDETDHQFYBBDRXSUNWNFGFXIXTGNVYGJKKZROAVAYJYNOPOFAGVGVHSCBBXAOQRXVHKQURTEUZYKEOPPIVUTNEQWFZYGBPSCORMHIZJHVZUMRCYCHHEEJICXQSDSBMSGZCZIMLDVLDDKQSLOZIWJQSTLPDNWUGDMFEVQMHYAQPUHNCJKSLDXJAIBRAWIC");
    tmp_msg_0.attr_type = 218U;
    tmp_msg_0.min.assign("TJKUABBLANJSHBFKSLIMDGLTMRXPBRUXLSUSTPQFEKSJYCKWIXAVCPRCCYQNRPOXKARUHFVNWIQYZBVFZPGPVADZONPHYTCAYSUNHKUORPIEGXFIONYBAQGVUJVJQEFEQADFVRYWAHLDGCECZTWUWINNMZZRSQSLIDXFOFQZTILGAZOVPFXCOMBOKBJGBMRLJZUTWMLDCHYHDJBOQWIT");
    tmp_msg_0.max.assign("ZFVUQBPRSIIFMNNGEFINCIOCWAPVARYREZVTNLBWSZKHZBKGKYTFATRDQMOAIMLJJSPXJWJGJWDKBUEGIHVOFXYWQRKLLIHNUCWFOCTLHCVSLVIOSYQUUZZHSWAHXBFWHVSKWNSMIZMZUNXQDXVPLAN");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.361434490532);
    msg.setSource(23070U);
    msg.setSourceEntity(151U);
    msg.setDestination(46924U);
    msg.setDestinationEntity(14U);
    msg.timeline.assign("JPEHZYKPMIWTDSOLJZRTNSFKYETXBEQASEYCGQFOGJVJMRXIYPPPHVGNUOKXEIUQVPEIUNHSHWKLFVLOVWBKCPFDVQBXTUUBZPMZZCAVKAEJLVHYJZRYQVWNMBQTAAQSBNRCMRSZOTARHATPHNGMMOCJYYDEFIRUZNACISXZJ");
    msg.predicate.assign("QQBPGZLLHQNUDKDSMOZHXBFZQPJHZPTVFCFRLDKTRTDOTBMWZEQEPOJAAQYHIPIMKSRFRNHHSYLPIVGTQKMLIGEFQU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.703187556283);
    msg.setSource(44495U);
    msg.setSourceEntity(224U);
    msg.setDestination(15237U);
    msg.setDestinationEntity(234U);
    msg.timeline.assign("RLVSMUETBREDOXMXIPLYZHTXFHNWVHCFSADCWEGXYUBWFPTKGKNTNVMKXFOFFHQNWMVGNILQTJUJUDVUMJJDSSRJEOKKEDOVKUVHBWYBHMCZQYIASEE");
    msg.predicate.assign("OLOTQJWNPBDMVQLTPLSBXHKGDMPAVGCFUZXTSTCMPYSMYDDE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.779182786532);
    msg.setSource(37743U);
    msg.setSourceEntity(208U);
    msg.setDestination(7860U);
    msg.setDestinationEntity(91U);
    msg.reactor.assign("GDNWSYUIZHLBVEHJJYORKQIFDOYRFWIZYGUJLTUZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.494330857567);
    msg.setSource(31813U);
    msg.setSourceEntity(114U);
    msg.setDestination(65186U);
    msg.setDestinationEntity(103U);
    msg.reactor.assign("YISEJQGTOPFVBPCIUWBXITEFFNGCJHYMZGGSRSEGEHZEKHLICHJJTRNPLPLPNLLAZHAKKNRPOTUTYKRWBYUAHBVDBCZVIFVUHAKTFDEFXOVFYZUJNEFMOJODIRZLCPHJSEJZUQBMUWEAVJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.593412069551);
    msg.setSource(1600U);
    msg.setSourceEntity(42U);
    msg.setDestination(22149U);
    msg.setDestinationEntity(168U);
    msg.reactor.assign("XLSZIRYCPOZJEWRAGXBPVARYDOOKHMCASTMIZESXYWUCQXQCBONGESVIKUTHLZPLZTTHFLBGRWILBFJNQRFMYUGFXHXJW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("POJAKBOLAMVVUWGIAXSYOXBLYSESKRXWMOPQYPXQHLSQPZKZISPPDFDOHIEUYIEVVZMZYDENKHBOYIRBJHXLMWGMDLUFNONYXXMBWHCUWGKJKVOUDCCQ");
    tmp_msg_0.predicate.assign("ZJHIGVCKJVKNAYJVAMFMRPRKIHXJGGFYZCZAGMDARYABNJULWOHNUXKTTSLKOWZDXTCFTRUYGLZMSMCQMFNBMIODWXECRPVTNXXMOVHJCRRSFHPWEDLOLIPAWDJN");
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.706093485189);
    msg.setSource(24538U);
    msg.setSourceEntity(204U);
    msg.setDestination(2998U);
    msg.setDestinationEntity(121U);
    msg.topic.assign("ALKDZMQUQCWHUULCPVZFZNKVIOVPNWBSOCKUFIBNNIFBSRENVJRQFIAXYCXFSLRJABMTRCEDKARYJGYLYVDKYEHBGXIMVKPHVSD");
    msg.data.assign("YOTOONRRJGWFDZKWOIEPPZCAMQVFLGVFAITEIOLMSYJNWIVSYKENZTLLUOOBPFOSGWPFKBVKMVTTOEVTQUDKSYELGIHAIC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.0302510012925);
    msg.setSource(37439U);
    msg.setSourceEntity(70U);
    msg.setDestination(39651U);
    msg.setDestinationEntity(190U);
    msg.topic.assign("HCIBMCFROCSYIWJYBFSQLATBUURYHXWWLDDZXFZKPYQZVWTGDIESVGJLVMDXKNPKINQDZLOCGHKIBQPVIAWXIZRAAUJZTSMPEMGYNJRSBAZSNGENUYLIVKPLRAQZOSMJATKNVGRPTYVFWLBFHCOEIUPKHTFSOAEEGJTHPAAHCRJZVKQZUGRBYEKJNLPWDGTCCEEXMGXBOCQDIWMHOLRMVULBFUTDDUSOCQ");
    msg.data.assign("HBHWRVUWGPHTNRXGKJJKBBQZAIRMJJLZGCSNRFXRPEMFVJOKODKRHEXRDAQW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.457779322031);
    msg.setSource(29947U);
    msg.setSourceEntity(115U);
    msg.setDestination(7713U);
    msg.setDestinationEntity(131U);
    msg.topic.assign("JFRDKYGDXDHZESUTKYKUYLQAFA");
    msg.data.assign("XOVHESSFCAPZHDCVLZPENBDESGFMEQSIPCLHMUETBISNKFNVRLRCKKCOUUEAXZZBIUWCIQMQPWOLJZPSXKTBDRBOOQJKVJGZNQVTHIQLGGGXBZYUNFHCRUWGVMNWPMIXRUIHH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.247880617708);
    msg.setSource(23264U);
    msg.setSourceEntity(75U);
    msg.setDestination(23217U);
    msg.setDestinationEntity(119U);
    msg.frameid = 119U;
    const char tmp_msg_0[] = {104, 86, -35, 108, -10, -1, 75, 43, 121, 46, 115, -7, -9, -118, -91, -75, -103, -104, 67, 116, -28, 92, 120, 87, -10, 83, -61, 117, -88, -7, 29, 19, 68, -45, 120, 26, -108, -39, -30, 106, 115, 114, 5, -102, 28, 20, -92, 81, -69, -27, -25, 112, 117, 107, 35, 92, -124, 93, 106, -13, 9, 14, -8, 60, 87, -112, 54, -80, 5, -48, 61, -118, 1, 58, -86, -41, 2, 118, 119, -2, 101, -84, -81, -78, 18, 120, -40, -48, -43, 62, -49, -105, -108, -80, -68, -71, 29, 48, 120, 77, 49, -50, -65, -26, -45, -62, 64, -81, -30, 102, 86, -120, -94, 86, -59, -53, 116, -40, -14, -79, 16};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.29403471646);
    msg.setSource(52306U);
    msg.setSourceEntity(175U);
    msg.setDestination(53582U);
    msg.setDestinationEntity(229U);
    msg.frameid = 101U;
    const char tmp_msg_0[] = {-113, -59, -118, -127, 34, 15, -17, 93, 39, 92, -73, -49, -43, -51, -108, 109, 105, 113, -6, 61, -33, -95, -127, -123, 44, 97, -105, -98, -70, 69, 56, 75, 7, 49, -13, 37, -24, -13, 35, 66, 3, 107, 60, 64, -74, 103, -96, -64, -103, -62, -110, -8, 3, -86, -48, 38, -44, 27, -126, -57, -2, -109, 18, 94, 122, 107, 25, 27, -29, 58, 60, 115, -71, -28, 13, 69, 120, -28, 21, -17, 2, 105, 93, -24, 33, 111, 49, 96, -21, 42, 101, 45, -97, 116, 99, 12, 117, -33, -87, -60, -105, 123, 16, -56, 81, 85, -89, 115, -9, -88, 77, -88, 47, -67, 54, -64, 48, 49, 32, -38, 100, 80, 50, 98, -127, -39, -109, 50, -13, 29, 38, -48, 62, 109, -114, -84, -119, -107, 123, -33, 53, -2, -81, -116, 15, 31, 57, -36, 89, 96, 42, -97, -41, -107, 88, -90, 40, 54, -80, 96, 70, -81, 13, 76, 122, 110, -47, 32, 32, -45, 6};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.236805606976);
    msg.setSource(40592U);
    msg.setSourceEntity(37U);
    msg.setDestination(48717U);
    msg.setDestinationEntity(139U);
    msg.frameid = 169U;
    const char tmp_msg_0[] = {-85, -26, 22, 52, -94, 70, 6, -7, 87, -84, -51, 52, 110, -88, 75, -47, -71, 44, -7, -25, -67, 117, 115, 26, 104, -87, 89, -78, -81, -43, 89, 83, 46, -34, -10, -114, -22, 91, 0, 80, -114, -12, -13, 33, 72, -5, -54, -113, 56, -92, 14, -58, -86, 114, 102, -69, -99, 59, 82, -128, 27, -68, -84, -42, 72, 75, 100, -36, 33, -53, -97, 125, 92, -58, 62, 55, -16, -104, -12, 55, -19, 48, 3, 8, -112, 52, -97, 72, 15, 94, 58, 43, 123, 51, 17, -48, 53, -119, -34, 34, 70, 10, -101, -87, 102, -108, -112, 101, 51, 89, 90, 113, 42, -42, 125, -3, 97, 64};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.65903420156);
    msg.setSource(43673U);
    msg.setSourceEntity(237U);
    msg.setDestination(34946U);
    msg.setDestinationEntity(196U);
    msg.fps = 6U;
    msg.quality = 93U;
    msg.reps = 248U;
    msg.tsize = 248U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.367676346558);
    msg.setSource(59280U);
    msg.setSourceEntity(177U);
    msg.setDestination(21499U);
    msg.setDestinationEntity(0U);
    msg.fps = 54U;
    msg.quality = 54U;
    msg.reps = 238U;
    msg.tsize = 6U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.817812780321);
    msg.setSource(56547U);
    msg.setSourceEntity(63U);
    msg.setDestination(26308U);
    msg.setDestinationEntity(191U);
    msg.fps = 82U;
    msg.quality = 152U;
    msg.reps = 235U;
    msg.tsize = 138U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.524959555366);
    msg.setSource(24711U);
    msg.setSourceEntity(106U);
    msg.setDestination(60203U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.973615311243;
    msg.lon = 0.127043938405;
    msg.depth = 76U;
    msg.speed = 0.362723396919;
    msg.psi = 0.0257964353516;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.36326552779);
    msg.setSource(47856U);
    msg.setSourceEntity(196U);
    msg.setDestination(20962U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.185899086583;
    msg.lon = 0.561547428446;
    msg.depth = 38U;
    msg.speed = 0.306803594632;
    msg.psi = 0.795729439057;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.240509958004);
    msg.setSource(22172U);
    msg.setSourceEntity(31U);
    msg.setDestination(44694U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.97201115568;
    msg.lon = 0.312223947351;
    msg.depth = 5U;
    msg.speed = 0.057330709826;
    msg.psi = 0.500134137313;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.735586152094);
    msg.setSource(45262U);
    msg.setSourceEntity(31U);
    msg.setDestination(4550U);
    msg.setDestinationEntity(83U);
    msg.label.assign("QHNZJFUXYZJGFKBDWQZLRGFEZRTGBLAPOFGITJXSPIVLKQEHCJAVOPKK");
    msg.lat = 0.02778056577;
    msg.lon = 0.545167042122;
    msg.z = 0.79473522278;
    msg.z_units = 22U;
    msg.cog = 0.936627959813;
    msg.sog = 0.153749578479;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.431153778406);
    msg.setSource(64013U);
    msg.setSourceEntity(94U);
    msg.setDestination(16796U);
    msg.setDestinationEntity(29U);
    msg.label.assign("MYYLLTUFJRHLIAQEARJTQMRXKXGQUFXWJEVPSAEDCZRQFJECRYMETTVILOLAZDNDRRCWPINFHBKFNHODOIOOVIWWESPQYQCAUHOVMQQYLUWKIZUMAKIJBGMTQUGYLFRNVAJMXXWTFWSYNSYFSHCDFAUXLBBIXZWFDPNPMHCABPJZZVOCCHVNHBXKGPLSUJPHRZETZDUBWVGEGBDNKDDYEIVQXXBYJLKSGKIRES");
    msg.lat = 0.449193253681;
    msg.lon = 0.67166495006;
    msg.z = 0.651120277427;
    msg.z_units = 18U;
    msg.cog = 0.450129856086;
    msg.sog = 0.319900041878;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.584745138709);
    msg.setSource(14572U);
    msg.setSourceEntity(34U);
    msg.setDestination(3628U);
    msg.setDestinationEntity(195U);
    msg.label.assign("DPCZJYFIKMJAWNRXMCITBVDAUUSSYNTERFPXKILXLITVLCDDFLPCAQGZGMZQZJRYPIXNLQZAEYSAGEAIEHWYSUAOSHLVIBTOMUWJBYENWEJEMFDRHGBTTVRKGRBDFKSKXPLXVHOMLKZWIDVWCUQDVCWRJGECXKJTRQNPNGMNLUTLICBHIBOOTYBGUBOEHFJBENZNQZFPDYXQVDSAXQQHMOTFQSVOHGKGACFZYXVPPKFUJSOMNRHA");
    msg.lat = 0.730596869628;
    msg.lon = 0.884962020654;
    msg.z = 0.338966548948;
    msg.z_units = 144U;
    msg.cog = 0.308359235955;
    msg.sog = 0.914052844309;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.780095141752);
    msg.setSource(48033U);
    msg.setSourceEntity(69U);
    msg.setDestination(16367U);
    msg.setDestinationEntity(140U);
    msg.name.assign("CDPLRTIIQCVGOJMHGKYINRNZBGTJFLZCUNQRLQUPPNTPHAEWSBAEZFPAWOADITETRQTHJYKMACRZSBYEQWVLZTJEKSZDKSGASTNSBMDGFSWTOVYROGEBQMERCNLYOLMMYWOGJNCHXPXADHWMBAJMAVOAVVSHFFZUPJIYJUWERYGSBKRLIEBLNXWCCIEXOIPBYWFKPHVDUWUXDKOQMVVKZFXGBJXZXVXPFYQLKFUQIZNDKQRJM");
    msg.value.assign("VBGJQTYIUCLLCBNFGYZHBSEJWMBNERKAAQESIXYZEPPTSTNYHGAWXXOUHEUGGMZHFAETFAQYQPQBBMMWDEXTVGCRCJSRUXSCAGLTKZCWLEZXJFYP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.571563697678);
    msg.setSource(40976U);
    msg.setSourceEntity(155U);
    msg.setDestination(56526U);
    msg.setDestinationEntity(210U);
    msg.name.assign("CZGNUEHVZZIIEDNMTBQEGAFOKPINIYNJZGDIJFGWJDHOMEXKOXIWNCBFLMBMARWYZAFTUYKAQSJV");
    msg.value.assign("NCLUZLVMAJXNOZPRUBYDWRTT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.423043088539);
    msg.setSource(16059U);
    msg.setSourceEntity(253U);
    msg.setDestination(44264U);
    msg.setDestinationEntity(67U);
    msg.name.assign("RVKBYDFFKREVEHROCNGAQDJZHTHBDJRIHHQPNXOYAIKVJXZWFLOXOUAAKRNQDDBYHVZYVPUKGOTBWJSDYEIFQWZMIGAVGTKYDHWVHFGJDTJCZOLOGNPOCVYJLSUNHXSIERSFTEPUILXW");
    msg.value.assign("VWAYZTODIFCTMBQMDGBZUGKDEKWYROAQHQQRSAOJNGVQELSCM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.92178859846);
    msg.setSource(7286U);
    msg.setSourceEntity(26U);
    msg.setDestination(18809U);
    msg.setDestinationEntity(11U);
    msg.name.assign("HHSZONBNYGNOPTC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FBSNGCEFHVESNMMDTUVGDYTMPJQE");
    tmp_msg_0.value.assign("UWQNEMULAVXKRQRVNVTGSTOFMFAKVVYGTCAHAEJDZDRLBRKFJENUIMWCFCHXLYOIYTJDLHXHXQXVIKLSBEMOPUDKPAYTZATSGDYWAZFUMFILZNULPBRKTYPBSRQQJGQSVFCBCXCDITDWYHOKRKBTNESPCZ");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.771988579537);
    msg.setSource(27824U);
    msg.setSourceEntity(19U);
    msg.setDestination(41844U);
    msg.setDestinationEntity(28U);
    msg.name.assign("ATFDSBAVTXSNZLHMDVSBYBHWCJTKOVKJLMMSSEHRQPROLZDYZEEUBVPBSXLEDDRHGCYINYALJQKQWPCNRTINNYCEEVMTVXDWPGUGJQWJCKFFFWXA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.0983036527624);
    msg.setSource(35987U);
    msg.setSourceEntity(165U);
    msg.setDestination(51197U);
    msg.setDestinationEntity(231U);
    msg.name.assign("UBTCGPFCVETADBCFTYPZTRNNDJBULIDLPKHHKY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ODVLDYCMEQRDMYMXHOIBTOWBRPHIMILEYIAERUFZUWHTXXIXMUNSGMAAZMRTSEGXXLYBC");
    tmp_msg_0.value.assign("PMWQBPBYRKLHCISIXEKNHSYQZMBVFPIGTAFZT");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.975200730368);
    msg.setSource(57141U);
    msg.setSourceEntity(165U);
    msg.setDestination(40287U);
    msg.setDestinationEntity(166U);
    msg.name.assign("APGYMHWHLVXCHSNBHRQXAJNNOAEAUIGANXTFGKURPNUURZDRFNFFYNZLENBTJUXVJLVFCSWHHQCUEMMPJBLQURS");
    msg.visibility.assign("WPIYVNVPOHDIAXAFMHNUASTWDDKBSMQTNJCSWJGXHYJSOGCUZUETHQMHEXWDFLQGKHPYVOLBUZEATPRLJJWOBZGKKKJWQNIKQXQZYTXRYLZOCFGPEHGXFJTYKRSVNDEJLEXGCAACUISSZLAKYRTKMFZDVSVBUQWVBQSVMIJMBMGDBRCOMXOGLSXZCIOGEVPFNEBVPIBNLIUHBMEDTDFRLHFYKNRIJWCFDTRPAQCLNMNXWTPERQUAP");
    msg.scope.assign("YLFIKIUNQKUSKDBTKFVUDPVPPWFWMWZHGNBEHNLLZTDGDJFUYMWRKMEQRKELMVOSLYPECSXAN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.256666827192);
    msg.setSource(64820U);
    msg.setSourceEntity(234U);
    msg.setDestination(45068U);
    msg.setDestinationEntity(34U);
    msg.name.assign("FYZLNJPGGVTUWUDETYLKKDJGCMXDBWBJMUOHOBTBIKAQYQACEQGKMAUYCFELBUJRAERVLXSIQPXPVDOVFCOSIYJEZBKKDBPTRKRHXNUYNDPGENLQYZHFGIHRAAEPDNWUOWPZHQWCEQGSZZZMZROWUKVWHPRITBWRAMXQIHLGWTMVXJVHKFSQROCMZWB");
    msg.visibility.assign("IAMPIQAYTZDWZCRBLPFREVZWEJXHPOWYAJHNXFDLWZOWPNTYFHZVADCHBHUGQZPSUBIBTQQYRRMDGVPIHSEMUOIAAFRRRWPBBJFUNXXTGJNKGLEZDSJWMUNMCYSVDXGKCETLVCJYVRMQQJUPTQEHFKXTLTYOXBLGNOGLEOUOCHTKFQNX");
    msg.scope.assign("RPEIGJAAKISCQHJRISWJZOJLZHMOTYIEEBYGFQFSZBLAMTTKDLJZJVSFSOOQNRUNDRDUIVXYOKRUCIAMJJGWQCHZTHQFZVGYPWVFCGELLUMLDZEYPNFUVKHXBEYGNWXDQJXCTHUMCSEMKFMOSAKOONBTPXLSWARENZQVXVIXRDAGLKFZKTOIEVKULXXFR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.647062133311);
    msg.setSource(10920U);
    msg.setSourceEntity(126U);
    msg.setDestination(29707U);
    msg.setDestinationEntity(139U);
    msg.name.assign("EHZQLSAVRAKYCCDIDDTAIRGKGXKLOCHMWBJJGVMVSYYSZFUNHXLAXGQMCNPXCBBDQYKEEYLDGGSBWUYFEFOMFMPUPDAWVUHXINSFWBXZZLMWJRHCVRNRTIHMAYNKQJTZNOCOFWRJMOTDTRVAIWTEFIBMZPXLAEWHPG");
    msg.visibility.assign("KZGVEJUYLSZKLVXBCNXTRCALKQAQYDAMQMTWJMOBUNEQRVWXNWUNGKCJHXMMY");
    msg.scope.assign("XFJMZOZILOAQUIDQJIUCOXNXGUUSFKRHSTGBYNOGVNBGTULWNZAPNLYJRZCUXCCILPUYZYPBTOSSHIJZOENDGQARQYVAKHMLHCWLKGPWURTDVWUSWJBKCIKAIYPVNVJFEFQVZXTVOBDVNHSGHTDPMFZEEYDRBHWKTUBXTWOHGIIXFWHJFNESKMYMGMADBMTBRZPJEMLQCDJEAYRVPQRCRCQMQYSNZPKJFCSBVAEE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.0875820320055);
    msg.setSource(59415U);
    msg.setSourceEntity(136U);
    msg.setDestination(63733U);
    msg.setDestinationEntity(199U);
    msg.name.assign("QKZFGBTTVBJPYSYCLSKYZTXDRDKVSTDUWFJXRSDEQFJUINBKLNPHTWIQOLGACEUWAKXG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.55137951658);
    msg.setSource(56569U);
    msg.setSourceEntity(215U);
    msg.setDestination(12374U);
    msg.setDestinationEntity(232U);
    msg.name.assign("NUMTIDONXLYHDCFBFOWKLUXQSHHSZNFIGPHBXEBTLTFCFWVXKUPLLOZSVQVFQBKVAINAOALFDZFJVNGRPNQYJZOVTYSJWMEEPUWORHBDMGKIOZRKMXCAJX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.716508810733);
    msg.setSource(7773U);
    msg.setSourceEntity(87U);
    msg.setDestination(10504U);
    msg.setDestinationEntity(153U);
    msg.name.assign("XGBOAJPOUXKMKDDETNKOCCNPQUHBGDODXEIBPPLKJJT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.0842612412433);
    msg.setSource(41700U);
    msg.setSourceEntity(3U);
    msg.setDestination(35525U);
    msg.setDestinationEntity(200U);
    msg.name.assign("UXWOLXEPWELQTJHEZXWKWSRPHKOADZLJVGTIVZLGXRBMPNDUIHXRLXUMFQJCCQOSBKZIBDCROTSTMBZAFRDWPUCMSIOWEGHQYVEZONDGFJPOHHJUSDYGKWBIGKVERSMSNBFPZGTCPHWQUZVLZBVNPNJEYRINILTIGHCXFMAXJCWJGT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.828017610636);
    msg.setSource(42935U);
    msg.setSourceEntity(136U);
    msg.setDestination(61674U);
    msg.setDestinationEntity(85U);
    msg.name.assign("VACXCPLLDWMDTKFHITTVVCAGOWGDMKLDRGAJYCHSHCWFAXYSFSDVTQUSMARMJLEQZEMHHZMVRWGPQEVYUZHFBLSJGKWXCURDZELZMYIXFBWBBICYIBTYQQNUCNQQNLYPXCRHLKKMFSXXWXJVRQEGAZHNKSLDUTVEUPSNMZYNMPKNHKEGOUZIORKUBTUPWIJIXHJQSEJCETEODUJQIZIPKPA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.051734729351);
    msg.setSource(28804U);
    msg.setSourceEntity(98U);
    msg.setDestination(6836U);
    msg.setDestinationEntity(79U);
    msg.name.assign("YJXMTORGMNKOFWLPKGDFVRIXJTGLATHTMICXQYANOAABBHERBMRISZTKZKPMGQSPVBUJGLLZZLIIGKULPJVNTAEDEPYDNJLCDWHQRNXAZPE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.633762533707);
    msg.setSource(19288U);
    msg.setSourceEntity(146U);
    msg.setDestination(30292U);
    msg.setDestinationEntity(236U);
    msg.timeout = 3356745851U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.477119986081);
    msg.setSource(32241U);
    msg.setSourceEntity(93U);
    msg.setDestination(49925U);
    msg.setDestinationEntity(191U);
    msg.timeout = 3702861721U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.294741565198);
    msg.setSource(65444U);
    msg.setSourceEntity(144U);
    msg.setDestination(646U);
    msg.setDestinationEntity(202U);
    msg.timeout = 3617676995U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.703644909428);
    msg.setSource(25847U);
    msg.setSourceEntity(250U);
    msg.setDestination(14343U);
    msg.setDestinationEntity(3U);
    msg.sessid = 629060616U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.169700125438);
    msg.setSource(59246U);
    msg.setSourceEntity(65U);
    msg.setDestination(47704U);
    msg.setDestinationEntity(111U);
    msg.sessid = 2287890911U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.387590208934);
    msg.setSource(21777U);
    msg.setSourceEntity(156U);
    msg.setDestination(20334U);
    msg.setDestinationEntity(127U);
    msg.sessid = 4105333427U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.155592841656);
    msg.setSource(28569U);
    msg.setSourceEntity(119U);
    msg.setDestination(33488U);
    msg.setDestinationEntity(35U);
    msg.sessid = 4293958816U;
    msg.messages.assign("CESDMCWJDFLWEXQMCGGUPCSOPYKNVWRKEMIYTZNPJYFKFOACYMQBDAHRFNQIPFHIPKSZDAZDGRXENMATLHARDGEZLABAKKIOCEUZBFIHBHMESFVTWCGVOLQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.327382570226);
    msg.setSource(17137U);
    msg.setSourceEntity(239U);
    msg.setDestination(7837U);
    msg.setDestinationEntity(168U);
    msg.sessid = 240496800U;
    msg.messages.assign("OHUQVHNSHUKAUQKXAMRKMJQMAYZTLKPPBCSLXHWUUAJBPSNTORGVMWQNQEWSOIFXRVBJZLMVCEXFJXPLDIQYULYEZIUFGWSZGDOANWLBCPMUROKGTJD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.2086106936);
    msg.setSource(36333U);
    msg.setSourceEntity(108U);
    msg.setDestination(50615U);
    msg.setDestinationEntity(82U);
    msg.sessid = 2072147718U;
    msg.messages.assign("WYQEPRPBEUJYFDDHXJZHVZJLLGDGRGCMPNLBHHUKWEWUOAZBYXWQUAXYKKHFNCGWUMSLKOIXLOQA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.00691171745352);
    msg.setSource(33784U);
    msg.setSourceEntity(61U);
    msg.setDestination(16702U);
    msg.setDestinationEntity(64U);
    msg.sessid = 2672555218U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.614637409341);
    msg.setSource(41573U);
    msg.setSourceEntity(170U);
    msg.setDestination(18172U);
    msg.setDestinationEntity(245U);
    msg.sessid = 2327212614U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.0232748853483);
    msg.setSource(43341U);
    msg.setSourceEntity(39U);
    msg.setDestination(23676U);
    msg.setDestinationEntity(10U);
    msg.sessid = 3676133087U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.776032731588);
    msg.setSource(7138U);
    msg.setSourceEntity(74U);
    msg.setDestination(48290U);
    msg.setDestinationEntity(15U);
    msg.sessid = 1925020220U;
    msg.status = 112U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.654664540664);
    msg.setSource(16248U);
    msg.setSourceEntity(214U);
    msg.setDestination(40795U);
    msg.setDestinationEntity(151U);
    msg.sessid = 2568039452U;
    msg.status = 66U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.86965112154);
    msg.setSource(13410U);
    msg.setSourceEntity(208U);
    msg.setDestination(61655U);
    msg.setDestinationEntity(69U);
    msg.sessid = 155871377U;
    msg.status = 60U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.1299691725);
    msg.setSource(28340U);
    msg.setSourceEntity(129U);
    msg.setDestination(50653U);
    msg.setDestinationEntity(155U);
    msg.name.assign("CQARWXGNZJHWJRXKBHQBGNRFFDYQTVXGPUYTQACDNVZSROQLRVGGKPVPDHUEULUDEZYIXODSPGCHLIYCKIVAQHABNSTRHXMJFONOQSSMULLRFKKJOMBIBKNGZJIQTR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.47873803314);
    msg.setSource(47253U);
    msg.setSourceEntity(82U);
    msg.setDestination(18970U);
    msg.setDestinationEntity(1U);
    msg.name.assign("ESOBOUFWXOZVCAXLYLMUEWJBYEYHKADCVOEPFPSGINJEPVJKYOIEJHPISHAS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.835646578562);
    msg.setSource(28918U);
    msg.setSourceEntity(47U);
    msg.setDestination(64113U);
    msg.setDestinationEntity(76U);
    msg.name.assign("FAQIPMALUKTMBHKGCITEAHXILTDZZWYOSFMLTFQITYXWGHBOOHKAHXUYOWEMZDQXNWSGKCLKSJBDXQAADVUJMBMJZRLVRPCTQUEYSTWGKPKYJCULNAGVGPXEBUXTJVSLEUQDCSFGE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.408401532218);
    msg.setSource(33405U);
    msg.setSourceEntity(229U);
    msg.setDestination(55377U);
    msg.setDestinationEntity(216U);
    msg.name.assign("TEXTLLFLXGXDMOPHGHQWCZWSWCJEPZGFOBOFHGZFVFJVDIASQOPLECVMIWRVMOGXQAVGVTYPPWYSFRLBQHULRTVKDPYJCLYFFQSECCKJNJWILTNESUNNHCITSJMBIRMJKHPIAKVJDZQCERWNDERUBJMNGRODSUIMHBNCYHNATPMORUYOGUHUTLLTQQDBYXESTOQESQKHNVRAZKZUAVKFUMPAKWBZKKZUGXDDAMIZFO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.894474046896);
    msg.setSource(51740U);
    msg.setSourceEntity(72U);
    msg.setDestination(36778U);
    msg.setDestinationEntity(208U);
    msg.name.assign("IQCNJIMGCPEHOJHSPBLCKZDDVLSPDHZDUEBPWJFNUMYMEJEXRFXSVHPFQAKMTIYTVWXJEQPDRKKZGQVTEVATVSSNQIBNTJALEECBZPIYGXKPUAAOZNQVXUANYTDVHSRFEMOWTSYGRAFDCNCWRHOFIZFXHVBTWKAJLJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.598022354157);
    msg.setSource(19821U);
    msg.setSourceEntity(227U);
    msg.setDestination(35139U);
    msg.setDestinationEntity(144U);
    msg.name.assign("ZLOBOZWZICR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.830222191727);
    msg.setSource(48556U);
    msg.setSourceEntity(143U);
    msg.setDestination(53904U);
    msg.setDestinationEntity(27U);
    msg.type = 236U;
    msg.error.assign("KNEXAHAKBIXDFVQDQTYQQWBE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.225447957251);
    msg.setSource(62691U);
    msg.setSourceEntity(12U);
    msg.setDestination(26644U);
    msg.setDestinationEntity(148U);
    msg.type = 17U;
    msg.error.assign("LBFENIPKBFULXSOGPWWWZKNLSTHYCISMYGPSYXIUOYHDDVWKWKAISTVJOILBJXFHOREDTIXUQXXPBVVZE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.314995835497);
    msg.setSource(17148U);
    msg.setSourceEntity(78U);
    msg.setDestination(36782U);
    msg.setDestinationEntity(40U);
    msg.type = 190U;
    msg.error.assign("BBEGAFZHSAC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.725952748515);
    msg.setSource(4055U);
    msg.setSourceEntity(169U);
    msg.setDestination(2301U);
    msg.setDestinationEntity(70U);
    msg.seq = 49859U;
    msg.sys_dst.assign("SEKWSGLSDIYXUGOKGIVHWFKSWRFBHXAUETQNTPYBAJVZDXCAJIBCTNZOCFRBVRIRGWYYNNJGU");
    msg.flags = 61U;
    const char tmp_msg_0[] = {-21, 55, 80, 70, -115, 77, -106, 4, -2, -74, 6, 4, 3, -104, 103, 19, -115, 82, 56, -73, -6, -115, 59, 93, 48, 118, 53, -84, 65, -90, -45, 92, 19, -63, -93, 86, -1, 67, 20, 37, 67, 72, -123, 17, -2, -4, 119, 2, -58, -64, -39, -42, 5, 76, 25, 30, 29, -3, -35, 92, -63, -110, -123, -58, -101, -13, 61, -39, 22, -116, 40, 91, -24, 54, -59, -106, -107, -109, -51, 49, -27, 97, 32, 106, 78, -7, 22, -50, -101, 124, -115, -25, 8, -35, 72, -3, -96, 31, -2, 46, 99, -41, 3, 15, -25, 78, -37, -63, -83, -16, 83, -123, -10, 104, -48, -117, -73, -92, 47, -7, -97, -119, -32, -35, -79, -75, -124, -10, 34, 9, -7, 114, 51, 77, -90, 51, 69, 17, -14, -96, -61, 99, -128, -15, -71, -10, 101, 48, 13, 8, 30, -60, -60, 52, 29, 65, -51, -62, 61, 109, 17, 109, 102, -7, 47, 68, 107, 40, 100, -49, 85, 83, 34, 4, -58, 19, -34, -51, 121, 117, 94, 110, -116, 13, -84, -26, 48, -95, -70, 14, 94, 124, 81, 116, 56, -21, -114, -126, -70, -126, -20, -19, -4};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.794578944496);
    msg.setSource(64768U);
    msg.setSourceEntity(186U);
    msg.setDestination(47356U);
    msg.setDestinationEntity(109U);
    msg.seq = 53589U;
    msg.sys_dst.assign("PYLLBUQMIJWPPXXBMQVKGZGDZNIKMJVTBXNALEHGYVCTUYORWEHRLKBIIRZQMYSIODXASLEBOCHZVVFJOHZWDJQQKLRSKTPSJQNMPAAGQDRCGXNIMKLNPOVRUEIFZJFSALRDIVAUTJLJWPLHBQFXBTUCZTHAWEECHMRXBPMBWXTOTYRXHWZYCFSEGFKMCRYKJXDWSAEUZCAEGSVYNBHNUNPGOQOWNOSTYDVCSPFGHEYFFADID");
    msg.flags = 109U;
    const char tmp_msg_0[] = {42, -28, -43, -22, 118, 49, 123, 11, -106, 121, -45, 63, -59, 51, -120, 123, -63, 73, -16, 1, -120, 115, 98, -118, 26, 74, 33, -4, -47, -116, -1, -94, -93, 58, -74, -81, 3, -15, 71, 42, 68, 22, -58, 84, -111, 5, -92, 32, -81, -91, 56, 94, 95, -111, -116, 38, -78, -83, -101, 121, -44, 3, -29, -56, -124, -80, 94, 97, -121, 47, 20, -100, -95, -119, -103, -65, -16, -44, 57, 14, 27, -26, 74, 67, 93, -89, -80, 92, 4, -121, 114, 88, 32, 19, -37, 57, 49, -48, -107, 112, -95, 77, -40, 98, 125, 113, 14, -29, -122, -46, 51, 45, -124, -69, -120, -54, 124, 79, 76, -46, 41, -50, -22, 10, 88, 12, 106, -94, -32, 26, 90, 6, -5, 67, 114, -31, 87, -110, -101, -122, 15, -40, 51, 29, -93, -57, -25, -22, 27, 68, -55, 43, 82, 82, -17, -50, 81, 11, 115, 74, -124, 119, 95, 34, -79, 55, 93, -80, 112, 33, -43, -113, 47, 95, -60, 29, 21, 60, -82, 1, -91, -84, -128, -125, -122, -113, 109, 30, 100, 25, -35, 3, -63, -10, 21, 79, 28, -57, 6, 126, 111, 16, 58, 99, -9, -31, -62, 109, -122, -5, 92, 45, 41, -23, -31, 43, 60, 77, 88, -57, 29, 8, -31, 1, -53, -110, 42, 79, 120, 85, 36, 25, -91, 88, 115, 39, 94, 31, 49, 114, 42, -55, 72, -95, -110, -43};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.669412293834);
    msg.setSource(8285U);
    msg.setSourceEntity(33U);
    msg.setDestination(51117U);
    msg.setDestinationEntity(175U);
    msg.seq = 39245U;
    msg.sys_dst.assign("SVVGIXNNXMSVMYIREGUAGTFJTQXAOWWOXEZZSWQLUTCZEKJYTRGUHQFGSTPJKSQQLUCXSZWQDDLMMXOWHPKIFPEJHDNNYISHDBFNERUJCKPASIZHKURKDCCBDNZGYUOMRAHQDNWKMEEYLGRZVWFPHSRAKA");
    msg.flags = 52U;
    const char tmp_msg_0[] = {-85, 32, -45, -6, 41, -117, -64, 1, 49, -23, -17, 3, -66, 33, 13, -15, -52, 61, -113, 98, -51, 119, 36, 126, -88, -76, -57, -69, -102, 31, -86, 92, -122, -25, 18, -27, 80, 122, -43, -11, -48, 4, 28, -95, 66};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.772845860549);
    msg.setSource(48357U);
    msg.setSourceEntity(64U);
    msg.setDestination(50353U);
    msg.setDestinationEntity(254U);
    msg.sys_src.assign("TXKQAJOPOPKHRIDQXHHLGHFVMOTVSTORKLMTJQAROKBWKQYJDICFFOYBRMBHPDLXLAGEBWJXTFZXSCIXNQZXWFDNSRKIHZVEDBCLJTATNIPESJYWRTLUOSZFMWRZYPAGVUMYJPBMUHOJGNKSMYKBQPALLMETPUUVCADNYHA");
    msg.sys_dst.assign("HIKRKVETHHIRCYSES");
    msg.flags = 188U;
    const char tmp_msg_0[] = {106, -41, -47, -11, -33, 108, -69, 18, 94, -20, 19, -38, -9, 15, -72, -70, -45, 45, -7, 104, 72, -26, -2, 78, -73, -45, -68, -66, 109, 5, 32, -63, 109, -17, 81, 39, -51, 25, 29, -49, -47, -89, 67, 52, -52, -44, 33, -87, 21, 29, 82, 35, -75, -6, -42, -75, 65, 1, -126, -89, 10, 29, 40, -25, -11, -48, 81, 33, -2, 51, -96, -79, -15, -45, -93, -13, 55, -24, 21, -32, -62};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.505772307338);
    msg.setSource(1490U);
    msg.setSourceEntity(40U);
    msg.setDestination(604U);
    msg.setDestinationEntity(18U);
    msg.sys_src.assign("WOFZCSGPOUCOMUJZJP");
    msg.sys_dst.assign("FBPNAVCEXSYXSODVBQYYZLRFELCGKSPVEZYBPHUAMTNNTB");
    msg.flags = 242U;
    const char tmp_msg_0[] = {50, -78, 97, -118, -122, -102, -40, -99, -6, 113, -41, 23, -21, -45, 23, -50, -120, -59, -75, 90, 60, -122, -76, 86, -77, 19, 24, 68, 42, 42, -67, 10, -51, 105, 95, 99, 22, 30, -79, 111, -9, -86, -54, -30, 125, 105, 25, 107, -96, 49, 104, -88, 29, 23, 50, -75, 120, 76, 65, -77, -81, -41, 126, 125, -79, 104, -8, -23, -115, 53, -36, 117, -128, -96, 48, -105, 122, 116, -81, 9, 97, 99, 58, 9, -61, 103, -20, 22, -107, -120, 11, -30, 75, 72, 91, 100, -18, 28, 18, 31, 23, -84, -64, -70, 57, 60, -71, -65, -21, 5, 105, -17, -4, 116, 41, 5, 24, -61, -26, 15, -18, 17, -83, 108, 43, -68, 59, 36, -77, -4, 22, -3, -11, 109, 41, 46, 34, -120, 126, 84, 57, -41, 85, -121, -12, -102, 106, 44, -64, -112, 104, 76, -116, 93, -119, -53, -119, -46, -54, 87, 86, 78, 63, 81, 33, 62, -71, 32, 43, -18, -57, 23, -72, 123, 89, 25, -2, 5, -76, 122, -102};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.338018854977);
    msg.setSource(59634U);
    msg.setSourceEntity(34U);
    msg.setDestination(53178U);
    msg.setDestinationEntity(9U);
    msg.sys_src.assign("OHPNXCHQEXAVZA");
    msg.sys_dst.assign("KXGBDEAXMWAHYINIQJRRXAYOWNZHCAZSQETKSJEPFUODJWEBKJPULWOQPDZDCNRXWVIHCDPHYVESLFMOUZCNWBYLZNLBCTZFUPYXYFGCHPTZINYGZLACRHWTT");
    msg.flags = 59U;
    const char tmp_msg_0[] = {113, 23, -31, -120, 37, -37, -66, 47, 25, 53, 71, 114, -5, -100, 102, 43, 106};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.855546335878);
    msg.setSource(43632U);
    msg.setSourceEntity(9U);
    msg.setDestination(1113U);
    msg.setDestinationEntity(36U);
    msg.seq = 62272U;
    msg.value = 10U;
    msg.error.assign("HTOUBGOAWRPWHPSVOWXJTUVFYEKDELWRBQEZIHNBLFVLDIGDD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.446456853345);
    msg.setSource(14994U);
    msg.setSourceEntity(132U);
    msg.setDestination(65128U);
    msg.setDestinationEntity(20U);
    msg.seq = 44840U;
    msg.value = 153U;
    msg.error.assign("RVVWZXFPPXWQCDPPLQTOSAQBLQTAKJBWXKBYSKMAVFDLUHHJRDEIIYEGJKLLGTJQBZXMYCVDGTIWPMJNFUUMBQQTDEESGPERSPZVSKDNDLEOAGVUAXTNCUNWOYZUYIHKX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.685218762521);
    msg.setSource(17431U);
    msg.setSourceEntity(142U);
    msg.setDestination(65390U);
    msg.setDestinationEntity(16U);
    msg.seq = 44895U;
    msg.value = 228U;
    msg.error.assign("HMFOCUAWLJKIOAEZGOFJOOZMGKQEPFBBIJRUGOILBUKRSQFWTNUZDBLLSBYJTCDSCMGLVLOQOKAXUIHVQCKERQPTSTSWPTQEXSGPIZHMIESLEMUYDMNZTWYNWKCECACWMLYWPNAHPUIFJSIYJRNWDXZYUCDVQHBGNDYGVRRHZNMIGHBVAEAUXLXFXFZPRVOIMVYHBJRGTDRCQPDZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.841655247135);
    msg.setSource(28991U);
    msg.setSourceEntity(115U);
    msg.setDestination(38194U);
    msg.setDestinationEntity(168U);
    msg.seq = 33955U;
    msg.sys.assign("RFZLTYUEJAFYTUNESKOWZJQGDIRERLVXUGSWHKEZFFLKJXPOENYYNRLMLSLBKOYHORNROWMGVHBAWPVZXCAMNDBPDBXVKGPXFUSCEUTRBACOMHHVUHWJCXDJXLGCZQDZJBXTHERTKMPHMALTSDVRQUFPZTIWIIQVAKJDWMOCGLPAQTNMGQUZSYUQMAGHAFRYEOWENLNPGDMQBXSBFYIDIOXICHNTJWNEKVQGJQIPWUFBYICFSZ");
    msg.value = 0.226733669968;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.075177478866);
    msg.setSource(45966U);
    msg.setSourceEntity(138U);
    msg.setDestination(46042U);
    msg.setDestinationEntity(8U);
    msg.seq = 44616U;
    msg.sys.assign("PMBVGUSSROTQOTXSILGGKDXYXTEZOYIRNDWHCPBGKKGKFYHZUMCZVCNDPVMNJMXUHIIZBUBENPXMSHXFESFOBRYRWZOLCUCTJXIFTGIEJPSBESQCVTOWCGHLYZZKFRAKSTUOGTNQPKFMOZPJJQJDLMFBDAEAAHOJLRJFRDDSXWDUPNMZXANCAWTLXIDYACYZREWLHKJEEQJVYKLYQQELWRWVHNGABQT");
    msg.value = 0.510163421242;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.541483597915);
    msg.setSource(658U);
    msg.setSourceEntity(118U);
    msg.setDestination(1450U);
    msg.setDestinationEntity(190U);
    msg.seq = 38025U;
    msg.sys.assign("BLPMZWZELEZQQISDEEM");
    msg.value = 0.78619242109;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.92678472672);
    msg.setSource(22315U);
    msg.setSourceEntity(25U);
    msg.setDestination(37574U);
    msg.setDestinationEntity(86U);
    msg.action = 96U;
    msg.longain = 0.541451500166;
    msg.latgain = 0.35175480648;
    msg.bondthick = 233058490U;
    msg.leadgain = 0.181467798635;
    msg.deconflgain = 0.946527769381;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.827375150635);
    msg.setSource(57416U);
    msg.setSourceEntity(122U);
    msg.setDestination(49179U);
    msg.setDestinationEntity(133U);
    msg.action = 231U;
    msg.longain = 0.944499755732;
    msg.latgain = 0.540214092342;
    msg.bondthick = 709490689U;
    msg.leadgain = 0.898357264239;
    msg.deconflgain = 0.925741756113;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.296771825699);
    msg.setSource(21249U);
    msg.setSourceEntity(89U);
    msg.setDestination(5775U);
    msg.setDestinationEntity(112U);
    msg.action = 185U;
    msg.longain = 0.450189201791;
    msg.latgain = 0.772177760106;
    msg.bondthick = 2522974564U;
    msg.leadgain = 0.698693144095;
    msg.deconflgain = 0.370268325129;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.915786693799);
    msg.setSource(56667U);
    msg.setSourceEntity(103U);
    msg.setDestination(46425U);
    msg.setDestinationEntity(85U);
    msg.err_mean = 0.840062715621;
    msg.dist_min_abs = 0.516588130196;
    msg.dist_min_mean = 0.298424937221;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.581868508764);
    msg.setSource(59462U);
    msg.setSourceEntity(245U);
    msg.setDestination(50621U);
    msg.setDestinationEntity(69U);
    msg.err_mean = 0.018802662902;
    msg.dist_min_abs = 0.00210025985936;
    msg.dist_min_mean = 0.195340901379;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.877802005749);
    msg.setSource(62381U);
    msg.setSourceEntity(116U);
    msg.setDestination(51420U);
    msg.setDestinationEntity(222U);
    msg.err_mean = 0.0721853475963;
    msg.dist_min_abs = 0.229452631681;
    msg.dist_min_mean = 0.953797922297;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.955870279562);
    msg.setSource(4923U);
    msg.setSourceEntity(84U);
    msg.setDestination(45121U);
    msg.setDestinationEntity(161U);
    msg.action = 114U;
    msg.lon_gain = 0.709512468735;
    msg.lat_gain = 0.69192409945;
    msg.bond_thick = 0.528599064856;
    msg.lead_gain = 0.378813707596;
    msg.deconfl_gain = 0.449249008392;
    msg.accel_switch_gain = 0.432473759758;
    msg.safe_dist = 0.405242600107;
    msg.deconflict_offset = 0.19196159467;
    msg.accel_safe_margin = 0.122282992996;
    msg.accel_lim_x = 0.138761379027;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.611684422801);
    msg.setSource(30758U);
    msg.setSourceEntity(24U);
    msg.setDestination(55820U);
    msg.setDestinationEntity(232U);
    msg.action = 221U;
    msg.lon_gain = 0.497111956202;
    msg.lat_gain = 0.113494959065;
    msg.bond_thick = 0.956318988672;
    msg.lead_gain = 0.158169470481;
    msg.deconfl_gain = 0.176653505566;
    msg.accel_switch_gain = 0.108052742915;
    msg.safe_dist = 0.536894975015;
    msg.deconflict_offset = 0.981013056056;
    msg.accel_safe_margin = 0.826902523844;
    msg.accel_lim_x = 0.679611142733;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.608860303256);
    msg.setSource(35865U);
    msg.setSourceEntity(204U);
    msg.setDestination(12182U);
    msg.setDestinationEntity(86U);
    msg.action = 86U;
    msg.lon_gain = 0.0453116531628;
    msg.lat_gain = 0.907272246059;
    msg.bond_thick = 0.0387245281848;
    msg.lead_gain = 0.592764253311;
    msg.deconfl_gain = 0.735677659663;
    msg.accel_switch_gain = 0.663483508002;
    msg.safe_dist = 0.523593903334;
    msg.deconflict_offset = 0.776868629547;
    msg.accel_safe_margin = 0.321940249652;
    msg.accel_lim_x = 0.120935080505;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.0393370796128);
    msg.setSource(38254U);
    msg.setSourceEntity(53U);
    msg.setDestination(58325U);
    msg.setDestinationEntity(103U);
    msg.type = 80U;
    msg.op = 143U;
    msg.err_mean = 0.334297555361;
    msg.dist_min_abs = 0.8180497035;
    msg.dist_min_mean = 0.721299500342;
    msg.roll_rate_mean = 0.738924332888;
    msg.time = 0.640398133508;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 117U;
    tmp_msg_0.lon_gain = 0.305315290052;
    tmp_msg_0.lat_gain = 0.683804251173;
    tmp_msg_0.bond_thick = 0.286896847827;
    tmp_msg_0.lead_gain = 0.300260234653;
    tmp_msg_0.deconfl_gain = 0.403436054873;
    tmp_msg_0.accel_switch_gain = 0.602910557577;
    tmp_msg_0.safe_dist = 0.166467679942;
    tmp_msg_0.deconflict_offset = 0.446278267379;
    tmp_msg_0.accel_safe_margin = 0.121885699222;
    tmp_msg_0.accel_lim_x = 0.554930036022;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.311932642665);
    msg.setSource(44584U);
    msg.setSourceEntity(75U);
    msg.setDestination(45051U);
    msg.setDestinationEntity(14U);
    msg.type = 172U;
    msg.op = 23U;
    msg.err_mean = 0.8176254442;
    msg.dist_min_abs = 0.430753997222;
    msg.dist_min_mean = 0.876159237296;
    msg.roll_rate_mean = 0.260271956038;
    msg.time = 0.864135948891;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 246U;
    tmp_msg_0.lon_gain = 0.877359197728;
    tmp_msg_0.lat_gain = 0.407849554173;
    tmp_msg_0.bond_thick = 0.226527332392;
    tmp_msg_0.lead_gain = 0.852068727698;
    tmp_msg_0.deconfl_gain = 0.191445736848;
    tmp_msg_0.accel_switch_gain = 0.307130246389;
    tmp_msg_0.safe_dist = 0.591870210291;
    tmp_msg_0.deconflict_offset = 0.745016897659;
    tmp_msg_0.accel_safe_margin = 0.632372047401;
    tmp_msg_0.accel_lim_x = 0.616208671633;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.753386204011);
    msg.setSource(25130U);
    msg.setSourceEntity(178U);
    msg.setDestination(50850U);
    msg.setDestinationEntity(238U);
    msg.type = 70U;
    msg.op = 200U;
    msg.err_mean = 0.2105563816;
    msg.dist_min_abs = 0.416690916036;
    msg.dist_min_mean = 0.826272953344;
    msg.roll_rate_mean = 0.547130751747;
    msg.time = 0.721299642116;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 67U;
    tmp_msg_0.lon_gain = 0.480828687128;
    tmp_msg_0.lat_gain = 0.509195420475;
    tmp_msg_0.bond_thick = 0.492205393738;
    tmp_msg_0.lead_gain = 0.450340035355;
    tmp_msg_0.deconfl_gain = 0.663038850704;
    tmp_msg_0.accel_switch_gain = 0.684264434073;
    tmp_msg_0.safe_dist = 0.329881875142;
    tmp_msg_0.deconflict_offset = 0.910442317211;
    tmp_msg_0.accel_safe_margin = 0.0247728688398;
    tmp_msg_0.accel_lim_x = 0.643310536824;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.428589872491);
    msg.setSource(12946U);
    msg.setSourceEntity(89U);
    msg.setDestination(34600U);
    msg.setDestinationEntity(233U);
    msg.uid = 237U;
    msg.frag_number = 113U;
    msg.num_frags = 26U;
    const char tmp_msg_0[] = {-67, -55, 3, -87, 47, 76, 93, -35, 110, -20, 75, -76, 123, -100, 98, -34, -30, 63, 3, 108, -128, 60, -121, -16, -33, -26, -8, -106, 124, 96, 27, -46, -67, -44, 75, -5, -122, -90, 79, -79, 115, 116, -75, -51, -101, -6, 63, 22, 7, -75, 1, -99, 16, -9, 7, 26, -88, 18, -103, -43, -88, 78, 74, -15, -81, 72, -56, -32, -23, -45, 59, 5, -10, 122, 38, 41, 14};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.487409150741);
    msg.setSource(14960U);
    msg.setSourceEntity(134U);
    msg.setDestination(22184U);
    msg.setDestinationEntity(90U);
    msg.uid = 110U;
    msg.frag_number = 165U;
    msg.num_frags = 222U;
    const char tmp_msg_0[] = {-62, -32, 52, 75, -91, -110, -91, -60, -123, 103, -19, 31, 50, -126, -99, 25, -126, -125, 110, 75, 67, -24, -101, 94, 105, 107, 59, 52, -58, 110, 27, -124, 57, -111, 69, 12, -68, -44, -36, 106, -18, -52, -115, 17, 58, 118, 69, 60, 121, -15, -14, 35, 61, 81, -105, 99, -80, -109, 88, -110, -47, 107, 85, -97, 38, 16, -13, -96, 93, 37, -88, 71, 86, 28, -69, -89, -126, -58, -8, 103, -72, -97, -105, -106, 123, -113, -7, -104};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.931321676927);
    msg.setSource(63916U);
    msg.setSourceEntity(143U);
    msg.setDestination(19053U);
    msg.setDestinationEntity(134U);
    msg.uid = 136U;
    msg.frag_number = 222U;
    msg.num_frags = 38U;
    const char tmp_msg_0[] = {1, -44, 86, -11, 113, 117, -10, 100, 16, -91, 71, -48, -52, 31, 10, -125, -78, -55, 46, 59, -57, -40, -105, 117, 79, -68, -95, -99, 17, -4, -10, 106, 115, -114, 45, -65, -73, 0, 78, 85, -103, -7, 13, 117, 59, -53, 86, -78, -49, 117, -113, 23, -106, -14, 57, 60, 109, -14, -83, -109, -6, 37, -47, -125, 77, 89, -32, 114, -88, -71, 37, -59, 80, 9, 66, 101, -58, 68, -81, 46, -3, 97, -74, -31, -69, -31, 91, -25, -37, -13, -81, -40, 8, 24, 39, -49, 88, 82, 80, -63, 43, -36, -35, -28, -40, 123, -86, -113, -88, -79, 31, 48, 57, -126, 25, 91, 122, 27, -10, -120, 126, 105, 61, 40, 99, 44, -33, -91, -45, 105, 95, 47, -23, -20, 120, -5, 107, 62, 63, 7, 58, -16, -28, -27, 99, -100, -3, -102, 48, 8, -44, 125, 115, -36, 116, -49, -15, -102, -74, 85, -96, 106, -5, 50, 28, -83, -85};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.951449736432);
    msg.setSource(11758U);
    msg.setSourceEntity(57U);
    msg.setDestination(15759U);
    msg.setDestinationEntity(192U);
    msg.content_type.assign("WHFLFHZDSTVSGXUYAIDAMGKPNBPJTJEUVOKOE");
    const char tmp_msg_0[] = {-55, 72, -10, 68, 61, 33, -92, 5, -123, 32, 69, -64, -94, -81, -34, -93, -89, -72, 41, 113, -114, -118, -24, 2, 46, 119, -20, -125, 90, 97, 63, -40, 78, 101, 17, -117, 61, 68, 92, 76, 88, 4, -50, 40, -67, 14, 59, -17, 111, 21, -72, 87, 89, 100, -62, -2, -86, -113, 55, -44, 52, 5, 104, 40, 46, -121, -99, -24, 27, 126, -76, 15, -12, 98, 126, -56, -104, -39, 12, -84, 36, -117, -64, -16, 90, -22, -12, -11, 9, 119, -82, 83, -2, 41, 4, -51, -64, 69, -4, 42, -118, -76, -81, -23, -75, 65, -12, 32, 71, -128, -108, -74, 7, 83, -15, 38, 112, 64, -79, 16, 22, -126, 60};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.843465095883);
    msg.setSource(64377U);
    msg.setSourceEntity(208U);
    msg.setDestination(1899U);
    msg.setDestinationEntity(205U);
    msg.content_type.assign("HBKMZJBRPHMRDQISPPXHTQBSDUYOYDGVFEEKAOUMVZRMTSLS");
    const char tmp_msg_0[] = {-96, 53, 80, -1, 77, -90, 29, 4, 42, -40, -127, -110, -35, 113, -107, -62, -20, -125, 120, 88, -81, 8, 34, 51, -25, 14, -22, -115, -39, -92, -52, 29, -83, 2, -21, -24, 46, -2, 112, -24, -27, -91, -95, 0, -106, 58, 11, -103, -107, -49, -75, 90, -5, -44, 105, -52, -21, -117, -114, 101, 115, -47, -74, -65, -99, -13, -73, 122, 41, 80, 6, -46, -94, -36, 76, 99, -99, -92, 72, -4, -62, -21, -76, 94, -81, 26, 79, 78, 25, -88, -104, 7, 14, -64, 18, -93, -20, 15, -88, -81, 34, 37, -112, 54, 48, 58, -39, 2, 59, -70, -56, 42, -66, -37, -86, 39, -46, 20, 67, -52, 103, 28, -64, -92, -7, 94, -85, 18, -35, -8, 36, 15, 16, 48, -32, -113, -113, 77, 78, -54, 124, 69, 88, -102, 62, -50, -24, 113, -79, -77, 117, -91, -21, 98, -6, 123, 99, -12, 118, -108, 30, -76, 88, -48, -86, 114, 47, 27, -61, -27, -25, 14, 64, -60, -50, -28, 126, 118, -47, -103, 57, 81, 27, 53, 82, 39, 21, -100, -12, 85, 61, -104, 59, -92, 29, -24, 48};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.505839884503);
    msg.setSource(34301U);
    msg.setSourceEntity(128U);
    msg.setDestination(18523U);
    msg.setDestinationEntity(187U);
    msg.content_type.assign("JIMZJAHSNCZXUQQCCWRXSLKAUURQWILJECDUQTSCQZTWMOCKSNMXJALC");
    const char tmp_msg_0[] = {9, 30, -15, 36, -24, -33, -2, -28, -2, -124, -43, 101, -78, -114, -104, -107, -5, -41, 114, -74, -4, -5, 49, -50, -54, -1, -45, -60, -64, 38, 45, 100, -41, -96, -4, -70, 110, -97, -21, -114, -114, -95, 45, 51, 6, 10, 50, -76, -33, -34, 43, -112, -13, -125, 70, 11, -44, 56, 115, 47, 14, -86, 25, -82, -91, -72, -9, -71, -77, -16, 106, -84, 13, -21, -126, -78, -35, -37, 105, 12, -33, 108, -71, 41, 42, -86, -40, 90, -11, -58, 29, -30, -7, 22, 115, 79, -77, -75, -23, -8, 20, -24, 86, 35, 30, 8, 10, -70, -6, 58, -55, -65, 117, -55, 117, -29, -90, -94, 0, 74, 31, 120, 109, 87, 30, 5, -4, 17, -37, -32, -93, 74, -51, 125, -16, -82, -19, 121, -34, -113, 69, -15, -127, -39, -124, 96, -39, 126, -79, -76, 101, 86, -125, 91, 83, -62, -18, -79, -18, 24, -82, -10, -40, -117, -44, -74, -119, -107, 84, 62, 33, 86, 48, -122, 28, 85, -103, -8, -49, 123, -39, 75, 7, 71, -30, -41, -88, -35, -98, 123, 23, -59, -30, -17, 73, -41, 79, 111, -39, -29, -72, -5, -25, 21, -44, -78, 32, -67, 116, -15, -70, 92, 42, 48, -122, 25, 107, 80, 72, 58, 54, 118, -106, -108, -41, -16};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.873416303431);
    msg.setSource(16548U);
    msg.setSourceEntity(197U);
    msg.setDestination(57053U);
    msg.setDestinationEntity(220U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.958335484478);
    msg.setSource(22345U);
    msg.setSourceEntity(132U);
    msg.setDestination(52204U);
    msg.setDestinationEntity(210U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.768488639514);
    msg.setSource(29861U);
    msg.setSourceEntity(103U);
    msg.setDestination(50198U);
    msg.setDestinationEntity(63U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.145522473944);
    msg.setSource(41001U);
    msg.setSourceEntity(137U);
    msg.setDestination(26271U);
    msg.setDestinationEntity(189U);
    msg.target = 19333U;
    msg.bearing = 0.485934782344;
    msg.elevation = 0.703973356151;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.731771199239);
    msg.setSource(54177U);
    msg.setSourceEntity(206U);
    msg.setDestination(53974U);
    msg.setDestinationEntity(235U);
    msg.target = 51666U;
    msg.bearing = 0.285369025033;
    msg.elevation = 0.712964232169;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.52505245256);
    msg.setSource(22832U);
    msg.setSourceEntity(20U);
    msg.setDestination(54368U);
    msg.setDestinationEntity(171U);
    msg.target = 44058U;
    msg.bearing = 0.586170723803;
    msg.elevation = 0.565248118724;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.599550482297);
    msg.setSource(50758U);
    msg.setSourceEntity(127U);
    msg.setDestination(11868U);
    msg.setDestinationEntity(91U);
    msg.target = 2593U;
    msg.x = 0.443135543035;
    msg.y = 0.532098386982;
    msg.z = 0.0174169688193;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.567616133815);
    msg.setSource(47313U);
    msg.setSourceEntity(179U);
    msg.setDestination(16591U);
    msg.setDestinationEntity(191U);
    msg.target = 20088U;
    msg.x = 0.562925055168;
    msg.y = 0.358510436511;
    msg.z = 0.497725019291;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.506817159459);
    msg.setSource(52501U);
    msg.setSourceEntity(218U);
    msg.setDestination(222U);
    msg.setDestinationEntity(70U);
    msg.target = 59567U;
    msg.x = 0.803722416919;
    msg.y = 0.185709689661;
    msg.z = 0.133832441595;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.308437563179);
    msg.setSource(33946U);
    msg.setSourceEntity(10U);
    msg.setDestination(5880U);
    msg.setDestinationEntity(143U);
    msg.target = 51166U;
    msg.lat = 0.692280702508;
    msg.lon = 0.457416019595;
    msg.z_units = 97U;
    msg.z = 0.708971678239;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.118211258569);
    msg.setSource(10192U);
    msg.setSourceEntity(227U);
    msg.setDestination(54945U);
    msg.setDestinationEntity(228U);
    msg.target = 28451U;
    msg.lat = 0.0280152564117;
    msg.lon = 0.957899600159;
    msg.z_units = 118U;
    msg.z = 0.973970220886;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.724058209881);
    msg.setSource(39097U);
    msg.setSourceEntity(240U);
    msg.setDestination(14742U);
    msg.setDestinationEntity(171U);
    msg.target = 6955U;
    msg.lat = 0.982161142969;
    msg.lon = 0.00575905704737;
    msg.z_units = 119U;
    msg.z = 0.34643948204;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.146175397316);
    msg.setSource(18729U);
    msg.setSourceEntity(174U);
    msg.setDestination(38424U);
    msg.setDestinationEntity(206U);
    msg.locale.assign("RDMQGFKVBEVZGPMBSEVSVPCQIPFLRJIUDUJHOEFAQXACDLYEGSHHBFTOUWJNZWZITSXYSWRCLMMPPDNBBFZDVLZQKXMZTSMICQREKCXGOZXUNKXIPKBCCNSYVYDVFTGNUYETWHOSGJLUVJABKFAFMYHZYPOWMFYAXBWTEDOIJFPWNVGTNOCEPIINQQCARAIUXBHGUDMCJUEO");
    const char tmp_msg_0[] = {-38, -19, 91, -116, 20, 65, -104, 46, 53, 124, 25, 39, -76, 70, -46, -128, -80, -42, 15, 45, -110, 71, -84, -90, 104, 36, 90, -81, -101, 0, 125, 22, -110, -86, -32, -5, -70, -90, 12, -1, -95, -2, 97, 49, -29, -9, -38, 78, -93, 117, -117, -25, -36, -1, -47, 83, 70, 105, 24, -66, -120, -72, -21, 59, -38, 115, 118, -36, 35, 6, -26, 114, 106, 15, 22, -37, -57, 105, -91, -86, 104, -33, -76, 57, 36, -120, -117, -42, -8, -52, 68, 28, 34, -113, 91, -14, 89, -107, 105, -83};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.0777826707159);
    msg.setSource(61123U);
    msg.setSourceEntity(225U);
    msg.setDestination(55417U);
    msg.setDestinationEntity(154U);
    msg.locale.assign("BJTKANKMCPRDSDFDFIZRXAKYSNOGGVUOZEVHQOSMXFVTCWRZDGBOGCRWNQDOPKEZVJWQIQUXX");
    const char tmp_msg_0[] = {64, -24, -31, -91, -92, 18, 57, -41, -26, -103, -126, -53, 21, 107, -81, 37, 77, 20, 7, -55, 18, 98, -27, 102, 115, -100, 121, 107, -93, 75, 71, 115, -14, -87, -38, 5, -53, 0, 29, 83, 8, -14, 2, -55, -107, -95, -57, 68, 2, -35, -84, 92, -65, 76, 16, 31, -122, -102, 120, -7, 57, -19, 44, -80, 112, -80, 44, 77, 92, 32, 28, 27, 58, 65, 29, -95, -73, 21, 91, -109, -50, -77, 64, 100, 111, 95, -56, -91, 10, 109, -65, -124, 24, 23, 21, -102, 45, -18, 72, 76, -47, -16, 71, -33, -19, -104, -63, 20, 14, -12, 44, -102, -27, -24, 41, 119, -8, 1, 97, -64, 30, -35, -3, -40, -6, 82, -89, 44, -43, 106, 47, -112, -57, -12, -52, 56, 108, -40, 8, 66, 7, 46, 91, 37, -102, -121, -15};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.762564125606);
    msg.setSource(62729U);
    msg.setSourceEntity(26U);
    msg.setDestination(31408U);
    msg.setDestinationEntity(247U);
    msg.locale.assign("IMOUAWGPRFYZRQKGUAPLFPTUCELMNGISNHMIECGFYRXDDINPZIKJMXMKGTZXCKPGKMHVBYRHULQXQITNDRXJULLVVEPZKKOEVBRGQS");
    const char tmp_msg_0[] = {2, -62, -71, -101, -19, -88, 39, 46, -2, 54, 43, 109, -11, 69, -87, 39, 56, 77, -17, 110, -84, 49, 53};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.581239192561);
    msg.setSource(13085U);
    msg.setSourceEntity(248U);
    msg.setDestination(10195U);
    msg.setDestinationEntity(180U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.569504698963);
    msg.setSource(2299U);
    msg.setSourceEntity(211U);
    msg.setDestination(32834U);
    msg.setDestinationEntity(117U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.493760269171);
    msg.setSource(44362U);
    msg.setSourceEntity(142U);
    msg.setDestination(1785U);
    msg.setDestinationEntity(40U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.460865534269);
    msg.setSource(35209U);
    msg.setSourceEntity(73U);
    msg.setDestination(51185U);
    msg.setDestinationEntity(196U);
    msg.camid = 248U;
    msg.x = 16640U;
    msg.y = 37603U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.482992333619);
    msg.setSource(28387U);
    msg.setSourceEntity(177U);
    msg.setDestination(17210U);
    msg.setDestinationEntity(254U);
    msg.camid = 90U;
    msg.x = 55336U;
    msg.y = 37217U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.627078733714);
    msg.setSource(54297U);
    msg.setSourceEntity(210U);
    msg.setDestination(5187U);
    msg.setDestinationEntity(231U);
    msg.camid = 232U;
    msg.x = 44105U;
    msg.y = 22220U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.675164297892);
    msg.setSource(22909U);
    msg.setSourceEntity(136U);
    msg.setDestination(41427U);
    msg.setDestinationEntity(244U);
    msg.camid = 113U;
    msg.x = 54783U;
    msg.y = 15850U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.496796809194);
    msg.setSource(17498U);
    msg.setSourceEntity(107U);
    msg.setDestination(30336U);
    msg.setDestinationEntity(125U);
    msg.camid = 36U;
    msg.x = 28059U;
    msg.y = 61260U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.734057605761);
    msg.setSource(55103U);
    msg.setSourceEntity(153U);
    msg.setDestination(39026U);
    msg.setDestinationEntity(217U);
    msg.camid = 141U;
    msg.x = 52756U;
    msg.y = 48194U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.303854454424);
    msg.setSource(18917U);
    msg.setSourceEntity(156U);
    msg.setDestination(41388U);
    msg.setDestinationEntity(181U);
    msg.tracking = 45U;
    msg.lat = 0.351432692338;
    msg.lon = 0.927350168013;
    msg.x = 0.392760311718;
    msg.y = 0.378446230264;
    msg.z = 0.217150460324;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.0827668300073);
    msg.setSource(40314U);
    msg.setSourceEntity(232U);
    msg.setDestination(1898U);
    msg.setDestinationEntity(58U);
    msg.tracking = 79U;
    msg.lat = 0.134520760853;
    msg.lon = 0.972726934824;
    msg.x = 0.266569928164;
    msg.y = 0.76322076169;
    msg.z = 0.0410678680597;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.733062024726);
    msg.setSource(49263U);
    msg.setSourceEntity(194U);
    msg.setDestination(8074U);
    msg.setDestinationEntity(18U);
    msg.tracking = 22U;
    msg.lat = 0.163784372062;
    msg.lon = 0.22949899886;
    msg.x = 0.237712614444;
    msg.y = 0.103781103995;
    msg.z = 0.0561020155208;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.766727061887);
    msg.setSource(10636U);
    msg.setSourceEntity(104U);
    msg.setDestination(47781U);
    msg.setDestinationEntity(130U);
    msg.target.assign("SJACNFMTFANBVPBLKPVWXGBZDOVBMVFOGUUTEQDIELEGOLFYGZTDHYVSGYQXQACNWBARUIEGTNXMSCIIFZWZDKJQUZERRHNCEVEOGHWSWNISGOJVNYQMKJSFHBFLPPSKUHXRYZNSKJEFTPIYMIXDDCUMPLCARTHYAGKQWDUYDJQPPIHAJYRMMXLVHWNILFQOLKRUAHEMOTJAUXYPK");
    msg.lbearing = 0.0817050491106;
    msg.lelevation = 0.29976447547;
    msg.bearing = 0.546308246642;
    msg.elevation = 0.168049998825;
    msg.phi = 0.972039369737;
    msg.theta = 0.364238928958;
    msg.psi = 0.334835548292;
    msg.accuracy = 0.533523363502;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.664164710856);
    msg.setSource(55206U);
    msg.setSourceEntity(41U);
    msg.setDestination(2603U);
    msg.setDestinationEntity(8U);
    msg.target.assign("OJQDZULLYFUFJCSQZTWYUIBORWVKKFKWCQOMRFKLXBUJGVMTHUSOJLBVBNTNZREN");
    msg.lbearing = 0.650269078116;
    msg.lelevation = 0.698184099661;
    msg.bearing = 0.90930988189;
    msg.elevation = 0.359450933595;
    msg.phi = 0.258933845272;
    msg.theta = 0.325914508348;
    msg.psi = 0.922010116718;
    msg.accuracy = 0.980608994811;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.684450057228);
    msg.setSource(37583U);
    msg.setSourceEntity(218U);
    msg.setDestination(44897U);
    msg.setDestinationEntity(162U);
    msg.target.assign("IPTHXARMFXZJNMEFSSQVIOLHQPEXGRSZUTMQHBADYEIQUPLWTORXWGFKTKROIBNQOZAYKPXVFTKVUAFVNKUJC");
    msg.lbearing = 0.862177885172;
    msg.lelevation = 0.233047502862;
    msg.bearing = 0.0847451857233;
    msg.elevation = 0.544117262414;
    msg.phi = 0.262840240096;
    msg.theta = 0.0809547114563;
    msg.psi = 0.972313092802;
    msg.accuracy = 0.00947995522379;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.611677473566);
    msg.setSource(10021U);
    msg.setSourceEntity(254U);
    msg.setDestination(14628U);
    msg.setDestinationEntity(54U);
    msg.target.assign("SVXNFVISFJPIXXURRHIGLYMVWWFBHLDMBRZLRAEQPFCZCKZCZEVOPATMPEALWMWCSIMPHRKKTOGNZOPUCSXWHDTKOFTMSUVBXADZCRNBJTIIOGTDBYTIODGIABWJZXNCMRFVFNYSHVLNOHQKJHNQQQIYOYBYLSVSEJJZORHFDMFPYXEVTGNYEPKGWVNEUXBRMUHXNEDQRQQGSCZUDGCTDWULPLQAASOEUUGCKMGLFYYBJBAKXQEAKJP");
    msg.x = 0.352062383768;
    msg.y = 0.769694979568;
    msg.z = 0.556889851313;
    msg.n = 0.335291280848;
    msg.e = 0.245112035443;
    msg.d = 0.377705761168;
    msg.phi = 0.494729625449;
    msg.theta = 0.11402281339;
    msg.psi = 0.0141825353996;
    msg.accuracy = 0.424262894215;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.712007550716);
    msg.setSource(49388U);
    msg.setSourceEntity(47U);
    msg.setDestination(9818U);
    msg.setDestinationEntity(85U);
    msg.target.assign("USISKNQDCFTWGWTVIIRASQDRNOJFDGCXTNAFMULEJABRMJCZAUBGQGPVVKTWYORNKHPCTBGWXFVLLXIMUGYFMNOZKEJQFJPAVJPCKYZSBDEPBVNSYAHJSUVDBAAIBOBSLZEEHACGHXXWLTZDOQCHMIOJQPIWYLYRWRODERZMQVGUSUIQLXLKVEHEFC");
    msg.x = 0.257692584089;
    msg.y = 0.0899947810753;
    msg.z = 0.172487770121;
    msg.n = 0.753731315636;
    msg.e = 0.479764907161;
    msg.d = 0.265569416216;
    msg.phi = 0.399997726953;
    msg.theta = 0.522921377048;
    msg.psi = 0.956463914067;
    msg.accuracy = 0.53139515701;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.90707813736);
    msg.setSource(15692U);
    msg.setSourceEntity(184U);
    msg.setDestination(38915U);
    msg.setDestinationEntity(151U);
    msg.target.assign("KCSZFLERZPQIBJVAOWLSRLKPALZCRUWIMTONGCCNLPMLZCNIDOJHMXAVTMQIHWOBWJSBHHUXZVQYKEWKURQXGFMHJDOQFERZXQYSAIDU");
    msg.x = 0.300196062976;
    msg.y = 0.884508349845;
    msg.z = 0.392991313623;
    msg.n = 0.214490613762;
    msg.e = 0.157746224606;
    msg.d = 0.326544238074;
    msg.phi = 0.606837915544;
    msg.theta = 0.75895381904;
    msg.psi = 0.309661469654;
    msg.accuracy = 0.108798242626;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.544445759956);
    msg.setSource(28605U);
    msg.setSourceEntity(51U);
    msg.setDestination(26819U);
    msg.setDestinationEntity(152U);
    msg.target.assign("PCZOUULTWGAYHARYVSPJJHZQWBGLKFGKDGDAJLNKMOBNHNLDCELXTSYKWCIMQAFYIJRGEBKFRTDUMCMY");
    msg.lat = 0.0211281033513;
    msg.lon = 0.485011628682;
    msg.z_units = 82U;
    msg.z = 0.632721279049;
    msg.accuracy = 0.681064892285;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.33509084787);
    msg.setSource(27136U);
    msg.setSourceEntity(30U);
    msg.setDestination(36806U);
    msg.setDestinationEntity(62U);
    msg.target.assign("DHAUIUJFVAFLPTROLDEWNOATUAIPSHZNVLYFGEDRBTMZXWMFIHIZAFHZFALURLPROJLVYCRKRYQEBJUYJZKPLNLWOZBEQIIQKXTPHWAFPAYSGHSTKQGRDCESFKKHNIGEYOEJOILGOAGCMVSYCMKYMUNKTTDVWQOVGCNS");
    msg.lat = 0.0989056698233;
    msg.lon = 0.997587828007;
    msg.z_units = 150U;
    msg.z = 0.277712995764;
    msg.accuracy = 0.643502690611;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.948427011503);
    msg.setSource(63782U);
    msg.setSourceEntity(237U);
    msg.setDestination(62379U);
    msg.setDestinationEntity(62U);
    msg.target.assign("IIUZFGDSINRVZGJSTKTUWXNCFKULZYKGBCGYGLQHLDCERTCDFQAVQEUDAKOSWJDXWDXFBZYVCFEXOXYILNENSTBTUWQYTJOESMBJPACOIWKMMIVNVBXCSGPBYSZYBKHQXQTRYUHAAPSIRJOTEWBZR");
    msg.lat = 0.237207173836;
    msg.lon = 0.273099055628;
    msg.z_units = 107U;
    msg.z = 0.937051256283;
    msg.accuracy = 0.131513122234;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.289121436003);
    msg.setSource(26482U);
    msg.setSourceEntity(226U);
    msg.setDestination(13434U);
    msg.setDestinationEntity(144U);
    msg.name.assign("XXTGVPOPESTTBJDVXBNDI");
    msg.lat = 0.0973684178684;
    msg.lon = 0.310984490899;
    msg.z = 0.388062285483;
    msg.z_units = 70U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.508260111766);
    msg.setSource(50922U);
    msg.setSourceEntity(80U);
    msg.setDestination(548U);
    msg.setDestinationEntity(186U);
    msg.name.assign("GBFZKETVXNBNXSFSLKFHRFPVGTYMBCKXKEAGXPRHVAAMZJZBJELGISAWELTVPRRCLQ");
    msg.lat = 0.25683653509;
    msg.lon = 0.175352734246;
    msg.z = 0.150437236389;
    msg.z_units = 53U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.172792974988);
    msg.setSource(14538U);
    msg.setSourceEntity(17U);
    msg.setDestination(2862U);
    msg.setDestinationEntity(21U);
    msg.name.assign("XHSTHCUYHGDKFJFXMLRRSQJNGCLKHYHSSJPODXUCCXKJCAQUVKZJPVPMJUVGSDIGYDAEBLAIIBNLOLUSDFDDIETXUOEIIGSXNBYACOMWZYPRVWPMSZPZYDQWFBNPMFZKRLOELTTXEGNBBJWXRPQECWLMYVRVMZSNYQTMJAOJDHRNTIEZMGWPBYQNPIBOFIA");
    msg.lat = 0.667573904375;
    msg.lon = 0.953963377478;
    msg.z = 0.885447344751;
    msg.z_units = 117U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.529421054795);
    msg.setSource(5934U);
    msg.setSourceEntity(235U);
    msg.setDestination(7792U);
    msg.setDestinationEntity(97U);
    msg.op = 38U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.880746291242);
    msg.setSource(63256U);
    msg.setSourceEntity(187U);
    msg.setDestination(12987U);
    msg.setDestinationEntity(48U);
    msg.op = 204U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("GCIHFXYKIPDVLZTNAPDYJLMGJYMQGCOPBEQFWXAUIQFSVONTWLBEFQZFRAPKIXFOEMWCIGTUDLDEOLTNAKTHVZRHEKEAOTZXCVVLQWAZZGKWWNEMTLJOXAVJTVTKPRXIBSJDOMMPJRS");
    tmp_msg_0.lat = 0.487506650888;
    tmp_msg_0.lon = 0.921102632556;
    tmp_msg_0.z = 0.786308266914;
    tmp_msg_0.z_units = 233U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.187810903062);
    msg.setSource(3234U);
    msg.setSourceEntity(194U);
    msg.setDestination(44055U);
    msg.setDestinationEntity(68U);
    msg.op = 229U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("FBAHTDBRWZAUZSAXGOXXIXBJWDWJQMJDORRVSMQZPYZPULYYFFWHGLK");
    tmp_msg_0.lat = 0.548735498764;
    tmp_msg_0.lon = 0.320710879524;
    tmp_msg_0.z = 0.81502649631;
    tmp_msg_0.z_units = 51U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.93992702282);
    msg.setSource(22955U);
    msg.setSourceEntity(2U);
    msg.setDestination(31978U);
    msg.setDestinationEntity(123U);
    msg.value = 0.169608241025;
    msg.type = 126U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.25676387997);
    msg.setSource(5611U);
    msg.setSourceEntity(101U);
    msg.setDestination(14465U);
    msg.setDestinationEntity(178U);
    msg.value = 0.0822387121647;
    msg.type = 245U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.812776369696);
    msg.setSource(35031U);
    msg.setSourceEntity(221U);
    msg.setDestination(44683U);
    msg.setDestinationEntity(100U);
    msg.value = 0.73555681396;
    msg.type = 210U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.160251994344);
    msg.setSource(1976U);
    msg.setSourceEntity(102U);
    msg.setDestination(23800U);
    msg.setDestinationEntity(226U);
    msg.value = 0.875360963065;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.0514193447005);
    msg.setSource(6048U);
    msg.setSourceEntity(10U);
    msg.setDestination(41993U);
    msg.setDestinationEntity(172U);
    msg.value = 0.808710976587;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.798049895188);
    msg.setSource(15728U);
    msg.setSourceEntity(141U);
    msg.setDestination(33035U);
    msg.setDestinationEntity(116U);
    msg.value = 0.478280438197;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.757501258614);
    msg.setSource(4957U);
    msg.setSourceEntity(3U);
    msg.setDestination(9674U);
    msg.setDestinationEntity(83U);
    msg.timestamp_last_service = 0.536023818196;
    msg.time_next_service = 0.302397550438;
    msg.time_motor_next_service = 0.762917292787;
    msg.time_idle_ground = 0.554829921705;
    msg.time_idle_air = 0.480526509339;
    msg.time_idle_water = 0.512230146115;
    msg.time_idle_underwater = 0.416251138541;
    msg.time_idle_unknown = 0.599346833105;
    msg.time_motor_ground = 0.959680915567;
    msg.time_motor_air = 0.576244757274;
    msg.time_motor_water = 0.638965788344;
    msg.time_motor_underwater = 0.562873980052;
    msg.time_motor_unknown = 0.446709272864;
    msg.rpm_min = -26048;
    msg.rpm_max = -31329;
    msg.depth_max = 0.0280416183155;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.654698064634);
    msg.setSource(36436U);
    msg.setSourceEntity(145U);
    msg.setDestination(44820U);
    msg.setDestinationEntity(105U);
    msg.timestamp_last_service = 0.883918021711;
    msg.time_next_service = 0.00314920362017;
    msg.time_motor_next_service = 0.852717360852;
    msg.time_idle_ground = 0.0228142707389;
    msg.time_idle_air = 0.133703541775;
    msg.time_idle_water = 0.291065308732;
    msg.time_idle_underwater = 0.700892969422;
    msg.time_idle_unknown = 0.406432813246;
    msg.time_motor_ground = 0.788070588441;
    msg.time_motor_air = 0.925418232494;
    msg.time_motor_water = 0.854261442387;
    msg.time_motor_underwater = 0.467561261721;
    msg.time_motor_unknown = 0.495787012725;
    msg.rpm_min = 14608;
    msg.rpm_max = -1751;
    msg.depth_max = 0.345279946401;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.553440528267);
    msg.setSource(4147U);
    msg.setSourceEntity(145U);
    msg.setDestination(31959U);
    msg.setDestinationEntity(74U);
    msg.timestamp_last_service = 0.604698607485;
    msg.time_next_service = 0.945590823871;
    msg.time_motor_next_service = 0.0312736906964;
    msg.time_idle_ground = 0.157707147426;
    msg.time_idle_air = 0.754647552375;
    msg.time_idle_water = 0.124019608026;
    msg.time_idle_underwater = 0.288139847364;
    msg.time_idle_unknown = 0.437503948464;
    msg.time_motor_ground = 0.436895849222;
    msg.time_motor_air = 0.640957691487;
    msg.time_motor_water = 0.102247483027;
    msg.time_motor_underwater = 0.529631823832;
    msg.time_motor_unknown = 0.91185732091;
    msg.rpm_min = -25205;
    msg.rpm_max = 8406;
    msg.depth_max = 0.287136151648;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.597224961755);
    msg.setSource(30544U);
    msg.setSourceEntity(159U);
    msg.setDestination(19329U);
    msg.setDestinationEntity(83U);
    msg.severity = 12U;
    msg.text.assign("SPSCBYGLTNXPWPLFCRMVGXXOQUZDRRKWGXXNVAULPOABFKBZPFGBWUCZBMLFEHNHYFECRPBIBQGMXWRYGIFIHAQNAISIMCKIUAXZJZIQHXTLRZFHTMZCPHNEUHGYWDJPHRDJQTNKOOUQXOWLNGMKASJBJIAEMJOOK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.784900725958);
    msg.setSource(28961U);
    msg.setSourceEntity(75U);
    msg.setDestination(55736U);
    msg.setDestinationEntity(227U);
    msg.severity = 43U;
    msg.text.assign("NTBUFBRBOPDWRIUKECRXVPVIHVKCIPUQXWYYFQITVJAFJRDXPMWPZGVUWC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.226836808373);
    msg.setSource(22450U);
    msg.setSourceEntity(117U);
    msg.setDestination(59265U);
    msg.setDestinationEntity(225U);
    msg.severity = 134U;
    msg.text.assign("ATPRENVIVHMDJIPPXNEEKSAVXZWVOWODUBPHVCRDNTUDKPIDYPETMBTJKHNBEXENLNURQFOPHXTHAMUYTQMBRAKYJIFYMTKSNZJXBCGCGRLGQBWZKKNUUXAEMSQHWRFPLIGZSILRYGYJXOVFSLWCBJAQCWZUMALIKHDFNORBYSTRFEYSMALFCFVULSIAXCSUOFZJHZGKZIPEWWZUWJDKLCJYVVNTOJPVQZOYRBDGOCFXLH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  return test.getReturnValue();
}
