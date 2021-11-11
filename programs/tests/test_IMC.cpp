//***************************************************************************
// Copyright 2007-2021 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: fa6c387211e136b62cf8ffb34b12027c                            *
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
    msg.setTimeStamp(0.423108680734);
    msg.setSource(3162U);
    msg.setSourceEntity(245U);
    msg.setDestination(1521U);
    msg.setDestinationEntity(132U);
    msg.state = 165U;
    msg.flags = 36U;
    msg.description.assign("QIHMOWGJSLVDRXVB");

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
    msg.setTimeStamp(0.872744754456);
    msg.setSource(58530U);
    msg.setSourceEntity(76U);
    msg.setDestination(26509U);
    msg.setDestinationEntity(8U);
    msg.state = 119U;
    msg.flags = 226U;
    msg.description.assign("ZIWCCHEQVPJGAEIGZIKRBONYTEXEMVTBIEZQYQFBNPNBPGOGYUSLHWKFIEIHCCMEUKURWNVTKWTQJZPAJSTYLYVFCFRRSHXQIBHJCXAROYSWUDODPJSVLZOECJWAMDFGVMUDVRSFOMZKUXEULTHRUKTDIABYCJGXYVQFHLJBHBXMMKWWODMHSJICJAMADDWZXZFNTNAVTMPSUKDQZIGSXALOPUGBLZGRVPXRPENFNNB");

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
    msg.setTimeStamp(0.940785422715);
    msg.setSource(21141U);
    msg.setSourceEntity(20U);
    msg.setDestination(37359U);
    msg.setDestinationEntity(23U);
    msg.state = 146U;
    msg.flags = 42U;
    msg.description.assign("CEJLHIBCCXQZMZHQAFTJRHRARGKYEJLQKFQFPBFDBWNXOXWIWAJTFJTFQTMOKMBKYAPLUINGSEJAVXRUYTZJYIFUPVCIUNYYFEDLNDVSEACHFT");

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
    msg.setTimeStamp(0.246881766832);
    msg.setSource(56619U);
    msg.setSourceEntity(67U);
    msg.setDestination(59986U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.334127344873);
    msg.setSource(16251U);
    msg.setSourceEntity(233U);
    msg.setDestination(613U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.514101317627);
    msg.setSource(57294U);
    msg.setSourceEntity(166U);
    msg.setDestination(44162U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.642713165693);
    msg.setSource(43924U);
    msg.setSourceEntity(6U);
    msg.setDestination(21356U);
    msg.setDestinationEntity(193U);
    msg.id = 250U;
    msg.label.assign("MHUYPZJOFMWBFIDTFADOQPCVUMSWQXICBIHNEWTEZNEVAYZSSZGPBBCNWNHIYXLSEQEDSRHBXTJFQQHIVQJDPUOQAXLUKOACWHHSFGKQOPLVLZLBAUYNKKTNUHXPNMJMZGRTCYZJXOKLAFKUJKWWVDUZCFGYIVZBDLGLYGQSRAARQJDTPVDGNKBUIBXTCMGESOWMETLHFRJRPDOJYAARVYEUIZN");
    msg.component.assign("NUNNMQCGDGZOMWTEAILSYIJKAPTWXZCU");
    msg.act_time = 35441U;
    msg.deact_time = 55731U;

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
    msg.setTimeStamp(0.969269790297);
    msg.setSource(8975U);
    msg.setSourceEntity(249U);
    msg.setDestination(4157U);
    msg.setDestinationEntity(8U);
    msg.id = 204U;
    msg.label.assign("AIXRTOPTOWGEEQIKLGRXYUXAPNOBVVWATQSGWS");
    msg.component.assign("OIORHMHSUAMEPBZIDHQNUVBNMFDYKKUOPFNTHQQPASDPTNICEJJTKJAWVIYSINPDFLLJXGYJABGWODDCTJOAWITBPWRCSEYXLGBWGUBHLXXNFZOOUYLLZZVRLYRWQSAUGXKJCNRAKKZDES");
    msg.act_time = 35026U;
    msg.deact_time = 20207U;

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
    msg.setTimeStamp(0.912607806522);
    msg.setSource(56375U);
    msg.setSourceEntity(211U);
    msg.setDestination(52908U);
    msg.setDestinationEntity(30U);
    msg.id = 190U;
    msg.label.assign("RRHEXZZFTUVSYSLGHUTWXZPUTIYWGNLBBHENVBSJCXMPREZQCFYJPUECLAGNDYIPCWMQMIIDMHXYINJZGYVOQPQEHGPJRLWQGKRDLNFOVVQMDXBWNSJHIYPFBUZLJZHQOXBEFXMHAJWGCPXUIOTCRJTIKTQYMKWVGBMSSIUESTKOYDULQTFOFBCZBXUNVGWRCAODAEPXEFNYDVLSSJR");
    msg.component.assign("WCRJDUXWUTYFZABPBLDDZTKTDHGBWVURJAKXFIYTFTWYKDJVNUCGWTEUXRWXZGZUGPQEHSMENTRDKPQZVOUKPVFIRXHCXGQSSQZZZAUPAOMSJYVEQPIBCGITKAFJPOHIOMBCBAIWJYDHLNLOAFZMYSZCAJPVMTLQGCKNYBOWGDIONBQYH");
    msg.act_time = 2734U;
    msg.deact_time = 55351U;

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
    msg.setTimeStamp(0.410364218283);
    msg.setSource(20422U);
    msg.setSourceEntity(21U);
    msg.setDestination(30819U);
    msg.setDestinationEntity(171U);
    msg.id = 16U;

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
    msg.setTimeStamp(0.595936735637);
    msg.setSource(38654U);
    msg.setSourceEntity(74U);
    msg.setDestination(55727U);
    msg.setDestinationEntity(180U);
    msg.id = 156U;

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
    msg.setTimeStamp(0.0736382280854);
    msg.setSource(57421U);
    msg.setSourceEntity(100U);
    msg.setDestination(23226U);
    msg.setDestinationEntity(81U);
    msg.id = 4U;

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
    msg.setTimeStamp(0.720118383342);
    msg.setSource(37104U);
    msg.setSourceEntity(130U);
    msg.setDestination(6895U);
    msg.setDestinationEntity(251U);
    msg.op = 190U;
    msg.list.assign("TKFUYXEWQVXOUTXFLLJJTBEIFWPCZGBMHZMTMCRBJTESEWYIJGMKHGRBWMKEGDZDLCCHWYHTFAYUDYDNGDOJCB");

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
    msg.setTimeStamp(0.322063218133);
    msg.setSource(51380U);
    msg.setSourceEntity(17U);
    msg.setDestination(57759U);
    msg.setDestinationEntity(87U);
    msg.op = 232U;
    msg.list.assign("RLAPVZXTJNEFWBRFURPZWIVWSEQPMZTJHDKMHIWHOBJVKDOQFQTLLAHZCHHZRUJGYWZQENCLTRCUIKNHUDXBAUYDNEPPWMVKIQAGGZAKLESVOKJDEFTMSNCUGSFXFBEPCJOIXMPGHHGOYCWIETPTZJKWLDTXBNBZVDJFVQWINMXSKFFSBKXYGOYTFGCGKQGMSDNYIVCEVCEUARSIRRTOOADRDXMIHSSNMLAPJLZWBCUYBMR");

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
    msg.setTimeStamp(0.103072192548);
    msg.setSource(19631U);
    msg.setSourceEntity(110U);
    msg.setDestination(44753U);
    msg.setDestinationEntity(197U);
    msg.op = 3U;
    msg.list.assign("ANTTQDPNLXKWDLZHQHWOWJFWARCCBKTMEWLZQXXURLRFTEHSNYYADOKK");

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
    msg.setTimeStamp(0.70066920953);
    msg.setSource(5146U);
    msg.setSourceEntity(26U);
    msg.setDestination(25624U);
    msg.setDestinationEntity(99U);
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
    msg.setTimeStamp(0.0850317759651);
    msg.setSource(14402U);
    msg.setSourceEntity(50U);
    msg.setDestination(36019U);
    msg.setDestinationEntity(82U);
    msg.value = 65U;

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
    msg.setTimeStamp(0.544485544817);
    msg.setSource(57756U);
    msg.setSourceEntity(44U);
    msg.setDestination(12725U);
    msg.setDestinationEntity(184U);
    msg.value = 254U;

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
    msg.setTimeStamp(0.743589001838);
    msg.setSource(46222U);
    msg.setSourceEntity(203U);
    msg.setDestination(4140U);
    msg.setDestinationEntity(133U);
    msg.consumer.assign("VDSVRVKNUOECGSNTQXLALHLPHBRKUMXFOXEAHVKMK");
    msg.message_id = 1289U;

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
    msg.setTimeStamp(0.0664132482873);
    msg.setSource(15070U);
    msg.setSourceEntity(139U);
    msg.setDestination(30605U);
    msg.setDestinationEntity(36U);
    msg.consumer.assign("ETVBIRQSPWYREIMQZFBVIGKNUAFJYZSQZWQXMGTYNOOUJHDJSFESZGEQRZZNBFFDBHYFLHELJXW");
    msg.message_id = 32500U;

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
    msg.setTimeStamp(0.987999449842);
    msg.setSource(37710U);
    msg.setSourceEntity(54U);
    msg.setDestination(53180U);
    msg.setDestinationEntity(235U);
    msg.consumer.assign("DUWAYWMWTNUJVXFXRGCKZJLQVSXHEDOYMBOLTSEVURMHYZKBSFZLVWGFTKBGFRPHZCVWJGNNKGFWYMBUQJIQBMDRNSOAONTULTZKFBXEKQUBEJJFOMYCRGDSKPGQYVWNGONYOLCEWQRDRYDIAQCOLNDLFYAFAPJHTSHEDSHPIDMSCANKBZAYJMAVLQIZVQOURHQBCUKXMPCOATE");
    msg.message_id = 9681U;

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
    msg.setTimeStamp(0.793049060068);
    msg.setSource(9753U);
    msg.setSourceEntity(122U);
    msg.setDestination(59621U);
    msg.setDestinationEntity(135U);
    msg.type = 164U;

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
    msg.setTimeStamp(0.758448855957);
    msg.setSource(52238U);
    msg.setSourceEntity(135U);
    msg.setDestination(21860U);
    msg.setDestinationEntity(95U);
    msg.type = 30U;

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
    msg.setTimeStamp(0.11167274209);
    msg.setSource(23009U);
    msg.setSourceEntity(162U);
    msg.setDestination(8671U);
    msg.setDestinationEntity(132U);
    msg.type = 217U;

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
    msg.setTimeStamp(0.186097724136);
    msg.setSource(40368U);
    msg.setSourceEntity(38U);
    msg.setDestination(173U);
    msg.setDestinationEntity(49U);
    msg.op = 190U;

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
    msg.setTimeStamp(0.7645006735);
    msg.setSource(17840U);
    msg.setSourceEntity(152U);
    msg.setDestination(41464U);
    msg.setDestinationEntity(49U);
    msg.op = 202U;

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
    msg.setTimeStamp(0.832864762576);
    msg.setSource(13603U);
    msg.setSourceEntity(31U);
    msg.setDestination(65254U);
    msg.setDestinationEntity(94U);
    msg.op = 146U;

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
    msg.setTimeStamp(0.797911511544);
    msg.setSource(48137U);
    msg.setSourceEntity(69U);
    msg.setDestination(8045U);
    msg.setDestinationEntity(162U);
    msg.total_steps = 4U;
    msg.step_number = 80U;
    msg.step.assign("BMLSCOJXVTCUVULDKPLEAOHSZUJOCHHYHXMVJGPTFAUKRDLJTPSNZAQNKSZOWVUCQITZDEGVMOWQEVWCGYOOQDMFU");
    msg.flags = 21U;

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
    msg.setTimeStamp(0.821980733608);
    msg.setSource(23808U);
    msg.setSourceEntity(153U);
    msg.setDestination(10136U);
    msg.setDestinationEntity(187U);
    msg.total_steps = 89U;
    msg.step_number = 31U;
    msg.step.assign("EUQUCMVBYVJKUGZBQOBNKRCMENVNIDFKQZGDHHWMYWMZHJV");
    msg.flags = 165U;

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
    msg.setTimeStamp(0.799097282691);
    msg.setSource(62459U);
    msg.setSourceEntity(113U);
    msg.setDestination(63653U);
    msg.setDestinationEntity(22U);
    msg.total_steps = 48U;
    msg.step_number = 154U;
    msg.step.assign("BOOUCLTCYMDMTLNFEUHDIHMLFHUTQRAKGGMGDVIUSTFLXBUBYKQYBXHPXWVYLNAEIKTJXSXZFLPLOGKVAXRPADOZHOWFMVTNSAAJPUOELERDTTTFCRIVBKRMKKFSENMQYGVURZONBJMJPIFMJQQPZZCZDQXFGPEHJYPBCIWSQKVRZ");
    msg.flags = 235U;

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
    msg.setTimeStamp(0.106517817951);
    msg.setSource(61958U);
    msg.setSourceEntity(176U);
    msg.setDestination(57925U);
    msg.setDestinationEntity(2U);
    msg.state = 120U;
    msg.error.assign("KYZOEWYZUCFAVCIROSXOXFRUJSBDWJWINGKZQHKDQXZLBUZDLVLNYKNEGFVQAXPRRQYVABEHHRCXRURDHGHIGBEMBAQSDIPNLBQIJZWFZIFJKCTCTFSEPMOUAQLTCKM");

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
    msg.setTimeStamp(0.800148537809);
    msg.setSource(40670U);
    msg.setSourceEntity(10U);
    msg.setDestination(20435U);
    msg.setDestinationEntity(106U);
    msg.state = 228U;
    msg.error.assign("MMHCZPFROSPXBEKHTZVYCACDRMZQITGIHADHGBXAEZIUOLVINSZZJJPLXIEFWFLTDPPVMEMCYDTSSRVFUCKCEGAXELIAUWIMLUJAKJODZGKHVJFTUQFZDNYWYXJHQFUKPOKWRISFTUBBGWMDLATWXVXTQHNLRGSVCYHXPGNYJMRJUPAEX");

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
    msg.setTimeStamp(0.755456617163);
    msg.setSource(18437U);
    msg.setSourceEntity(132U);
    msg.setDestination(38117U);
    msg.setDestinationEntity(188U);
    msg.state = 162U;
    msg.error.assign("MOZKYRAGGLPESEZOQJLWNFMXFCIYWDVVANKDYWTTAAXZVSVUJYCENCHMFGRAHCZJYKRAUVXEYUAKIRTYLJPMABXBQIXKTCUFULDBHVIAZLENGXYPDIQGSEDECBNSWLCSRRMGZOSQQOWDKVTDWFWLZISGTARZTNHGKJRDQMTHQCZXHWBJIWPHSXPMGRCFMJKOEPDUBRSTJITYBXBIZEVMCUPUHFFPFLUNVNQ");

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
    msg.setTimeStamp(0.751974881724);
    msg.setSource(20220U);
    msg.setSourceEntity(181U);
    msg.setDestination(61916U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.508314923493);
    msg.setSource(36363U);
    msg.setSourceEntity(120U);
    msg.setDestination(43258U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.204493420901);
    msg.setSource(9098U);
    msg.setSourceEntity(25U);
    msg.setDestination(2276U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.653468913825);
    msg.setSource(35841U);
    msg.setSourceEntity(23U);
    msg.setDestination(26532U);
    msg.setDestinationEntity(125U);
    msg.op = 189U;
    msg.speed_min = 0.636261069752;
    msg.speed_max = 0.628910031367;
    msg.long_accel = 0.579354001152;
    msg.alt_max_msl = 0.582762107166;
    msg.dive_fraction_max = 0.526153278599;
    msg.climb_fraction_max = 0.287350721688;
    msg.bank_max = 0.642720547453;
    msg.p_max = 0.513508519891;
    msg.pitch_min = 0.598229770956;
    msg.pitch_max = 0.0560870463655;
    msg.q_max = 0.257811993559;
    msg.g_min = 0.68683800504;
    msg.g_max = 0.170633753752;
    msg.g_lat_max = 0.433602832248;
    msg.rpm_min = 0.434208640292;
    msg.rpm_max = 0.61216732932;
    msg.rpm_rate_max = 0.604366717262;

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
    msg.setTimeStamp(0.295515898739);
    msg.setSource(38955U);
    msg.setSourceEntity(25U);
    msg.setDestination(61606U);
    msg.setDestinationEntity(61U);
    msg.op = 32U;
    msg.speed_min = 0.678042764826;
    msg.speed_max = 0.798321961047;
    msg.long_accel = 0.92749447855;
    msg.alt_max_msl = 0.459626194841;
    msg.dive_fraction_max = 0.398623277336;
    msg.climb_fraction_max = 0.0434136971311;
    msg.bank_max = 0.282429842113;
    msg.p_max = 0.406177155718;
    msg.pitch_min = 0.84830269024;
    msg.pitch_max = 0.0408823350819;
    msg.q_max = 0.310412723629;
    msg.g_min = 0.242585520935;
    msg.g_max = 0.376323327507;
    msg.g_lat_max = 0.925786104472;
    msg.rpm_min = 0.786322798516;
    msg.rpm_max = 0.649974425338;
    msg.rpm_rate_max = 0.729221715767;

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
    msg.setTimeStamp(0.512669839955);
    msg.setSource(44454U);
    msg.setSourceEntity(163U);
    msg.setDestination(39612U);
    msg.setDestinationEntity(68U);
    msg.op = 223U;
    msg.speed_min = 0.0155169394043;
    msg.speed_max = 0.612285310091;
    msg.long_accel = 0.383640204189;
    msg.alt_max_msl = 0.825487852804;
    msg.dive_fraction_max = 0.361824667422;
    msg.climb_fraction_max = 0.0948740405526;
    msg.bank_max = 0.600054811329;
    msg.p_max = 0.340416320227;
    msg.pitch_min = 0.868562180612;
    msg.pitch_max = 0.964226519189;
    msg.q_max = 0.941151442879;
    msg.g_min = 0.320634938924;
    msg.g_max = 0.833925049094;
    msg.g_lat_max = 0.548567059412;
    msg.rpm_min = 0.76620334517;
    msg.rpm_max = 0.174709829873;
    msg.rpm_rate_max = 0.580274448573;

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
    msg.setTimeStamp(0.435487988364);
    msg.setSource(4785U);
    msg.setSourceEntity(89U);
    msg.setDestination(15537U);
    msg.setDestinationEntity(74U);
    IMC::SmsStatus tmp_msg_0;
    tmp_msg_0.req_id = 52681U;
    tmp_msg_0.status = 174U;
    tmp_msg_0.info.assign("CXLFBCAQRSRZRSMQYDPGWCGBKZXEEYTVSAYGAXMPMUJTAODDLHKEVYSDBTFPHTUTWBPZIIEOLVPHOXMVGTOIJGBKZGLDUCMNOJHEZIPLQJDISKCSAAWIUSVYXUBKJXMH");
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.331992863763);
    msg.setSource(2538U);
    msg.setSourceEntity(190U);
    msg.setDestination(10906U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.940527800225);
    msg.setSource(30356U);
    msg.setSourceEntity(121U);
    msg.setDestination(12915U);
    msg.setDestinationEntity(119U);
    IMC::HistoricDataQuery tmp_msg_0;
    tmp_msg_0.req_id = 38002U;
    tmp_msg_0.type = 77U;
    tmp_msg_0.max_size = 13966U;
    IMC::HistoricData tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.base_lat = 0.783359494127;
    tmp_tmp_msg_0_0.base_lon = 0.507228940094;
    tmp_tmp_msg_0_0.base_time = 0.522385018179;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.54147783823);
    msg.setSource(21495U);
    msg.setSourceEntity(155U);
    msg.setDestination(19961U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.256248988289;
    msg.lon = 0.386623866203;
    msg.height = 0.753519759698;
    msg.x = 0.379975146185;
    msg.y = 0.66989300921;
    msg.z = 0.0653826529265;
    msg.phi = 0.273942586063;
    msg.theta = 0.250620458892;
    msg.psi = 0.729633165288;
    msg.u = 0.761771583331;
    msg.v = 0.61250601395;
    msg.w = 0.888583776017;
    msg.p = 0.274504087204;
    msg.q = 0.397708722405;
    msg.r = 0.124355525464;
    msg.svx = 0.68360232317;
    msg.svy = 0.959272377321;
    msg.svz = 0.0798362839419;

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
    msg.setTimeStamp(0.779466026691);
    msg.setSource(30532U);
    msg.setSourceEntity(220U);
    msg.setDestination(12899U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.489317299391;
    msg.lon = 0.595474423038;
    msg.height = 0.541674802763;
    msg.x = 0.975230035477;
    msg.y = 0.0792899304514;
    msg.z = 0.676453437578;
    msg.phi = 0.176821355994;
    msg.theta = 0.601888240118;
    msg.psi = 0.17500123706;
    msg.u = 0.798666970866;
    msg.v = 0.607617851651;
    msg.w = 0.592077707521;
    msg.p = 0.483373789957;
    msg.q = 0.0230338991556;
    msg.r = 0.0519082112114;
    msg.svx = 0.109884075675;
    msg.svy = 0.983685074286;
    msg.svz = 0.315702049414;

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
    msg.setTimeStamp(0.118788078744);
    msg.setSource(58889U);
    msg.setSourceEntity(12U);
    msg.setDestination(167U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.806664890401;
    msg.lon = 0.645931409209;
    msg.height = 0.240746515287;
    msg.x = 0.910065467059;
    msg.y = 0.453918927841;
    msg.z = 0.639050690917;
    msg.phi = 0.350826237115;
    msg.theta = 0.089350553311;
    msg.psi = 0.409032651067;
    msg.u = 0.72426623322;
    msg.v = 0.905522406099;
    msg.w = 0.0743705624577;
    msg.p = 0.665575180406;
    msg.q = 0.66850361199;
    msg.r = 0.183834645723;
    msg.svx = 0.548050471483;
    msg.svy = 0.212233100161;
    msg.svz = 0.245047359144;

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
    msg.setTimeStamp(0.0180750407142);
    msg.setSource(54012U);
    msg.setSourceEntity(73U);
    msg.setDestination(23501U);
    msg.setDestinationEntity(229U);
    msg.op = 240U;
    msg.entities.assign("IYXGVTSGLGKTHPDFNFJY");

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
    msg.setTimeStamp(0.3934262955);
    msg.setSource(64273U);
    msg.setSourceEntity(235U);
    msg.setDestination(16425U);
    msg.setDestinationEntity(198U);
    msg.op = 65U;
    msg.entities.assign("NEBUNSKQJTLXBVHFRZLZJFVMBCBLDLJNLEHFZWDNHIMTRMXVKMVWJTHUQOYCGWALBIPODQLCZMEGOKYKJFYPAHVJCIWUAPEYWNZACTSIZIXDOQCHPFKCMDDQDORUHOGHGBDWEUMMWSAIAYRIOLJPCTXKUAXUGVYQNXWCTOJ");

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
    msg.setTimeStamp(0.993070456123);
    msg.setSource(39336U);
    msg.setSourceEntity(123U);
    msg.setDestination(30833U);
    msg.setDestinationEntity(190U);
    msg.op = 42U;
    msg.entities.assign("ANCSHSENFFKVRFDAGHIDCVRUVTTYIAKWUBDXENOOXIGMBTRAEYQLCMHTPGYBSWXVZTLOQGNIBEALRVRYKRJZMVUKDOCHHCJOJQZWQJJOUNJHGFUBUIWEQYSWMBHYAGCIGZDTBEZXMLKATWRGZKPWJPHNULCPOKVDDLRFUSLYHMIJMTUDSJGLEPFOWJNPWBXSQPQVYMXAXSDFLDQXENCBVTMZFPBEYZFPAIXMHZT");

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
    msg.setTimeStamp(0.481528549408);
    msg.setSource(12049U);
    msg.setSourceEntity(68U);
    msg.setDestination(1102U);
    msg.setDestinationEntity(144U);
    msg.type = 177U;
    msg.speed = 26723U;
    const char tmp_msg_0[] = {-52, -113, -32, 75, -108, -4, 7, -79, 45, 72, -63, 18, 47, -113, -17, 61, 68, 117, 29, -40, -51, -40, 67, 7, 73, -90, -103, -25, 31, -117, 31, 2, -87, 3, 14, -95, -103, -87, -112, 114, -96, -90, -90, -89, 81, 90, 78, 81, -10, -46, 51, -66, 68, 25, -86, -45, 121, -72, -104, -94, 41, -41, 107, 38, 55, -123, -32, 99, -26, -54, 113, 66, -21, 4, 117, -36, -43, -39, 94, -111, -98, -6, 116, 12, -32, 41, 126, -6, -53, -38, 121, 25, -27, -107, -106, -124, 29, 68, 68, 33, -32, -41, -96, -63, 94, 90, 78, -102, -18, 41, 25, -105, 14, 104, 62, -120, -91, 47, -40, 43, 19, -68, -113, 108, -76, -24, 113, 20, -89, 52, 6, 76, 68, 93, 41, 44, 14, 82, -64, -81, 120, 52, 12, 102, -89, 9, 59, 25, 56, 110, -56, 3, 95, -124, 119, -49, 7, 34, 65, 2, -118, 10, -89, -59, 30, -97, 47, -48, -121, 126, 16, -51, 64, 92, -97, 60, -95, 119, -9, -15, -6, 38, 41, 30, 91, 104, -102, -88, -117, -81, -76, 29, 51, -74, 115, 2, 120, 84, -91, 94, 106, 54, -68, 59, 105, -21, -65, -3, -73, 75, 4};
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
    msg.setTimeStamp(0.110284199293);
    msg.setSource(15662U);
    msg.setSourceEntity(176U);
    msg.setDestination(31178U);
    msg.setDestinationEntity(30U);
    msg.type = 53U;
    msg.speed = 31461U;
    const char tmp_msg_0[] = {92, 64, 52, -73, 123, -109, -20, -12, -49, -86, -25, -60, -98, 7, 82, -17, -33, -76, -64, -16, 64, 11, 68, -85, -97, -110, -31, -118, -83, -88, -28, 84, -90, 7, -38, 59, -4, -65, -125, -109, 96, -63, -7, -79, -112, 71, 53, 4, 78, 25, -98, -86, -104, -98, -79, 57, -28, -65, 33, 19, 102, 56, -7};
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
    msg.setTimeStamp(0.23713446226);
    msg.setSource(28901U);
    msg.setSourceEntity(236U);
    msg.setDestination(11327U);
    msg.setDestinationEntity(36U);
    msg.type = 121U;
    msg.speed = 31485U;
    const char tmp_msg_0[] = {-20, 38, -77, 49, 77, -95, -104, -16, -22, 68, 0, 65, 77, -76, -111, 64, -126, 105, 2, 29, 44, -21, -127, 108, 60, 66, 119, -118, -28, -86, -12, -105, 97, 19, 100, -74, 28, -50, -107, 84, -91, -35, -25, -72, 74, -54, -87, -94, 101, 113, -122, 47, -105, -26, 5, 117, 83, 37, 114, -122, -31, -9, -56, 118, 62, 120, -7, 18, -33, 48, -104, -82, 60, 46, 31, -86, -15, 60, 99, 19, -4, 0};
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
    msg.setTimeStamp(0.878211258788);
    msg.setSource(61826U);
    msg.setSourceEntity(211U);
    msg.setDestination(28408U);
    msg.setDestinationEntity(32U);
    msg.op = 189U;
    msg.tas2acc_pgain = 0.275858137123;
    msg.bank2p_pgain = 0.177811684133;

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
    msg.setTimeStamp(0.214929100809);
    msg.setSource(64271U);
    msg.setSourceEntity(137U);
    msg.setDestination(54472U);
    msg.setDestinationEntity(135U);
    msg.op = 137U;
    msg.tas2acc_pgain = 0.0463638318908;
    msg.bank2p_pgain = 0.0498900765719;

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
    msg.setTimeStamp(0.841715377641);
    msg.setSource(21696U);
    msg.setSourceEntity(46U);
    msg.setDestination(37669U);
    msg.setDestinationEntity(137U);
    msg.op = 96U;
    msg.tas2acc_pgain = 0.640706427301;
    msg.bank2p_pgain = 0.738298412591;

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
    msg.setTimeStamp(0.355838691511);
    msg.setSource(21770U);
    msg.setSourceEntity(200U);
    msg.setDestination(28908U);
    msg.setDestinationEntity(127U);
    msg.available = 4093243791U;
    msg.value = 182U;

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
    msg.setTimeStamp(0.739004060812);
    msg.setSource(59303U);
    msg.setSourceEntity(163U);
    msg.setDestination(45582U);
    msg.setDestinationEntity(196U);
    msg.available = 186482155U;
    msg.value = 131U;

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
    msg.setTimeStamp(0.510553803385);
    msg.setSource(37267U);
    msg.setSourceEntity(151U);
    msg.setDestination(28221U);
    msg.setDestinationEntity(233U);
    msg.available = 4106438287U;
    msg.value = 123U;

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
    msg.setTimeStamp(0.218942556834);
    msg.setSource(45403U);
    msg.setSourceEntity(62U);
    msg.setDestination(48905U);
    msg.setDestinationEntity(150U);
    msg.op = 128U;
    msg.snapshot.assign("QYNKHSJTMMWKGYDELPQEZSACAPJHRUPZOQFLDIZRUFNNPXGNZGCNUIYHFJIRWGUYIDUGLRBJJRUXBBDENODMHIQBCHPHCFJPTRWAYCVQEZCKHUEUXTIEASMVGLZOETPDCK");
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 29U;
    tmp_msg_0.snapshot.assign("DVXGTMAVCGYYEETAOGISSMSLSQRBCBVAGSCIGPVMTFOMFHKNODKDWOLYPJKKVWHLEULBUTOZNBARNNRDRAJXPNROBEZFCHJCURVKWXGELXUIUDYJILAFZYAUYTS");
    IMC::SetThrusterActuation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 208U;
    tmp_tmp_msg_0_0.value = 0.398553865507;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.141461398929);
    msg.setSource(1373U);
    msg.setSourceEntity(241U);
    msg.setDestination(24888U);
    msg.setDestinationEntity(33U);
    msg.op = 163U;
    msg.snapshot.assign("HZVQVRDEQSMRPAMUAVROLXCVJHTFYXACQOKCSKHGLDNNKSHSGJYZBHFWPETMNPQETSIISEATHROSQNRGHFJYQTCONIXYIUVKICXBVXKUSBRHMFEJSTLJYIBZVQCYGFBBXWOZQEDJZDVFGWLUJWXFGXTJVLZPNXWGKBNLLOGUHTDAYWOKYPZAUIPLEIOWINDDIRFPUWE");
    IMC::LinkLatency tmp_msg_0;
    tmp_msg_0.value = 0.279674355362;
    tmp_msg_0.sys_src = 9655U;
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
    msg.setTimeStamp(0.447944393715);
    msg.setSource(43165U);
    msg.setSourceEntity(85U);
    msg.setDestination(53353U);
    msg.setDestinationEntity(33U);
    msg.op = 83U;
    msg.snapshot.assign("CBYMGVPJVOSQPINICIKQGCPGAKADGWSFRYZNXDSOFCQHVETJHUJOEGFWPJJBJICXRJUAGGHKRIFZJZMNZHQZXXUVLNDAUKOJSFESSXVMUENYYXTTSAOXWZTBOQRXGCYUFAFICMFWKKIXTAEYCELHQMDNXSDMEKMQWDBATTZRLHONBOOBZILCEIQPVBRHQRLENYVORWHQRENAPPLKGWLBTFSWGLUUDKPVHPBDMAZJTIWHYYDLSP");
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 172U;
    tmp_msg_0.op = 148U;
    tmp_msg_0.request_id = 30448U;
    tmp_msg_0.plan_id.assign("JTIHZQRJADOWHVWKNSFGVLGTINVQVREULCAIXORYNNIIBKUEKGWSOGEROLZWDQHDERUMSCMZCRBFAZIQDHAFJBODBOBBXSPKPWLMSBSWJZJKHUBFHMDCVEOAHEQIATVSETTMLZSURZPXJCKRTRPPVQLYGWOECDKJNYFHFUFUXXCGMQTOOLNPFXFGYTJWYBZQGYLXILUUZMNDJX");
    IMC::SonarData tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 240U;
    tmp_tmp_msg_0_0.frequency = 3639485821U;
    tmp_tmp_msg_0_0.min_range = 39912U;
    tmp_tmp_msg_0_0.max_range = 18828U;
    tmp_tmp_msg_0_0.bits_per_point = 111U;
    tmp_tmp_msg_0_0.scale_factor = 0.669539389256;
    const char tmp_tmp_tmp_msg_0_0_0[] = {91, 91, -68, 122, -8, 47, -72, -73, 52, 122, -10, -116, 6, 28, 48, -49};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("XUPXMDKPLTLTAOYJTGBLAMIOJDEEZUBQLSSVDYQCNPZWSVPQRHRGMGFTERAPQSAPMXZKZIGLHUYALVLFQVDENIHEVDOWWNXJVHYCXRWTFTIRSZBFQJRENXXHGMSJJQKPQEHAJMQRIVJHXHBNFHLUUYGCCHCBZZUBORJFKMTOYLTIBVKVXWCBNDUNKKUUBZNAGFMOFGSOGPAJPAFYZWCIPFKWCBIYDKNSWWYDQSSEVOOONTGUE");
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
    msg.setTimeStamp(0.706987909644);
    msg.setSource(23157U);
    msg.setSourceEntity(251U);
    msg.setDestination(37795U);
    msg.setDestinationEntity(89U);
    msg.op = 192U;
    msg.name.assign("HKZERGOYKNCIXSHAQXAPZCGWYTEEONVGBQBMIIJVTOUZYKHQWOQAKKIXCCNQQQSKLHOBVPNEJLBCMJLTPWDPAOFMBGXSTLZZZUUREFORVUSHTJBAHSWVLAJMXLEDJGDPXIMDRCECNFIMTTWLXU");

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
    msg.setTimeStamp(0.941585549011);
    msg.setSource(46193U);
    msg.setSourceEntity(177U);
    msg.setDestination(4051U);
    msg.setDestinationEntity(121U);
    msg.op = 56U;
    msg.name.assign("IMMLDFLBDYVJOSLYVXHXRHIBAGEPCXTZFHIZUAMWHAWZXQPGFNPDTZPNVIFQFBGXDLVHAOBAFRSRAOJCRSDKFUVQKYWYJEREENTCDCOUGQBJSZJWUWOVWDWKAEJBPKHPRRFQENTX");

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
    msg.setTimeStamp(0.733399383956);
    msg.setSource(10962U);
    msg.setSourceEntity(176U);
    msg.setDestination(15018U);
    msg.setDestinationEntity(158U);
    msg.op = 25U;
    msg.name.assign("QPNLCLATXOKPETEKAGLMSJKRMIYPGIPXBRZJSRKZPHGNNUXXPKJTRPTAVXWLZUGODWHQLJRHLNJCDBQQDBKCWXRNWQENFSWAJYLUBBNTGFXGCEMIFPMFLUOBVUEZSMHYVRIEXZBFWOCJTMVQEAIMYIBGURXLYOZZVTAHEOVHTIWCSPBVDDOACZDXYACGQGFNCSFFUKRZKZYQWDOYLHOQJVKDEGMNIDTEJPSVSOUAFRYYMIIVDWT");

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
    msg.setTimeStamp(0.547262163368);
    msg.setSource(4847U);
    msg.setSourceEntity(71U);
    msg.setDestination(43560U);
    msg.setDestinationEntity(235U);
    msg.type = 146U;
    msg.htime = 0.970239722243;
    msg.context.assign("QDBNZGNLFYHFBQORMUQGVBCNIEVMZXPWJKKCLPFBZDHHSDLRWJYLILJTIVJLQORWYQBZRPASKNXMXVGOKOOKUDHQJHAYMWWKJJMTXZREPSUKOYUDHYAPZWIOENSCUEGBIWKRVGHXLRYSABGXAHJMZFIVUNWYDTVXMRABPCZUSCQPFXUTAZTQVAADEGPAMULMUELNDQLXOIDIFC");
    msg.text.assign("HPOEBQTXBSJHXHUNTMURXUHVWEODXOOBAUFAADWZLNTQKDXP");

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
    msg.setTimeStamp(0.649483548152);
    msg.setSource(54156U);
    msg.setSourceEntity(166U);
    msg.setDestination(43988U);
    msg.setDestinationEntity(244U);
    msg.type = 209U;
    msg.htime = 0.237327856985;
    msg.context.assign("ERGEWEWOYUFVASFSECKZQBODAZXIWCQFPXYXUOJDOCCKXDSJCUIEEBPGYLTNEJGPBVKUHVSZLIBPIKUATEOONCHJSZBUSUKKS");
    msg.text.assign("IZGPXTPPFCDLQVGQKGLQJUUMFNCOATFMXGMZSRELILERIEHEOSBPAVZULMRIPMVMPSWJBFNZDGAOSADZOUYGBNKYWZQCLGIFNUHDPVHSLBCWYILSHSKWOJJKRUBHXOUJMUVTHFLCCJWCHUDWXNJXCKQTBVQIUJGE");

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
    msg.setTimeStamp(0.318562523062);
    msg.setSource(51992U);
    msg.setSourceEntity(161U);
    msg.setDestination(286U);
    msg.setDestinationEntity(202U);
    msg.type = 3U;
    msg.htime = 0.346328530963;
    msg.context.assign("GBYMIMCDIWADLGRKFGYPRTPGBTWQMBEKHJQWJGUSOJZEPEQKHNXDADEFQYSDYSHVIIOCHFMPAJCCZTWYJRVQPFTKTWXLHNTJQMOXBKDFKFXIAZXXFSMCYIWLLNPXUJ");
    msg.text.assign("IFHOLCCJMEVPDDAIKHNEZBIBPWOBYTDZAZRJZDPCTNRMPVWAZIYSUZNEQWEBHHJTDGBLSSUDXCTDGCFFTDTEIBNUVMNQLCKWMGEVXSOJJPOEMZYXANEOGLURUNUKJJUKRWJQRSKWEQYYYYWJYFPHCPFZBQCXGPRVQCSEBHIPVGGIVMKKAOOABAHYDXOSIUDVWXTFLXTARSHKHTPITXLRANMVLGFLXM");

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
    msg.setTimeStamp(0.873381436599);
    msg.setSource(52425U);
    msg.setSourceEntity(57U);
    msg.setDestination(38800U);
    msg.setDestinationEntity(14U);
    msg.command = 5U;
    msg.htime = 0.926887858359;

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
    msg.setTimeStamp(0.124052721793);
    msg.setSource(26441U);
    msg.setSourceEntity(56U);
    msg.setDestination(47279U);
    msg.setDestinationEntity(123U);
    msg.command = 130U;
    msg.htime = 0.877110686446;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 68U;
    tmp_msg_0.htime = 0.89179704625;
    tmp_msg_0.context.assign("BWPFPKIGJAMHIYAAECHMUEHVQUTROKQNRFQDXYZOYZKWSPWIAI");
    tmp_msg_0.text.assign("REFLNHRZQEHIMDYDQQXDMLTDZXSLYIORDIRDGFQWBSXSOLPVJMZOCRCTPQQKCGAMZIHBCNPGURPINFGJFWIRVKYZKYKFHUNKNHMLDVUPHNTYCZJBIVOVAXJMZOVJTEBK");
    msg.msg.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.672720772087);
    msg.setSource(54629U);
    msg.setSourceEntity(133U);
    msg.setDestination(30071U);
    msg.setDestinationEntity(143U);
    msg.command = 238U;
    msg.htime = 0.71083700393;

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
    msg.setTimeStamp(0.301813110536);
    msg.setSource(35248U);
    msg.setSourceEntity(74U);
    msg.setDestination(8763U);
    msg.setDestinationEntity(243U);
    msg.op = 144U;
    msg.file.assign("NMXXGRAZACBTGSYTWPJQGQLCTZZUHALOEAOOXIWIUMBIUNHZYPATNDBZPUWVCTLDEHJBPVAZKPBDYLAIDRXIZGFRREVFRUCXGYBVCBUGYOARMUCAXSQBJJYJWLWTQSSKCMDHLOYFKTWVHJKFNSMEEKJNOJSQPHIMLFZQWNWQVCHPDDOOWVLDHEDZPXOGUNUMYINQTEMFEKMAVIJSRFXUTDFMGTFJOKRVGFYYWSLNB");

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
    msg.setTimeStamp(0.917206852211);
    msg.setSource(10049U);
    msg.setSourceEntity(27U);
    msg.setDestination(41014U);
    msg.setDestinationEntity(148U);
    msg.op = 202U;
    msg.file.assign("SFOTKVQCPEOPVQHKQRYOCDCRYKKMDBYKPADJDEOSDYMJNNO");

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
    msg.setTimeStamp(0.601148651614);
    msg.setSource(10219U);
    msg.setSourceEntity(155U);
    msg.setDestination(11385U);
    msg.setDestinationEntity(86U);
    msg.op = 113U;
    msg.file.assign("ITLFGSUUFXNBQSTKSZSHVRJDPCFFNRKDGPGEHSTOWACFPEQQDWREXCWOPKWBMHGBTAPINYRXQLYBKSDMGUKGMRQWPXNQEZBZAMOLVRJWYOJLEEIVYKUXACZGOTRJPKJBLMCQWLSFNBBNXHTLLVFW");

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
    msg.setTimeStamp(0.507484264676);
    msg.setSource(64831U);
    msg.setSourceEntity(87U);
    msg.setDestination(54316U);
    msg.setDestinationEntity(29U);
    msg.op = 131U;
    msg.clock = 0.810624296516;
    msg.tz = 46;

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
    msg.setTimeStamp(0.616694772303);
    msg.setSource(38000U);
    msg.setSourceEntity(130U);
    msg.setDestination(38319U);
    msg.setDestinationEntity(252U);
    msg.op = 41U;
    msg.clock = 0.777533816189;
    msg.tz = -98;

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
    msg.setTimeStamp(0.551745085211);
    msg.setSource(49771U);
    msg.setSourceEntity(202U);
    msg.setDestination(36058U);
    msg.setDestinationEntity(156U);
    msg.op = 96U;
    msg.clock = 0.535106234885;
    msg.tz = 120;

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
    msg.setTimeStamp(0.0141077276258);
    msg.setSource(41885U);
    msg.setSourceEntity(58U);
    msg.setDestination(63365U);
    msg.setDestinationEntity(59U);
    msg.conductivity = 0.340549258952;
    msg.temperature = 0.4219179277;
    msg.depth = 0.142871203599;

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
    msg.setTimeStamp(0.387796224073);
    msg.setSource(40555U);
    msg.setSourceEntity(28U);
    msg.setDestination(49357U);
    msg.setDestinationEntity(200U);
    msg.conductivity = 0.36855884623;
    msg.temperature = 0.866261009154;
    msg.depth = 0.201220488127;

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
    msg.setTimeStamp(0.171213155551);
    msg.setSource(6979U);
    msg.setSourceEntity(244U);
    msg.setDestination(48879U);
    msg.setDestinationEntity(88U);
    msg.conductivity = 0.458230809598;
    msg.temperature = 0.0945788532651;
    msg.depth = 0.658295417948;

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
    msg.setTimeStamp(0.760942558696);
    msg.setSource(60152U);
    msg.setSourceEntity(85U);
    msg.setDestination(3894U);
    msg.setDestinationEntity(132U);
    msg.altitude = 0.431926851389;
    msg.roll = 14067U;
    msg.pitch = 48375U;
    msg.yaw = 45980U;
    msg.speed = -6234;

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
    msg.setTimeStamp(0.956923141488);
    msg.setSource(49022U);
    msg.setSourceEntity(123U);
    msg.setDestination(46712U);
    msg.setDestinationEntity(165U);
    msg.altitude = 0.0435203178669;
    msg.roll = 13223U;
    msg.pitch = 5730U;
    msg.yaw = 13659U;
    msg.speed = 3126;

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
    msg.setTimeStamp(0.858479916269);
    msg.setSource(52332U);
    msg.setSourceEntity(23U);
    msg.setDestination(5700U);
    msg.setDestinationEntity(110U);
    msg.altitude = 0.087086073426;
    msg.roll = 21689U;
    msg.pitch = 32936U;
    msg.yaw = 17486U;
    msg.speed = -25432;

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
    msg.setTimeStamp(0.823133225061);
    msg.setSource(31800U);
    msg.setSourceEntity(195U);
    msg.setDestination(48382U);
    msg.setDestinationEntity(244U);
    msg.altitude = 0.997507349845;
    msg.width = 0.0849237457367;
    msg.length = 0.514577885982;
    msg.bearing = 0.559781729407;
    msg.pxl = 15864;
    msg.encoding = 46U;
    const char tmp_msg_0[] = {69, -11, -89, -120, 23, -45, -61, 60, 44, 72, -86, -75, 25, 86, -70, -71, -6, -13, -106, -5, -55, -97, 52, 74, -22, 123, 100, -94, 8, 91, -64, -120, 72, -92, -83, -43, 15, 37, 57, -23, -118, -8, 113, 75, -43, -125, 23, -24, 48, -52, 118, -14, 12, 18, 39, -88, -93, -90, -68, 35, -2, 13, -45, -53, -89, -29, -99, 122, 14, 87, -23, 13, 21, -108, 124, -69, 51, -101, 12, 7, -85, -31, -44};
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
    msg.setTimeStamp(0.0325480333462);
    msg.setSource(63965U);
    msg.setSourceEntity(141U);
    msg.setDestination(19194U);
    msg.setDestinationEntity(231U);
    msg.altitude = 0.706538349805;
    msg.width = 0.849242770053;
    msg.length = 0.00200089726726;
    msg.bearing = 0.00228249967059;
    msg.pxl = -23797;
    msg.encoding = 250U;
    const char tmp_msg_0[] = {45, -50, -33, 51, -87, 40, -11, 35, -123, 109, 81, 13, -87, -104, 109, 118, 80, 71, 103, 69, -127, -26, 118, -24, -75, -51, 100, -111, 103, -17, 106, -62, -70, -82, -82, -121, -37, -122, 65, 126, -24, -36, 105, 34, -104, -32, 28, -88, 58, 93, 106, 64, -13, 69, 26, -122, -32, -25, 32, -5, -2, 15, -52, -21, 37, -6, -39, -46, 34, 30, -120, 60, 98, -119, -56, -17, 73, -112, -85, 98, 95, -51, -4, -96, -12, -5, -24, -27};
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
    msg.setTimeStamp(0.806648447252);
    msg.setSource(48184U);
    msg.setSourceEntity(192U);
    msg.setDestination(37933U);
    msg.setDestinationEntity(158U);
    msg.altitude = 0.954912844161;
    msg.width = 0.661792412783;
    msg.length = 0.336029401762;
    msg.bearing = 0.702901433125;
    msg.pxl = -15889;
    msg.encoding = 161U;
    const char tmp_msg_0[] = {60, 4, 33, 22, -55, -86, -32, -66, 80, -25, 110, -71, 99, -89, -2, -51, 9, -86, -99, -63, -82, 110, 96, 65, 88, -43, 61, -49, 16, -102, -127, -25, -20, -101, -58, 8, 44, -58, -102, 52, -90, 115, 73, -101, 64, 45, -109, 63, -46, -36, -50, -6, -110, 91, 63, -128, 78, 91, 17, -80, 3, 22, -17, -89, 94, 45, 92, 82, 39, 83, -29, -17, 103, 25, 60, 110, -1, -87, 65, -108, 13, 44, 49, 38, -59, 53, -68, 77, 108, 87, -9, -106, 35, -83, 60, 51, 95, -87, 91, -100, 65, -6, -120, -78, -77, -70, 93, 46, -55, -98, 80, 46, 109, 17, 30, -54, -5, -62, 63, -6, 44, -71, 50, 104, 72, -60, 75, -95, 57, 25, -91, 118, 9, 88, 111, -91, 36, -12, -3, 6, 69, -55, 1, -86, -80, 49, -75, 21, 19, 93, -125, -77, 51, -74, 27, 16, 93, 11, -11, 47, 77, -70, 104, 14, -69, 111, -44, 1, 29, 74, 2, -94, 101, -35, -87, 92, 97, 86, 40, 65, 88, 108, -61, 6, -64, -92, -104, 77, -12, 78, -105, 2, -44, 0, -103, 76, 117, 6, 73, 11, -60, 80, 13, -69, 55, 5, 5, 38, 43, 66, 64, -97, -113, -81, -35, -61, -61, -48, 91, 44, 15, -41, -28};
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
    msg.setTimeStamp(0.0249430800919);
    msg.setSource(54951U);
    msg.setSourceEntity(73U);
    msg.setDestination(11043U);
    msg.setDestinationEntity(154U);
    msg.text.assign("PALWMSLJIXDHQVSFCQYWCJNRNTBBTAFINSFPUSNYWEONZVKVIDRHUWOPWFXBJFEKGAGIGUKDKDAYBERKXVOXQRDEZGZTGPZHMMKXYDBVTWMBZPCLQFDCWUUJXSVARPLRQHPRGGWYTLOKZEEMIRASHHLCLEASNNDJCICIXXXPCEVLGGHTFHKHAHSJDTSFMNFPUUYDYISOOWR");
    msg.type = 240U;

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
    msg.setTimeStamp(0.023070686114);
    msg.setSource(51681U);
    msg.setSourceEntity(172U);
    msg.setDestination(5992U);
    msg.setDestinationEntity(182U);
    msg.text.assign("JOIWXWQGIMSCQTDAWEVRPLVLXYOUZIIYAKXSINNRELTBYFYGNTOCFDVMBJZPLTHHUWNRXABBXBCJEYZZNWIBDZCOXMARSWAXQGLJJGHCCDQGRRKFQWVKYFQLSVWZCGNDGUYGADQSEHEAJGPRWRXLBHLPUZLJHOAOBNABTD");
    msg.type = 134U;

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
    msg.setTimeStamp(0.69619292945);
    msg.setSource(22851U);
    msg.setSourceEntity(210U);
    msg.setDestination(16676U);
    msg.setDestinationEntity(220U);
    msg.text.assign("JQOCCOSEXEKRSJPGDJEDGQEEMMKVEILRSVZNQBXSIACCWBEFAIPDOFUYCSDDWZZNVVFLIQBPKZMBHRAQLTMLARNWZLQFBXYYHWBHSZWGOVJPCDAWONCVFNMGCPLWUVPKVWSSMYPXTIHKXE");
    msg.type = 59U;

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
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.997528191839);
    msg.setSource(59956U);
    msg.setSourceEntity(141U);
    msg.setDestination(11689U);
    msg.setDestinationEntity(150U);
    msg.parameter = 10U;
    msg.numsamples = 210U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 55593U;
    tmp_msg_0.avg = 0.214634115299;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.0803022595045;
    msg.lon = 0.925515751771;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.155713273265);
    msg.setSource(26418U);
    msg.setSourceEntity(183U);
    msg.setDestination(43215U);
    msg.setDestinationEntity(200U);
    msg.parameter = 168U;
    msg.numsamples = 15U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 43718U;
    tmp_msg_0.avg = 0.42799555471;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.00222491594648;
    msg.lon = 0.688527095044;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.234782094833);
    msg.setSource(46021U);
    msg.setSourceEntity(110U);
    msg.setDestination(22126U);
    msg.setDestinationEntity(203U);
    msg.parameter = 34U;
    msg.numsamples = 38U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 14684U;
    tmp_msg_0.avg = 0.49276685823;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.0889137936418;
    msg.lon = 0.714670565866;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.070953796886);
    msg.setSource(44226U);
    msg.setSourceEntity(232U);
    msg.setDestination(35823U);
    msg.setDestinationEntity(251U);
    msg.depth = 48800U;
    msg.avg = 0.556764967978;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.746284331618);
    msg.setSource(3166U);
    msg.setSourceEntity(94U);
    msg.setDestination(56684U);
    msg.setDestinationEntity(160U);
    msg.depth = 59422U;
    msg.avg = 0.687182871686;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.880404764495);
    msg.setSource(2157U);
    msg.setSourceEntity(93U);
    msg.setDestination(16702U);
    msg.setDestinationEntity(58U);
    msg.depth = 38528U;
    msg.avg = 0.214453098411;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #2", msg == *msg_d);
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
    msg.setTimeStamp(0.858799918168);
    msg.setSource(54413U);
    msg.setSourceEntity(133U);
    msg.setDestination(16838U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.528482594399);
    msg.setSource(8704U);
    msg.setSourceEntity(158U);
    msg.setDestination(18767U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.511887320363);
    msg.setSource(7116U);
    msg.setSourceEntity(212U);
    msg.setDestination(56834U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.960471499265);
    msg.setSource(16551U);
    msg.setSourceEntity(21U);
    msg.setDestination(34918U);
    msg.setDestinationEntity(106U);
    msg.sys_name.assign("QFHMZILHMVPDTYJKNGCJYIRFBGFYKMRNUACHXPZPLDOFJGUARHGNKSYDBADRUPBCJPOPVMUQTJKZSHBUZSBVLZDODGHBKNXERIGJJAQVXJVVYTADRZETAIXOMCENFKFLFCSQULODTIWBIVETERZLHWAXSVMMSOVQQPOLIAPFMTAKUEEMDZZTEOALFJGWWGPLRLWMHXIERKCUISCXQYBKXQXWXQWRSNSWZPY");
    msg.sys_type = 102U;
    msg.owner = 39962U;
    msg.lat = 0.244644218462;
    msg.lon = 0.109290836946;
    msg.height = 0.105094296075;
    msg.services.assign("OGFCVRPNMTDMWEINVKAUBUKRGRTUOESLZVSJIWYLALLCQGIJFOJAOIDQXRDKYPQMMMHFYEXISHABMLZQRFELAIJEAKZRBUBEHTQYLRRPCTIEB");

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
    msg.setTimeStamp(0.551243083795);
    msg.setSource(42557U);
    msg.setSourceEntity(164U);
    msg.setDestination(6271U);
    msg.setDestinationEntity(32U);
    msg.sys_name.assign("PQJESTLYWOKZIBKJOTSWIANTIJXMNNAGGTOIULUPZPKAFHEWCTTHMTBZCOHVGHMNJBQCMUDZZRFMBLLQMUJLXHXUYHXGGDXEBRFUVRRNSEABWUXQMRIVSBFPJUWSEQIKGQJEQXPRIBKPNQPAYWTYDETNDFCOZUXHYDULZO");
    msg.sys_type = 135U;
    msg.owner = 18588U;
    msg.lat = 0.337639058724;
    msg.lon = 0.420643114291;
    msg.height = 0.618896905052;
    msg.services.assign("FZENEGKTPVUEBEARQPUULYQIGKQREGNAYDQCXMVTIOLOOMEOXMRVQBGUAUXSLHOKRFILVSMXFNJFTXMKONAFGKYXCWZVNLKCEC");

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
    msg.setTimeStamp(0.744767545217);
    msg.setSource(60797U);
    msg.setSourceEntity(212U);
    msg.setDestination(5499U);
    msg.setDestinationEntity(196U);
    msg.sys_name.assign("PVTMCXSXKMVBXYANLRBQKYCGDWZZDEIEYKYLVZLFEFUBWFMLIRGIHOJUSKTAYTZAGGEO");
    msg.sys_type = 250U;
    msg.owner = 7861U;
    msg.lat = 0.303708096831;
    msg.lon = 0.877973214448;
    msg.height = 0.0518481206797;
    msg.services.assign("XCMDMALHLFPUGBJXXTQQUVPECAAALNJCGKOTSFKGYKRVTWUVALZHHGVBNNOYRJMZSNVEFUFYAZPTMVKXLYTBUVSHLXCYSBXZMHUOPBJHRJGGYAMKCIUSDQEFJDGUBRWVRKQQQEIUNOZQSDSJBDMVLT");

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
    msg.setTimeStamp(0.140352094934);
    msg.setSource(28715U);
    msg.setSourceEntity(251U);
    msg.setDestination(61658U);
    msg.setDestinationEntity(162U);
    msg.service.assign("KCHPYAEJQGHJJULSVLPRVOTSZYOZLZFKTREHKEGCPJRMQVZZSLDSFEGUTRAATGMJEDZQNPRBWOXNSBVXHFAWDKWTOUCNOUAOTIVYAEKVSIXHSXTMQMJBYDQTTWXNCYFRCCLCRBPOLB");
    msg.service_type = 203U;

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
    msg.setTimeStamp(0.0439283132602);
    msg.setSource(17855U);
    msg.setSourceEntity(223U);
    msg.setDestination(7489U);
    msg.setDestinationEntity(77U);
    msg.service.assign("QOYKWETWSFTMAZUTBJYWCBKSSYAEBGWZULVPVROJSMLKLNLCOJPNCWDQIKXXESYBDFIYEHJAKIKJFUCZMCTHOOGKELWBLWPGIKAIOQWPINGRGZQAQZMIHZJDAARFIEMDVEXDCZVDFNXAAXWQNAEHLKJODHTQUSHUVRCFEMNBJXYRHVSMZFFDSWNCOGOSYRXSLRV");
    msg.service_type = 6U;

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
    msg.setTimeStamp(0.540903437485);
    msg.setSource(19398U);
    msg.setSourceEntity(248U);
    msg.setDestination(41871U);
    msg.setDestinationEntity(7U);
    msg.service.assign("PKYOGCXKHVNUZTVWANMBBNLVNFDERCRQXSQYYXUAUVEZDJRHXGSOLQNENKBMPOHZMQVAAJDHDGPQVUWDBBRGTOPNEPBWCSVMJIJX");
    msg.service_type = 218U;

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
    msg.setTimeStamp(0.318600180046);
    msg.setSource(21953U);
    msg.setSourceEntity(219U);
    msg.setDestination(18542U);
    msg.setDestinationEntity(155U);
    msg.value = 0.779616346332;

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
    msg.setTimeStamp(0.493504483886);
    msg.setSource(33690U);
    msg.setSourceEntity(205U);
    msg.setDestination(43199U);
    msg.setDestinationEntity(248U);
    msg.value = 0.372765217534;

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
    msg.setTimeStamp(0.547767888198);
    msg.setSource(34109U);
    msg.setSourceEntity(153U);
    msg.setDestination(59444U);
    msg.setDestinationEntity(115U);
    msg.value = 0.275001011063;

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
    msg.setTimeStamp(0.905744495824);
    msg.setSource(24215U);
    msg.setSourceEntity(246U);
    msg.setDestination(56700U);
    msg.setDestinationEntity(221U);
    msg.value = 0.138144702808;

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
    msg.setTimeStamp(0.543871678326);
    msg.setSource(30279U);
    msg.setSourceEntity(94U);
    msg.setDestination(30665U);
    msg.setDestinationEntity(147U);
    msg.value = 0.133540358702;

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
    msg.setTimeStamp(0.569053363916);
    msg.setSource(24061U);
    msg.setSourceEntity(168U);
    msg.setDestination(59591U);
    msg.setDestinationEntity(214U);
    msg.value = 0.891098780226;

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
    msg.setTimeStamp(0.319223814544);
    msg.setSource(6462U);
    msg.setSourceEntity(166U);
    msg.setDestination(33880U);
    msg.setDestinationEntity(234U);
    msg.value = 0.621884719787;

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
    msg.setTimeStamp(0.176318420723);
    msg.setSource(11188U);
    msg.setSourceEntity(22U);
    msg.setDestination(12102U);
    msg.setDestinationEntity(5U);
    msg.value = 0.033128585873;

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
    msg.setTimeStamp(0.0235927397652);
    msg.setSource(49409U);
    msg.setSourceEntity(228U);
    msg.setDestination(60595U);
    msg.setDestinationEntity(65U);
    msg.value = 0.955119770789;

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
    msg.setTimeStamp(0.416566492664);
    msg.setSource(46615U);
    msg.setSourceEntity(104U);
    msg.setDestination(31315U);
    msg.setDestinationEntity(62U);
    msg.number.assign("WHCPBDGPGIJIDRUDKEVDXYGSWGOQSHAESUXUFAZNWAWSWLWPRMJRPHAOJKHBTMYJEUZQVUNZXQLVRKGVMOKMROLXMQYSAGIIOKOFDVSFHCESLGJLPBZQVVHRZVCBGUDDYNFCBWPZQTXHBZUTHRGIISUQYKEBQHCYNAFTTFUSMHZFLLOXRTLVNXDNNXCCMMJEAFYNEPYPCKVFJDAJLGFKXLT");
    msg.timeout = 792U;
    msg.contents.assign("LHVTYPCDWRUCPDPVMZAXSBTDHN");

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
    msg.setTimeStamp(0.390074610028);
    msg.setSource(22859U);
    msg.setSourceEntity(207U);
    msg.setDestination(63128U);
    msg.setDestinationEntity(225U);
    msg.number.assign("CRPGQKPRMPHPYHVYCPLFCMIRNGTRWGLNKPHVWQAYTCDHEUIKUZFXXTKMFDHAFOIDSORMXQXUHOBUELFDHBIJLQUEUXLF");
    msg.timeout = 60604U;
    msg.contents.assign("UCWKFHCEKLVKPXFCTIASMEIRKHZNSTXYOTCYPLAZDJPNDMGJQDZCWEKXSWLTPWUURHVVOBDJIGPHQUBNCQHGOVEIWVSTYIOYHZLVSAMMZLTWNXQFUEZWFOJRXDGUHXWLPWOSPYBJHCRKEFRAWUTSCREYDQTVKSRXNIQLXDYQNNBLANGARGJUIBBLRIONVEUYPMYFMJQI");

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
    msg.setTimeStamp(0.334830791368);
    msg.setSource(31223U);
    msg.setSourceEntity(118U);
    msg.setDestination(11653U);
    msg.setDestinationEntity(174U);
    msg.number.assign("WYMUUPJFPKGZONZPNLCYTIYJTXZGRBGJZKIGBVVMMKNNPWJEISOHQGVNFJCYFTURPJ");
    msg.timeout = 1121U;
    msg.contents.assign("HFKZGIUDJHOMOKSRAHWCAJITHVXUTDWMXYXEMWIDDPGPDEPFKQMBIUGKQEPGZLTPWZBGHNN");

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
    msg.setTimeStamp(0.164062698229);
    msg.setSource(63500U);
    msg.setSourceEntity(26U);
    msg.setDestination(41980U);
    msg.setDestinationEntity(66U);
    msg.seq = 757470874U;
    msg.destination.assign("HVRCOZQZUZNFFBGRXZKBGRSUIEYSEMKALZKDSEXFOQBJJFGITXKSXOYUJXBTVQTCHYOPXLDRSIHARWKMTHHJSZWHHJILWQMJCGTCMFVEPIWNSQCROLAIGCTVUPMYAPKPEMNGOHDMODCWYDMPMNHAELTOAZFWNRFYQNLOLDVVCTBAISWYJJVXTUJHFIWDRQCEYBIUAYUBQCZVG");
    msg.timeout = 61787U;
    const char tmp_msg_0[] = {-54, 32, 94, 16, 118, 29, 25, -9, -102, 3, -13, 72, -89, 26, 83, 5, -68, -48, -96, -58, 30, -56, -107, 73, 57, 36, -39, 69, 1, -108, 96, -97, -86, 63, -14, -63, 27, -7, 77, -82, 59, 44, 75, -102, -54, -15, 120, 57, 75, -7, -2, -48, 62, -69, 110, -4, 28, -55, 46, 23, 21, 91, 89, 81, 13, -38, 110, 44, 103, -88, 82, 44, -112, -42, 0, 125, -74, 57, -113, 17, -126, -104, 10, -115, -13, -11, 16, 72, -104, 98, -114, -43, 72, -76, 70, 76, -15, -19, -8, -11, 51, 77, 36, -5, 2, 19, -119, -124, 62, 8, 69, -25, -38, 61, 76, 72, 63, -3, 108, 125, 48, -37, 50, 0, 18, -17, -29, 94, 27, -108, 47, 71, 111, -3, -16, 94, -31, -81, 31, -47, -114, -97, -9, 97, -17, -113, -24, -30, -87, 112, 71, -110, 18, 124, 114, -81, 116, -101, -8, -41, -58, 101, -47, 102, -87, -18, 41, 63, 74, -80, 85, -64, 92, -28, 52, 68, -97, -83};
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
    msg.setTimeStamp(0.86005018576);
    msg.setSource(48892U);
    msg.setSourceEntity(15U);
    msg.setDestination(50741U);
    msg.setDestinationEntity(223U);
    msg.seq = 1533290115U;
    msg.destination.assign("MXCUKDZHGWUTNEEOPV");
    msg.timeout = 21232U;
    const char tmp_msg_0[] = {-83, 111, -7, -25, 113, -28, 114, 42, -109, 65, 14, 36, -28, 18, -85, -28, -109, 85, 77, 112, -2, 72, -28, 29, 86, 119, 63, 88, -107, 97, 114, 63, 76, -25, -120, 43, -109, 65, -83, 12, 18, -1, -111, 81, -75, 84, -85, 22, 38, 72, 18, -117, 59, -40, -19, 73, 120, -37, 91, -100, 109, -49, -13, -102, -36, -10, 40, -92, -56, 27, -83, 107, 83, -13, 38, -63, -30, -105, -15, -9, 16, 71, -67, -30, -32, 108, -108, -42, -32, -79, -82, 53, 24, -33, -91, 10, 42, -9, 20, 80, -3, 79, 83, 79, -108, -128, -124, 23, 86, -26, -35, 22, 110, 101, 71, 41, 78, -67, 12, 27, 80, -67, -91, -82, -53, -110, -56, 98, -37, 46, 19, -36, -20, 11, 54, -47, 38, -26, -124, -57, 24, 31, -47, 56, 57, 0, -124, -95, 88, 91, 35, 3, 60, 68, 99, -128, -68, 89, -21, 108, 23, 12, 18, -90, 67, 11, 46, 106, -71, -69, -96, -65, -109, -53, -46, 14, -26, -102, 115, 26, -112, 90, 35, 87, 82, -71, -53, 103, -115, 72, 95, 125, 25, -126, 116, -104, -68, -43, 83, -107, 20, -59, 63, -128, -74, -45, 23, 116, -9, -100, -89, -64, -26, -66, 77, 77, 48, -2, -18, -61, -17, 12, 69, 110, -96, -39, -95};
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
    msg.setTimeStamp(0.173433455356);
    msg.setSource(11928U);
    msg.setSourceEntity(36U);
    msg.setDestination(42720U);
    msg.setDestinationEntity(24U);
    msg.seq = 3801222967U;
    msg.destination.assign("YBIAGLPDKLQCLLGOMKYFTBDJEVMVSCZKVFQTEUSTTMPPMPGASPBOWVZXGXNRIAQWHTYJCZEZVGBOEDHNMCWGYBFTTUZOEUSFWXIMJBDXJFIDSDGNWAXCNPIFRRAYKXXVQRVKATUGBIKEZGAUKUJZOFDIUWJEMLAHXMQQWSMTELPLSOQLJYWKIXBHTVMJYPDNYHHRHFREFDUFVOCJICSPROXKUPNU");
    msg.timeout = 37650U;
    const char tmp_msg_0[] = {61, 66, -45, -50, 83, -80, 33, -42, -74, -83, 13, -80, -55, 7, 121, -20, -110, -46, -80, -27, -99, -46, 76, -44, -83, -21, -113, 23, 126, -96, -59, 34, -54, -28, -57, 5, -122, 81, 59, 19, -89, 43, 93, -64, 68, 57, 98, 106, -19, -108, -87, 8, 99, 30, 84, -111, 121, -105, -92, -31, 65, 32, -108, 15, 36, -36, -100, 67, -67, -11, -63, 87, -123, -64, -40, 92, 44, -38, -115, -23, -46, -70, 83, -47, 108, 58, -19, -122, 7, -93, 47, 98, 54, 18, 121, -73, -95, -78, 82, -31, 10, -107, 104, -7, -83, -50, 34, -100, -100, 71, -97, -89, -25, 95, 112, 39, -52, 106, -101, -29, 72, -108, 17, -85, -19, -92, 44, -85, 73, 0, 4, -97, 4, 77, 71, -35, 90, -48, 120, -27, 70, -37, 64, -48, -8, 103, 10, -124, -6, -57, -49, 72, -21, -79, -24, 85, -48, 98, -116, -30, 9, 9, 43, -37, -24, -82, -30, 120, 124, 46, 63, 92, 30, -17, 57, -92, 26, 19, 108, 67, 20, -86, -18, -16, 92, 47, 94, -126, 108, 50, 48, 84, -51, -75, -122, 92, 67, -30, -20, -47, -39, -60, -17, 77, -76, -96, 123, -110, 68, -88, -82, 33, 112, -26, -5, 41, -21, -23, 55, 10, 65, -86, -125, 75};
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
    msg.setTimeStamp(0.970743795385);
    msg.setSource(51488U);
    msg.setSourceEntity(189U);
    msg.setDestination(53008U);
    msg.setDestinationEntity(20U);
    msg.source.assign("EDGNWEBFQIQAKCNPXIZPTMAHYOXKVBWAGOLYJXLCMXLYIOXNLWWASMUFJDIEBMRSTAYTRGLSMHCXU");
    const char tmp_msg_0[] = {-14, 47, 15, -78, 80, -43, -30, 38, 68, 101, 58, -123, 120, -72, -49, 31, 67, 89, -118, -88, -28, -105, -6, 66, 3, 86, 38, 59, 64, 93, -65, 27, -37, -61, 17, -12, -112, -24, -51, -108, -40, -23, 94, 117, -88, -87, 120, 15, 71, -125, -52, -20, 88, 71, 39, -95, -39, 11, 73, -48, -85, -115, -73, 29, 107, -64, 23, 105, 2, -3, 42, -11, -111, -42, -78, 6, -110, 124, -44, -56, -42, 119, 101, 85, 2, 3, 7, 8, -119, 124, -118, -110, -88, -77, 14, 66, 55, 106, -102, 2, 48, 51, 20, 92, -94, 55, 47, 41, -89, 6, -85, 29, -53, -72, -92, 91, -2, 41, 70, -118, 118, -19, -35, 3, 32, -20, -106, -10, -117, 74, 79, -46, 15, 102, 61, 8, 65, 8, -17, 80, 9, -96, -107, -35, -39, -27, 103, 61, -127, 10, -76, 55, -6, 34, -123, -33, -106, -83, -9, 24, -66, -95, -51, 27, 81, 119, -75, -13, 103, 10, -89, 103, 34, -56, -3, -56, -12, -70, -3, -52, 108, -50, -121, 42, 9, -36};
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
    msg.setTimeStamp(0.125218633869);
    msg.setSource(25278U);
    msg.setSourceEntity(28U);
    msg.setDestination(38074U);
    msg.setDestinationEntity(88U);
    msg.source.assign("FVEOOFTEGZJALRYLEHPWHLTRHJRFSSPIHIWWKQXQXDQRZYGSXIZXKZQMIUBONBZKXYFCUHUWTFAWJ");
    const char tmp_msg_0[] = {-67, -121, 73, 30, -108, 24, 125, 105, 47, 107, -11, -31, 49, -124, -44, -19, -100, -13, -98, -15, -46, -98, 21, 8, -123, -79, -120, 108, -38, 121, 52, -29, 15, 40, -58, 74, -27, 96, 103, 66, 74, 124, -29, 49, -87, -115, 30, 125, 58, 27, -124, -64, 39, 0, -21, -116, 41, -115, -125, -65, -40, -92, -20, -98, -114, -7, -110, -74, -61, -90, 57, 97, -37, -56, -102, -106, -9, 22, 23, -45, -3, -71, -78, 118, -47};
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
    msg.setTimeStamp(0.302419658026);
    msg.setSource(49873U);
    msg.setSourceEntity(200U);
    msg.setDestination(1024U);
    msg.setDestinationEntity(252U);
    msg.source.assign("ZYDXHOGFVHUMJIN");
    const char tmp_msg_0[] = {99, 94, 25, -44, -18, 95, 38, 90, 10, 35, -118, 24, 33, 29, -82, 58, 120, -67, -120, 88, 73, -59, 119, -46, 13, 112, -107, 103, -56, 37, 52, -31, 15, -69, -94, -91, -40, 121, -121, -127, -75, -53, 79, -113, 120, -17, 32, -77, -101, -59, -12, 47, -13, 16, -41, 14, -34, 44, 65, 102, 113, 36, -91, -75, 53, -58, -35, 23, 119, 32, 126, -55, 84, 67, 125, -104, 27, -3, 86, 53, 20, 48, -9, -111, -2, -47, -81, 32, -27, 104, -116, 116, 108, -67, -24, -19, 93, 124, -82, -24, 95, 73, -109, 18, -44, -81, 69, -109, -115, 125, -93, 80, -97, 64, 50, -128, 72, -107, 94, -116, 34, 122, -122, 87, 113, 89, -89, 53, -34, -27, 122, -46, -111, -91, 107, -21, 120, -51, -98, -125, 72, -122, -96, 44, 69, 52, -11, -6, -55, -82, -123, -10, -108, -28, 19, -109, 103, -127, -75, 1, 77, -95, -83, 112, 124, 87, -51, 101, 2, 113, 25, -55, -70, -56, 106, -102, -52, -87, 92, 82, 64, 82, 102, 46, 69, -46, 52, -111, -85, 17, -36, 54, 61, 14, -36, -66, -98, -118, -79, -82, -29, -56, 103, -118, 22, -113, 59, 17};
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
    msg.setTimeStamp(0.527874188501);
    msg.setSource(64662U);
    msg.setSourceEntity(213U);
    msg.setDestination(23927U);
    msg.setDestinationEntity(206U);
    msg.seq = 43409467U;
    msg.state = 229U;
    msg.error.assign("VYVWJKAMRGNDUSKKYNATMCTDTAZSMUBKFMRFJBLNTHODWFYQPOGVBWXEIOHDIWKUHJHLQFBKCUUONRNJAEXYQVGOYHRQFLZYWXYPSZVUQGCERDGN");

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
    msg.setTimeStamp(0.328872231003);
    msg.setSource(142U);
    msg.setSourceEntity(4U);
    msg.setDestination(52834U);
    msg.setDestinationEntity(253U);
    msg.seq = 3203125872U;
    msg.state = 48U;
    msg.error.assign("ATGMLKOMFRNGCXZHVHSAIIBIQEMGNTUSYZKVPHUNFBKTAXRXPUYXRNTWPMCLFAOIJXBKZXTXUGCWAEVCCKIXDCSJBQEWFKDNBRD");

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
    msg.setTimeStamp(0.0270430468292);
    msg.setSource(57567U);
    msg.setSourceEntity(58U);
    msg.setDestination(50906U);
    msg.setDestinationEntity(205U);
    msg.seq = 4272950442U;
    msg.state = 80U;
    msg.error.assign("ZSBFJCFKGMBCLFSNRITEKAMJWLAQSBMHXEPJQXLGTDVA");

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
    msg.setTimeStamp(0.53196404108);
    msg.setSource(64796U);
    msg.setSourceEntity(171U);
    msg.setDestination(61433U);
    msg.setDestinationEntity(137U);
    msg.origin.assign("FUCVDCCFQYAEKZGTQIJLEDHHEUBLUAUKBCYOAYTEARFMUZEMNONUFBBSNUFMXTQOIXHBFDJIPAKXWBOWQSWCVSGGMVPTWHHFOTI");
    msg.text.assign("LBKWMYMBGLMVWFKTLOUCGQDXITARZCXHRQFMFIPDVJENSPRJOTAQCAYOIYFHXUEWFAYGTWIUHOUZXNSXIVONNNQUBFRBAUTAOFEM");

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
    msg.setTimeStamp(0.737056103551);
    msg.setSource(44129U);
    msg.setSourceEntity(229U);
    msg.setDestination(65420U);
    msg.setDestinationEntity(114U);
    msg.origin.assign("HQFXDALMMMEIWCMVQQITZKAOYGILEDOMPKVZUZNDMSTFPDPCGVKEKNTQQYPAECRGJLEKJVRKYYEHLTW");
    msg.text.assign("OXMCVMTAABYLXRJXKBQOZGGJYUACHGPBNEDAFLIOEQTOFFRNOZHXDMIWCTLBEGCWNMPZYWUWKBAHPBBXLYNVHOYNGSSTGWASGFHJPSUYLAEAZHFZUZQMVCNVIFTBDLJJRZR");

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
    msg.setTimeStamp(0.911117009717);
    msg.setSource(4362U);
    msg.setSourceEntity(127U);
    msg.setDestination(48215U);
    msg.setDestinationEntity(216U);
    msg.origin.assign("ABKGGPVVMMXPDUGRCLKTNNQPAQZNMJROWFKLYMNHMACPORBITZLCINWIVYTDIMHEGJHAREFVUVFIJPROJFOSZSUUTWNBWGJSQFMYAPATLVGXOTIVBKFNPHWACSRHCSJGGESOLOYBZDCURKVDXULUOQ");
    msg.text.assign("LSXHZANDSMJLOWAOIGSAPNQBEHAUQPTFESIYHNLWKCGZVEBARCWRPEHSUHNKGWCMJRMLULYHONQUDIVFOCJWKJXZQIMGMCESEDRJOCFTDEUUXGUZDMSPTHOQCABZYHNWBYXHVFRSZFXYQRVIDQBOGPJZSIYJQTIIFJHQVUDFDUKRBPYVRWTOBUIXMXDWTNAXGMEPMZPEPFYKQNJMRFVEXCCXKPBRAOVDAGZBWZTOVYCFGLILLKAVLNGJLWTT");

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
    msg.setTimeStamp(0.527316218299);
    msg.setSource(3879U);
    msg.setSourceEntity(27U);
    msg.setDestination(49215U);
    msg.setDestinationEntity(95U);
    msg.origin.assign("ARIHQSHEYLQRZUUYJTDMPEISYEGKJFNLLBGTHFNWSPCSGNFOLXLBMETLCPQHYRMOCHFJDUTFSCCNRBRZVPMOXQIUDNJWDXXBNKELVVVQAOJLTXQIGJBCUXYZWDVXKSMEIUYGUBFGFXZZNZQGMXTAGVKRKMPEW");
    msg.htime = 0.493669122293;
    msg.lat = 0.514987461636;
    msg.lon = 0.233022787942;
    const char tmp_msg_0[] = {-39, -23, -126, -122, 37, 125, -17, 80, 66, 50, -50, -53, -31, -103, 113, 11, 100, -85, 101, -57, 69, 77, 85, -15, -80, -1, -108, 57, -69, 92, -32, 82, 113, 78, -99, 104, 9, -50, -10, -63, -3, -14, 69, -126, -108, 113, 49, -42, -24, 68, 43, -3, -101, 22, 124, -109, -4, -77, -80, -46, 9, -126, -77, -65, -4, 61, -78, -9, -41};
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
    msg.setTimeStamp(0.0260073896735);
    msg.setSource(10261U);
    msg.setSourceEntity(163U);
    msg.setDestination(56711U);
    msg.setDestinationEntity(178U);
    msg.origin.assign("TUMFPGIUNWBYSGQLHWCJWFCVKTOHPZTLMZXYWSQRKLSIJPMNBHGVGYESDAFZDFXBEKNEMUGVKYKQCTQPMYEXJRUBBJQIYONVOGPAWTLZDBIJANYUOHAMBLKRQSTCHYUOPDIVIETXFZRKJXHXBYNFLJTUIXWSHWLADLORKEMSJCPCFQUOHRFLDNODUJGYDXHP");
    msg.htime = 0.0529750080335;
    msg.lat = 0.798045074333;
    msg.lon = 0.37351823823;
    const char tmp_msg_0[] = {76, -106, -12, 42, -84, 7, -65, -72, 47, -92, -67, 59, 118, -113, -92, 101, 16, -126, -85, -47, -13, 69, -38, -9, 31, 15, -83, -28, 121, -83, 65, -112, 48, 12, 84, 51, 92, 71, -26, 19, -80, 34, 49, -108, -7, 115, -38, 39, 52, 124, -99, -53, 68, 34, 78, 82, 61, -45, 72, 125, -11, 102, -121, -51, -46, -46, 46, -95, 87, 39, -62, -91, 120, -115, 112, -105, -5, -68, 94, 122, 21, 85, -93, 43, -72, -113, 80, -64, 37, -9, -113, -15, 121, -97, -37, 79, 104, 88, -96, 97, -69, -18, -29, 52, 104, -90, 26, -109, -29, -107, -115, -20, 18, 80, -98, -10, -9, 32, 14, -43, 21, -59, -122, -3, -10, 6, 95, 102, -102, 38, 87, -110, 103, -61, 40, 118, -105, -113, -32, -56, -100, -41, -106, -52, -41, 23, 0, -100, 68, -4, 112, -3, -33, -51, -125, -2, 83, -102};
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
    msg.setTimeStamp(0.0996437527348);
    msg.setSource(9136U);
    msg.setSourceEntity(118U);
    msg.setDestination(4004U);
    msg.setDestinationEntity(212U);
    msg.origin.assign("XBLIFNBLVEESARZHKOZKTDLIWKIFRZCIGEYVMMSVFXIEJUJTWOJSIQNNYGJCSBSLHFGABUNAHTCBPDWAHJWYHVRRMPEVPZKYTTIQZMRPGATZAVAGDGMJLQHOZBCCCGFBSMKQBUPWKXZQOVOZPYDVLXFQTUPECFCGNDNPUWUTYDZXJCGOXLAJIIUNPEYXFRHDRQTWRUUMEBDERNSMEQWMOXKDRKQUOKYLTQXYVJYFLIWON");
    msg.htime = 0.222253951927;
    msg.lat = 0.172428157972;
    msg.lon = 0.896704042357;
    const char tmp_msg_0[] = {57, 108, -71, -95, 28, -45, 15, -62, 119, 47, 62, 65, -45, 8, 16, -65, -124, -11, 47, 37, -116, -101, 17, 61, -25, 123, -42, -27, -44, 4, 109, -32, -82, 66, 126, 106, 89, 37, -79, 84, 84, -111, -99, 115, -87, -60, 86, -101, -76, -103, 61, 33, 18, -44, -99, 108, -8, 18, 90, -12, 95, 24, 0, 95, -30, 91, -115, 10, 47, -118, -3, 94, -46, -74, -20, 32, 21, -113, 23, 74, 70, -57, -94, -33, 8, 23, 65, -45, 15, -62, -69, 45, 55, -68, -19, -66, 6, -50, 81, -126, 71, -96, 114, 97, 88, -47, 64, -78, -32, 121, -123, 96, -100, 8, 103, 16, 54, 48, -21, 29, 11, -63, -128, -116, -51, -115, -10, 126, 72, -37, 22, 117, -118, -12, 16, -100, -10, -36, 18, -83, -27, 99, -76, 28, 40, 41, 100, -121, 70, 41, -73, 22, -119, -44, -13, -8, 33, -32, -13, -81, -84, -27, -45, 58, -54, 38, 101, -103, -51, -40, -127, -90, -32, 29, 51, -39, 65, 15, 116, -20, -112, 47, -92, 34, -11, -61, -49, -60, -127, 22, 24, -50, -42, -40, 52, -11, 122, -98, 49, 73, 8, -71, 33, 84, 12, -81, -44, -9, 94, 16, -50, -28, 57, 73, 104, -122, -24, -124, -21, 112, 94, -47, 63, 54, -110, 109, -26, -35, 95, -102, 79, -111, -73, -67, -44, -124, 24, -21, -109, -127, -34, 73, 76, 79, 109};
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
    msg.setTimeStamp(0.881937690503);
    msg.setSource(18982U);
    msg.setSourceEntity(103U);
    msg.setDestination(51963U);
    msg.setDestinationEntity(229U);
    msg.req_id = 51617U;
    msg.ttl = 60902U;
    msg.destination.assign("XITFXNULBKDHWMITSOURNDGCQFFUHVZCBDWWSNRPWMXBAQFPSGITYCYJKIRTGJSXRHJJCCLVJNELJRNDHPEOJSWLVHEMDRVNPVKOGAZTXZZBRKMOVGRTDQWUCBRKXML");
    const char tmp_msg_0[] = {-118, -96, 58, 8, 107, -11, -106, -82, 99, -103, 10, -88, -33, -113, 48};
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
    msg.setTimeStamp(0.614792816226);
    msg.setSource(38245U);
    msg.setSourceEntity(109U);
    msg.setDestination(59120U);
    msg.setDestinationEntity(249U);
    msg.req_id = 11221U;
    msg.ttl = 46626U;
    msg.destination.assign("IORBCPHMMFLHGVPLVPSXJFZUIVORGDFOUHGRUYEZMJPETQRVSPSGZOCCYAMNHDXNUVUVBAQWYAWKNOXCTMSH");
    const char tmp_msg_0[] = {-105, 84, -77, -103, 124, 114, -85, 36, 105, -71, 49, 14, 6, -32, 10, -13, -66, -82, -39, 52, 13, -113, -38, 85, 52, 20, 59, 83, -14, -67, -53, 118, 17, 27, -116, 58, -82, -80, -122, -46, 24, -35, -5, 97, 104, 103, -108, -48, -31, -81, -21, -10, -95, -111, 117, 50, -119, -23, -54, 0, 126, 122, -26, -83, 3, -106, 56, 102, 21, -32, 114, -1, 42, -105, 82, -9, -82, 46, -75, -53, 118, -116, 17, -53, 19, 84, -31, 40, 81, -126, -83, -34, 2, -42, 90, -15, 87, -55, -36, 5, -23, -84, -85, -57, -57, -123, -115, -77, -24, -93, -73, -95, 14, -114, 45, -61, 9, 110, -3, -62, 33, -81, -104, 45, 78, 74, 66, -51, -50, 6, -126, 89, -72, -34, 45, 68, 99, -76, 113, 63, -49, 90, 52, -39, -88, 44, 27, -75, 121, -56, 14, -84, 1, -34, -45, 1, 81, 69, 52, -55, 41, -89, 122, 26, -110, 43, -120, 3, -103, -18, -11, 39, -81, -94, -81, -93, 6, 59, -109, -88, -86, -110, 11, -52, -92, 119, 58, -62, -90, -2, -16, 28, -54, -110, 108, 27, -113, 85, -58, -68, -47, 19, 103, 14, 111, 125, 83, -56, 119, 75, 78, 72, -32, -54, 66, -72, 55, 8, 33, 5, 84, 55, 111, 119, 34, 27, 12, 17, -3, 23, -114, 70, -44, -90, 61, 95, 82, -57, -121, -96, 65, 39, -121, 58, 119, -60, -7, -111, -49};
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
    msg.setTimeStamp(0.640703218379);
    msg.setSource(23865U);
    msg.setSourceEntity(67U);
    msg.setDestination(54477U);
    msg.setDestinationEntity(174U);
    msg.req_id = 15159U;
    msg.ttl = 31070U;
    msg.destination.assign("HKDUXYOWXCLYTDZZXQQMMIBLZWOMPKSINYOVYNREMDTZKWYKJNFVYBLHBNSHJWBOPETQXPEOSTHRHLUBYGEIZFUDIMWZIVWBCTZPTRTFNELUVGJDRKVQLGVXCHNUAJDP");
    const char tmp_msg_0[] = {69, 50, 38, 60, 83, 65, 99, -54, -112, 93, -26, 44, 64, -127, 76, 78, -123, -83, -109, 71, -110, -110, 42, -51, -85, 117, 85, 79, 66, 123, -37, 115, 64, -103, 108, 40, 35, 80, 109};
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
    msg.setTimeStamp(0.737399693553);
    msg.setSource(3568U);
    msg.setSourceEntity(98U);
    msg.setDestination(27783U);
    msg.setDestinationEntity(50U);
    msg.req_id = 59798U;
    msg.status = 46U;
    msg.text.assign("IHJSQXTBXNCTVIGRCDYPSCPHMLYDSKRFZJIRFVXMUTWXCNOWGGTZNHHTKSBLKEFDVWBVAOFCKOFKBJVEWEXESVRMOFZUBDPZFYIONPQWCLNZDBFVAJWYNQAYYMMMLBCOFEQSAATGIYRPQHQTXUJKQLLZQKJGTUINBHEUTVYEEQRDQEAZPWJARUHUPRB");

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
    msg.setTimeStamp(0.894624206392);
    msg.setSource(63703U);
    msg.setSourceEntity(15U);
    msg.setDestination(15106U);
    msg.setDestinationEntity(118U);
    msg.req_id = 8031U;
    msg.status = 101U;
    msg.text.assign("GJHIYOIKQTOBYRMVQKJPSWUZREKCHVWKACFEGNDCJTTGCZSSLXUNDAVIVRDJOYUQNIHROHWWLPONVWZEBTRWLZYIVUBMEZSFYKFCAERVTOSHNRG");

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
    msg.setTimeStamp(0.55557862445);
    msg.setSource(45248U);
    msg.setSourceEntity(15U);
    msg.setDestination(46442U);
    msg.setDestinationEntity(224U);
    msg.req_id = 32895U;
    msg.status = 42U;
    msg.text.assign("MWIMLCYKUWZKWURPBGXXDKLDTOCFSNYONCHRIGXFWTVWOHNNTUDKPVJALJXQEVVRRMLCQGMMVAIPEWCQHRFXHDRSSEFAVQQPMTFZTVGSIAWVPBZIQPXRDPXKMEHQAOUSGBTRUCDKLUJJAISDNSFSHWCTDTLOFQCUAWUYAMFABGMKOYBGAJOXHFZZJSHCXEQJOYMIWDFBXIGRCEJNKYGZLLJIRLPESVKPG");

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
    msg.setTimeStamp(0.975391824246);
    msg.setSource(44144U);
    msg.setSourceEntity(100U);
    msg.setDestination(14698U);
    msg.setDestinationEntity(184U);
    msg.group_name.assign("UQTAJDNRIKPBASEOHUMCNOCRJVIDZMKYMGDTWBHNWZVAMBVHQUZGJXDOVLHSTMUSWRBDWKMXZLELJIGYLZGNPWTXPCHGXTEYPIJEBFFGKSNMOVFIJYEUDTLXOKQE");
    msg.links = 568069957U;

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
    msg.setTimeStamp(0.134418610789);
    msg.setSource(17306U);
    msg.setSourceEntity(32U);
    msg.setDestination(36888U);
    msg.setDestinationEntity(169U);
    msg.group_name.assign("EMJLZITSNBWBBUZVKMSPMMSSXJDGGLJKDUFEBPEBMGRHSRTEXCPRIFPYCGWQLFLPXQNCUUCOOIDVLZMHHJDRLQKHMZHAESJNKWNQWONYST");
    msg.links = 3263624802U;

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
    msg.setTimeStamp(0.929923037976);
    msg.setSource(47872U);
    msg.setSourceEntity(34U);
    msg.setDestination(43274U);
    msg.setDestinationEntity(50U);
    msg.group_name.assign("RMZTIQQTUQUFYHECAWMYQWBCVDHSJUZTPYARPSHXAJTEUIESJWVNTGMKXADTFFDOVXOGQINNPGOUXRYVKRHCKNOZLRQTDZFOYIOSBKEGKSNSASKJRGMWSMJHUIRBODLHCGEWXKJYPULBCWQYGKXROZGPPIGIT");
    msg.links = 2464349428U;

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
    msg.setTimeStamp(0.632263109681);
    msg.setSource(59607U);
    msg.setSourceEntity(144U);
    msg.setDestination(47751U);
    msg.setDestinationEntity(99U);
    msg.groupname.assign("MTUFMYQJVSMVIDLQNAJPEOXDHLHXWSDODEUYUOCXWMZLTUPPCXTBBRMESFFLADCIRXHLSQOJEDMXWMNKDZDAWVPXGUESQNIEXGWZGFVQKIJHICGSNLBYBHRYHNJOJJRANXKLVTEQOGKBUYUKAWYNZECAVFEHWIBZATLYCLWKMJSPTBBJGPHRBGOILSTNCYOMZCCFWFEUTRWVIFNROGOMPGA");
    msg.action = 209U;
    msg.grouplist.assign("YVQLZOPFWVIORLSIIJMDTMNQVOQOJLVVOEDYCAYSAQBXTUEJAFYIPNZJBFUXKKJNXUECEWKFLBAMQONWRAEYNHDRJKRHTHZQHVZTNXXHMRPHSHLBCPLCHPDQQBKYZDYLPCMSBUTKCDXCTIWENGSCNGRLWEUVMUNUUZGFKVOEEAHMRWVJOIJQOTWKDZHUZRWFBIFASBJCTGNMGGSSAOGSGPAKEDXBMXDYFGQKDPSTR");

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
    msg.setTimeStamp(0.492648016506);
    msg.setSource(45111U);
    msg.setSourceEntity(118U);
    msg.setDestination(56958U);
    msg.setDestinationEntity(36U);
    msg.groupname.assign("PLZMZLTJYXPPMVJWFLOREKHQJTSJEXQJFGMSHSSAOVPUORYOCVHOVHAGZWHSKCEDIXOBEPVKIAUDBOBINZUQAJNZHAY");
    msg.action = 124U;
    msg.grouplist.assign("PBXDBRDNPVRLWQYVZRPTNFGEFJROTXSERPYPUSDZXJTSJFSAAINWVENINMDKFYATILHFPRPIYXIJFOXUZBQRLCASXPULLEXPNKLTNGWBDHWUUEKTGOGEACQNUQLGBJGHYLIDZHZMAHRJOQTFCVXFCCTDXXUBDLJSQWGCOQLKMYZYSIMKVZCOMMSUEBTSHPBQYKWQVRMKWGSWZKHCDVAGVHIWANDFHANAOEEUMEIJKRGYVJYCFBCOZ");

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
    msg.setTimeStamp(0.877812514793);
    msg.setSource(1245U);
    msg.setSourceEntity(77U);
    msg.setDestination(64893U);
    msg.setDestinationEntity(239U);
    msg.groupname.assign("FKNCVEXTJBEXYPORDQXCAIUKADFSWIEPGJULXQSKTF");
    msg.action = 78U;
    msg.grouplist.assign("EHYDYBIZYFJKKICQNEOPIJLPTMLPYFAEQWATWVRGCLXJBWQYCVQYQKLNNDKUYDEIMUQSFXKUFTATBWAWWQUCTXLKFHKORAPHCOEGSDUJPSXZCAEDJZIHINVBUMMOJHSNZVENAHHBAUFHHVATLMOBKGPCGFNSXTWLWD");

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
    msg.setTimeStamp(0.746838780328);
    msg.setSource(21826U);
    msg.setSourceEntity(32U);
    msg.setDestination(27788U);
    msg.setDestinationEntity(151U);
    msg.value = 0.186932368136;
    msg.sys_src = 17372U;

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
    msg.setTimeStamp(0.310579392493);
    msg.setSource(38002U);
    msg.setSourceEntity(206U);
    msg.setDestination(932U);
    msg.setDestinationEntity(71U);
    msg.value = 0.74744729478;
    msg.sys_src = 33158U;

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
    msg.setTimeStamp(0.675210062713);
    msg.setSource(54499U);
    msg.setSourceEntity(96U);
    msg.setDestination(32996U);
    msg.setDestinationEntity(97U);
    msg.value = 0.395136871186;
    msg.sys_src = 39707U;

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
    msg.setTimeStamp(0.804460589924);
    msg.setSource(54778U);
    msg.setSourceEntity(84U);
    msg.setDestination(3967U);
    msg.setDestinationEntity(189U);
    msg.value = 0.195057067507;
    msg.units = 77U;

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
    msg.setTimeStamp(0.647873384574);
    msg.setSource(51617U);
    msg.setSourceEntity(10U);
    msg.setDestination(54869U);
    msg.setDestinationEntity(195U);
    msg.value = 0.443661751769;
    msg.units = 218U;

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
    msg.setTimeStamp(0.904651232967);
    msg.setSource(31652U);
    msg.setSourceEntity(103U);
    msg.setDestination(28762U);
    msg.setDestinationEntity(89U);
    msg.value = 0.935482176428;
    msg.units = 132U;

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
    msg.setTimeStamp(0.855743494372);
    msg.setSource(31883U);
    msg.setSourceEntity(219U);
    msg.setDestination(9334U);
    msg.setDestinationEntity(117U);
    msg.base_lat = 0.846102480448;
    msg.base_lon = 0.16144238459;
    msg.base_time = 0.924511766198;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 18647U;
    tmp_msg_0.priority = 121;
    tmp_msg_0.x = -19430;
    tmp_msg_0.y = 22418;
    tmp_msg_0.z = -6523;
    tmp_msg_0.t = -5205;
    IMC::PathControlState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.path_ref = 2234941332U;
    tmp_tmp_msg_0_0.start_lat = 0.846499620523;
    tmp_tmp_msg_0_0.start_lon = 0.612843189529;
    tmp_tmp_msg_0_0.start_z = 0.547069611806;
    tmp_tmp_msg_0_0.start_z_units = 28U;
    tmp_tmp_msg_0_0.end_lat = 0.473709575439;
    tmp_tmp_msg_0_0.end_lon = 0.0904735694329;
    tmp_tmp_msg_0_0.end_z = 0.310998859788;
    tmp_tmp_msg_0_0.end_z_units = 215U;
    tmp_tmp_msg_0_0.lradius = 0.803017033649;
    tmp_tmp_msg_0_0.flags = 242U;
    tmp_tmp_msg_0_0.x = 0.569723220992;
    tmp_tmp_msg_0_0.y = 0.413012978399;
    tmp_tmp_msg_0_0.z = 0.6831648203;
    tmp_tmp_msg_0_0.vx = 0.333468902864;
    tmp_tmp_msg_0_0.vy = 0.669121555059;
    tmp_tmp_msg_0_0.vz = 0.947093305376;
    tmp_tmp_msg_0_0.course_error = 0.369181900142;
    tmp_tmp_msg_0_0.eta = 3932U;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.396118477612);
    msg.setSource(62571U);
    msg.setSourceEntity(13U);
    msg.setDestination(7686U);
    msg.setDestinationEntity(133U);
    msg.base_lat = 0.606340961233;
    msg.base_lon = 0.591081262396;
    msg.base_time = 0.657985733053;

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
    msg.setTimeStamp(0.622169858216);
    msg.setSource(26389U);
    msg.setSourceEntity(71U);
    msg.setDestination(31991U);
    msg.setDestinationEntity(207U);
    msg.base_lat = 0.35976440163;
    msg.base_lon = 0.236952971898;
    msg.base_time = 0.772304549469;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 31437U;
    tmp_msg_0.destination = 50188U;
    tmp_msg_0.timeout = 0.697488324632;
    IMC::ManeuverControlState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.state = 118U;
    tmp_tmp_msg_0_0.eta = 10558U;
    tmp_tmp_msg_0_0.info.assign("TMOKGHSGFVZLICGLIPCQBLESESALKGFSNAJYJCCDZZVYFTAREWCGZJXIJJGYTNJJRHIPZLZPKRHYGAFK");
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.144150646228);
    msg.setSource(62114U);
    msg.setSourceEntity(54U);
    msg.setDestination(57806U);
    msg.setDestinationEntity(176U);
    msg.base_lat = 0.180008553698;
    msg.base_lon = 0.477413508668;
    msg.base_time = 0.429097368432;
    const char tmp_msg_0[] = {66, -73, 74, -52, 57, 120, -70, 14, -36, -76, 33, 67, 61, -48, 76, -78, -42, -84, -52, 26, -96, -60, -25, 7, 42, -57, 114, 88, -35, -65, 71, -88, 1, 112, -67, 88, 59, -41, -25, -88, -3, -116, 101, 31, 107, 7, 59, 114, 66, -38, -74, 122, -82, -2, 85, -74, -43, 22, 110, -52, 92, 21, -84, -125, -125, -117, -122, 110, 80, 78, -125, 62, -59, 104, -121, -61, 94, 69, -33, 111, -29, -19, 23, -85, -37, -98, -68, 112, 69, -100, -48, 73, -111, 88, 116, -65, -74, 81, 77, 9, 51, -99, -46, 14, -21, -25, -9, 47, -22, -72, -80, 5, -117, 30, 11, 34, 19, 9, -27, -128, 32, -28, 78, 99, 58, 48, 23, -75, -9, -63, 5, 124, -89, 1, 36, 17, -82, -123, -14, 40, 92, 119, -65, 1, 14, -19, -104, 15, 71, -108, 119, 125, 54, 7, -91, -98, 60, -81, -19, -76, 39, -88, -15, -113, 21, 19, 60, 60, -41, -40, -99, 105, -119, -71, 98, -98};
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
    msg.setTimeStamp(0.0978628282157);
    msg.setSource(53242U);
    msg.setSourceEntity(246U);
    msg.setDestination(47439U);
    msg.setDestinationEntity(200U);
    msg.base_lat = 0.488915603167;
    msg.base_lon = 0.235893149437;
    msg.base_time = 0.760052096539;
    const char tmp_msg_0[] = {-34, -97, -82, 48, 107, -68, -89, -49, 2, -57, 35, -23, -56, 77, -73, 119, -98, -46, 25, -119, 74};
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
    msg.setTimeStamp(0.718291581111);
    msg.setSource(46053U);
    msg.setSourceEntity(104U);
    msg.setDestination(55374U);
    msg.setDestinationEntity(91U);
    msg.base_lat = 0.984128596536;
    msg.base_lon = 0.541187546162;
    msg.base_time = 0.277810191917;
    const char tmp_msg_0[] = {121, -41, -72, 79, 36, -91, 34, -45, -64, 49, -15, 7, -108, -83, -48, 109, 112, -45, -14, 70, 10, -52, 74, -27, 54, 0, -67, 49, 64, 90, -79, 116, -70, 28, -108, -119, -39, -61, -113, 120, 39, 25, -95, 64, 118, 69, -95, 64, 78, -77, -25, 34, 104, -107, -43};
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
    msg.setTimeStamp(0.391820475992);
    msg.setSource(61859U);
    msg.setSourceEntity(132U);
    msg.setDestination(30366U);
    msg.setDestinationEntity(37U);
    msg.sys_id = 24224U;
    msg.priority = -61;
    msg.x = 11684;
    msg.y = -12271;
    msg.z = 9093;
    msg.t = -15704;
    IMC::PlanStatistics tmp_msg_0;
    tmp_msg_0.plan_id.assign("YCCVRWLLSKRSJAMLHBJIVOKUVGYQCDFURQJIZAUMTPUAOICYEZSLNDOWIADNVTPJELDFOQGEZKHDTOOSFXOUFPNWTDBZSAHUYQUTTOMDSNCKHXTXYTHZJRCQBNEXWVXKMBQVPJMKLNKHRMTVAWABY");
    tmp_msg_0.type = 186U;
    tmp_msg_0.properties = 103U;
    tmp_msg_0.durations.assign("QOTKFTYMYIURLWPFIWGTGUIDNHOGEGJYQOHRPGPRQSVISUUVHEJVZQVFLVFCZYTMGLZXAOXXKDCGMLVTBRMXKRW");
    tmp_msg_0.distances.assign("QRMVGVIZAIVJPOLRNNAKKGKHLXATFBHEPDUJYKTSVBZWSIRTPSOCWVXRLSBHEHZQMUKKBAFNHUOWIMZMEZOASLVINUBXDHDRFMNJMUITGEYVKLIEYDWLXA");
    tmp_msg_0.actions.assign("GRYJEMBNCTMQBUKOTCYZHGPO");
    tmp_msg_0.fuel.assign("PWZESOFKGXCAZIJFIXGFGALNEHUUTASMPWIHHZFBFVRUUSWUIDAKXQJSVOGJRGRCYZGLDITURMFKALDWHFMSBRUQ");
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
    msg.setTimeStamp(0.87936542819);
    msg.setSource(29842U);
    msg.setSourceEntity(176U);
    msg.setDestination(4140U);
    msg.setDestinationEntity(97U);
    msg.sys_id = 21432U;
    msg.priority = 122;
    msg.x = 21408;
    msg.y = 32375;
    msg.z = 14083;
    msg.t = -5901;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.617108109453;
    tmp_msg_0.lon = 0.477260319953;
    tmp_msg_0.speed = 0.203147596222;
    tmp_msg_0.speed_units = 165U;
    tmp_msg_0.duration = 61878U;
    tmp_msg_0.sys_a = 22830U;
    tmp_msg_0.sys_b = 22331U;
    tmp_msg_0.move_threshold = 0.556271661897;
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
    msg.setTimeStamp(0.894795190956);
    msg.setSource(16402U);
    msg.setSourceEntity(208U);
    msg.setDestination(58122U);
    msg.setDestinationEntity(8U);
    msg.sys_id = 28562U;
    msg.priority = 63;
    msg.x = -29643;
    msg.y = 22695;
    msg.z = -28080;
    msg.t = -26323;
    IMC::OperationalLimits tmp_msg_0;
    tmp_msg_0.mask = 175U;
    tmp_msg_0.max_depth = 0.266155478024;
    tmp_msg_0.min_altitude = 0.767169772657;
    tmp_msg_0.max_altitude = 0.164696121265;
    tmp_msg_0.min_speed = 0.828268360055;
    tmp_msg_0.max_speed = 0.795641776474;
    tmp_msg_0.max_vrate = 0.389826058837;
    tmp_msg_0.lat = 0.826816991776;
    tmp_msg_0.lon = 0.482969990348;
    tmp_msg_0.orientation = 0.0265461561873;
    tmp_msg_0.width = 0.787191182818;
    tmp_msg_0.length = 0.749156452556;
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
    msg.setTimeStamp(0.108583395841);
    msg.setSource(50686U);
    msg.setSourceEntity(58U);
    msg.setDestination(55685U);
    msg.setDestinationEntity(250U);
    msg.req_id = 63326U;
    msg.type = 169U;
    msg.max_size = 60222U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.1506232463;
    tmp_msg_0.base_lon = 0.118826782813;
    tmp_msg_0.base_time = 0.154375938663;
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
    msg.setTimeStamp(0.802821208722);
    msg.setSource(40461U);
    msg.setSourceEntity(250U);
    msg.setDestination(35684U);
    msg.setDestinationEntity(145U);
    msg.req_id = 65429U;
    msg.type = 102U;
    msg.max_size = 20275U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.332906426212;
    tmp_msg_0.base_lon = 0.316169850166;
    tmp_msg_0.base_time = 0.899969515448;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 53638U;
    tmp_tmp_msg_0_0.destination = 46477U;
    tmp_tmp_msg_0_0.timeout = 0.748711211663;
    IMC::DesiredHeadingRate tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.157943452072;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.812940286926);
    msg.setSource(65069U);
    msg.setSourceEntity(180U);
    msg.setDestination(20589U);
    msg.setDestinationEntity(104U);
    msg.req_id = 36627U;
    msg.type = 92U;
    msg.max_size = 35310U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.650353812935;
    tmp_msg_0.base_lon = 0.75830390292;
    tmp_msg_0.base_time = 0.956239922412;
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
    msg.setTimeStamp(0.409613153684);
    msg.setSource(24976U);
    msg.setSourceEntity(97U);
    msg.setDestination(32739U);
    msg.setDestinationEntity(19U);
    msg.original_source = 56500U;
    msg.destination = 39096U;
    msg.timeout = 0.174704564725;
    IMC::RestartSystem tmp_msg_0;
    tmp_msg_0.type = 139U;
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
    msg.setTimeStamp(0.185367501127);
    msg.setSource(47628U);
    msg.setSourceEntity(163U);
    msg.setDestination(1706U);
    msg.setDestinationEntity(28U);
    msg.original_source = 23550U;
    msg.destination = 52956U;
    msg.timeout = 0.708718246892;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 227U;
    tmp_msg_0.lon_gain = 0.371712310045;
    tmp_msg_0.lat_gain = 0.349346803185;
    tmp_msg_0.bond_thick = 0.609611953058;
    tmp_msg_0.lead_gain = 0.0279947020432;
    tmp_msg_0.deconfl_gain = 0.361648565506;
    tmp_msg_0.accel_switch_gain = 0.706904570875;
    tmp_msg_0.safe_dist = 0.571533517438;
    tmp_msg_0.deconflict_offset = 0.317777219076;
    tmp_msg_0.accel_safe_margin = 0.111692578209;
    tmp_msg_0.accel_lim_x = 0.276473020099;
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
    msg.setTimeStamp(0.426332187402);
    msg.setSource(2634U);
    msg.setSourceEntity(83U);
    msg.setDestination(46702U);
    msg.setDestinationEntity(113U);
    msg.original_source = 45584U;
    msg.destination = 27670U;
    msg.timeout = 0.0731006904753;
    IMC::IridiumMsgTx tmp_msg_0;
    tmp_msg_0.req_id = 29100U;
    tmp_msg_0.ttl = 31319U;
    tmp_msg_0.destination.assign("FCNTVXWRVXHSOIKHHMYKJYGFSVSEIZABOELPVGOXMZLAJ");
    const char tmp_tmp_msg_0_0[] = {-73, 79, 46, 15, -15, -111, 55, 53, 29, 114};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.443397024857);
    msg.setSource(62221U);
    msg.setSourceEntity(190U);
    msg.setDestination(28213U);
    msg.setDestinationEntity(29U);
    msg.type = 127U;
    msg.comm_interface = 31086U;
    msg.model = 39329U;
    msg.list.assign("EIKKEJZAVFFWYAHWFDOKTDPNMCPBNBEOSKDQGIZIPVVLWGOWWSNZTJMSNYVZGRUODYKESJWISPWNYTQPANNKCXMZYUHFBFQCCADSMDFRLPPERNJIXYQOQBACWOCARTQMDQBSOZOTAPGSXLMAZFOBYLUZMULJCRENHKSDVMQLHGUIHFJUZVRJXTQKJMXVEVWITCREGSJRYLGILLRJTWHGCXMKTHHT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.550948981128);
    msg.setSource(17965U);
    msg.setSourceEntity(21U);
    msg.setDestination(6487U);
    msg.setDestinationEntity(193U);
    msg.type = 16U;
    msg.comm_interface = 37170U;
    msg.model = 46139U;
    msg.list.assign("SIELQDDYFFXBECTQDANDTTLJRPRBABCHUTMKXMMYBQQTLJODJXUWLRHCRYRGCXIRPSZRUSECIDQMYTXRWVKEHWNGPLASHPVEFOUYGAGGVQUPEPZODGWTPEJVYFSGVBICBZZIWQIWNZKSIANCMKHUBZSHKNZEMUKRLRGTXBKYDFFPEGVHFONSFQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.426905838836);
    msg.setSource(14435U);
    msg.setSourceEntity(148U);
    msg.setDestination(19528U);
    msg.setDestinationEntity(150U);
    msg.type = 84U;
    msg.comm_interface = 58137U;
    msg.model = 59671U;
    msg.list.assign("YHUEDLSWCULESEQDRTJTJIJHIQNTVSDEQLYLVVOQJOXBCRKGVRSDNFNLKKBUYPVSDBHQDKFEBBMKVLFSGNROTAIZGNHRPAFTSWBFBCTXBNAYQXCDXINQAFWRTFUKUCXZDWSOZPZLPVWAGUARZZUSK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.341277183194);
    msg.setSource(19859U);
    msg.setSourceEntity(225U);
    msg.setDestination(56395U);
    msg.setDestinationEntity(250U);
    msg.type = 231U;
    msg.req_id = 1053240273U;
    msg.ttl = 5704U;
    msg.code = 217U;
    msg.destination.assign("HWZHURKTKHSLPHCJJXSNZTMGRKIUOQMWENLSHHYTGNAUUAXJKVWHZMRRLWTZLEYRZOFBOBGBWAEM");
    msg.source.assign("WSINGAXPGUASVZROWVLVYJKTVKIHRUFMSRMDOMRITSEDSVKGNGUHGEENWYLPHSUBWTTCDRQOLHLZLUAXFUMDBCWKPJRQIYYOBEEZ");
    msg.acknowledge = 37U;
    msg.status = 80U;
    const char tmp_msg_0[] = {110, 68, -10, -98, 73, -40, -81, 57, 8, -61, 125, 12, 57, -95, 4, 117, -84, -95, 57, -29, -72, -71, 88, -79, -78, 29, -25, 91, 62, 98, 81, -80, -20, 77, 3, 93, -34, -46, -91, -70, 40, -6, -97, 11, 103, -43, 53, 85, -21, -17, -11, -8, -112, -59, -16, 108, -83, 106, 60, -95, -40, -3, 6, -70, -42, -90, 26, 6, 113, -74, -102, -77, 77, -19, 10, 69, -95, -10, 43, -95, 75, -27, -5, -66, -87, 77, -74, -2, 112, 85, 12, -118, 23, -88, 52, 14, 75, -4, 57, 41, 45, 11, -55, 33, 69, -34, -26, 26, -6, 125, -92, -9, 42, -82, 30, 20, 72, -33, 25, 78, -124, 60, -43, 30, -29, 46, -28, -21, 98, 116, 13, -93, -3, -23, -100, 51, 93, -116, -2, -76, -90, -72, 71, -123, -24, -55, 53, -68, 116, 68, -112, 88, -107, 8, -59, -78, 65, -3, 65, 6, 8, -7, 15, 0, -32, -7, 122, -56, -3, 123, 38, 74, 4, -20, -115, 79, -2, -41, -6, -33, -85, -35, -93, -45, -113, -31, 16, 18, 120, 87, -4, -116, 118, 125, -120, -93, -50, -115, 22, -126, -8, -42, -22, 27, 98, 10, 50, -69, 7, 111, -67, -2, 89, -60, -58, 24, 3, -67, -101, 57, 48, 31, 117, -7, 126, -40, 90, 10, -48, -47, -41, -9, -8, -41, -119, 124, 12, 4, -23, 29, -104, 66, 93, -109, 106};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.548616912428);
    msg.setSource(45599U);
    msg.setSourceEntity(238U);
    msg.setDestination(21704U);
    msg.setDestinationEntity(32U);
    msg.type = 58U;
    msg.req_id = 1917988745U;
    msg.ttl = 61352U;
    msg.code = 165U;
    msg.destination.assign("SFPCHPNJHUMUHZWZOVUWGSRKIMBXOXKNLTQEWIIAFCEH");
    msg.source.assign("FOIRZDFPUBVWIPXYMNMCCYHKSHDQVYPXVUUJWHQLGQWKZHTRAAQRMCRYYXKNOVIJNVHJWZBNTGXADKALDITSNNLHFKCAJXEOZEQJHTPHGXLLOAOOJJATDNQKMTKKDTSFUGSXZDDOEYHRPFMQERFQJPNZQELWHURBGEBSNCWVDZXGAEFRUMIMAFGSLTJTVBSVCBTKKEGROSBVWVRLYIXNIZMPDE");
    msg.acknowledge = 29U;
    msg.status = 71U;
    const char tmp_msg_0[] = {65, -42, 102, 83, -118, 5, 60, 88, -41, 5, -75, -46, -43, 40, -66, -33, 27, -81, 114, -106, -8, -101, 99, -28, -119, 105, -2, 113, -8, -84, 126, 121, 95, 91, 36, 102, 58, -13, -98, -72, 110, -29, -49, -73, 5, -124, 26, 75, -15, -69, 23, 3, 61, 90, -107, 12, 30, 120, 84, -31, 58, 59, 27, 114, -100, -117, -46, -5, 120, 53, -80, -109, -36, -46, -90, -44, 35, -57, -12, 73, 113, 61, 77, -114, 55, -5, 9, -52, -9, -26, 108, 81, -77, 74, -111, -7, -39, -65, 123, -68, -1, 38, -42, -70, 110, -116, -92, -6, -121, -55, 70, 33, -2, 116, -84, 33, -96, -106, 59, -60, 126, -43, -73, 0, -57, -113, 108, 1, 34, 58, 55, 71, -8, 53, -39, -112, 7, 20, 33, 62, -113, -127, 92, 82, 96, 68, 101, 87, -3, -11, -38, 57, -112, 108, 37, -34, 6, -89, 31, 9, 84, -43, 79, 54, 79, 1, 67, 71, -22, 37, 60, 63, 63, 75, -60, 3, -96, 70, -126, -88, 76, -127, -32, -31, -93, -82, -44, 77, -120, -29, 53, 3, 78, -34, 72, 104, 65, 79, -110, 27, 29, 31, 63, -115, 21, -99, -1, -113, 78, -40, -42, -94, -33, -88, 9, 11, -53, -35, 3, 79, 117, -76, 70, 118, 120, 16, 73};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.700973294486);
    msg.setSource(6309U);
    msg.setSourceEntity(11U);
    msg.setDestination(45948U);
    msg.setDestinationEntity(25U);
    msg.type = 18U;
    msg.req_id = 2025670833U;
    msg.ttl = 28203U;
    msg.code = 204U;
    msg.destination.assign("PMKMHBYUTQFARWDXWKFAGZYFUVQYWSVQUGIPZXSOMGUENMHJOLHSDJAKWRYDFIATBUBKOEITDMFRXGOPTCITSJSIEJUBBDINEEYRONQRGNJYUKGCUQDVRLRJYPPPTZNAVXXTLERFTAFLSBFASSTQRZEANHDIZLJCCCWYSIQHKULVMIHCVLWDVOXKBKBAQDXZGGKTGORJNWEGYDPMPZEUBNVXCJHQYZMWOHHZCVLNO");
    msg.source.assign("NVTXJGYTVCZNSCDRBCOUQFYHTFDTRLOUYYBXBWURNFHYTTDFJLPXRNLBBANQDPKXCUMIJCMROOCSKTLQAXEMLQKKMSJQHDINGXYHWADVAYSZZBBWSIWXAWJMUKCEWWEEKOIMDFEPIEHMATQMDUOZPVYZSVDXERLHLQPXLPG");
    msg.acknowledge = 74U;
    msg.status = 118U;
    const char tmp_msg_0[] = {18, -89, -40, 7, 37, -97, 61, 126, -121, 76, -21, 87, -12, 90, -91, -11, 114, 111, 5, -64, 114, -48, 116, 63, -59, -45, 68, -109, -25, 52, 108, -3, 52, 56, -100, 60, -12, -73, 17, -48};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #2", msg == *msg_d);
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
    msg.setTimeStamp(0.792474779928);
    msg.setSource(56508U);
    msg.setSourceEntity(72U);
    msg.setDestination(18072U);
    msg.setDestinationEntity(117U);
    msg.id = 112U;
    msg.range = 0.662511274113;

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
    msg.setTimeStamp(0.300118740493);
    msg.setSource(22801U);
    msg.setSourceEntity(196U);
    msg.setDestination(35328U);
    msg.setDestinationEntity(166U);
    msg.id = 223U;
    msg.range = 0.914205111012;

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
    msg.setTimeStamp(0.855268798661);
    msg.setSource(56304U);
    msg.setSourceEntity(158U);
    msg.setDestination(6706U);
    msg.setDestinationEntity(53U);
    msg.id = 142U;
    msg.range = 0.213965319127;

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
    msg.setTimeStamp(0.732840093771);
    msg.setSource(39326U);
    msg.setSourceEntity(134U);
    msg.setDestination(5331U);
    msg.setDestinationEntity(209U);
    msg.beacon.assign("APCQCEIZBUSCISPJFJIBSHXFDXYQIEMWOBBCPPJHMNTUMHPRFOYRPCUGWDLOERARAALKOQMYALKM");
    msg.lat = 0.895399726965;
    msg.lon = 0.187936564461;
    msg.depth = 0.491221800283;
    msg.query_channel = 199U;
    msg.reply_channel = 195U;
    msg.transponder_delay = 150U;

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
    msg.setTimeStamp(0.47493692836);
    msg.setSource(9302U);
    msg.setSourceEntity(63U);
    msg.setDestination(63707U);
    msg.setDestinationEntity(153U);
    msg.beacon.assign("KYLNXFZLIUMHGVWSYQDXTRWJNWQLKYJEBWLANPJQTYGAXJJFXMZMLXHYISRHKDXJFVHUVGLVAMDPSVFUXPGPRWYLPRTVZBUMJCBSWHUQAOWMRQMKZBEZHFOOGBNUEWEQIIFCDCSCRFCFSONTFZSLMTQRGEECUXLYCOONHSLJNPETTKBOEODAKSAQJSG");
    msg.lat = 0.0916348201901;
    msg.lon = 0.673469176259;
    msg.depth = 0.673456766705;
    msg.query_channel = 236U;
    msg.reply_channel = 80U;
    msg.transponder_delay = 76U;

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
    msg.setTimeStamp(0.815735273946);
    msg.setSource(23561U);
    msg.setSourceEntity(215U);
    msg.setDestination(23420U);
    msg.setDestinationEntity(194U);
    msg.beacon.assign("GONLDZYEWHYAXXNISWLELKHKHDRJDCGSDJFYUVRHBWNZRMVUIPYOOESDGAXSQOGDVSFWMVBPQKUETJNPYSOZRYMELNJRRJPXZSQOCZULKXMUQMGOAPXWZCG");
    msg.lat = 0.603180734161;
    msg.lon = 0.985171548994;
    msg.depth = 0.770809610479;
    msg.query_channel = 233U;
    msg.reply_channel = 120U;
    msg.transponder_delay = 169U;

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
    msg.setTimeStamp(0.425655594044);
    msg.setSource(8659U);
    msg.setSourceEntity(1U);
    msg.setDestination(61002U);
    msg.setDestinationEntity(156U);
    msg.op = 50U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("STENYERGQTDZHBMSJPDTAYSOCLFUCBLJGZPOQBWNFEVGLEQGKRKKTGORWFVROWJARCMBQTEULMQEYRPPVBWNLPRXMHJAIVWPIFISUKIRNCXFCXTWCYHMLUUTAGNQDXGHSIZMLUAFVZLYMFDQEXTDDPHWHBCYXCOMMOV");
    tmp_msg_0.lat = 0.92052864267;
    tmp_msg_0.lon = 0.0624133964107;
    tmp_msg_0.depth = 0.0891063162345;
    tmp_msg_0.query_channel = 64U;
    tmp_msg_0.reply_channel = 242U;
    tmp_msg_0.transponder_delay = 109U;
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
    msg.setTimeStamp(0.534432412294);
    msg.setSource(30275U);
    msg.setSourceEntity(157U);
    msg.setDestination(8174U);
    msg.setDestinationEntity(162U);
    msg.op = 128U;

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
    msg.setTimeStamp(0.721865006111);
    msg.setSource(59457U);
    msg.setSourceEntity(10U);
    msg.setDestination(15868U);
    msg.setDestinationEntity(2U);
    msg.op = 4U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HJLJQXQKVRZINNUCRDXNMRYWSSOJSIEUBQBJMBEVYIZVUGEBEGUCWKRYFNDYQFLFGIJSGMXZJDWTOXGXQXXZJSLAJPKVHAMBWPTNUKUJXTPLYKEZHKMQYTDTFDXMTISUWOKCAOVQUJOTOAWRYVZQGVFBRBDHQGFAZPCAESVOHGAKCBMTRNCRORKYXEEUCOWMHYGFPUTNBINYPLFIGAHVOICDSLP");
    tmp_msg_0.lat = 0.129687330862;
    tmp_msg_0.lon = 0.927139161276;
    tmp_msg_0.depth = 0.809015746364;
    tmp_msg_0.query_channel = 29U;
    tmp_msg_0.reply_channel = 97U;
    tmp_msg_0.transponder_delay = 222U;
    msg.beacons.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.965488941724);
    msg.setSource(26954U);
    msg.setSourceEntity(48U);
    msg.setDestination(35365U);
    msg.setDestinationEntity(86U);
    IMC::GpsNavData tmp_msg_0;
    tmp_msg_0.itow = 3160970149U;
    tmp_msg_0.lat = 0.851469995363;
    tmp_msg_0.lon = 0.272558529459;
    tmp_msg_0.height_ell = 0.040877845911;
    tmp_msg_0.height_sea = 0.476496103513;
    tmp_msg_0.hacc = 0.954368725288;
    tmp_msg_0.vacc = 0.352051780991;
    tmp_msg_0.vel_n = 0.410990609723;
    tmp_msg_0.vel_e = 0.0410513759846;
    tmp_msg_0.vel_d = 0.284801811815;
    tmp_msg_0.speed = 0.201362211161;
    tmp_msg_0.gspeed = 0.707882597346;
    tmp_msg_0.heading = 0.163138939198;
    tmp_msg_0.sacc = 0.474810867929;
    tmp_msg_0.cacc = 0.536229550759;
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
    msg.setTimeStamp(0.907701796591);
    msg.setSource(42612U);
    msg.setSourceEntity(228U);
    msg.setDestination(18811U);
    msg.setDestinationEntity(18U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NWBEDHHEFXIJDERUGOCLFAQHACOZZTOGNOKOUKXSMNEDAQAJLIXYPNBGDUCBNNNHKVQZGLYYCMCHWTGDXHFLYRZIRVVSPSCLEPFAHMJXJSIRGEKXJBBPKYSRVDZKCDBUGEBMAESNZVHZLXVOLJZBKYRUAFSUATLY");
    tmp_msg_0.lat = 0.64874972815;
    tmp_msg_0.lon = 0.220708608083;
    tmp_msg_0.depth = 0.510761538797;
    tmp_msg_0.query_channel = 75U;
    tmp_msg_0.reply_channel = 133U;
    tmp_msg_0.transponder_delay = 123U;
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
    msg.setTimeStamp(0.613587528419);
    msg.setSource(15559U);
    msg.setSourceEntity(194U);
    msg.setDestination(63863U);
    msg.setDestinationEntity(124U);
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ZSKOKSUSZKUEEQHASGADEVEEEDRRSQUBEFAUVHOLZKDYNDLYIBTROYACHIHSDHFLCMNNWHPTKBDUVSXRBIGGMKPPWUFQNLJCWSOLKAWNYCTGRFWT");
    tmp_msg_0.sys_type = 199U;
    tmp_msg_0.owner = 58503U;
    tmp_msg_0.lat = 0.335505673195;
    tmp_msg_0.lon = 0.643254841536;
    tmp_msg_0.height = 0.494379627678;
    tmp_msg_0.services.assign("CGUNKTJSTMHWZPZZDVWOIBGLUMGDSPIAQEIFGLLXWCAUUCFAYQKOEBXLVIH");
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
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.494216691421);
    msg.setSource(44522U);
    msg.setSourceEntity(190U);
    msg.setDestination(24746U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.3182598573;
    msg.lon = 0.690716637998;
    msg.depth = 0.82004820329;
    msg.sentence.assign("NRUTCMSYATMGTZACXSFPMLOMVNMZAMLUESCCLZBGHAIJIETVXPWKUZTDRWYYYCHHKUDRMGQQHRKOSODRABCS");
    msg.txtime = 0.97459076983;
    msg.modem_type.assign("RWKCQQCJZSZMHYDBRGFSBUMFFMUTVBTZNVOLDTHEPXLLAWVRLKYYVRGEECEUKCPDGCHKHTLTFBQYUMNAYAVOJSLLFIJNJBRFVBHOOXSQFIWLQKWJFJRDGGYMAZHSGITURHGJNPEZIQVFAUPEWSQBCZDWMNYVWKXXKITSKOZQAXOZVUODVXWYWNONBKPSJNRBCI");
    msg.sys_src.assign("LGACZPIRJFLPZNDRVCDFGFZLXQBZVTYFEBIAMSSILTLDJXWIQCRFYESWNNRCTFVWMUBOJHBORKNXUEUEMCXBYBWUQIKGKYPKFZROHRTJVRLFQADSUQBDOYUTILNFTRQVAG");
    msg.seq = 4932U;
    msg.sys_dst.assign("ELSMNEZJWNHRJMIPFPPQBUTAVERWSXTEDKCJVXIRLFLMOQTKD");
    msg.flags = 155U;
    const char tmp_msg_0[] = {81, -71, -119, 102, 86, -90, 22, -6, -79, 115, -68, 27, 75, -100, -29, -60, -114, 0, 41, -56, -80, -33, -121, -73, -103, 7, 51, 67, 25, -55, 59, -123, 79, -101, 69, -79, 41, -74, -39, 58, 16, -12, 5, 29, 72, 87, -25, -15, 114, -88, -37, -108, 14, -97, -41, 77, 48, -35, -81, -119, 84, 115, 28, 102, 9, -41, -39, 96, 71, -85, 65, -52, -54, -89, -95, -55, -114, -96, -106, 35, 31, 8, 87, 46, 126, -56, -77, 38, -83, -2, 31, -37, -7, 13, -17, 48, -85, 105, 99, 113, -23, -28, 36, 103, 31, -80, 90, 119, 109, 98, -127, -13, 19, 113, 103, -111, -118, 97, -108, -86, -110, 116, -101, -86, 1, 75, 24, -35, -92, 29, 7, -1, -106, 119, -84, 93, -117, 125, -112, -30, -44, -101, 95, -106, -67, -70, -64, -43, 78, 52, 77, 49, 107, 113, 11, -27, -9, 36, 9};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.597399110232);
    msg.setSource(36634U);
    msg.setSourceEntity(227U);
    msg.setDestination(9329U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.962596354108;
    msg.lon = 0.281093022268;
    msg.depth = 0.3918758346;
    msg.sentence.assign("CMTFHURIEBMWZYAIUKOARMTSOIHVDUONXJSLOQDRGDNCFAEKVATKTFTSYHZFUBCWMDOFWILSIVNSQGKYQNEKBEOKBWIBHQKCGAJYNJVZRZDLVUMNYDCRNBZQNLSLGSCUWRZWPUPWOJPZRQHHTMXQWPDEVITELASBYFEXXDSOEJPHCPBPUGRIPJVHEPQYCXMHNCXTALZGYUFKTMGFMDJUNJCALIYXYXBZQFRFJZWAVGGTQEDL");
    msg.txtime = 0.540505676537;
    msg.modem_type.assign("LOTRFAVPKTQZCJPOTWJWACBVMMAMHFMRSBVAAWPWRZSPXSORIHLNHGSOOOUGEKKAYMBHZBEVOBJXTHHPKLUWVUPNUFEJWMQUCYAAKCITRCDPKYDXCCNXUZHDERVGJNDWWSJJWYCIAIXNDLVUQGXFVFDTEHQGJXVILZQYRKBNIGQYXFNPJTALEDBMQPSMSFKPNJLGIETOHZ");
    msg.sys_src.assign("NTKMAGZRWPBZVZUGRBGJBRJFCRALULMQJONJDQTPUPMTQYNZMLRWKECTWGEZYIWTTNZOMWETCBSYOAXIHHAPIMRAKTVKIHCXALCFDODJAHQFFRPVNEADESKIDJETZQUMVYOOFVMUNFPDPCBFLMYHWEWXHWUGXYJBMLPGNSIRXGOHXUBHXSSIAOICAQCSFBCDUNJYWFSFQLLQEQUTHSKILDVNKVLDSPGRKJXJNYEHDKQYBZIY");
    msg.seq = 16396U;
    msg.sys_dst.assign("OHYCNVPQEPHT");
    msg.flags = 206U;
    const char tmp_msg_0[] = {-15, -64, -109, -38, -104, -88, 14, 108, -49, 112, 43, -50, 21, 106, 7, -23, 44, 105, 48, 95, -79, -122, -47, 10, 105, 32, -6, 48, -113, 76, 25, -68, -104, -44, 125, -22, 87, 109, 70, -31, 0, -104, -14, 53, 93, -107, -62, 28, -50, -18, 32, 30, -71, -107, -108, -39, 27, -63, 126, -100, -43, 95, 49, 65, 20, 53, -87, 118, 115, 84, 3, -86, 28, 124, 107};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.116749401017);
    msg.setSource(9651U);
    msg.setSourceEntity(21U);
    msg.setDestination(49786U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.116496437478;
    msg.lon = 0.930698177969;
    msg.depth = 0.965318660653;
    msg.sentence.assign("WJLFRSMIQKMVOKFGUBRSKCSJVTYSCSMSYFUWFLCXG");
    msg.txtime = 0.244709360355;
    msg.modem_type.assign("OAVKFGDTGIIOAZANDYKRYBODAMWBJLPMWSQHPCFVQQERTSHDKHAAWGJMMDSSZPZEUNMKHKCLXHRIYTILNKDHOVHLQYEOFQKNBUSXVT");
    msg.sys_src.assign("FLTCWWOOUXMJWRPONQFSBICZNBNIAKXXVJAQDOPCMTDKYOWITMEGCDCXPPBXBHRUAHYJLDTQOLPREEXSFMUPAEGCLVSSFWRCAYIMGRZUNZRQUKIBGHHZYSDJPGVUYKYTWNGARFQXWEQAMNQJXZMLVGWSIHJNDODCYJITHFKGWXKTK");
    msg.seq = 15245U;
    msg.sys_dst.assign("MNMABNCVPBWXDNDTFAIPVLFULYTCDIQXU");
    msg.flags = 9U;
    const char tmp_msg_0[] = {3, -80, 80, 11, 93, 78, 1, -34, 114, -21, 15, -56, -100, 104, -99, 59, 26, -113, 23, -121, -55, -94, -127, -102, -73, -18, 89, -68, -81, -15, 23, -102, 92, 118, -54, 70, -34, -108, 11, 43, 41, 95, -49, -119, -125, -16, 9, -8, -13, -27, 56, 117, -14, -104, -126, -67, 101, -12, -69, -94, -36, -12, 84, 58, 55, -117, -85, -85, -21, -71, -11, 40, 60, -94, -117, 45, -86, -39, 74, -77, -125, -99, 102, 70, 13, 100, -16, 76, -14, 67, 112, -2, -99, -47, 118, 89, 64, 96, 46, -18, -96, -106, -85, -118, 88, -111, 93, -86, 32, -76, 99, -117, 13, 60, 109, 17, 4, -72, -44, 109, 47, 103, -57, -97, 27, -85, 99, 28, 25, -121, -34, -112, 85, 79, 13, 120, 50, 40, -73, 50, 0, -66};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #2", msg == *msg_d);
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
    msg.setTimeStamp(0.834478035061);
    msg.setSource(4954U);
    msg.setSourceEntity(240U);
    msg.setDestination(781U);
    msg.setDestinationEntity(32U);
    msg.op = 131U;
    msg.system.assign("OHILAVSXXGNMRCKTLGRXWXMCRZYVIUQCDOWFNUVDTLTBJGKFHRDKBMOAVKTMUUWQYBDJSQPBVNRJNTXHYHZDYJEWCMC");
    msg.range = 0.608359702965;
    IMC::Distance tmp_msg_0;
    tmp_msg_0.validity = 137U;
    IMC::BeamConfig tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beam_width = 0.398199900889;
    tmp_tmp_msg_0_0.beam_height = 0.191416357166;
    tmp_msg_0.beam_config.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.value = 0.621019365015;
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
    msg.setTimeStamp(0.442151419645);
    msg.setSource(51060U);
    msg.setSourceEntity(197U);
    msg.setDestination(9269U);
    msg.setDestinationEntity(247U);
    msg.op = 195U;
    msg.system.assign("XMZUFGERPIONJVRYDBONFCDHKEAFMQYWFXFOZQZXWWTQEDITZYWAEXHLTSQTUBOLDIVKNGLTJYIIJICJSKCPUZPDDVJCNCGRSGLHFTVLQFUYRIAXQARRJSPVJLHQZKSRACDNEGVJNVVEGBARBASKPHVPGXBPPOOABSHFWOLFBGHIZYDWCUTKCQULBSUZMRDAMWWIBNMBLUPWGNUHYYVKHJRXNHYKMZOT");
    msg.range = 0.0337635711704;
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 81U;
    tmp_msg_0.snapshot.assign("PMGPSCOMKAQXTVUUIZZRPMTGPPASZDLTPTDFOXNGLUJARPCTJFHOHYNBLHHYWEQXUKTDSYAEWFCRDMLWSOBEMXSABFJJIDLDOPHRASJWHFMHQHKGLIYIWYCVUZSKEZBUDVNWVBULUIVNEXXQINTJGLQNRTTIIFHMAIVRZGWMQUROEJLMVXBEKDLQKSRAPZOYJDR");
    IMC::Depth tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.96725620977;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.126748889898);
    msg.setSource(26255U);
    msg.setSourceEntity(71U);
    msg.setDestination(59539U);
    msg.setDestinationEntity(150U);
    msg.op = 157U;
    msg.system.assign("EMWBTYGNHBCQRDPVAEVBPWSAPKIBXVUIKCTKIJLRGYYLCDHYEJHXDRIPDWMNIFEGOIIGPATJHXSXTOCMQSYBRKFPQXQMYAZAXUAJSIOVQRWWLEOXPMCHVOFGWMMJBFODZVGCAELFGLOPBTZMYUSFKFBEEEANTZOFDAZTSULQDTHPHWUSZNQURGWUKCDNGVKSBYJ");
    msg.range = 0.868063486884;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 43980U;
    tmp_msg_0.name.assign("NAHRZGZAAXDAOLAKEZZKMCFVTKPFYUDNJRQRLIUHIPZCKFHBDPBHXYWVGBLJVJQLYSXPCDYQNFSNMRZOFREXSLECFXCCRIKGCGWDBNRZWKVZJOO");
    tmp_msg_0.custom.assign("EQVTOOFWQDHHNSBYQTJENYDXRPLBVEARKESGBJZAURMUBPTAUPMDEHTKXXDVAMNUMFRJANBKHNLFVU");
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
    msg.setTimeStamp(0.781144865492);
    msg.setSource(40403U);
    msg.setSourceEntity(43U);
    msg.setDestination(60427U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.347681188734);
    msg.setSource(10738U);
    msg.setSourceEntity(90U);
    msg.setDestination(26683U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.419018703867);
    msg.setSource(23554U);
    msg.setSourceEntity(91U);
    msg.setDestination(65110U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.14203123143);
    msg.setSource(65225U);
    msg.setSourceEntity(250U);
    msg.setDestination(57051U);
    msg.setDestinationEntity(139U);
    msg.list.assign("SUVIBWEZJOOGWCSZBJMCCGYXWDEDEZRWFXXXXVHDXFPTNVYHKLLZOMEFEELMDFQTKGUASVTOIZAXYLCPIPVGHNHOFYKOLGMSNCNLHCWBSBYRMVCJILIHVWZSGUZKAUKYQEBJFSVQHFLJKPKOJWHBMGLHSAJRIMMENQCRJGPBRCUYABTDNYAWFBPUVOKXYZUGFAAPBGUQFQJRTJWTDIA");

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
    msg.setTimeStamp(0.26049807624);
    msg.setSource(53954U);
    msg.setSourceEntity(123U);
    msg.setDestination(55268U);
    msg.setDestinationEntity(147U);
    msg.list.assign("QYGTCKSNIIZZGLXYIFWSOQFKWTZEHJXIQNUOLGCFYHOBQEXOCKGBNEFDCRDNHAWIMLVSDFBHTTDSNHRUKSJEFRFNLGEOZZPTTMDALCIKSNXRRLUPAUIAGSNIVMKWGMPWEYPVAUXLVXATVYTJWVEDBOQREMVRZZLVZKFBTOZQUYAIYPGQPJCWBDKGCCJGBOTROYYPPJHXCFOUNUHMDVHUSXJKKIADQMZERLWLECJSMPMAMDBJHPRHVBXAQBNS");

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
    msg.setTimeStamp(0.317949275415);
    msg.setSource(196U);
    msg.setSourceEntity(23U);
    msg.setDestination(63532U);
    msg.setDestinationEntity(148U);
    msg.list.assign("AKHADJFNJEAQMVGVWLIKANGKPXPSKMPODOLIRQMRUQNTCGXSZFNGYENPKTDLUVCWDY");

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
    msg.setTimeStamp(0.538772587433);
    msg.setSource(43027U);
    msg.setSourceEntity(34U);
    msg.setDestination(60595U);
    msg.setDestinationEntity(168U);
    msg.peer.assign("OOHXRRMDSQCIOSAARWRLCNQPGMHSPGLFQDKBXFETTKLNUYBKOSWZONMLJJEQQIKVEWIXCWZPGVNZEBVHQXSIOXAKYGEZMRAVHXXTCJHTVKUJALBADUCAOSBUODJMIVXUISZPFVHGCUEENEWQNGVUJDWYFNLEMZSITHAMWYNQBRTYOCVMSXLAIKBQFP");
    msg.rssi = 0.578623283173;
    msg.integrity = 35755U;

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
    msg.setTimeStamp(0.642432335105);
    msg.setSource(14391U);
    msg.setSourceEntity(180U);
    msg.setDestination(26705U);
    msg.setDestinationEntity(82U);
    msg.peer.assign("SRVIMMBHRGANCCYCMPQIBINEFNPHJAUPTZALCQDYUVPWLQKVCRMV");
    msg.rssi = 0.263468008911;
    msg.integrity = 13226U;

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
    msg.setTimeStamp(0.0134391298779);
    msg.setSource(1423U);
    msg.setSourceEntity(41U);
    msg.setDestination(11849U);
    msg.setDestinationEntity(39U);
    msg.peer.assign("INEUFSSXNRXDLXZUANUFRBBEAKCQTKGGBIDWKDBMUIYFJAJHGTQVPKKQZYOPXAPRFCSMXFUOPDOJYRGFPHNZYHRMLAISCCVLVWZVHIWSDLJBAOQWGVEBBLESJJGOEYYVSMTOCWRBSE");
    msg.rssi = 0.0611282396791;
    msg.integrity = 27025U;

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
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.00629618694762);
    msg.setSource(32350U);
    msg.setSourceEntity(59U);
    msg.setDestination(58751U);
    msg.setDestinationEntity(97U);
    msg.req_id = 32330U;
    msg.destination.assign("AIJSJGVRJXRGYDIEXWKQYTDTOZLRCVIQMICWQYNMNEAOMAROCXUCYXHUZETKBACSHWBUWRTLOZCSTUBTQPHMQMSTAPOCSIOLQYEFYGQGXKOEBNMGHRZIKWZFWNPDSXROJCHRQBUJUKWAFVMPDNPPLHPEJNRLFHMLCNGJMPVGBJKLDYJDVZWLITUTXZGZONPUZDOHRHSUUBVANQQVYEHZJXFLATEYWIBSBPF");
    msg.timeout = 0.588534986795;
    msg.range = 0.465142351676;
    msg.type = 232U;
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.889985723932;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.174115997664);
    msg.setSource(11884U);
    msg.setSourceEntity(126U);
    msg.setDestination(6171U);
    msg.setDestinationEntity(26U);
    msg.req_id = 37363U;
    msg.destination.assign("LSBLQQYIPZYQNSRZAVNRIZLTPWBVHIZCWRFHEWWTGJZIWYIGNVABWZNYTDTMRWXNPKZTKAZQMHWDRCEFDVRAFGTKWIFCEGMFHBBGIAOYCEJCTHBPHCXMPHKOPMHYOKEEXDSQQROVPLNNUULATOUSGQLMHYIXVJMJVNZXAXFLKSBMOJVDPKUMILFUGOWXEFRDD");
    msg.timeout = 0.737496748292;
    msg.range = 0.187312009443;
    msg.type = 118U;
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("NEKFALDCMQQWZC");
    tmp_msg_0.sys_type = 145U;
    tmp_msg_0.owner = 61603U;
    tmp_msg_0.lat = 0.578024281154;
    tmp_msg_0.lon = 0.683259750631;
    tmp_msg_0.height = 0.926818972856;
    tmp_msg_0.services.assign("XFPNPEXYZETXAAAYSIEGQZPIVWTKGMVACZRFHKDXXWQBJLXNFTHQOMNMTFATCVNUCPMSVOAWDDZQONGLEKIUUXLEPIKCMODLCIWDCBVKVIEGBRGKJRNYBBQPVJHBTSRWSMHLSZJZDMUXLJVOYIJRIUSUOGRRAYCJSSWOFYBLZUUOXTQVNLBABKDGHCNFYDFI");
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.496459974663);
    msg.setSource(5106U);
    msg.setSourceEntity(225U);
    msg.setDestination(22384U);
    msg.setDestinationEntity(80U);
    msg.req_id = 22317U;
    msg.destination.assign("AZYXKFCXOMQVHNJETPCVHEKABURWQIMDDTPSLVBMGHURTXBZYGYRBSEOPOCZKFIKBJSMFUUPCIIVOQCSPNMGGLLNNZVOCQWGPNNIBYYKYQGRKQKMGZZKXALDNKYHGDEEIDJHVTQMFSZBXMFLTXJDURDJHFIAFN");
    msg.timeout = 0.135460702274;
    msg.range = 0.357596403085;
    msg.type = 85U;
    IMC::AcousticSystems tmp_msg_0;
    tmp_msg_0.list.assign("KUSRFWPPQXSNEJKBDRXVYTWZYFASUEIAWMROIGXLGDWSYWPRLOAZSVJYPLITITWMXEZLIIPVEKGGHYMGCSRUGQYMTCZ");
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.434540697506);
    msg.setSource(8311U);
    msg.setSourceEntity(47U);
    msg.setDestination(38821U);
    msg.setDestinationEntity(148U);
    msg.req_id = 42680U;
    msg.type = 132U;
    msg.status = 106U;
    msg.info.assign("ARORNQJPWYJCZDWGPLJFGZRGDMEFYLLKYICZXBOSPBCZENLDKCKHVFBXCXHTUJFDDGSYNBTCGOJWYHOSPFAKOZRCWKXKGECVVHMQ");
    msg.range = 0.958262276229;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.629787914018);
    msg.setSource(32058U);
    msg.setSourceEntity(31U);
    msg.setDestination(33026U);
    msg.setDestinationEntity(7U);
    msg.req_id = 28749U;
    msg.type = 30U;
    msg.status = 172U;
    msg.info.assign("BYQSOJUJQQNERLVMVKGJYXRUQNDQWZAXPZPLJQYDXZGVNOUWETIIHLMIXFPODASTPUGODHOWPYHIGKAULTNFKLENMRLZSHZFJBFCBYJUGWUKRYFMVVASMPCAWEBLHYIDJDYLIAWUXOSOQZRHUBLRZQXTPLVPKSBKMJXDVOOFSFPNXTNVDMAHFWWRVCDCIKNEIZHQZKVHSASDNZBECRNQWEEFJXT");
    msg.range = 0.00748773477977;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.227195000945);
    msg.setSource(1466U);
    msg.setSourceEntity(192U);
    msg.setDestination(2451U);
    msg.setDestinationEntity(70U);
    msg.req_id = 43098U;
    msg.type = 90U;
    msg.status = 100U;
    msg.info.assign("WKSPVGUQDDCCRFHPFQAURSLBFHSKGBDNNEWIEBYQAZIQNRDIPEVVMXWMEXZFZJFXSMWPYZWVQTOYHTLACCCTHUSHAUXVUMBDFNFNYUHRBTKOFRELJKXPNGHBIVSOYPLXDJCGWUJZMLDGAAQBPKIHUTAVTTPZ");
    msg.range = 0.931622052531;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #2", msg == *msg_d);
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
    msg.setTimeStamp(0.520346584686);
    msg.setSource(32375U);
    msg.setSourceEntity(115U);
    msg.setDestination(64676U);
    msg.setDestinationEntity(159U);
    msg.value = -7319;

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
    msg.setTimeStamp(0.587306271265);
    msg.setSource(45348U);
    msg.setSourceEntity(211U);
    msg.setDestination(3345U);
    msg.setDestinationEntity(235U);
    msg.value = -11392;

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
    msg.setTimeStamp(0.754665924318);
    msg.setSource(15117U);
    msg.setSourceEntity(164U);
    msg.setDestination(58515U);
    msg.setDestinationEntity(236U);
    msg.value = 11035;

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
    msg.setTimeStamp(0.96446485186);
    msg.setSource(36339U);
    msg.setSourceEntity(30U);
    msg.setDestination(29527U);
    msg.setDestinationEntity(82U);
    msg.value = 0.916404022109;

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
    msg.setTimeStamp(0.0697551857875);
    msg.setSource(14891U);
    msg.setSourceEntity(197U);
    msg.setDestination(28864U);
    msg.setDestinationEntity(166U);
    msg.value = 0.783372833646;

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
    msg.setTimeStamp(0.733127248181);
    msg.setSource(9996U);
    msg.setSourceEntity(6U);
    msg.setDestination(44062U);
    msg.setDestinationEntity(97U);
    msg.value = 0.244867004942;

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
    msg.setTimeStamp(0.200233491584);
    msg.setSource(34477U);
    msg.setSourceEntity(217U);
    msg.setDestination(5654U);
    msg.setDestinationEntity(234U);
    msg.value = 0.372529378265;

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
    msg.setTimeStamp(0.130053750114);
    msg.setSource(21171U);
    msg.setSourceEntity(159U);
    msg.setDestination(17U);
    msg.setDestinationEntity(177U);
    msg.value = 0.00392102599364;

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
    msg.setTimeStamp(0.549480619029);
    msg.setSource(29411U);
    msg.setSourceEntity(104U);
    msg.setDestination(16390U);
    msg.setDestinationEntity(56U);
    msg.value = 0.157467471946;

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
    msg.setTimeStamp(0.312449366083);
    msg.setSource(6368U);
    msg.setSourceEntity(174U);
    msg.setDestination(22387U);
    msg.setDestinationEntity(146U);
    msg.validity = 54502U;
    msg.type = 157U;
    msg.utc_year = 19077U;
    msg.utc_month = 69U;
    msg.utc_day = 29U;
    msg.utc_time = 0.596200728722;
    msg.lat = 0.487905547334;
    msg.lon = 0.0607933181581;
    msg.height = 0.407994828844;
    msg.satellites = 38U;
    msg.cog = 0.490767269971;
    msg.sog = 0.770017904745;
    msg.hdop = 0.580131054235;
    msg.vdop = 0.542148813876;
    msg.hacc = 0.527195698202;
    msg.vacc = 0.304680291662;

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
    msg.setTimeStamp(0.93582918032);
    msg.setSource(28941U);
    msg.setSourceEntity(107U);
    msg.setDestination(790U);
    msg.setDestinationEntity(132U);
    msg.validity = 7046U;
    msg.type = 120U;
    msg.utc_year = 12727U;
    msg.utc_month = 7U;
    msg.utc_day = 69U;
    msg.utc_time = 0.236409957017;
    msg.lat = 0.433593041893;
    msg.lon = 0.310950533015;
    msg.height = 0.255004991631;
    msg.satellites = 60U;
    msg.cog = 0.0853614686425;
    msg.sog = 0.18266370162;
    msg.hdop = 0.390471896908;
    msg.vdop = 0.301014875479;
    msg.hacc = 0.568787456965;
    msg.vacc = 0.923075928405;

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
    msg.setTimeStamp(0.892001115776);
    msg.setSource(19595U);
    msg.setSourceEntity(235U);
    msg.setDestination(26415U);
    msg.setDestinationEntity(207U);
    msg.validity = 31991U;
    msg.type = 86U;
    msg.utc_year = 13337U;
    msg.utc_month = 216U;
    msg.utc_day = 149U;
    msg.utc_time = 0.344856286047;
    msg.lat = 0.653707581981;
    msg.lon = 0.213283458987;
    msg.height = 0.227536565919;
    msg.satellites = 22U;
    msg.cog = 0.42537686458;
    msg.sog = 0.114223676996;
    msg.hdop = 0.287009625344;
    msg.vdop = 0.560056108622;
    msg.hacc = 0.242265167971;
    msg.vacc = 0.821046367473;

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
    msg.setTimeStamp(0.78766963409);
    msg.setSource(53754U);
    msg.setSourceEntity(229U);
    msg.setDestination(50266U);
    msg.setDestinationEntity(208U);
    msg.time = 0.783105482206;
    msg.phi = 0.630066856158;
    msg.theta = 0.843903035364;
    msg.psi = 0.525067459709;
    msg.psi_magnetic = 0.785125463909;

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
    msg.setTimeStamp(0.135809226446);
    msg.setSource(64055U);
    msg.setSourceEntity(54U);
    msg.setDestination(55487U);
    msg.setDestinationEntity(3U);
    msg.time = 0.56216860757;
    msg.phi = 0.119920002925;
    msg.theta = 0.0247998467617;
    msg.psi = 0.888190173422;
    msg.psi_magnetic = 0.281975471583;

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
    msg.setTimeStamp(0.0651462564617);
    msg.setSource(3871U);
    msg.setSourceEntity(25U);
    msg.setDestination(18889U);
    msg.setDestinationEntity(27U);
    msg.time = 0.111673995432;
    msg.phi = 0.00591263514074;
    msg.theta = 0.1351928234;
    msg.psi = 0.430041852609;
    msg.psi_magnetic = 0.736988542252;

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
    msg.setTimeStamp(0.44526953715);
    msg.setSource(55852U);
    msg.setSourceEntity(231U);
    msg.setDestination(55933U);
    msg.setDestinationEntity(102U);
    msg.time = 0.41971902895;
    msg.x = 0.0984263021614;
    msg.y = 0.950063641713;
    msg.z = 0.43067576089;
    msg.timestep = 0.21000922481;

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
    msg.setTimeStamp(0.898013268762);
    msg.setSource(11810U);
    msg.setSourceEntity(51U);
    msg.setDestination(34401U);
    msg.setDestinationEntity(49U);
    msg.time = 0.250526206754;
    msg.x = 0.242238066249;
    msg.y = 0.580953886144;
    msg.z = 0.029312602851;
    msg.timestep = 0.216269833194;

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
    msg.setTimeStamp(0.761845731549);
    msg.setSource(38780U);
    msg.setSourceEntity(22U);
    msg.setDestination(8568U);
    msg.setDestinationEntity(247U);
    msg.time = 0.339833053124;
    msg.x = 0.28916811279;
    msg.y = 0.852699622046;
    msg.z = 0.233607124018;
    msg.timestep = 0.624539381625;

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
    msg.setTimeStamp(0.765614716761);
    msg.setSource(10193U);
    msg.setSourceEntity(194U);
    msg.setDestination(30471U);
    msg.setDestinationEntity(106U);
    msg.time = 0.391511261456;
    msg.x = 0.447267261105;
    msg.y = 0.127186831342;
    msg.z = 0.965841271948;

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
    msg.setTimeStamp(0.618495797935);
    msg.setSource(60287U);
    msg.setSourceEntity(212U);
    msg.setDestination(52305U);
    msg.setDestinationEntity(163U);
    msg.time = 0.792917334431;
    msg.x = 0.657624092783;
    msg.y = 0.652230294728;
    msg.z = 0.688306969612;

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
    msg.setTimeStamp(0.69488062085);
    msg.setSource(28449U);
    msg.setSourceEntity(245U);
    msg.setDestination(36680U);
    msg.setDestinationEntity(83U);
    msg.time = 0.51590816061;
    msg.x = 0.956758076142;
    msg.y = 0.833703087157;
    msg.z = 0.711835417053;

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
    msg.setTimeStamp(0.488213009581);
    msg.setSource(37569U);
    msg.setSourceEntity(161U);
    msg.setDestination(47006U);
    msg.setDestinationEntity(36U);
    msg.time = 0.306111551531;
    msg.x = 0.84595424585;
    msg.y = 0.508854062508;
    msg.z = 0.703883443909;

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
    msg.setTimeStamp(0.32405402071);
    msg.setSource(45849U);
    msg.setSourceEntity(43U);
    msg.setDestination(35075U);
    msg.setDestinationEntity(49U);
    msg.time = 0.295881897771;
    msg.x = 0.176012561658;
    msg.y = 0.486411007973;
    msg.z = 0.669434778125;

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
    msg.setTimeStamp(0.271980334127);
    msg.setSource(3858U);
    msg.setSourceEntity(82U);
    msg.setDestination(20547U);
    msg.setDestinationEntity(168U);
    msg.time = 0.901982471495;
    msg.x = 0.0111715680336;
    msg.y = 0.287898656766;
    msg.z = 0.642888910587;

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
    msg.setTimeStamp(0.719152662446);
    msg.setSource(17197U);
    msg.setSourceEntity(70U);
    msg.setDestination(41350U);
    msg.setDestinationEntity(122U);
    msg.time = 0.89112632422;
    msg.x = 0.302815094644;
    msg.y = 0.546533940968;
    msg.z = 0.294309061364;

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
    msg.setTimeStamp(0.0924038511295);
    msg.setSource(42052U);
    msg.setSourceEntity(31U);
    msg.setDestination(46420U);
    msg.setDestinationEntity(106U);
    msg.time = 0.906155910291;
    msg.x = 0.366043407819;
    msg.y = 0.0868394542398;
    msg.z = 0.295168203086;

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
    msg.setTimeStamp(0.581105247873);
    msg.setSource(59305U);
    msg.setSourceEntity(202U);
    msg.setDestination(30266U);
    msg.setDestinationEntity(39U);
    msg.time = 0.259486521037;
    msg.x = 0.896774079429;
    msg.y = 0.167254013002;
    msg.z = 0.436445596632;

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
    msg.setTimeStamp(0.582747842726);
    msg.setSource(48381U);
    msg.setSourceEntity(78U);
    msg.setDestination(22783U);
    msg.setDestinationEntity(101U);
    msg.validity = 89U;
    msg.x = 0.0458662647758;
    msg.y = 0.0430216310484;
    msg.z = 0.739154058057;

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
    msg.setTimeStamp(0.497656874586);
    msg.setSource(47943U);
    msg.setSourceEntity(137U);
    msg.setDestination(60557U);
    msg.setDestinationEntity(248U);
    msg.validity = 59U;
    msg.x = 0.531205493434;
    msg.y = 0.157782189814;
    msg.z = 0.44400967175;

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
    msg.setTimeStamp(0.196668122115);
    msg.setSource(13410U);
    msg.setSourceEntity(107U);
    msg.setDestination(9281U);
    msg.setDestinationEntity(162U);
    msg.validity = 212U;
    msg.x = 0.27883837581;
    msg.y = 0.996560807945;
    msg.z = 0.805998614488;

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
    msg.setTimeStamp(0.497092957239);
    msg.setSource(57964U);
    msg.setSourceEntity(72U);
    msg.setDestination(8492U);
    msg.setDestinationEntity(146U);
    msg.validity = 55U;
    msg.x = 0.768430376521;
    msg.y = 0.423127541707;
    msg.z = 0.46899271666;

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
    msg.setTimeStamp(0.889039000166);
    msg.setSource(2578U);
    msg.setSourceEntity(149U);
    msg.setDestination(59392U);
    msg.setDestinationEntity(48U);
    msg.validity = 151U;
    msg.x = 0.175668261065;
    msg.y = 0.730119979916;
    msg.z = 0.885000440125;

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
    msg.setTimeStamp(0.0447936821654);
    msg.setSource(45254U);
    msg.setSourceEntity(80U);
    msg.setDestination(46346U);
    msg.setDestinationEntity(93U);
    msg.validity = 71U;
    msg.x = 0.942202392276;
    msg.y = 0.0466887780351;
    msg.z = 0.395782399285;

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
    msg.setTimeStamp(0.861888204276);
    msg.setSource(50035U);
    msg.setSourceEntity(49U);
    msg.setDestination(2683U);
    msg.setDestinationEntity(245U);
    msg.time = 0.872669552861;
    msg.x = 0.864055012716;
    msg.y = 0.955438781392;
    msg.z = 0.287722192384;

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
    msg.setTimeStamp(0.0422063496637);
    msg.setSource(25408U);
    msg.setSourceEntity(232U);
    msg.setDestination(36369U);
    msg.setDestinationEntity(240U);
    msg.time = 0.649121795326;
    msg.x = 0.501135360079;
    msg.y = 0.412312324792;
    msg.z = 0.356419461256;

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
    msg.setTimeStamp(0.856834039201);
    msg.setSource(29506U);
    msg.setSourceEntity(245U);
    msg.setDestination(21216U);
    msg.setDestinationEntity(223U);
    msg.time = 0.955758776158;
    msg.x = 0.99311701384;
    msg.y = 0.208608771077;
    msg.z = 0.708165525853;

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
    msg.setTimeStamp(0.609559396503);
    msg.setSource(55107U);
    msg.setSourceEntity(24U);
    msg.setDestination(36961U);
    msg.setDestinationEntity(116U);
    msg.validity = 155U;
    msg.value = 0.369428754763;

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
    msg.setTimeStamp(0.537161345386);
    msg.setSource(1422U);
    msg.setSourceEntity(33U);
    msg.setDestination(37387U);
    msg.setDestinationEntity(25U);
    msg.validity = 179U;
    msg.value = 0.975005450573;

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
    msg.setTimeStamp(0.56306472094);
    msg.setSource(44912U);
    msg.setSourceEntity(43U);
    msg.setDestination(19380U);
    msg.setDestinationEntity(36U);
    msg.validity = 203U;
    msg.value = 0.43420112955;

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
    msg.setTimeStamp(0.499391959879);
    msg.setSource(57585U);
    msg.setSourceEntity(109U);
    msg.setDestination(14521U);
    msg.setDestinationEntity(160U);
    msg.value = 0.665929341808;

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
    msg.setTimeStamp(0.113486419031);
    msg.setSource(55186U);
    msg.setSourceEntity(89U);
    msg.setDestination(39017U);
    msg.setDestinationEntity(101U);
    msg.value = 0.392793315019;

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
    msg.setTimeStamp(0.0797155449981);
    msg.setSource(20402U);
    msg.setSourceEntity(120U);
    msg.setDestination(39669U);
    msg.setDestinationEntity(138U);
    msg.value = 0.0597606305498;

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
    msg.setTimeStamp(0.978127917283);
    msg.setSource(4714U);
    msg.setSourceEntity(63U);
    msg.setDestination(51371U);
    msg.setDestinationEntity(53U);
    msg.value = 0.952806578886;

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
    msg.setTimeStamp(0.0626285007115);
    msg.setSource(3426U);
    msg.setSourceEntity(238U);
    msg.setDestination(49419U);
    msg.setDestinationEntity(136U);
    msg.value = 0.920970644089;

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
    msg.setTimeStamp(0.858182996101);
    msg.setSource(63550U);
    msg.setSourceEntity(27U);
    msg.setDestination(54506U);
    msg.setDestinationEntity(36U);
    msg.value = 0.631050816895;

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
    msg.setTimeStamp(0.362187045964);
    msg.setSource(11712U);
    msg.setSourceEntity(208U);
    msg.setDestination(18477U);
    msg.setDestinationEntity(138U);
    msg.value = 0.453590439339;

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
    msg.setTimeStamp(0.558714186761);
    msg.setSource(28313U);
    msg.setSourceEntity(38U);
    msg.setDestination(56486U);
    msg.setDestinationEntity(125U);
    msg.value = 0.792787059501;

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
    msg.setTimeStamp(0.511935362456);
    msg.setSource(39980U);
    msg.setSourceEntity(18U);
    msg.setDestination(3786U);
    msg.setDestinationEntity(194U);
    msg.value = 0.475818063938;

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
    msg.setTimeStamp(0.103449320212);
    msg.setSource(28604U);
    msg.setSourceEntity(231U);
    msg.setDestination(9646U);
    msg.setDestinationEntity(9U);
    msg.value = 0.29341092617;

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
    msg.setTimeStamp(0.324199866889);
    msg.setSource(24688U);
    msg.setSourceEntity(106U);
    msg.setDestination(28278U);
    msg.setDestinationEntity(33U);
    msg.value = 0.671372781102;

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
    msg.setTimeStamp(0.0134332001394);
    msg.setSource(61161U);
    msg.setSourceEntity(182U);
    msg.setDestination(15818U);
    msg.setDestinationEntity(93U);
    msg.value = 0.208921603767;

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
    msg.setTimeStamp(0.456069129124);
    msg.setSource(1821U);
    msg.setSourceEntity(99U);
    msg.setDestination(58082U);
    msg.setDestinationEntity(71U);
    msg.value = 0.160548293449;

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
    msg.setTimeStamp(0.883679094174);
    msg.setSource(13478U);
    msg.setSourceEntity(5U);
    msg.setDestination(36121U);
    msg.setDestinationEntity(234U);
    msg.value = 0.216261118813;

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
    msg.setTimeStamp(0.962157435104);
    msg.setSource(38090U);
    msg.setSourceEntity(220U);
    msg.setDestination(6606U);
    msg.setDestinationEntity(97U);
    msg.value = 0.0747644460991;

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
    msg.setTimeStamp(0.83559722007);
    msg.setSource(55828U);
    msg.setSourceEntity(12U);
    msg.setDestination(29701U);
    msg.setDestinationEntity(54U);
    msg.value = 0.377938165684;

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
    msg.setTimeStamp(0.209722162772);
    msg.setSource(53998U);
    msg.setSourceEntity(162U);
    msg.setDestination(7277U);
    msg.setDestinationEntity(174U);
    msg.value = 0.284963647475;

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
    msg.setTimeStamp(0.00690470371209);
    msg.setSource(49997U);
    msg.setSourceEntity(201U);
    msg.setDestination(35384U);
    msg.setDestinationEntity(180U);
    msg.value = 0.071863306822;

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
    msg.setTimeStamp(0.883422305327);
    msg.setSource(9371U);
    msg.setSourceEntity(192U);
    msg.setDestination(4996U);
    msg.setDestinationEntity(108U);
    msg.value = 0.581408207364;

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
    msg.setTimeStamp(0.293429638581);
    msg.setSource(14263U);
    msg.setSourceEntity(198U);
    msg.setDestination(35413U);
    msg.setDestinationEntity(208U);
    msg.value = 0.478673171618;

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
    msg.setTimeStamp(0.363987494891);
    msg.setSource(13900U);
    msg.setSourceEntity(43U);
    msg.setDestination(17495U);
    msg.setDestinationEntity(200U);
    msg.value = 0.424031729649;

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
    msg.setTimeStamp(0.0481712515248);
    msg.setSource(28098U);
    msg.setSourceEntity(75U);
    msg.setDestination(41671U);
    msg.setDestinationEntity(241U);
    msg.value = 0.273482420471;

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
    msg.setTimeStamp(0.84120229031);
    msg.setSource(14781U);
    msg.setSourceEntity(148U);
    msg.setDestination(1136U);
    msg.setDestinationEntity(197U);
    msg.value = 0.730197164775;

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
    msg.setTimeStamp(0.9604118681);
    msg.setSource(26508U);
    msg.setSourceEntity(128U);
    msg.setDestination(10162U);
    msg.setDestinationEntity(76U);
    msg.value = 0.00964460965584;

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
    msg.setTimeStamp(0.998287862146);
    msg.setSource(34263U);
    msg.setSourceEntity(179U);
    msg.setDestination(5876U);
    msg.setDestinationEntity(72U);
    msg.direction = 0.0713906470963;
    msg.speed = 0.32139019303;
    msg.turbulence = 0.394688462265;

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
    msg.setTimeStamp(0.769915100952);
    msg.setSource(7507U);
    msg.setSourceEntity(162U);
    msg.setDestination(1857U);
    msg.setDestinationEntity(72U);
    msg.direction = 0.500085287131;
    msg.speed = 0.46503266852;
    msg.turbulence = 0.845733791494;

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
    msg.setTimeStamp(0.201563128463);
    msg.setSource(3431U);
    msg.setSourceEntity(250U);
    msg.setDestination(14945U);
    msg.setDestinationEntity(207U);
    msg.direction = 0.218615868494;
    msg.speed = 0.253068269542;
    msg.turbulence = 0.378752329973;

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
    msg.setTimeStamp(0.452542339708);
    msg.setSource(45339U);
    msg.setSourceEntity(216U);
    msg.setDestination(26449U);
    msg.setDestinationEntity(99U);
    msg.value = 0.50597301779;

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
    msg.setTimeStamp(0.576762754359);
    msg.setSource(15069U);
    msg.setSourceEntity(185U);
    msg.setDestination(9407U);
    msg.setDestinationEntity(134U);
    msg.value = 0.50362910908;

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
    msg.setTimeStamp(0.907391684895);
    msg.setSource(14818U);
    msg.setSourceEntity(162U);
    msg.setDestination(1007U);
    msg.setDestinationEntity(248U);
    msg.value = 0.394521394841;

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
    msg.setTimeStamp(0.374016835103);
    msg.setSource(44463U);
    msg.setSourceEntity(102U);
    msg.setDestination(49718U);
    msg.setDestinationEntity(128U);
    msg.value.assign("HTUYPQNQTRIRKDCLWGTCCIPUDBKMMPEJDRZVSSKONFFYPXNGZYHEUZEWGWKXEXDIJKEQQVUTOZYCQMLBTFVIWCAWDULVYRKRSFPVPMLBNTYTUJRPNHJPAENSGZRBOHBIPXQJTFQZIOWGKGPYRQIEMSNFRXSWBMJQGVSMLYHAZEACLXFIAHJU");

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
    msg.setTimeStamp(0.473480746663);
    msg.setSource(20902U);
    msg.setSourceEntity(248U);
    msg.setDestination(37512U);
    msg.setDestinationEntity(61U);
    msg.value.assign("NNPUCMJVOGBQJZOKGSBXGUIETKPQYYZGSKFLRNIPFVTCZJICYHCXBEAJKKSNBVDNEVTEOTPDEWYSAJOQVDLVRYJW");

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
    msg.setTimeStamp(0.564922300515);
    msg.setSource(38549U);
    msg.setSourceEntity(41U);
    msg.setDestination(20505U);
    msg.setDestinationEntity(67U);
    msg.value.assign("LDITXAJOUYHICVYBDWQWWGGHTYZNJDQRRLUKGUVMFBIKAKJWTTIDWBBTXSGYPHNVVGMCSGSIWUXUKUZWJUMOHQMNKXFCZNEPISKIYPQWEZFRSMHHHLZCIGLEC");

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
    msg.setTimeStamp(0.66484621332);
    msg.setSource(56422U);
    msg.setSourceEntity(30U);
    msg.setDestination(13051U);
    msg.setDestinationEntity(38U);
    const char tmp_msg_0[] = {119, 13, 112, 104, -103, 95, 56, 105, -107, 8, -16, -118, -22, -4, -102, 109, -4, -8, -85, 86, 51, 67, 87, 8, 83, -36, -50, -34, 97, 114, 91, -55, -39, -79, -27, 114, -1, 60, -89, 61, -108, -104, 80, -54, 21, -107, -103, -83, -44, 29, -34, -117, -4, -112, 110, 54, 21, 43, -42, -81, 112, 117, 18, -75, 37, -123, 92, -16, 80, -84, -5, 28, 114, 79, -14, 55, -117, -46, -33, -17, 56, 105, -76, -35, -94, 27, -67, -26, 119, 17, -62, 58, 29, 57, -109, -68, 71, 0, 91, 44, 24, -46, -1, -111, 68, 69, 0, 21, -65, 113, 33, 72, 103, 42, -56, 91, -45, -35, -67, 86, 27, 33, -45, 58, 30, -79, -108, -111, 27};
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
    msg.setTimeStamp(0.0103306540387);
    msg.setSource(64649U);
    msg.setSourceEntity(201U);
    msg.setDestination(3653U);
    msg.setDestinationEntity(36U);
    const char tmp_msg_0[] = {46, 44, 42, -11, 60, -61, 125, 3, 98, 104, -1, 115, -44, -41, -81, -58, 59, 44, 86, -77, -7, -44, -128, -67, 25, -122, -20, -33, 33, -128, 122, 9, -58, -84, 83, 59, -76, 9, 73, -12, 122, -10, -34, 119, -73, 14, -5, -106, -69, 18, 86, -8, 5, 77, 102, -17, -72, 74, 79, 37, -116, -5, -99, -85, 87, 6, 52, -91, 38, 96, -83, -111, -77, 7, 47, 68, -8, 47, 98, 15, 75, 8, 42, 28, -58, 0, -105, -124, -70, 17, -39, 125, -53, 1, 116, -99, -73, 55, -60, -119, 94, -10, 26, -114, 25, 60, 10, -39, 4, -106, -20, -54, 48, -94, 24, -61, 25, -91, 111, -103, 123, -1, 46, -28};
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
    msg.setTimeStamp(0.0698282835586);
    msg.setSource(16206U);
    msg.setSourceEntity(68U);
    msg.setDestination(43706U);
    msg.setDestinationEntity(26U);
    const char tmp_msg_0[] = {-48, 9, 23, -111, -4, -14, 82, -121, 81, 111, 36, 96, 16, -7, -72, 37, -117, 27, -5, 104, -69, 118, -88, -48, -73, 103, 117, -36, -113, -121, -16, -93, 23, 44, 115, 84, -83, -96, -74, 1, -33, -29, -39, 103, -81, 3, 81, -105, -123, 43, 95, -42, -119, 78};
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
    IMC::Force msg;
    msg.setTimeStamp(0.832261633026);
    msg.setSource(56062U);
    msg.setSourceEntity(157U);
    msg.setDestination(49024U);
    msg.setDestinationEntity(250U);
    msg.value = 0.446505619606;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.0418567560858);
    msg.setSource(44970U);
    msg.setSourceEntity(97U);
    msg.setDestination(10773U);
    msg.setDestinationEntity(195U);
    msg.value = 0.425089415183;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.480864149664);
    msg.setSource(5625U);
    msg.setSourceEntity(242U);
    msg.setDestination(41076U);
    msg.setDestinationEntity(187U);
    msg.value = 0.114700313379;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #2", msg == *msg_d);
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
    msg.setTimeStamp(0.26080027639);
    msg.setSource(43196U);
    msg.setSourceEntity(89U);
    msg.setDestination(37446U);
    msg.setDestinationEntity(97U);
    msg.type = 88U;
    msg.frequency = 564100342U;
    msg.min_range = 23227U;
    msg.max_range = 40945U;
    msg.bits_per_point = 34U;
    msg.scale_factor = 0.512246977525;
    const char tmp_msg_0[] = {-8, 90, 45, -46, 114, -79, -36, -49, 0, 63, -97, 23, 59, 64, 103, -77, -80, -88, 12, 45, 92, 2, 46, -118, 12, 12, 54, 105, -34, -9, 8, 8, 25, -17, 63, -42, 120, -23, -14, 66, -105, -101, -50, 114, 4, -49, 36, 51, -79, 27, 45, -97, -109, 103};
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
    msg.setTimeStamp(0.368012243074);
    msg.setSource(7566U);
    msg.setSourceEntity(240U);
    msg.setDestination(34947U);
    msg.setDestinationEntity(156U);
    msg.type = 235U;
    msg.frequency = 4144120967U;
    msg.min_range = 59776U;
    msg.max_range = 28920U;
    msg.bits_per_point = 158U;
    msg.scale_factor = 0.649832990722;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.981176433311;
    tmp_msg_0.beam_height = 0.97379771154;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-7, -20, -82, -93, -111, 23, 55, -52, -54, 57, 25, -57, -53, 57, -23, -33, -45, -22, -34, 89, -98, 36, -35, 79, -91, -1, 1, -34, -16, 62, -77, -104, 61, -93, -112, -126, -70, -118, 84, 28, -14, -128, 72, 36, -87, 120, 118, -2, -4, 121, 112, -123, 38, 42, 69, 39, -26, -102, 78, -122, -17, -74, 29, 11, 80, -74, -120, 71, 34, -79, 22, -53, 93, 66, 7, 28, 11, -69, -108, -28, 102, 28, -16, 22, -113, -75, -75, 38, 49, 43, -77, 18, 42, -90, 1, 25, -59, 13, 103, -69, -23, -14, 3, 123, -64, -18, 24, -60, -68, -116, -4, -29, -75, -50, 22, 21, 51};
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
    msg.setTimeStamp(0.167234107877);
    msg.setSource(36958U);
    msg.setSourceEntity(2U);
    msg.setDestination(35269U);
    msg.setDestinationEntity(177U);
    msg.type = 192U;
    msg.frequency = 2080662464U;
    msg.min_range = 43276U;
    msg.max_range = 57932U;
    msg.bits_per_point = 110U;
    msg.scale_factor = 0.784546877109;
    const char tmp_msg_0[] = {-48, -14, 97, 5, -74, 107, -105, 124, 32, -56, 36, -47, 107, 3, 59, -32, 73, -28, -21, 115, -81, -15, 111, 54, -94, -84, -116, -23, -69, -6, -35, 111, -82, -58, 24, 44, 64, 30, -79, 43, -104, -79, 54, -78, -63, 11, 4, -52, -123, -109, 65, 53, -88, -18, -1, 43, -22, 103, 28, -2, 97, -65, -68, 121, -61, -95, -71, 90, -106, -97, 42, -59, 80, 15, 118, -73, -71, -3, 39, -125, 85, -18, 31, 121, -124, 115, 107, -6, -107, 66, -121, 2, 89, -96, 50, 72, 116, 105, -12, 100, -122, 65, -108, -114, -99, 62, -14, 27, -94, -37, 0, -45, -100, 32, 68, -70, -59, 122, -118, -39, -43, 75, -22, 1, -77, 76, -100, 112, -30, -73, -20, 79, -3, -79, 50, -80, 53, 13, 84, -114, 104, 125, -104, -95, -107, 23, 101, -63, -71, 86, -83, 69, -107, -62, 3, -94, -127, -48, 32, -100, 20, -79, -127, 12, 89, 64, -59, 126, -77, -87, 12, -110, -96, -82, 113, 9, -91, 48, 105, -114, 31, 20, -79, -45, 44, 59, -55, -71, -111, -37, -115, -31, -70, -115, -57, -93, 47, -5, 7, 113, 104, 39, -76, 25, 69, 18, 11};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.523335922246);
    msg.setSource(26877U);
    msg.setSourceEntity(224U);
    msg.setDestination(9286U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.601564075027);
    msg.setSource(48381U);
    msg.setSourceEntity(99U);
    msg.setDestination(45072U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.919273400013);
    msg.setSource(21153U);
    msg.setSourceEntity(133U);
    msg.setDestination(60236U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.529661260197);
    msg.setSource(13438U);
    msg.setSourceEntity(248U);
    msg.setDestination(20341U);
    msg.setDestinationEntity(24U);
    msg.op = 3U;

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
    msg.setTimeStamp(0.548095972819);
    msg.setSource(11092U);
    msg.setSourceEntity(243U);
    msg.setDestination(12943U);
    msg.setDestinationEntity(164U);
    msg.op = 236U;

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
    msg.setTimeStamp(0.221436621166);
    msg.setSource(51411U);
    msg.setSourceEntity(57U);
    msg.setDestination(41818U);
    msg.setDestinationEntity(66U);
    msg.op = 148U;

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
    msg.setTimeStamp(0.827594488275);
    msg.setSource(14070U);
    msg.setSourceEntity(209U);
    msg.setDestination(45720U);
    msg.setDestinationEntity(18U);
    msg.value = 0.568852029408;
    msg.confidence = 0.456377725256;
    msg.opmodes.assign("QDUTUOXKCMIX");

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
    msg.setTimeStamp(0.525174504141);
    msg.setSource(30580U);
    msg.setSourceEntity(222U);
    msg.setDestination(563U);
    msg.setDestinationEntity(45U);
    msg.value = 0.200228773068;
    msg.confidence = 0.219267752567;
    msg.opmodes.assign("JEJIOZCXURTJLWHULJPMWNFFALOHKTTHDQRVZNBONVNOKXZRIPHCWHEGQHBYNFWATWCICZNLDXYAYZBZYDRFFM");

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
    msg.setTimeStamp(0.107915962322);
    msg.setSource(9130U);
    msg.setSourceEntity(171U);
    msg.setDestination(61540U);
    msg.setDestinationEntity(73U);
    msg.value = 0.441867450095;
    msg.confidence = 0.313837511881;
    msg.opmodes.assign("SSCOAOCELSOCRUTAP");

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
    msg.setTimeStamp(0.515446346458);
    msg.setSource(31235U);
    msg.setSourceEntity(137U);
    msg.setDestination(48297U);
    msg.setDestinationEntity(192U);
    msg.itow = 3719670836U;
    msg.lat = 0.833246407939;
    msg.lon = 0.368167238028;
    msg.height_ell = 0.816671236124;
    msg.height_sea = 0.708408367425;
    msg.hacc = 0.624748674564;
    msg.vacc = 0.195200591004;
    msg.vel_n = 0.502570208518;
    msg.vel_e = 0.387256952936;
    msg.vel_d = 0.33458208716;
    msg.speed = 0.712117333434;
    msg.gspeed = 0.268904110565;
    msg.heading = 0.590187085093;
    msg.sacc = 0.205175988485;
    msg.cacc = 0.978341123803;

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
    msg.setTimeStamp(0.910679779294);
    msg.setSource(26562U);
    msg.setSourceEntity(171U);
    msg.setDestination(4670U);
    msg.setDestinationEntity(222U);
    msg.itow = 2461489033U;
    msg.lat = 0.589006941396;
    msg.lon = 0.987842961007;
    msg.height_ell = 0.619353479356;
    msg.height_sea = 0.96051337559;
    msg.hacc = 0.356496020401;
    msg.vacc = 0.591126117232;
    msg.vel_n = 0.44706905126;
    msg.vel_e = 0.0648233722209;
    msg.vel_d = 0.144248247713;
    msg.speed = 0.302328365047;
    msg.gspeed = 0.353152324374;
    msg.heading = 0.431686010299;
    msg.sacc = 0.940768451644;
    msg.cacc = 0.539131531165;

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
    msg.setTimeStamp(0.101533891675);
    msg.setSource(23518U);
    msg.setSourceEntity(28U);
    msg.setDestination(13888U);
    msg.setDestinationEntity(154U);
    msg.itow = 3705608514U;
    msg.lat = 0.694624824083;
    msg.lon = 0.835691181743;
    msg.height_ell = 0.447736008289;
    msg.height_sea = 0.537669579042;
    msg.hacc = 0.01891481439;
    msg.vacc = 0.513216601332;
    msg.vel_n = 0.0964406701506;
    msg.vel_e = 0.759157952894;
    msg.vel_d = 0.582008941747;
    msg.speed = 0.104109402738;
    msg.gspeed = 0.222363197078;
    msg.heading = 0.473049254484;
    msg.sacc = 0.0689817313107;
    msg.cacc = 0.0090812972437;

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
    msg.setTimeStamp(0.234643160691);
    msg.setSource(12909U);
    msg.setSourceEntity(253U);
    msg.setDestination(16610U);
    msg.setDestinationEntity(25U);
    msg.id = 194U;
    msg.value = 0.725770622962;

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
    msg.setTimeStamp(0.844352966572);
    msg.setSource(13352U);
    msg.setSourceEntity(199U);
    msg.setDestination(19974U);
    msg.setDestinationEntity(87U);
    msg.id = 33U;
    msg.value = 0.0411279319107;

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
    msg.setTimeStamp(0.17318505933);
    msg.setSource(41758U);
    msg.setSourceEntity(18U);
    msg.setDestination(2646U);
    msg.setDestinationEntity(74U);
    msg.id = 219U;
    msg.value = 0.402743211231;

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
    msg.setTimeStamp(0.378513948248);
    msg.setSource(15528U);
    msg.setSourceEntity(64U);
    msg.setDestination(55626U);
    msg.setDestinationEntity(168U);
    msg.x = 0.846281098182;
    msg.y = 0.808317429269;
    msg.z = 0.932720580215;
    msg.phi = 0.416829216897;
    msg.theta = 0.647716145241;
    msg.psi = 0.575206239599;

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
    msg.setTimeStamp(0.154441070294);
    msg.setSource(48895U);
    msg.setSourceEntity(115U);
    msg.setDestination(61000U);
    msg.setDestinationEntity(212U);
    msg.x = 0.863488523018;
    msg.y = 0.327997733092;
    msg.z = 0.950584609038;
    msg.phi = 0.132082284847;
    msg.theta = 0.681773123399;
    msg.psi = 0.871193821385;

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
    msg.setTimeStamp(0.270597170953);
    msg.setSource(63694U);
    msg.setSourceEntity(133U);
    msg.setDestination(60208U);
    msg.setDestinationEntity(131U);
    msg.x = 0.172644734629;
    msg.y = 0.715524260548;
    msg.z = 0.204220999592;
    msg.phi = 0.815004715822;
    msg.theta = 0.281576528928;
    msg.psi = 0.433112305704;

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
    msg.setTimeStamp(0.395646935516);
    msg.setSource(63818U);
    msg.setSourceEntity(107U);
    msg.setDestination(26252U);
    msg.setDestinationEntity(175U);
    msg.beam_width = 0.291494811001;
    msg.beam_height = 0.777588876439;

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
    msg.setTimeStamp(0.751650291416);
    msg.setSource(15839U);
    msg.setSourceEntity(201U);
    msg.setDestination(9119U);
    msg.setDestinationEntity(87U);
    msg.beam_width = 0.674139098996;
    msg.beam_height = 0.601135495972;

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
    msg.setTimeStamp(0.335469073843);
    msg.setSource(62539U);
    msg.setSourceEntity(88U);
    msg.setDestination(16264U);
    msg.setDestinationEntity(233U);
    msg.beam_width = 0.519246098235;
    msg.beam_height = 0.0045300811998;

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
    msg.setTimeStamp(0.457518362506);
    msg.setSource(41134U);
    msg.setSourceEntity(142U);
    msg.setDestination(31897U);
    msg.setDestinationEntity(232U);
    msg.sane = 236U;

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
    msg.setTimeStamp(0.0977041293208);
    msg.setSource(65169U);
    msg.setSourceEntity(137U);
    msg.setDestination(9869U);
    msg.setDestinationEntity(145U);
    msg.sane = 12U;

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
    msg.setTimeStamp(0.0336934783278);
    msg.setSource(46904U);
    msg.setSourceEntity(190U);
    msg.setDestination(1526U);
    msg.setDestinationEntity(208U);
    msg.sane = 166U;

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
    msg.setTimeStamp(0.423806263874);
    msg.setSource(165U);
    msg.setSourceEntity(27U);
    msg.setDestination(12095U);
    msg.setDestinationEntity(114U);
    msg.value = 0.0242931790501;

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
    msg.setTimeStamp(0.370338754214);
    msg.setSource(32821U);
    msg.setSourceEntity(14U);
    msg.setDestination(19307U);
    msg.setDestinationEntity(208U);
    msg.value = 0.803505690031;

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
    msg.setTimeStamp(0.54757594294);
    msg.setSource(20204U);
    msg.setSourceEntity(89U);
    msg.setDestination(424U);
    msg.setDestinationEntity(228U);
    msg.value = 0.705841453363;

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
    msg.setTimeStamp(0.0509011433128);
    msg.setSource(30410U);
    msg.setSourceEntity(96U);
    msg.setDestination(5124U);
    msg.setDestinationEntity(123U);
    msg.value = 0.287421973101;

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
    msg.setTimeStamp(0.96119311222);
    msg.setSource(56033U);
    msg.setSourceEntity(68U);
    msg.setDestination(2384U);
    msg.setDestinationEntity(231U);
    msg.value = 0.748010605748;

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
    msg.setTimeStamp(0.27173049058);
    msg.setSource(62776U);
    msg.setSourceEntity(198U);
    msg.setDestination(19486U);
    msg.setDestinationEntity(154U);
    msg.value = 0.267180839964;

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
    msg.setTimeStamp(0.880431982566);
    msg.setSource(16384U);
    msg.setSourceEntity(201U);
    msg.setDestination(41117U);
    msg.setDestinationEntity(52U);
    msg.value = 0.414964471655;

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
    msg.setTimeStamp(0.328578869845);
    msg.setSource(39544U);
    msg.setSourceEntity(229U);
    msg.setDestination(5209U);
    msg.setDestinationEntity(196U);
    msg.value = 0.660832043166;

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
    msg.setTimeStamp(0.518455989862);
    msg.setSource(49195U);
    msg.setSourceEntity(245U);
    msg.setDestination(2717U);
    msg.setDestinationEntity(180U);
    msg.value = 0.243108963073;

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
    msg.setTimeStamp(0.82562800927);
    msg.setSource(13438U);
    msg.setSourceEntity(243U);
    msg.setDestination(55490U);
    msg.setDestinationEntity(228U);
    msg.value = 0.42095481119;

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
    msg.setTimeStamp(0.148021974684);
    msg.setSource(39007U);
    msg.setSourceEntity(48U);
    msg.setDestination(32750U);
    msg.setDestinationEntity(76U);
    msg.value = 0.0992832061594;

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
    msg.setTimeStamp(0.807877650581);
    msg.setSource(46487U);
    msg.setSourceEntity(61U);
    msg.setDestination(41023U);
    msg.setDestinationEntity(249U);
    msg.value = 0.182473969922;

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
    msg.setTimeStamp(0.887576294874);
    msg.setSource(44103U);
    msg.setSourceEntity(198U);
    msg.setDestination(59014U);
    msg.setDestinationEntity(16U);
    msg.value = 0.500806394683;

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
    msg.setTimeStamp(0.10491854725);
    msg.setSource(34113U);
    msg.setSourceEntity(148U);
    msg.setDestination(56455U);
    msg.setDestinationEntity(87U);
    msg.value = 0.91248792992;

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
    msg.setTimeStamp(0.216875573837);
    msg.setSource(62153U);
    msg.setSourceEntity(214U);
    msg.setDestination(15875U);
    msg.setDestinationEntity(108U);
    msg.value = 0.423637330342;

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
    msg.setTimeStamp(0.483843415173);
    msg.setSource(29153U);
    msg.setSourceEntity(249U);
    msg.setDestination(22494U);
    msg.setDestinationEntity(88U);
    msg.value = 0.22259375559;

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
    msg.setTimeStamp(0.697422714142);
    msg.setSource(61046U);
    msg.setSourceEntity(213U);
    msg.setDestination(36503U);
    msg.setDestinationEntity(89U);
    msg.value = 0.12185487166;

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
    msg.setTimeStamp(0.507619630969);
    msg.setSource(56394U);
    msg.setSourceEntity(105U);
    msg.setDestination(54492U);
    msg.setDestinationEntity(106U);
    msg.value = 0.374445153667;

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
    msg.setTimeStamp(0.776226627864);
    msg.setSource(3633U);
    msg.setSourceEntity(47U);
    msg.setDestination(12243U);
    msg.setDestinationEntity(65U);
    msg.value = 0.983160236867;

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
    msg.setTimeStamp(0.17888802806);
    msg.setSource(62891U);
    msg.setSourceEntity(79U);
    msg.setDestination(26862U);
    msg.setDestinationEntity(70U);
    msg.value = 0.537866476371;

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
    msg.setTimeStamp(0.312456902219);
    msg.setSource(4044U);
    msg.setSourceEntity(206U);
    msg.setDestination(53125U);
    msg.setDestinationEntity(126U);
    msg.value = 0.614538234752;

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
    msg.setTimeStamp(0.405392852144);
    msg.setSource(56887U);
    msg.setSourceEntity(186U);
    msg.setDestination(62460U);
    msg.setDestinationEntity(79U);
    msg.value = 0.534282397028;

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
    msg.setTimeStamp(0.834955122569);
    msg.setSource(23343U);
    msg.setSourceEntity(71U);
    msg.setDestination(60860U);
    msg.setDestinationEntity(134U);
    msg.value = 0.164871660915;

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
    msg.setTimeStamp(0.62162341983);
    msg.setSource(39584U);
    msg.setSourceEntity(238U);
    msg.setDestination(26810U);
    msg.setDestinationEntity(85U);
    msg.value = 0.737307476281;

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
    msg.setTimeStamp(0.824843218206);
    msg.setSource(64125U);
    msg.setSourceEntity(185U);
    msg.setDestination(37018U);
    msg.setDestinationEntity(122U);
    msg.validity = 61930U;
    msg.type = 115U;
    msg.tow = 2343089881U;
    msg.base_lat = 0.25247087966;
    msg.base_lon = 0.558418149232;
    msg.base_height = 0.011773774447;
    msg.n = 0.641397610555;
    msg.e = 0.486878763364;
    msg.d = 0.399817436332;
    msg.v_n = 0.0328158107861;
    msg.v_e = 0.00518499645916;
    msg.v_d = 0.431860304253;
    msg.satellites = 23U;
    msg.iar_hyp = 31488U;
    msg.iar_ratio = 0.908318167877;

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
    msg.setTimeStamp(0.364542892426);
    msg.setSource(8659U);
    msg.setSourceEntity(42U);
    msg.setDestination(57076U);
    msg.setDestinationEntity(196U);
    msg.validity = 24323U;
    msg.type = 144U;
    msg.tow = 2088934940U;
    msg.base_lat = 0.00994504129439;
    msg.base_lon = 0.998564556706;
    msg.base_height = 0.933391728259;
    msg.n = 0.822423881274;
    msg.e = 0.10634875412;
    msg.d = 0.19988185687;
    msg.v_n = 0.338142321879;
    msg.v_e = 0.730882577457;
    msg.v_d = 0.995070162244;
    msg.satellites = 224U;
    msg.iar_hyp = 45840U;
    msg.iar_ratio = 0.101298719925;

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
    msg.setTimeStamp(0.689564838434);
    msg.setSource(40449U);
    msg.setSourceEntity(237U);
    msg.setDestination(35710U);
    msg.setDestinationEntity(155U);
    msg.validity = 50238U;
    msg.type = 163U;
    msg.tow = 682789657U;
    msg.base_lat = 0.481827529014;
    msg.base_lon = 0.693901173069;
    msg.base_height = 0.395202006131;
    msg.n = 0.562184027143;
    msg.e = 0.891197324224;
    msg.d = 0.762018442766;
    msg.v_n = 0.257212392422;
    msg.v_e = 0.40647527273;
    msg.v_d = 0.580614115646;
    msg.satellites = 40U;
    msg.iar_hyp = 54968U;
    msg.iar_ratio = 0.260447550723;

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
    msg.setTimeStamp(0.179866324842);
    msg.setSource(43809U);
    msg.setSourceEntity(12U);
    msg.setDestination(54886U);
    msg.setDestinationEntity(248U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.783964958365;
    tmp_msg_0.lon = 0.430595205538;
    tmp_msg_0.height = 0.883366033163;
    tmp_msg_0.x = 0.869898819515;
    tmp_msg_0.y = 0.114949903813;
    tmp_msg_0.z = 0.560707254932;
    tmp_msg_0.phi = 0.682815630876;
    tmp_msg_0.theta = 0.0841790437348;
    tmp_msg_0.psi = 0.984118995941;
    tmp_msg_0.u = 0.57086760289;
    tmp_msg_0.v = 0.505322538531;
    tmp_msg_0.w = 0.608761506365;
    tmp_msg_0.vx = 0.0737643310569;
    tmp_msg_0.vy = 0.00544835839887;
    tmp_msg_0.vz = 0.818109451321;
    tmp_msg_0.p = 0.22316714458;
    tmp_msg_0.q = 0.404872484578;
    tmp_msg_0.r = 0.76820164991;
    tmp_msg_0.depth = 0.755443315454;
    tmp_msg_0.alt = 0.851436827496;
    msg.state.set(tmp_msg_0);
    msg.type = 196U;

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
    msg.setTimeStamp(0.451356550783);
    msg.setSource(12181U);
    msg.setSourceEntity(49U);
    msg.setDestination(16848U);
    msg.setDestinationEntity(126U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.356557555094;
    tmp_msg_0.lon = 0.878099729215;
    tmp_msg_0.height = 0.860281639898;
    tmp_msg_0.x = 0.831969102234;
    tmp_msg_0.y = 0.152605673099;
    tmp_msg_0.z = 0.172216843805;
    tmp_msg_0.phi = 0.240010854113;
    tmp_msg_0.theta = 0.296638239729;
    tmp_msg_0.psi = 0.929877815937;
    tmp_msg_0.u = 0.575429709437;
    tmp_msg_0.v = 0.0338467563745;
    tmp_msg_0.w = 0.768749026154;
    tmp_msg_0.vx = 0.130571446725;
    tmp_msg_0.vy = 0.084770005352;
    tmp_msg_0.vz = 0.0528593383025;
    tmp_msg_0.p = 0.587389301633;
    tmp_msg_0.q = 0.577139603177;
    tmp_msg_0.r = 0.573401098144;
    tmp_msg_0.depth = 0.607866975987;
    tmp_msg_0.alt = 0.183107200577;
    msg.state.set(tmp_msg_0);
    msg.type = 49U;

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
    msg.setTimeStamp(0.131559738056);
    msg.setSource(204U);
    msg.setSourceEntity(159U);
    msg.setDestination(5842U);
    msg.setDestinationEntity(220U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.103966409134;
    tmp_msg_0.lon = 0.612545758694;
    tmp_msg_0.height = 0.370095648648;
    tmp_msg_0.x = 0.63278812497;
    tmp_msg_0.y = 0.265167125575;
    tmp_msg_0.z = 0.16240126502;
    tmp_msg_0.phi = 0.945048714763;
    tmp_msg_0.theta = 0.737933211524;
    tmp_msg_0.psi = 0.689273797374;
    tmp_msg_0.u = 0.51215049805;
    tmp_msg_0.v = 0.932105858734;
    tmp_msg_0.w = 0.22191048317;
    tmp_msg_0.vx = 0.234954637281;
    tmp_msg_0.vy = 0.79864098234;
    tmp_msg_0.vz = 0.230286349632;
    tmp_msg_0.p = 0.617306472476;
    tmp_msg_0.q = 0.35857370466;
    tmp_msg_0.r = 0.998807188313;
    tmp_msg_0.depth = 0.647250811975;
    tmp_msg_0.alt = 0.442107461117;
    msg.state.set(tmp_msg_0);
    msg.type = 7U;

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
    msg.setTimeStamp(0.634361279427);
    msg.setSource(35413U);
    msg.setSourceEntity(226U);
    msg.setDestination(5336U);
    msg.setDestinationEntity(21U);
    msg.value = 0.192087464355;

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
    msg.setTimeStamp(0.869300052294);
    msg.setSource(62589U);
    msg.setSourceEntity(104U);
    msg.setDestination(45406U);
    msg.setDestinationEntity(217U);
    msg.value = 0.0504782072844;

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
    msg.setTimeStamp(0.950836587406);
    msg.setSource(2112U);
    msg.setSourceEntity(227U);
    msg.setDestination(62113U);
    msg.setDestinationEntity(213U);
    msg.value = 0.0396205071523;

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
    msg.setTimeStamp(0.824092809385);
    msg.setSource(21058U);
    msg.setSourceEntity(137U);
    msg.setDestination(14320U);
    msg.setDestinationEntity(88U);
    msg.value = 0.512178340859;

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
    msg.setTimeStamp(0.37632932528);
    msg.setSource(25513U);
    msg.setSourceEntity(152U);
    msg.setDestination(23043U);
    msg.setDestinationEntity(21U);
    msg.value = 0.0563061416133;

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
    msg.setTimeStamp(0.185013532194);
    msg.setSource(10745U);
    msg.setSourceEntity(11U);
    msg.setDestination(43004U);
    msg.setDestinationEntity(119U);
    msg.value = 0.574929288173;

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
    msg.setTimeStamp(0.708305963588);
    msg.setSource(36890U);
    msg.setSourceEntity(45U);
    msg.setDestination(10648U);
    msg.setDestinationEntity(111U);
    msg.value = 0.362304847918;

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
    msg.setTimeStamp(0.757841085678);
    msg.setSource(35451U);
    msg.setSourceEntity(150U);
    msg.setDestination(49539U);
    msg.setDestinationEntity(51U);
    msg.value = 0.53159584246;

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
    msg.setTimeStamp(0.713986191524);
    msg.setSource(16449U);
    msg.setSourceEntity(23U);
    msg.setDestination(36863U);
    msg.setDestinationEntity(70U);
    msg.value = 0.14148726818;

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
    msg.setTimeStamp(0.0376860341417);
    msg.setSource(30278U);
    msg.setSourceEntity(67U);
    msg.setDestination(31607U);
    msg.setDestinationEntity(123U);
    msg.value = 0.19893234517;

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
    msg.setTimeStamp(0.967258492339);
    msg.setSource(5378U);
    msg.setSourceEntity(58U);
    msg.setDestination(1009U);
    msg.setDestinationEntity(140U);
    msg.value = 0.386915448642;

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
    msg.setTimeStamp(0.510339522898);
    msg.setSource(36490U);
    msg.setSourceEntity(50U);
    msg.setDestination(8200U);
    msg.setDestinationEntity(96U);
    msg.value = 0.420377439551;

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
    msg.setTimeStamp(0.811041243334);
    msg.setSource(58236U);
    msg.setSourceEntity(48U);
    msg.setDestination(57902U);
    msg.setDestinationEntity(54U);
    msg.value = 0.816802408883;

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
    msg.setTimeStamp(0.196059280133);
    msg.setSource(53176U);
    msg.setSourceEntity(14U);
    msg.setDestination(11596U);
    msg.setDestinationEntity(70U);
    msg.value = 0.988804058177;

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
    msg.setTimeStamp(0.63980532612);
    msg.setSource(12399U);
    msg.setSourceEntity(227U);
    msg.setDestination(18507U);
    msg.setDestinationEntity(8U);
    msg.value = 0.652487979824;

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
    msg.setTimeStamp(0.397684688962);
    msg.setSource(62587U);
    msg.setSourceEntity(166U);
    msg.setDestination(26038U);
    msg.setDestinationEntity(138U);
    msg.id = 86U;
    msg.zoom = 70U;
    msg.action = 153U;

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
    msg.setTimeStamp(0.575632477319);
    msg.setSource(63892U);
    msg.setSourceEntity(41U);
    msg.setDestination(56567U);
    msg.setDestinationEntity(199U);
    msg.id = 229U;
    msg.zoom = 95U;
    msg.action = 53U;

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
    msg.setTimeStamp(0.397876296436);
    msg.setSource(37537U);
    msg.setSourceEntity(63U);
    msg.setDestination(15992U);
    msg.setDestinationEntity(239U);
    msg.id = 123U;
    msg.zoom = 218U;
    msg.action = 22U;

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
    msg.setTimeStamp(0.943865790347);
    msg.setSource(56334U);
    msg.setSourceEntity(132U);
    msg.setDestination(16503U);
    msg.setDestinationEntity(253U);
    msg.id = 185U;
    msg.value = 0.744303141776;

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
    msg.setTimeStamp(0.599923868041);
    msg.setSource(5788U);
    msg.setSourceEntity(23U);
    msg.setDestination(17710U);
    msg.setDestinationEntity(179U);
    msg.id = 82U;
    msg.value = 0.444906273949;

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
    msg.setTimeStamp(0.131702771047);
    msg.setSource(15821U);
    msg.setSourceEntity(135U);
    msg.setDestination(6526U);
    msg.setDestinationEntity(108U);
    msg.id = 218U;
    msg.value = 0.000141797675059;

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
    msg.setTimeStamp(0.900345091629);
    msg.setSource(30895U);
    msg.setSourceEntity(219U);
    msg.setDestination(46261U);
    msg.setDestinationEntity(128U);
    msg.id = 7U;
    msg.value = 0.853200794052;

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
    msg.setTimeStamp(0.238512862434);
    msg.setSource(56294U);
    msg.setSourceEntity(38U);
    msg.setDestination(54978U);
    msg.setDestinationEntity(160U);
    msg.id = 209U;
    msg.value = 0.963640138481;

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
    msg.setTimeStamp(0.34488063727);
    msg.setSource(24263U);
    msg.setSourceEntity(212U);
    msg.setDestination(14122U);
    msg.setDestinationEntity(119U);
    msg.id = 155U;
    msg.value = 0.588984091729;

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
    msg.setTimeStamp(0.181135855113);
    msg.setSource(11428U);
    msg.setSourceEntity(31U);
    msg.setDestination(15808U);
    msg.setDestinationEntity(173U);
    msg.id = 167U;
    msg.angle = 0.0752980539939;

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
    msg.setTimeStamp(0.295136911672);
    msg.setSource(1282U);
    msg.setSourceEntity(2U);
    msg.setDestination(47537U);
    msg.setDestinationEntity(118U);
    msg.id = 237U;
    msg.angle = 0.83473981703;

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
    msg.setTimeStamp(0.390851352554);
    msg.setSource(20989U);
    msg.setSourceEntity(198U);
    msg.setDestination(6060U);
    msg.setDestinationEntity(203U);
    msg.id = 244U;
    msg.angle = 0.520402586295;

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
    msg.setTimeStamp(0.724380420203);
    msg.setSource(61973U);
    msg.setSourceEntity(4U);
    msg.setDestination(430U);
    msg.setDestinationEntity(58U);
    msg.op = 81U;
    msg.actions.assign("JDFMQDSUYYIYYEGVCUTWRJZFWZOYPXCNSHIFWAOCDNZIZFZUKZFJXHANROXDUHIAJXXOOCAEB");

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
    msg.setTimeStamp(0.0164428369318);
    msg.setSource(21033U);
    msg.setSourceEntity(4U);
    msg.setDestination(62402U);
    msg.setDestinationEntity(150U);
    msg.op = 62U;
    msg.actions.assign("WQHDEBQQSVLDYXARBRLCCVYKGHPXYUHSATBVJYEMTTKJMNEFRIMDTGYIVRAFGZIZEBCQIKKMISYMONDKVGNHMCZGKIWYFBMXXEJVFTCIRZWTLOCKPEAWVZOCQMEZXBYDNUUSPNENOSOQDTFDSKKVWIUCSOAQRGPIEWRZGNACHDFFORALLHJLRSBPVDGJXHGPQHOBWJPYTSAIHKLSWCHQFUNUQEJMPUZJFRAFOLYTMNL");

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
    msg.setTimeStamp(0.887929908933);
    msg.setSource(25029U);
    msg.setSourceEntity(143U);
    msg.setDestination(21077U);
    msg.setDestinationEntity(59U);
    msg.op = 242U;
    msg.actions.assign("JERQOWTKGXFBVHUDXDYUWLRXLZWRBDDYNVLZJLHFSFVOXUKGFGZQGSIZAMKJCTTQAAMAZNZMNFCRDWKUXIQHIHEEBGUWBJFKAUTMQUQXGLBZSAZQJSJNTSRRCJOHKGUOEETMTHXWFATMJLXOBKSYNHQANJOPVYGMTVOMBBXRLDSNFEHZDTELYLPYIQVWABYVKWRPMNWFCLAYINPIPUOVPPFROPECDWJUZVIPCH");

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
    msg.setTimeStamp(0.44271276086);
    msg.setSource(50057U);
    msg.setSourceEntity(211U);
    msg.setDestination(21353U);
    msg.setDestinationEntity(82U);
    msg.actions.assign("BRIMHORYFZMFDNVPCDESEGNGOMLEZFDGSKLOQJZNXVZXATYBQKYDQAQKZIRKGBLEKRGRSSXZOQAOLPRPHIRTYGZWVZLCYNHHCULVTYEJBXUUUDGBIWOAVTL");

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
    msg.setTimeStamp(0.544392808847);
    msg.setSource(34668U);
    msg.setSourceEntity(172U);
    msg.setDestination(60650U);
    msg.setDestinationEntity(123U);
    msg.actions.assign("RGLQCOWLXJFVOJULOVYBGQVNCZQUVEGKXTIDKRXIUXRRJEFWTZPPTWGCTRJCASFZJMVBPFDSXVOHNADSMGNQZNQIA");

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
    msg.setTimeStamp(0.804253836046);
    msg.setSource(47922U);
    msg.setSourceEntity(96U);
    msg.setDestination(10089U);
    msg.setDestinationEntity(64U);
    msg.actions.assign("KSWLIXHWVCMZEMTYTTRCJWWLHAIEJEYZLBUCOYTEQDMXVWNODZVOERGEDCFSHZLIAFVYPGNPAQWNJQJRKJBZZSTDMCMCK");

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
    msg.setTimeStamp(0.333075951781);
    msg.setSource(32249U);
    msg.setSourceEntity(103U);
    msg.setDestination(38716U);
    msg.setDestinationEntity(19U);
    msg.button = 26U;
    msg.value = 168U;

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
    msg.setTimeStamp(0.795773442408);
    msg.setSource(3770U);
    msg.setSourceEntity(82U);
    msg.setDestination(10059U);
    msg.setDestinationEntity(216U);
    msg.button = 5U;
    msg.value = 128U;

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
    msg.setTimeStamp(0.828417428845);
    msg.setSource(26197U);
    msg.setSourceEntity(0U);
    msg.setDestination(37096U);
    msg.setDestinationEntity(246U);
    msg.button = 110U;
    msg.value = 79U;

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
    msg.setTimeStamp(0.496858661287);
    msg.setSource(37983U);
    msg.setSourceEntity(46U);
    msg.setDestination(288U);
    msg.setDestinationEntity(118U);
    msg.op = 236U;
    msg.text.assign("WKAYBZYGRHBXVNDONMORSBSGSIWNMUEZWRGDRQYCBKUOHHJOHODHXYQLONTKLWCDYSZ");

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
    msg.setTimeStamp(0.764388583036);
    msg.setSource(16231U);
    msg.setSourceEntity(191U);
    msg.setDestination(56773U);
    msg.setDestinationEntity(108U);
    msg.op = 10U;
    msg.text.assign("JVOVDULGIDFKYZZHCHXPXGOFOSDUYHAKGPDRLYYBIWUSTYXBBBUCJKBXUILXNSBNFKJOMDWXPFEIZNOYTQJATYFSWZGMVSPHDJJIWDOMBTXHRPPLQWVWGROSXLXAYVRMPJUROIG");

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
    msg.setTimeStamp(0.175824119419);
    msg.setSource(43134U);
    msg.setSourceEntity(134U);
    msg.setDestination(23110U);
    msg.setDestinationEntity(176U);
    msg.op = 87U;
    msg.text.assign("UEGUJDHKMKNSIHJEFOPZYMTDCTZATFRDZYZKCHVLBOWPSOULJLOFPZTWGYCQERAAQFXGKMTMPGAHCAKXTMTFTWDFYLDDACJJZIWNKQAUEWPHEEJZWTYFOOJZNGRVXGDEQNWWLHLJHIXRIBISMOQIDYFKPSQRNOFISDWCHYXXCOVQSBLILSGXZLPGQMBUFKEBLUYMNPRMGIBARUTNJHXNMVNCUSVEPYVBVXAJWPGYIZNKHV");

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
    msg.setTimeStamp(0.516631771821);
    msg.setSource(34104U);
    msg.setSourceEntity(174U);
    msg.setDestination(42619U);
    msg.setDestinationEntity(210U);
    msg.op = 194U;
    msg.time_remain = 0.864004055385;
    msg.sched_time = 0.213892934266;

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
    msg.setTimeStamp(0.36480915254);
    msg.setSource(51180U);
    msg.setSourceEntity(201U);
    msg.setDestination(49101U);
    msg.setDestinationEntity(146U);
    msg.op = 187U;
    msg.time_remain = 0.758532912716;
    msg.sched_time = 0.228110738696;

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
    msg.setTimeStamp(0.128348044218);
    msg.setSource(6031U);
    msg.setSourceEntity(88U);
    msg.setDestination(59842U);
    msg.setDestinationEntity(214U);
    msg.op = 208U;
    msg.time_remain = 0.0388978325594;
    msg.sched_time = 0.58047676534;

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
    msg.setTimeStamp(0.576856198138);
    msg.setSource(64714U);
    msg.setSourceEntity(32U);
    msg.setDestination(9655U);
    msg.setDestinationEntity(187U);
    msg.name.assign("YEMQZTVVAXJJQNNKBHZHCGBKFQGNSRRZUEOUHTWQXODBHYFXEWFXSUFTIUEYGSBIVLNUUFWTDLPDMHNLCLFPSWPFESHAIYPOIGMGRTMRZOXI");
    msg.op = 209U;
    msg.sched_time = 0.580400737432;

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
    msg.setTimeStamp(0.726922152556);
    msg.setSource(42549U);
    msg.setSourceEntity(128U);
    msg.setDestination(23970U);
    msg.setDestinationEntity(230U);
    msg.name.assign("QWCDRGYSKMTFFFNJAXKSJLRBMBWQUTPLNEKYUBIZIEPTJMWVZYCEDPHMDDSGEBVSHQPXZVTSGZVKXBERGYGAIZQLCHNAILOKVFPPVLVTGHIKMTCQHXBYAAHFQWJTUFENJNOGSUXTYRBCUNGEXMAQWKFXLPEALCIJAIOCLDVHNSWQOUYZDCPOWHOUBOKSZIXRZGCXSWIFHBDJUNRHMTVRNNOISZLDWYGJBKYTLAPUDMKAODRPXV");
    msg.op = 155U;
    msg.sched_time = 0.979990795987;

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
    msg.setTimeStamp(0.430575351069);
    msg.setSource(64681U);
    msg.setSourceEntity(10U);
    msg.setDestination(35879U);
    msg.setDestinationEntity(163U);
    msg.name.assign("BNNDUCUHDPRLLRVIOYKURSURHCPIJMIEMJCFRZQLXFPVSQONCAJJYWSGZIRUTNKGCDAJJQKXDTTPOXMQIKARQVDLBOGXRALIKBKHHLIGCTZSYEWYWMUZRZFTQSZZVMPALJCYXPQIOKUKHKHYMBZOUXXVDFNTYTEVDFWWJWSAQEEVWNMBTFGISVBWQNZOSBSFPOMZHPJFWXXHWNFEETNELBUHMB");
    msg.op = 216U;
    msg.sched_time = 0.335566910136;

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
    msg.setTimeStamp(0.59341302196);
    msg.setSource(59086U);
    msg.setSourceEntity(18U);
    msg.setDestination(56211U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.805797451086);
    msg.setSource(52634U);
    msg.setSourceEntity(120U);
    msg.setDestination(47320U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.822392895065);
    msg.setSource(19660U);
    msg.setSourceEntity(12U);
    msg.setDestination(39693U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.558281286828);
    msg.setSource(62726U);
    msg.setSourceEntity(151U);
    msg.setDestination(318U);
    msg.setDestinationEntity(130U);
    msg.name.assign("PJWCWYMRHKPVJGVRZTOXDEDHIKBCMXSKMNTRMAYLGSCWALFKYISVKSDPNZALVDMJFEMRGINJOSYJHUADHZUPKFPYWTJBCFOVECAGDJCXZULBXSZGEPBFXWYYIEBUUOHWNETCGLQEQLLGQHZQWFPLBPBHZSUJATVIQKAQUCNFMPGCAONYJMRQNZQAOXUXFIODJCAEWILUZGHXFVRS");
    msg.state = 247U;

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
    msg.setTimeStamp(0.875147016607);
    msg.setSource(47045U);
    msg.setSourceEntity(233U);
    msg.setDestination(58027U);
    msg.setDestinationEntity(134U);
    msg.name.assign("YSXEZHMBAGDPJLPHSSPUXPNYQOOVEDYIZQRTFFZCTAGUFGWKNHLKEXTBNIZZIMTKSMLGMOTEJXMCQLDVKWZCBXRGBCQFJXMLSTXRBCYNRZATUHRVYTMFPBKYPZJRPRCSRELHAIXEXMNFVASWOFRSHIINAGQQVDVHBFKYUMYEJTGPCXIVOICWNOHUDKRPCCDOUSGLZWBKUU");
    msg.state = 192U;

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
    msg.setTimeStamp(0.286231600949);
    msg.setSource(32567U);
    msg.setSourceEntity(184U);
    msg.setDestination(57830U);
    msg.setDestinationEntity(101U);
    msg.name.assign("TVMJXUACMIPQDXLBYYZNDPKVFPCDGGRXHP");
    msg.state = 154U;

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
    msg.setTimeStamp(0.727391765947);
    msg.setSource(4404U);
    msg.setSourceEntity(91U);
    msg.setDestination(15726U);
    msg.setDestinationEntity(105U);
    msg.name.assign("ENPOJCKBZSWENGULRYGZKDATMPSOMTQSAHBIIBNWDRYELZQUZKJVJXVMKRZDLWUFODHZQQSRHSMBTUIKXMODHEBHUBXKNHDQVXCRITOBGHEYSCFAGQSZVOLDXWXVPDORAUYACNGXTGDRIFDZIUVTCVWHJYVMLYYRKMXPGFNFQPQLNMKNXEWTTYCJNAFJEPGEUIPCWLVURHCQCLJSBMPOBFSYAEWJXPKSGC");
    msg.value = 10U;

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
    msg.setTimeStamp(0.644877781059);
    msg.setSource(65363U);
    msg.setSourceEntity(246U);
    msg.setDestination(23682U);
    msg.setDestinationEntity(65U);
    msg.name.assign("RFPVWBHWVWDECLMNNJYBSAASRVERKIWFCHAGTUFXPRXLIJCGJJVOFVJVTZFTQCHLRAMGEOIIXOLZSMJKIJKITMULMMNHNWIOGMONLKGMEIDPAOBGNTOMHKFQQKDBOSEUYPDLDHFTXSVFWBFRSXBMZYHCQDQYWCSDWUSBVGZDLHACWXPQPZBYQZETYXJVRXTLPLQQRBNJAZIYEREGUPYNYAUHCAFBYTUURJXKKGHZVWDADSZ");
    msg.value = 1U;

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
    msg.setTimeStamp(0.950783557258);
    msg.setSource(14135U);
    msg.setSourceEntity(34U);
    msg.setDestination(58124U);
    msg.setDestinationEntity(35U);
    msg.name.assign("ONTKTMHUCECZEYMJPTWUIXALLDSBWAYIBPVLGTMDWILXQVIRLJJMGVIGHNDHRPYODVKUWNDKNWZGKAHBNELSYQA");
    msg.value = 83U;

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
    msg.setTimeStamp(0.861313932921);
    msg.setSource(7914U);
    msg.setSourceEntity(2U);
    msg.setDestination(49454U);
    msg.setDestinationEntity(18U);
    msg.name.assign("FNKTSVLLIKJKBRJTBRBQEAVHGFDMOGBKNECULDSMLTXYCCKOYSAPIDXULTAJQHOTYZGUURMSYAGBZBJRCRSNHYMXHHDUBZTSJPLPTJM");

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
    msg.setTimeStamp(0.872825501271);
    msg.setSource(8996U);
    msg.setSourceEntity(90U);
    msg.setDestination(34234U);
    msg.setDestinationEntity(37U);
    msg.name.assign("RWJHUEXWQLCNMGLDAQHMLUMFBXDXCYEQWGOKDBXBHIZNJKUWAVYREGXOPKMEJFPUTDIPCLGFPXQIHHEIOEWKMTGDNLVCNUTSTNXFAVAAQJRVXICQIOUZ");

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
    msg.setTimeStamp(0.585520242279);
    msg.setSource(63446U);
    msg.setSourceEntity(51U);
    msg.setDestination(60413U);
    msg.setDestinationEntity(220U);
    msg.name.assign("QUVVCNDBYZQLTGLUXRLILZDRYPFRKWUMAHPWDBZNJETGAEVNSUZXLUIBFIFXAUIMGENIFLBYHCSWAMCOQBTFOQSOOHYAPJLGRZRHMVJNPVRGZN");

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
    msg.setTimeStamp(0.869214784736);
    msg.setSource(59149U);
    msg.setSourceEntity(201U);
    msg.setDestination(56879U);
    msg.setDestinationEntity(120U);
    msg.name.assign("AKKDFAIATMQBUTEHXAKRPCXK");
    msg.value = 144U;

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
    msg.setTimeStamp(0.139569679302);
    msg.setSource(59122U);
    msg.setSourceEntity(94U);
    msg.setDestination(22245U);
    msg.setDestinationEntity(180U);
    msg.name.assign("REIXLBXTVXBUHRMUZFGOGWYLAIVLOXNIYRICAMUWPLTYZTYSEKGKJMAR");
    msg.value = 152U;

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
    msg.setTimeStamp(0.0330442388061);
    msg.setSource(1151U);
    msg.setSourceEntity(48U);
    msg.setDestination(40718U);
    msg.setDestinationEntity(187U);
    msg.name.assign("GVFWXTQWHIJIKMOIODWCBSVICAGQLUYPLKXTQORMXGPUPMMXZSZALERBDFTEJPFNZSXFPMTUGDZBFSFKCYWRNFHCGZNSUIVCDKIYDJBHEJHBLDQVLAMWFXNOUOZEYNJHFLSPOGWCVNNEESQBTWOWVTTKUVHNOLDASEQYNUXRJAS");
    msg.value = 18U;

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
    msg.setTimeStamp(0.905652232965);
    msg.setSource(1118U);
    msg.setSourceEntity(119U);
    msg.setDestination(1244U);
    msg.setDestinationEntity(148U);
    msg.id = 209U;
    msg.period = 867209565U;
    msg.duty_cycle = 3583902981U;

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
    msg.setTimeStamp(0.505364212816);
    msg.setSource(55638U);
    msg.setSourceEntity(97U);
    msg.setDestination(2420U);
    msg.setDestinationEntity(212U);
    msg.id = 173U;
    msg.period = 17718691U;
    msg.duty_cycle = 724473454U;

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
    msg.setTimeStamp(0.364596034503);
    msg.setSource(2526U);
    msg.setSourceEntity(91U);
    msg.setDestination(27951U);
    msg.setDestinationEntity(57U);
    msg.id = 97U;
    msg.period = 3683923205U;
    msg.duty_cycle = 4144137319U;

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
    msg.setTimeStamp(0.274923775385);
    msg.setSource(5256U);
    msg.setSourceEntity(187U);
    msg.setDestination(6673U);
    msg.setDestinationEntity(90U);
    msg.id = 221U;
    msg.period = 3877987731U;
    msg.duty_cycle = 3151543542U;

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
    msg.setTimeStamp(0.0431489261055);
    msg.setSource(45691U);
    msg.setSourceEntity(82U);
    msg.setDestination(43170U);
    msg.setDestinationEntity(188U);
    msg.id = 218U;
    msg.period = 3953708217U;
    msg.duty_cycle = 2583918893U;

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
    msg.setTimeStamp(0.183128572544);
    msg.setSource(5706U);
    msg.setSourceEntity(145U);
    msg.setDestination(49536U);
    msg.setDestinationEntity(91U);
    msg.id = 220U;
    msg.period = 1596268208U;
    msg.duty_cycle = 1052960861U;

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
    msg.setTimeStamp(0.527177994679);
    msg.setSource(40487U);
    msg.setSourceEntity(56U);
    msg.setDestination(45139U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.489077683682;
    msg.lon = 0.207712504106;
    msg.height = 0.877963276068;
    msg.x = 0.555239765287;
    msg.y = 0.116351978323;
    msg.z = 0.986409406606;
    msg.phi = 0.361877803141;
    msg.theta = 0.0994966025985;
    msg.psi = 0.524409308012;
    msg.u = 0.977226730081;
    msg.v = 0.0808901276546;
    msg.w = 0.63106817016;
    msg.vx = 0.845407092373;
    msg.vy = 0.338147241128;
    msg.vz = 0.901486499099;
    msg.p = 0.881362419007;
    msg.q = 0.726251551591;
    msg.r = 0.170632113427;
    msg.depth = 0.974919486669;
    msg.alt = 0.385281670447;

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
    msg.setTimeStamp(0.175142093806);
    msg.setSource(11294U);
    msg.setSourceEntity(205U);
    msg.setDestination(7706U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.935538264285;
    msg.lon = 0.591595947203;
    msg.height = 0.939790378787;
    msg.x = 0.065199823895;
    msg.y = 0.000935228772253;
    msg.z = 0.845933040327;
    msg.phi = 0.0921917825498;
    msg.theta = 0.204452134127;
    msg.psi = 0.671693765594;
    msg.u = 0.142722788789;
    msg.v = 0.0756280126728;
    msg.w = 0.831780773686;
    msg.vx = 0.623140407446;
    msg.vy = 0.764271053563;
    msg.vz = 0.459585553206;
    msg.p = 0.786073660717;
    msg.q = 0.0538403079838;
    msg.r = 0.0464545816538;
    msg.depth = 0.129109151807;
    msg.alt = 0.894431256393;

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
    msg.setTimeStamp(0.224468448819);
    msg.setSource(45248U);
    msg.setSourceEntity(161U);
    msg.setDestination(43332U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.77283789301;
    msg.lon = 0.599564861007;
    msg.height = 0.669227784787;
    msg.x = 0.202008176902;
    msg.y = 0.807806267412;
    msg.z = 0.085551378816;
    msg.phi = 0.586277883319;
    msg.theta = 0.913949961688;
    msg.psi = 0.834404148728;
    msg.u = 0.787566822824;
    msg.v = 0.900528226039;
    msg.w = 0.844075438322;
    msg.vx = 0.714670027024;
    msg.vy = 0.518460833032;
    msg.vz = 0.967427387172;
    msg.p = 0.485116552713;
    msg.q = 0.695773390709;
    msg.r = 0.783023505463;
    msg.depth = 0.448576118171;
    msg.alt = 0.255548795083;

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
    msg.setTimeStamp(0.0744042682082);
    msg.setSource(30831U);
    msg.setSourceEntity(236U);
    msg.setDestination(16685U);
    msg.setDestinationEntity(125U);
    msg.x = 0.946339494826;
    msg.y = 0.927656684845;
    msg.z = 0.652490249873;

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
    msg.setTimeStamp(0.552323324568);
    msg.setSource(28211U);
    msg.setSourceEntity(177U);
    msg.setDestination(27345U);
    msg.setDestinationEntity(148U);
    msg.x = 0.492505843303;
    msg.y = 0.864613947358;
    msg.z = 0.271954555671;

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
    msg.setTimeStamp(0.738836369942);
    msg.setSource(33208U);
    msg.setSourceEntity(239U);
    msg.setDestination(21048U);
    msg.setDestinationEntity(95U);
    msg.x = 0.19822929174;
    msg.y = 0.684124637003;
    msg.z = 0.810488704913;

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
    msg.setTimeStamp(0.441530530137);
    msg.setSource(51351U);
    msg.setSourceEntity(4U);
    msg.setDestination(44594U);
    msg.setDestinationEntity(207U);
    msg.value = 0.442697793318;

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
    msg.setTimeStamp(0.0604387260629);
    msg.setSource(54959U);
    msg.setSourceEntity(122U);
    msg.setDestination(54696U);
    msg.setDestinationEntity(144U);
    msg.value = 0.731943754472;

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
    msg.setTimeStamp(0.329171946446);
    msg.setSource(13012U);
    msg.setSourceEntity(244U);
    msg.setDestination(56907U);
    msg.setDestinationEntity(80U);
    msg.value = 0.808704215091;

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
    msg.setTimeStamp(0.00835014220926);
    msg.setSource(6670U);
    msg.setSourceEntity(93U);
    msg.setDestination(799U);
    msg.setDestinationEntity(249U);
    msg.value = 0.221157271702;

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
    msg.setTimeStamp(0.414544075809);
    msg.setSource(34427U);
    msg.setSourceEntity(137U);
    msg.setDestination(8703U);
    msg.setDestinationEntity(95U);
    msg.value = 0.0267810945872;

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
    msg.setTimeStamp(0.155699735005);
    msg.setSource(17114U);
    msg.setSourceEntity(97U);
    msg.setDestination(16886U);
    msg.setDestinationEntity(184U);
    msg.value = 0.584795448299;

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
    msg.setTimeStamp(0.867163164909);
    msg.setSource(20864U);
    msg.setSourceEntity(76U);
    msg.setDestination(5301U);
    msg.setDestinationEntity(95U);
    msg.x = 0.742726274088;
    msg.y = 0.218595485942;
    msg.z = 0.109926519676;
    msg.phi = 0.706175292887;
    msg.theta = 0.384696003618;
    msg.psi = 0.0613538508828;
    msg.p = 0.0591865300126;
    msg.q = 0.531229295207;
    msg.r = 0.461795631433;
    msg.u = 0.357318773284;
    msg.v = 0.569441777256;
    msg.w = 0.0305373793585;
    msg.bias_psi = 0.0804287547247;
    msg.bias_r = 0.723385118832;

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
    msg.setTimeStamp(0.336223550329);
    msg.setSource(13026U);
    msg.setSourceEntity(204U);
    msg.setDestination(22459U);
    msg.setDestinationEntity(83U);
    msg.x = 0.559777555724;
    msg.y = 0.683342427119;
    msg.z = 0.160589614124;
    msg.phi = 0.758604556348;
    msg.theta = 0.296590125223;
    msg.psi = 0.0661330016851;
    msg.p = 0.0980579432897;
    msg.q = 0.872786379622;
    msg.r = 0.615654098966;
    msg.u = 0.139391726232;
    msg.v = 0.681445687243;
    msg.w = 0.831873685521;
    msg.bias_psi = 0.376151530832;
    msg.bias_r = 0.364461953472;

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
    msg.setTimeStamp(0.798479045311);
    msg.setSource(52514U);
    msg.setSourceEntity(99U);
    msg.setDestination(47639U);
    msg.setDestinationEntity(64U);
    msg.x = 0.853304028815;
    msg.y = 0.379262411597;
    msg.z = 0.638762744134;
    msg.phi = 0.928717965602;
    msg.theta = 0.49526708418;
    msg.psi = 0.309276939003;
    msg.p = 0.348864723691;
    msg.q = 0.539381674241;
    msg.r = 0.795668902494;
    msg.u = 0.85405251941;
    msg.v = 0.521443625671;
    msg.w = 0.727489011446;
    msg.bias_psi = 0.553432565775;
    msg.bias_r = 0.831414376741;

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
    msg.setTimeStamp(0.814045074272);
    msg.setSource(14844U);
    msg.setSourceEntity(135U);
    msg.setDestination(48013U);
    msg.setDestinationEntity(211U);
    msg.bias_psi = 0.564250339263;
    msg.bias_r = 0.0213125004811;
    msg.cog = 0.108470827053;
    msg.cyaw = 0.912087239913;
    msg.lbl_rej_level = 0.969674589295;
    msg.gps_rej_level = 0.70062304921;
    msg.custom_x = 0.127933582883;
    msg.custom_y = 0.510008753444;
    msg.custom_z = 0.455057556421;

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
    msg.setTimeStamp(0.750609283443);
    msg.setSource(52023U);
    msg.setSourceEntity(58U);
    msg.setDestination(30000U);
    msg.setDestinationEntity(210U);
    msg.bias_psi = 0.056477462359;
    msg.bias_r = 0.0298023808244;
    msg.cog = 0.613066166609;
    msg.cyaw = 0.621188158164;
    msg.lbl_rej_level = 0.2788645652;
    msg.gps_rej_level = 0.089963025965;
    msg.custom_x = 0.927947743302;
    msg.custom_y = 0.29066013646;
    msg.custom_z = 0.421092361663;

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
    msg.setTimeStamp(0.541476296716);
    msg.setSource(9913U);
    msg.setSourceEntity(21U);
    msg.setDestination(17508U);
    msg.setDestinationEntity(208U);
    msg.bias_psi = 0.651923004903;
    msg.bias_r = 0.708230598697;
    msg.cog = 0.280954425609;
    msg.cyaw = 0.49268120825;
    msg.lbl_rej_level = 0.0843709948686;
    msg.gps_rej_level = 0.513497354724;
    msg.custom_x = 0.734061692986;
    msg.custom_y = 0.0273259951395;
    msg.custom_z = 0.401185823558;

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
    msg.setTimeStamp(0.494808672055);
    msg.setSource(6162U);
    msg.setSourceEntity(112U);
    msg.setDestination(54371U);
    msg.setDestinationEntity(184U);
    msg.utc_time = 0.72798440377;
    msg.reason = 18U;

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
    msg.setTimeStamp(0.488611548743);
    msg.setSource(20191U);
    msg.setSourceEntity(71U);
    msg.setDestination(50266U);
    msg.setDestinationEntity(3U);
    msg.utc_time = 0.107870284107;
    msg.reason = 37U;

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
    msg.setTimeStamp(0.604603417326);
    msg.setSource(16384U);
    msg.setSourceEntity(174U);
    msg.setDestination(45770U);
    msg.setDestinationEntity(137U);
    msg.utc_time = 0.819126392293;
    msg.reason = 246U;

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
    msg.setTimeStamp(0.866250025129);
    msg.setSource(42357U);
    msg.setSourceEntity(69U);
    msg.setDestination(1163U);
    msg.setDestinationEntity(30U);
    msg.id = 145U;
    msg.range = 0.0512762953634;
    msg.acceptance = 9U;

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
    msg.setTimeStamp(0.0826575902608);
    msg.setSource(23377U);
    msg.setSourceEntity(125U);
    msg.setDestination(47422U);
    msg.setDestinationEntity(49U);
    msg.id = 75U;
    msg.range = 0.679317190103;
    msg.acceptance = 127U;

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
    msg.setTimeStamp(0.368984029995);
    msg.setSource(28393U);
    msg.setSourceEntity(61U);
    msg.setDestination(62384U);
    msg.setDestinationEntity(44U);
    msg.id = 113U;
    msg.range = 0.0294271632604;
    msg.acceptance = 130U;

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
    msg.setTimeStamp(0.223711419574);
    msg.setSource(45686U);
    msg.setSourceEntity(116U);
    msg.setDestination(664U);
    msg.setDestinationEntity(24U);
    msg.type = 96U;
    msg.reason = 174U;
    msg.value = 0.797117905276;
    msg.timestep = 0.565962166462;

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
    msg.setTimeStamp(0.862406626493);
    msg.setSource(9708U);
    msg.setSourceEntity(53U);
    msg.setDestination(37510U);
    msg.setDestinationEntity(197U);
    msg.type = 221U;
    msg.reason = 132U;
    msg.value = 0.29922191121;
    msg.timestep = 0.583980477243;

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
    msg.setTimeStamp(0.85948732789);
    msg.setSource(29535U);
    msg.setSourceEntity(104U);
    msg.setDestination(44365U);
    msg.setDestinationEntity(198U);
    msg.type = 199U;
    msg.reason = 246U;
    msg.value = 0.209378723187;
    msg.timestep = 0.953148052705;

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
    msg.setTimeStamp(0.359780311098);
    msg.setSource(59629U);
    msg.setSourceEntity(111U);
    msg.setDestination(52244U);
    msg.setDestinationEntity(176U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RYTLULIJJOCRNAWHZRGPPOGPMBFMOKDLVJFTKVKOENVXTTICREODJAXCHJLMNULMSNCDXBQUIASRZQTBRBZDMWUIKGCDNGWFXVJAFZUSHKWEFQMPRCMVPAOUHPXUFJWNJZZTPMKYYILGYZFEAX");
    tmp_msg_0.lat = 0.14862176524;
    tmp_msg_0.lon = 0.312533825124;
    tmp_msg_0.depth = 0.0175723797191;
    tmp_msg_0.query_channel = 142U;
    tmp_msg_0.reply_channel = 0U;
    tmp_msg_0.transponder_delay = 38U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.303278191706;
    msg.y = 0.77099584473;
    msg.var_x = 0.739512286774;
    msg.var_y = 0.877977607794;
    msg.distance = 0.869273205842;

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
    msg.setTimeStamp(0.570838622247);
    msg.setSource(7243U);
    msg.setSourceEntity(163U);
    msg.setDestination(29009U);
    msg.setDestinationEntity(44U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JXQWTCYULQQPJPNXKSPQYIAIFIAG");
    tmp_msg_0.lat = 0.0195892807463;
    tmp_msg_0.lon = 0.0380679279524;
    tmp_msg_0.depth = 0.00146565861803;
    tmp_msg_0.query_channel = 105U;
    tmp_msg_0.reply_channel = 25U;
    tmp_msg_0.transponder_delay = 201U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.483584541231;
    msg.y = 0.370412652032;
    msg.var_x = 0.481532839632;
    msg.var_y = 0.608939458664;
    msg.distance = 0.270872889636;

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
    msg.setTimeStamp(0.06942323139);
    msg.setSource(31578U);
    msg.setSourceEntity(194U);
    msg.setDestination(9173U);
    msg.setDestinationEntity(249U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LGVCMPYJMQDDGWPHLHENBVIIQDSKMRXIUQBUWHHWAYEYXXNKSWBDOOXMVLAIKJIRAGBNPAJXKBDCESMCHYTRUMNTOEUQIVLHIGXDVACSFYEZLNJVSXHZOKIHQPFCZ");
    tmp_msg_0.lat = 0.516461709555;
    tmp_msg_0.lon = 0.764829783965;
    tmp_msg_0.depth = 0.588331551626;
    tmp_msg_0.query_channel = 192U;
    tmp_msg_0.reply_channel = 221U;
    tmp_msg_0.transponder_delay = 42U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.687031066619;
    msg.y = 0.723787775051;
    msg.var_x = 0.147755235044;
    msg.var_y = 0.703225697197;
    msg.distance = 0.204218229427;

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
    msg.setTimeStamp(0.849986878233);
    msg.setSource(52519U);
    msg.setSourceEntity(232U);
    msg.setDestination(20620U);
    msg.setDestinationEntity(40U);
    msg.state = 169U;

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
    msg.setTimeStamp(0.131277233077);
    msg.setSource(47004U);
    msg.setSourceEntity(225U);
    msg.setDestination(55084U);
    msg.setDestinationEntity(224U);
    msg.state = 205U;

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
    msg.setTimeStamp(0.82159604009);
    msg.setSource(22928U);
    msg.setSourceEntity(166U);
    msg.setDestination(46192U);
    msg.setDestinationEntity(182U);
    msg.state = 144U;

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
    msg.setTimeStamp(0.560443159457);
    msg.setSource(5800U);
    msg.setSourceEntity(120U);
    msg.setDestination(56054U);
    msg.setDestinationEntity(142U);
    msg.x = 0.126327869558;
    msg.y = 0.24723754112;
    msg.z = 0.0511397120532;

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
    msg.setTimeStamp(0.77702133549);
    msg.setSource(59759U);
    msg.setSourceEntity(86U);
    msg.setDestination(33634U);
    msg.setDestinationEntity(29U);
    msg.x = 0.812018461747;
    msg.y = 0.516567197906;
    msg.z = 0.274997188353;

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
    msg.setTimeStamp(0.462930916753);
    msg.setSource(39910U);
    msg.setSourceEntity(184U);
    msg.setDestination(9709U);
    msg.setDestinationEntity(148U);
    msg.x = 0.455040040091;
    msg.y = 0.251607213342;
    msg.z = 0.515232188272;

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
    msg.setTimeStamp(0.654970771941);
    msg.setSource(48930U);
    msg.setSourceEntity(42U);
    msg.setDestination(56112U);
    msg.setDestinationEntity(101U);
    msg.va = 0.0959498269103;
    msg.aoa = 0.623687946686;
    msg.ssa = 0.268648174157;

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
    msg.setTimeStamp(0.0251671024113);
    msg.setSource(58143U);
    msg.setSourceEntity(9U);
    msg.setDestination(6642U);
    msg.setDestinationEntity(199U);
    msg.va = 0.646691320853;
    msg.aoa = 0.201788339945;
    msg.ssa = 0.641786399809;

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
    msg.setTimeStamp(0.19899750746);
    msg.setSource(57101U);
    msg.setSourceEntity(194U);
    msg.setDestination(56726U);
    msg.setDestinationEntity(165U);
    msg.va = 0.535118969242;
    msg.aoa = 0.979788043005;
    msg.ssa = 0.960162645543;

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
    msg.setTimeStamp(0.645347483887);
    msg.setSource(15614U);
    msg.setSourceEntity(96U);
    msg.setDestination(34831U);
    msg.setDestinationEntity(103U);
    msg.value = 0.407148649881;

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
    msg.setTimeStamp(0.639119563874);
    msg.setSource(44313U);
    msg.setSourceEntity(41U);
    msg.setDestination(3672U);
    msg.setDestinationEntity(222U);
    msg.value = 0.0348566265619;

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
    msg.setTimeStamp(0.378381427619);
    msg.setSource(51369U);
    msg.setSourceEntity(133U);
    msg.setDestination(27050U);
    msg.setDestinationEntity(51U);
    msg.value = 0.107533895494;

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
    msg.setTimeStamp(0.750001576476);
    msg.setSource(4034U);
    msg.setSourceEntity(223U);
    msg.setDestination(47955U);
    msg.setDestinationEntity(140U);
    msg.value = 0.737625885134;
    msg.z_units = 97U;

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
    msg.setTimeStamp(0.956092884976);
    msg.setSource(40075U);
    msg.setSourceEntity(139U);
    msg.setDestination(59459U);
    msg.setDestinationEntity(45U);
    msg.value = 0.0601550789652;
    msg.z_units = 195U;

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
    msg.setTimeStamp(0.342313037252);
    msg.setSource(25704U);
    msg.setSourceEntity(12U);
    msg.setDestination(45408U);
    msg.setDestinationEntity(33U);
    msg.value = 0.524786641479;
    msg.z_units = 14U;

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
    msg.setTimeStamp(0.146468572203);
    msg.setSource(963U);
    msg.setSourceEntity(107U);
    msg.setDestination(28490U);
    msg.setDestinationEntity(223U);
    msg.value = 0.43513927742;
    msg.speed_units = 130U;

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
    msg.setTimeStamp(0.482778810023);
    msg.setSource(63462U);
    msg.setSourceEntity(56U);
    msg.setDestination(5725U);
    msg.setDestinationEntity(245U);
    msg.value = 0.386885493284;
    msg.speed_units = 36U;

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
    msg.setTimeStamp(0.380876230622);
    msg.setSource(40252U);
    msg.setSourceEntity(111U);
    msg.setDestination(16412U);
    msg.setDestinationEntity(210U);
    msg.value = 0.978602191726;
    msg.speed_units = 135U;

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
    msg.setTimeStamp(0.103493175077);
    msg.setSource(24099U);
    msg.setSourceEntity(93U);
    msg.setDestination(5299U);
    msg.setDestinationEntity(129U);
    msg.value = 0.92731826803;

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
    msg.setTimeStamp(0.284338577144);
    msg.setSource(63188U);
    msg.setSourceEntity(91U);
    msg.setDestination(60586U);
    msg.setDestinationEntity(126U);
    msg.value = 0.937048879801;

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
    msg.setTimeStamp(0.206056820089);
    msg.setSource(43656U);
    msg.setSourceEntity(143U);
    msg.setDestination(42648U);
    msg.setDestinationEntity(241U);
    msg.value = 0.504107655329;

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
    msg.setTimeStamp(0.0228532951325);
    msg.setSource(29033U);
    msg.setSourceEntity(86U);
    msg.setDestination(3908U);
    msg.setDestinationEntity(132U);
    msg.value = 0.166958964957;

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
    msg.setTimeStamp(0.010303760292);
    msg.setSource(18417U);
    msg.setSourceEntity(61U);
    msg.setDestination(32211U);
    msg.setDestinationEntity(252U);
    msg.value = 0.567217514373;

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
    msg.setTimeStamp(0.618950542346);
    msg.setSource(50585U);
    msg.setSourceEntity(91U);
    msg.setDestination(42570U);
    msg.setDestinationEntity(19U);
    msg.value = 0.27971712666;

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
    msg.setTimeStamp(0.935504349411);
    msg.setSource(65283U);
    msg.setSourceEntity(21U);
    msg.setDestination(32902U);
    msg.setDestinationEntity(46U);
    msg.value = 0.46681078644;

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
    msg.setTimeStamp(0.141720381867);
    msg.setSource(8939U);
    msg.setSourceEntity(8U);
    msg.setDestination(42824U);
    msg.setDestinationEntity(136U);
    msg.value = 0.543858823986;

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
    msg.setTimeStamp(0.514112153861);
    msg.setSource(64856U);
    msg.setSourceEntity(214U);
    msg.setDestination(12447U);
    msg.setDestinationEntity(143U);
    msg.value = 0.763786714316;

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
    msg.setTimeStamp(0.981420037898);
    msg.setSource(52991U);
    msg.setSourceEntity(191U);
    msg.setDestination(39982U);
    msg.setDestinationEntity(77U);
    msg.path_ref = 2982362180U;
    msg.start_lat = 0.940219311217;
    msg.start_lon = 0.251909757263;
    msg.start_z = 0.861599666075;
    msg.start_z_units = 159U;
    msg.end_lat = 0.729713329243;
    msg.end_lon = 0.305428161417;
    msg.end_z = 0.539820546057;
    msg.end_z_units = 80U;
    msg.speed = 0.977590045907;
    msg.speed_units = 15U;
    msg.lradius = 0.271465024105;
    msg.flags = 59U;

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
    msg.setTimeStamp(0.370087749048);
    msg.setSource(26652U);
    msg.setSourceEntity(56U);
    msg.setDestination(56823U);
    msg.setDestinationEntity(223U);
    msg.path_ref = 1115286551U;
    msg.start_lat = 0.806971012975;
    msg.start_lon = 0.754988616268;
    msg.start_z = 0.92531882686;
    msg.start_z_units = 177U;
    msg.end_lat = 0.307803832315;
    msg.end_lon = 0.00623987347458;
    msg.end_z = 0.195893332605;
    msg.end_z_units = 145U;
    msg.speed = 0.985146211054;
    msg.speed_units = 89U;
    msg.lradius = 0.447047142122;
    msg.flags = 105U;

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
    msg.setTimeStamp(0.0102054010359);
    msg.setSource(16805U);
    msg.setSourceEntity(154U);
    msg.setDestination(22467U);
    msg.setDestinationEntity(55U);
    msg.path_ref = 3353152279U;
    msg.start_lat = 0.659388380336;
    msg.start_lon = 0.362834961787;
    msg.start_z = 0.327940511957;
    msg.start_z_units = 12U;
    msg.end_lat = 0.747048097391;
    msg.end_lon = 0.160119689729;
    msg.end_z = 0.541022247307;
    msg.end_z_units = 254U;
    msg.speed = 0.587224844542;
    msg.speed_units = 186U;
    msg.lradius = 0.811551843368;
    msg.flags = 65U;

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
    msg.setTimeStamp(0.909627422141);
    msg.setSource(34144U);
    msg.setSourceEntity(215U);
    msg.setDestination(47121U);
    msg.setDestinationEntity(52U);
    msg.x = 0.506001473865;
    msg.y = 0.773734648279;
    msg.z = 0.639887184804;
    msg.k = 0.883568162278;
    msg.m = 0.0292101939126;
    msg.n = 0.247159604974;
    msg.flags = 3U;

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
    msg.setTimeStamp(0.845959612325);
    msg.setSource(1891U);
    msg.setSourceEntity(165U);
    msg.setDestination(6628U);
    msg.setDestinationEntity(98U);
    msg.x = 0.186235020522;
    msg.y = 0.240102304449;
    msg.z = 0.746306640388;
    msg.k = 0.691881531845;
    msg.m = 0.232821138117;
    msg.n = 0.872044177229;
    msg.flags = 6U;

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
    msg.setTimeStamp(0.0291949229959);
    msg.setSource(51585U);
    msg.setSourceEntity(158U);
    msg.setDestination(18344U);
    msg.setDestinationEntity(38U);
    msg.x = 0.42334620461;
    msg.y = 0.00189737371765;
    msg.z = 0.614153865982;
    msg.k = 0.684746479255;
    msg.m = 0.506620856347;
    msg.n = 0.113819691487;
    msg.flags = 75U;

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
    msg.setTimeStamp(0.284349150083);
    msg.setSource(42165U);
    msg.setSourceEntity(43U);
    msg.setDestination(55525U);
    msg.setDestinationEntity(36U);
    msg.value = 0.0182324583649;

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
    msg.setTimeStamp(0.104302814737);
    msg.setSource(49736U);
    msg.setSourceEntity(113U);
    msg.setDestination(3964U);
    msg.setDestinationEntity(11U);
    msg.value = 0.313159750082;

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
    msg.setTimeStamp(0.114473618664);
    msg.setSource(19699U);
    msg.setSourceEntity(105U);
    msg.setDestination(17463U);
    msg.setDestinationEntity(28U);
    msg.value = 0.412014865582;

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
    msg.setTimeStamp(0.903372861947);
    msg.setSource(50363U);
    msg.setSourceEntity(102U);
    msg.setDestination(61260U);
    msg.setDestinationEntity(148U);
    msg.u = 0.777438230379;
    msg.v = 0.945863807148;
    msg.w = 0.631543886454;
    msg.p = 0.343323504083;
    msg.q = 0.273433323134;
    msg.r = 0.511685409032;
    msg.flags = 28U;

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
    msg.setTimeStamp(0.236024138052);
    msg.setSource(14050U);
    msg.setSourceEntity(136U);
    msg.setDestination(21303U);
    msg.setDestinationEntity(66U);
    msg.u = 0.394805896793;
    msg.v = 0.462867234669;
    msg.w = 0.410418443528;
    msg.p = 0.579831977308;
    msg.q = 0.712461099992;
    msg.r = 0.00970094491247;
    msg.flags = 35U;

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
    msg.setTimeStamp(0.570343499164);
    msg.setSource(41083U);
    msg.setSourceEntity(239U);
    msg.setDestination(839U);
    msg.setDestinationEntity(4U);
    msg.u = 0.285844398803;
    msg.v = 0.371383600906;
    msg.w = 0.790321240199;
    msg.p = 0.516397283374;
    msg.q = 0.0554916726635;
    msg.r = 0.0253828921574;
    msg.flags = 127U;

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
    msg.setTimeStamp(0.153398365483);
    msg.setSource(60669U);
    msg.setSourceEntity(114U);
    msg.setDestination(34681U);
    msg.setDestinationEntity(38U);
    msg.path_ref = 3287144858U;
    msg.start_lat = 0.165270298877;
    msg.start_lon = 0.86944823807;
    msg.start_z = 0.728611778491;
    msg.start_z_units = 121U;
    msg.end_lat = 0.856899637564;
    msg.end_lon = 0.763020174879;
    msg.end_z = 0.344728023505;
    msg.end_z_units = 97U;
    msg.lradius = 0.853461409469;
    msg.flags = 210U;
    msg.x = 0.557607531682;
    msg.y = 0.507365031054;
    msg.z = 0.516254458772;
    msg.vx = 0.473746052746;
    msg.vy = 0.12008850699;
    msg.vz = 0.50208350805;
    msg.course_error = 0.26685289928;
    msg.eta = 53505U;

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
    msg.setTimeStamp(0.980374323922);
    msg.setSource(46658U);
    msg.setSourceEntity(199U);
    msg.setDestination(17911U);
    msg.setDestinationEntity(31U);
    msg.path_ref = 2854551281U;
    msg.start_lat = 0.188020000437;
    msg.start_lon = 0.304694980208;
    msg.start_z = 0.2287207568;
    msg.start_z_units = 178U;
    msg.end_lat = 0.369321431078;
    msg.end_lon = 0.940433866873;
    msg.end_z = 0.781696361077;
    msg.end_z_units = 43U;
    msg.lradius = 0.979561263168;
    msg.flags = 78U;
    msg.x = 0.435510292087;
    msg.y = 0.552713083641;
    msg.z = 0.0156113483688;
    msg.vx = 0.0842715949116;
    msg.vy = 0.621661537811;
    msg.vz = 0.545180436225;
    msg.course_error = 0.717267005345;
    msg.eta = 41328U;

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
    msg.setTimeStamp(0.273459151098);
    msg.setSource(7733U);
    msg.setSourceEntity(85U);
    msg.setDestination(52582U);
    msg.setDestinationEntity(185U);
    msg.path_ref = 2395138228U;
    msg.start_lat = 0.092244520056;
    msg.start_lon = 0.71679540752;
    msg.start_z = 0.195251144046;
    msg.start_z_units = 77U;
    msg.end_lat = 0.0348023062856;
    msg.end_lon = 0.42623401231;
    msg.end_z = 0.601290910242;
    msg.end_z_units = 217U;
    msg.lradius = 0.756864358645;
    msg.flags = 205U;
    msg.x = 0.695772270534;
    msg.y = 0.673859507995;
    msg.z = 0.114421803188;
    msg.vx = 0.410516246284;
    msg.vy = 0.981356809213;
    msg.vz = 0.0304624510627;
    msg.course_error = 0.371928632451;
    msg.eta = 60394U;

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
    msg.setTimeStamp(0.519083245507);
    msg.setSource(54666U);
    msg.setSourceEntity(97U);
    msg.setDestination(18591U);
    msg.setDestinationEntity(134U);
    msg.k = 0.251028639335;
    msg.m = 0.48353944434;
    msg.n = 0.661913466371;

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
    msg.setTimeStamp(0.178755592041);
    msg.setSource(7142U);
    msg.setSourceEntity(162U);
    msg.setDestination(45510U);
    msg.setDestinationEntity(67U);
    msg.k = 0.7126649184;
    msg.m = 0.976923045384;
    msg.n = 0.287399748821;

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
    msg.setTimeStamp(0.877658835352);
    msg.setSource(44107U);
    msg.setSourceEntity(142U);
    msg.setDestination(40778U);
    msg.setDestinationEntity(123U);
    msg.k = 0.605350952149;
    msg.m = 0.0797895942541;
    msg.n = 0.132266534569;

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
    msg.setTimeStamp(0.338753792121);
    msg.setSource(49908U);
    msg.setSourceEntity(181U);
    msg.setDestination(42413U);
    msg.setDestinationEntity(120U);
    msg.p = 0.67361187381;
    msg.i = 0.995568419746;
    msg.d = 0.399457995288;
    msg.a = 0.0102148566023;

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
    msg.setTimeStamp(0.12087070277);
    msg.setSource(23423U);
    msg.setSourceEntity(91U);
    msg.setDestination(47265U);
    msg.setDestinationEntity(197U);
    msg.p = 0.68685466914;
    msg.i = 0.762998062367;
    msg.d = 0.609805942813;
    msg.a = 0.314381079775;

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
    msg.setTimeStamp(0.685841656688);
    msg.setSource(58436U);
    msg.setSourceEntity(153U);
    msg.setDestination(2263U);
    msg.setDestinationEntity(230U);
    msg.p = 0.22385945771;
    msg.i = 0.632629165924;
    msg.d = 0.98687266545;
    msg.a = 0.35817042738;

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
    msg.setTimeStamp(0.628270170792);
    msg.setSource(54150U);
    msg.setSourceEntity(205U);
    msg.setDestination(59917U);
    msg.setDestinationEntity(121U);
    msg.op = 55U;

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
    msg.setTimeStamp(0.551851243082);
    msg.setSource(7059U);
    msg.setSourceEntity(220U);
    msg.setDestination(51564U);
    msg.setDestinationEntity(107U);
    msg.op = 13U;

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
    msg.setTimeStamp(0.678075477708);
    msg.setSource(60889U);
    msg.setSourceEntity(69U);
    msg.setDestination(36061U);
    msg.setDestinationEntity(94U);
    msg.op = 18U;

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
    msg.setTimeStamp(0.869680429043);
    msg.setSource(28064U);
    msg.setSourceEntity(37U);
    msg.setDestination(60366U);
    msg.setDestinationEntity(4U);
    msg.x = 0.117727348972;
    msg.y = 0.930300659793;
    msg.z = 0.446793051618;
    msg.vx = 0.706215618313;
    msg.vy = 0.162563667023;
    msg.vz = 0.570489900958;
    msg.ax = 0.277759967442;
    msg.ay = 0.0894218284772;
    msg.az = 0.289201462792;
    msg.flags = 54661U;

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
    msg.setTimeStamp(0.125391795992);
    msg.setSource(41066U);
    msg.setSourceEntity(150U);
    msg.setDestination(26823U);
    msg.setDestinationEntity(10U);
    msg.x = 0.285746319792;
    msg.y = 0.332741697567;
    msg.z = 0.0258438953336;
    msg.vx = 0.655212239052;
    msg.vy = 0.0221218975086;
    msg.vz = 0.0888357186964;
    msg.ax = 0.320178442242;
    msg.ay = 0.580363227636;
    msg.az = 0.855505441242;
    msg.flags = 15648U;

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
    msg.setTimeStamp(0.949367533789);
    msg.setSource(6069U);
    msg.setSourceEntity(88U);
    msg.setDestination(22416U);
    msg.setDestinationEntity(54U);
    msg.x = 0.953951522119;
    msg.y = 0.881097175394;
    msg.z = 0.881644364571;
    msg.vx = 0.797203574735;
    msg.vy = 0.0458059127073;
    msg.vz = 0.192731907203;
    msg.ax = 0.630547133585;
    msg.ay = 0.453063658378;
    msg.az = 0.687507304837;
    msg.flags = 33206U;

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
    msg.setTimeStamp(0.049024133226);
    msg.setSource(22914U);
    msg.setSourceEntity(173U);
    msg.setDestination(41525U);
    msg.setDestinationEntity(2U);
    msg.value = 0.992971631186;

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
    msg.setTimeStamp(0.0705503178435);
    msg.setSource(64104U);
    msg.setSourceEntity(230U);
    msg.setDestination(4406U);
    msg.setDestinationEntity(47U);
    msg.value = 0.193216172482;

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
    msg.setTimeStamp(0.58106932727);
    msg.setSource(47140U);
    msg.setSourceEntity(130U);
    msg.setDestination(39115U);
    msg.setDestinationEntity(74U);
    msg.value = 0.603615831144;

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
    msg.setTimeStamp(0.173902043565);
    msg.setSource(39484U);
    msg.setSourceEntity(119U);
    msg.setDestination(9850U);
    msg.setDestinationEntity(126U);
    msg.timeout = 45771U;
    msg.lat = 0.103216116231;
    msg.lon = 0.00297559305429;
    msg.z = 0.924583394294;
    msg.z_units = 47U;
    msg.speed = 0.818565648031;
    msg.speed_units = 133U;
    msg.roll = 0.361002805335;
    msg.pitch = 0.247973958447;
    msg.yaw = 0.913734211197;
    msg.custom.assign("MPDXYXJVEHVGKMVBLEXRCWRVYDPAWWNSHFHFYZQTUPABUSPKRGJKJNJEJITJFDTXERZNUIAFITLPECXQILFEPWBWMQHLWCWQBBVKMBHQSDLRTSZFGHZBYLOFOIMKWVWANGYQTENLNIRODKZUOGGOCHDXIZRQDXPZQBXNKDSMPVMM");

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
    msg.setTimeStamp(0.498896476808);
    msg.setSource(59239U);
    msg.setSourceEntity(125U);
    msg.setDestination(20264U);
    msg.setDestinationEntity(212U);
    msg.timeout = 55166U;
    msg.lat = 0.348723239064;
    msg.lon = 0.844933979626;
    msg.z = 0.551769711568;
    msg.z_units = 145U;
    msg.speed = 0.159971695492;
    msg.speed_units = 151U;
    msg.roll = 0.584894253953;
    msg.pitch = 0.954366855369;
    msg.yaw = 0.0427182394506;
    msg.custom.assign("KGKVVRQXYXEJFPIMLNQPSPMGNFVLEDLHXNTOMWEXHRASMWTJIRMRUGUNNWYKTITQBKQPUSZXXOBOKFCU");

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
    msg.setTimeStamp(0.621325814078);
    msg.setSource(6985U);
    msg.setSourceEntity(87U);
    msg.setDestination(26756U);
    msg.setDestinationEntity(206U);
    msg.timeout = 65258U;
    msg.lat = 0.0826112087102;
    msg.lon = 0.747946919167;
    msg.z = 0.594108358729;
    msg.z_units = 70U;
    msg.speed = 0.41808863435;
    msg.speed_units = 228U;
    msg.roll = 0.710737005279;
    msg.pitch = 0.499415500101;
    msg.yaw = 0.605419845056;
    msg.custom.assign("RIKWHADNLIJHRGTRAUGPILMBLMTNVZFN");

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
    msg.setTimeStamp(0.646231469954);
    msg.setSource(35681U);
    msg.setSourceEntity(4U);
    msg.setDestination(49120U);
    msg.setDestinationEntity(29U);
    msg.timeout = 14184U;
    msg.lat = 0.535271449742;
    msg.lon = 0.226535712695;
    msg.z = 0.285137257912;
    msg.z_units = 155U;
    msg.speed = 0.721863515262;
    msg.speed_units = 54U;
    msg.duration = 30638U;
    msg.radius = 0.341767648623;
    msg.flags = 241U;
    msg.custom.assign("ZWDLCPMJDFRSWFWOGIOIYEKFUCCFSYZGGQBPTND");

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
    msg.setTimeStamp(0.472695394251);
    msg.setSource(60964U);
    msg.setSourceEntity(171U);
    msg.setDestination(29439U);
    msg.setDestinationEntity(225U);
    msg.timeout = 5410U;
    msg.lat = 0.581969873621;
    msg.lon = 0.0388465321754;
    msg.z = 0.962843882313;
    msg.z_units = 74U;
    msg.speed = 0.199040537589;
    msg.speed_units = 155U;
    msg.duration = 60382U;
    msg.radius = 0.308892001835;
    msg.flags = 186U;
    msg.custom.assign("ICRSGMYSRYJIZTZBHJWMQKBWVPAVNYEUSGJOEZDOSJPUFOBOIDWXGCLDZTLPXFHRCFBVDMDHCLEDPKRJQVHGHXTPUMZGNUMOZWFNBDHCNIUCWKWTVYMOGKXMDWLQHGJKRIJHWPYARFHEPQJOXPTAADISBRXATEQVOVWWINENBKQPLKSGSVIRUXEXITUCFXBTZBYDIFJJAMNHEUSVGKQYUELY");

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
    msg.setTimeStamp(0.0541714907819);
    msg.setSource(14297U);
    msg.setSourceEntity(169U);
    msg.setDestination(63442U);
    msg.setDestinationEntity(179U);
    msg.timeout = 51006U;
    msg.lat = 0.566356564925;
    msg.lon = 0.696276861495;
    msg.z = 0.755289769968;
    msg.z_units = 214U;
    msg.speed = 0.0619581714295;
    msg.speed_units = 91U;
    msg.duration = 27567U;
    msg.radius = 0.661165362093;
    msg.flags = 90U;
    msg.custom.assign("AXKMFXVUHKMPAPUFRSRLNK");

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
    msg.setTimeStamp(0.721652786405);
    msg.setSource(18737U);
    msg.setSourceEntity(95U);
    msg.setDestination(58745U);
    msg.setDestinationEntity(214U);
    msg.custom.assign("KFQURFVXZXSEARSJITBIGBMKQLGCDQPAVQNJTWYTRTNSWIFGVEJJWOYIHTHZDPVPCJMOUHUSOWLRCHFACJDGDYHVMZLBUUWKYDUVENMXVUZSMR");

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
    msg.setTimeStamp(0.892018775071);
    msg.setSource(8482U);
    msg.setSourceEntity(217U);
    msg.setDestination(15471U);
    msg.setDestinationEntity(167U);
    msg.custom.assign("YMTRZSWTSKZYRYHMGGKAXUWIFHXJGSNONWDAMESAXIDFNVSBPQJP");

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
    msg.setTimeStamp(0.996134386495);
    msg.setSource(54281U);
    msg.setSourceEntity(239U);
    msg.setDestination(58912U);
    msg.setDestinationEntity(65U);
    msg.custom.assign("EWQCSUDTRHFOBKBUPKZFONJRQLIOWOJJPYZWNTRZHWZGMIMAKOUSXQFJGXHGRASNPAXVNNTKRTEPKKXIZIMSGJETMXVSVUZQBMINWYTADPLMOOKRWCYZNYVWIBFEYLYMQPQCJLYPZRHUIYHGEDGLTAXPAJVEZJEXVAHQQGOBHFXFA");

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
    msg.setTimeStamp(0.377812831295);
    msg.setSource(37679U);
    msg.setSourceEntity(242U);
    msg.setDestination(20190U);
    msg.setDestinationEntity(189U);
    msg.timeout = 38928U;
    msg.lat = 0.103375019344;
    msg.lon = 0.447476765462;
    msg.z = 0.249410861037;
    msg.z_units = 130U;
    msg.duration = 17576U;
    msg.speed = 0.13397035931;
    msg.speed_units = 78U;
    msg.type = 175U;
    msg.radius = 0.651257733067;
    msg.length = 0.714455013723;
    msg.bearing = 0.292414893584;
    msg.direction = 200U;
    msg.custom.assign("ULQXWZSWIIACIPRBMNAJUE");

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
    msg.setTimeStamp(0.920569961173);
    msg.setSource(55372U);
    msg.setSourceEntity(100U);
    msg.setDestination(12698U);
    msg.setDestinationEntity(114U);
    msg.timeout = 34503U;
    msg.lat = 0.224482417334;
    msg.lon = 0.653676002233;
    msg.z = 0.120438490419;
    msg.z_units = 153U;
    msg.duration = 20363U;
    msg.speed = 0.467022487387;
    msg.speed_units = 237U;
    msg.type = 149U;
    msg.radius = 0.559370690685;
    msg.length = 0.00164315939644;
    msg.bearing = 0.748603487087;
    msg.direction = 50U;
    msg.custom.assign("UGTCIEXERIQPNZHLDXQBJACKVVSQ");

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
    msg.setTimeStamp(0.660782182801);
    msg.setSource(32961U);
    msg.setSourceEntity(199U);
    msg.setDestination(30372U);
    msg.setDestinationEntity(251U);
    msg.timeout = 29609U;
    msg.lat = 0.0490030595224;
    msg.lon = 0.0173626891042;
    msg.z = 0.544821619023;
    msg.z_units = 153U;
    msg.duration = 30913U;
    msg.speed = 0.659701676507;
    msg.speed_units = 224U;
    msg.type = 228U;
    msg.radius = 0.464649814028;
    msg.length = 0.442206954043;
    msg.bearing = 0.734533177792;
    msg.direction = 99U;
    msg.custom.assign("NLJZOJTJAPFUQEHKUWMEGKUQKGNMMWGDVLMYKZHQDUCRVTFJXXWHLJETGUJIDTBYRTTVIERCLNNOTZSWPPFDRPVNAFGXHOXZBNKHEYKVYAVVCBUSXHGXOFYYHQSHRKQBDPYNWOFVSXIXMDZWUCILQIHCZNBMNZDOTWLQKMOTIBIFPZECPOJSAISWFAQANFZVIGXMQLQGACISFSJRPKEDBJKEDZBYURSPYGBUHAYAGLEWDRPJS");

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
    msg.setTimeStamp(0.692283863885);
    msg.setSource(44188U);
    msg.setSourceEntity(225U);
    msg.setDestination(28827U);
    msg.setDestinationEntity(183U);
    msg.duration = 7984U;
    msg.custom.assign("NBXVLXTEHWLBIDDZTFHWCBZSWYXFWCAZODMLJQGXUVOULCZRSSDZYADIJHVKOIKFKQXAQMJYIYEBLDKTJDYPFNQSPRZENPJUIRXSRSOOXGDVTMGKKUWWGYRIIVAILPKMYTQ");

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
    msg.setTimeStamp(0.20234061558);
    msg.setSource(59640U);
    msg.setSourceEntity(33U);
    msg.setDestination(27268U);
    msg.setDestinationEntity(59U);
    msg.duration = 12790U;
    msg.custom.assign("IZSSMJNHVGBRJFENNRXWDULZSZEGMNYLFFVQMXAWVRYLKZOBAYNYDTCOCOJLMDHKYPERZCOENHQYHIGPZUUUJCFVIBOOWVPKBLTJVRTGNFNLEIGSSXVPFZKEQDPCBTBBSPUDFCHBRQSWISQKHYMBVKEAUTXIYTFUMXHDKUWEOMGFHQDJCEAKJMXXUGYXAJWPWFAIERVGCWC");

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
    msg.setTimeStamp(0.881655276307);
    msg.setSource(62756U);
    msg.setSourceEntity(76U);
    msg.setDestination(18387U);
    msg.setDestinationEntity(31U);
    msg.duration = 64888U;
    msg.custom.assign("ZCYNPHTFBKEGBBJFCXPRRVYXELDXSMFGOQAACECZRXIGNMHDXYSIMRUFWUMDLM");

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
    msg.setTimeStamp(0.522947222481);
    msg.setSource(53682U);
    msg.setSourceEntity(79U);
    msg.setDestination(30216U);
    msg.setDestinationEntity(213U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.62797645434;
    msg.control.set(tmp_msg_0);
    msg.duration = 26994U;
    msg.custom.assign("PGWUFDIUIYMDESVEQAIVBQT");

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
    msg.setTimeStamp(0.39902080166);
    msg.setSource(61422U);
    msg.setSourceEntity(1U);
    msg.setDestination(45605U);
    msg.setDestinationEntity(248U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.327439846672;
    msg.control.set(tmp_msg_0);
    msg.duration = 2063U;
    msg.custom.assign("ERXBKJMBTUJDVNZOKRHNLCYKBEUZPAHCPSLTEVYHDVIDZCGBJYXPHVVQLJHIUZFNWOGKKQRLQXDOFDGMTZRLHC");

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
    msg.setTimeStamp(0.113763977897);
    msg.setSource(33506U);
    msg.setSourceEntity(222U);
    msg.setDestination(17161U);
    msg.setDestinationEntity(73U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.260650153559;
    tmp_msg_0.z_units = 61U;
    msg.control.set(tmp_msg_0);
    msg.duration = 24071U;
    msg.custom.assign("MQVJORVPZZTGQAODAIUIQXFZKYLXPFRJDHMCIJHSEGCHUEEENJVBMVGALRSNVUDANQAWBROHDNTOEPEZJVCPDMOTZLULMINAOXLILCXYYWBCWHIUOTXKPGPKQKWHZGFWJETT");

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
    msg.setTimeStamp(0.605620980448);
    msg.setSource(46119U);
    msg.setSourceEntity(234U);
    msg.setDestination(58950U);
    msg.setDestinationEntity(198U);
    msg.timeout = 61879U;
    msg.lat = 0.365568973168;
    msg.lon = 0.091305525204;
    msg.z = 0.450498035509;
    msg.z_units = 10U;
    msg.speed = 0.183448056994;
    msg.speed_units = 209U;
    msg.bearing = 0.842749013429;
    msg.cross_angle = 0.0490711123062;
    msg.width = 0.457309087441;
    msg.length = 0.27175569862;
    msg.hstep = 0.492085474415;
    msg.coff = 214U;
    msg.alternation = 98U;
    msg.flags = 101U;
    msg.custom.assign("FZFUZMEJVANAOLDLDNHLVKOZKMWZTXXCCJLIBEUQYLRRAQYDTYHSQYVZFGOPQIEPFHISDRSJNFPSOKFKEYNYGBLMTKAUWJBHTNPRXGGIIIUCSPWVREHJYXFSGIGFDWNBJTLAIWZPLYHCAKDWKTGTMTXMHABSGWICEUZMUJSDDYPSWCHYVQZUOKMN");

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
    msg.setTimeStamp(0.241709294103);
    msg.setSource(55403U);
    msg.setSourceEntity(158U);
    msg.setDestination(62352U);
    msg.setDestinationEntity(122U);
    msg.timeout = 58277U;
    msg.lat = 0.24091182198;
    msg.lon = 0.312800922735;
    msg.z = 0.188824544315;
    msg.z_units = 104U;
    msg.speed = 0.136637770474;
    msg.speed_units = 102U;
    msg.bearing = 0.359953862252;
    msg.cross_angle = 0.00743709537243;
    msg.width = 0.0986576974602;
    msg.length = 0.846472365907;
    msg.hstep = 0.641089562809;
    msg.coff = 56U;
    msg.alternation = 202U;
    msg.flags = 224U;
    msg.custom.assign("ZUJMPYATBRKECONXZFLAREMBEMGFMZIEPHMDBFRXZGQPBLZWCVKSSQETXWHBYVITGNXMCKQYPRZATEIFOXFWEUCVVQDUNJQCULK");

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
    msg.setTimeStamp(0.936085925336);
    msg.setSource(17306U);
    msg.setSourceEntity(63U);
    msg.setDestination(32319U);
    msg.setDestinationEntity(168U);
    msg.timeout = 19673U;
    msg.lat = 0.954027280659;
    msg.lon = 0.284195262091;
    msg.z = 0.0128337515137;
    msg.z_units = 94U;
    msg.speed = 0.668465942398;
    msg.speed_units = 7U;
    msg.bearing = 0.640702473041;
    msg.cross_angle = 0.764918405003;
    msg.width = 0.431328648936;
    msg.length = 0.718719821723;
    msg.hstep = 0.891777085932;
    msg.coff = 217U;
    msg.alternation = 18U;
    msg.flags = 189U;
    msg.custom.assign("DUVTTMDRRSEJVBJRZNODGDUSBJFDYVLBJJFXUCATDEBRNBGZNHXGOXKTRCXDMILWQVRXKJMJQJUZOSHYSHGUTICYEWSQZELXSBJDEAWYWCBZLYDFXGRPPGSRKRB");

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
    msg.setTimeStamp(0.676881460313);
    msg.setSource(3539U);
    msg.setSourceEntity(72U);
    msg.setDestination(1535U);
    msg.setDestinationEntity(115U);
    msg.timeout = 28532U;
    msg.lat = 0.623941830743;
    msg.lon = 0.212798718119;
    msg.z = 0.484864740238;
    msg.z_units = 195U;
    msg.speed = 0.644211595847;
    msg.speed_units = 37U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.571483614031;
    tmp_msg_0.y = 0.943819429242;
    tmp_msg_0.z = 0.786685821291;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("YRVHRTOEZQYXBRCRAPOFBGUNHHUXDYAGSFDFYKRJAKXFLKAASEPMQPBEMXOKFDAVMHCUXBNQIUSSSUCUHCWEQSOQBHCCSLTMBZDOXVGJZIMKLLIFIJDQTPWRTCVPKXPLQZWDEOZJICTNPGVDNANBTASCFELEBFUKNOGPOGCZKWPMIZH");

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
    msg.setTimeStamp(0.816826822037);
    msg.setSource(42116U);
    msg.setSourceEntity(253U);
    msg.setDestination(62049U);
    msg.setDestinationEntity(55U);
    msg.timeout = 44856U;
    msg.lat = 0.157628577753;
    msg.lon = 0.0416833431057;
    msg.z = 0.00361057589967;
    msg.z_units = 31U;
    msg.speed = 0.822334154975;
    msg.speed_units = 125U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.344564702295;
    tmp_msg_0.y = 0.15235115937;
    tmp_msg_0.z = 0.748785201811;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("AEDCPELUPCRIGZUHRRDJDSNIFEYDGQHBBDHKTVOOWQVBTHVUCYLUZHGXTVNVWLGIKQMCTAVQCJSKAGBFCGHZNAZFEBDMNRCTYBTLGLSWHYSFXZFQZKZSUSQFRBINRMUYVXVYWIUNLWTFOJIVTXJDMCAPTWIO");

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
    msg.setTimeStamp(0.476691393865);
    msg.setSource(11788U);
    msg.setSourceEntity(218U);
    msg.setDestination(20629U);
    msg.setDestinationEntity(212U);
    msg.timeout = 5736U;
    msg.lat = 0.941778352378;
    msg.lon = 0.060624317963;
    msg.z = 0.973515853101;
    msg.z_units = 208U;
    msg.speed = 0.847452899905;
    msg.speed_units = 2U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.937044650656;
    tmp_msg_0.y = 0.796016578579;
    tmp_msg_0.z = 0.548421021473;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KXVDIBNYNOYRQDCDKVMNJILLRFBXYMEWZTMTZIHBVRRYAMKRCLCGCTXQUIJDFCJQTMFGFNKJFZBWARUDTAIXSRZYVHXYYPEYTNHAOJRHXKFVCVLBKIBLTWPG");

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
    msg.setTimeStamp(0.727193856585);
    msg.setSource(61134U);
    msg.setSourceEntity(213U);
    msg.setDestination(12787U);
    msg.setDestinationEntity(66U);
    msg.x = 0.885947647848;
    msg.y = 0.276943691067;
    msg.z = 0.499085668838;

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
    msg.setTimeStamp(0.0711973710235);
    msg.setSource(20273U);
    msg.setSourceEntity(123U);
    msg.setDestination(42805U);
    msg.setDestinationEntity(238U);
    msg.x = 0.469324782695;
    msg.y = 0.406066987086;
    msg.z = 0.266396463059;

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
    msg.setTimeStamp(0.92889018076);
    msg.setSource(62294U);
    msg.setSourceEntity(235U);
    msg.setDestination(41589U);
    msg.setDestinationEntity(93U);
    msg.x = 0.368159472088;
    msg.y = 0.394916481071;
    msg.z = 0.290220102318;

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
    msg.setTimeStamp(0.408643878949);
    msg.setSource(38494U);
    msg.setSourceEntity(103U);
    msg.setDestination(57404U);
    msg.setDestinationEntity(113U);
    msg.timeout = 26265U;
    msg.lat = 0.902618320656;
    msg.lon = 0.828983057328;
    msg.z = 0.598729865257;
    msg.z_units = 131U;
    msg.amplitude = 0.44552263817;
    msg.pitch = 0.589260039467;
    msg.speed = 0.0687120023911;
    msg.speed_units = 84U;
    msg.custom.assign("FJJIJSNZCCGAEELJPWFPZTTDECIRIHUZLXKPWEKFUAQZURHHYYZJBDKJSFWFSDSVCDKZOAPVYTNOFONQQVGMXEKTBMZNGPCHXJQDLLKHQYHGTVPLFLXPSVAMDMRORLVRTNAQUOUNBIWXXAVDDOOTYWSMBCSIUIISCGYJWRGNBHQJRSAEGW");

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
    msg.setTimeStamp(0.170894686597);
    msg.setSource(45050U);
    msg.setSourceEntity(75U);
    msg.setDestination(31630U);
    msg.setDestinationEntity(113U);
    msg.timeout = 19452U;
    msg.lat = 0.539668952469;
    msg.lon = 0.517233806048;
    msg.z = 0.844965370004;
    msg.z_units = 103U;
    msg.amplitude = 0.60699395431;
    msg.pitch = 0.446977473347;
    msg.speed = 0.579851591204;
    msg.speed_units = 32U;
    msg.custom.assign("BVJNELCTQBEPGGZ");

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
    msg.setTimeStamp(0.884303629868);
    msg.setSource(60479U);
    msg.setSourceEntity(161U);
    msg.setDestination(30673U);
    msg.setDestinationEntity(252U);
    msg.timeout = 33194U;
    msg.lat = 0.271061100669;
    msg.lon = 0.0432965943049;
    msg.z = 0.697854306821;
    msg.z_units = 162U;
    msg.amplitude = 0.327088540195;
    msg.pitch = 0.0442394638922;
    msg.speed = 0.767925701375;
    msg.speed_units = 192U;
    msg.custom.assign("UPPYPCFJBJWUFMMPOKYURKZALEXFLMMWEPQBLYWRNRUMEBDREOAKSTHTVUBGIQQHQWAWXJCGSBUVXJLCIEMTJHLQTYRYOJVDAKBGGRIOSZGXPUTRCBKRSRKQMAFUWDNUZDSZNZGNBWICEDIKGVAXPHTHZZCJXTDOSOBTNHSINKLFHGAVIOAQXFLJ");

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
    msg.setTimeStamp(0.431172443991);
    msg.setSource(48440U);
    msg.setSourceEntity(248U);
    msg.setDestination(32318U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.063784598548);
    msg.setSource(9977U);
    msg.setSourceEntity(135U);
    msg.setDestination(45633U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.808641154501);
    msg.setSource(63029U);
    msg.setSourceEntity(233U);
    msg.setDestination(63861U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.630391171001);
    msg.setSource(54223U);
    msg.setSourceEntity(7U);
    msg.setDestination(53268U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.103480649843;
    msg.lon = 0.339959479377;
    msg.z = 0.608388828666;
    msg.z_units = 5U;
    msg.radius = 0.289692502842;
    msg.duration = 17518U;
    msg.speed = 0.850030891902;
    msg.speed_units = 193U;
    msg.custom.assign("IVRRVFNDBKKWVEZZJQMAIQWJWJSXCOMQPI");

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
    msg.setTimeStamp(0.114685526926);
    msg.setSource(16891U);
    msg.setSourceEntity(25U);
    msg.setDestination(54721U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.770417958121;
    msg.lon = 0.638349916499;
    msg.z = 0.542886623244;
    msg.z_units = 44U;
    msg.radius = 0.507580830839;
    msg.duration = 1716U;
    msg.speed = 0.532425640778;
    msg.speed_units = 153U;
    msg.custom.assign("FKWGBQHGQYNSYZQGNYJZKIIHTNMZLBKGPBDUMUJKGOWCSNFZSJQLVIRMQNDYJXTVIUOXCUISIUTCQGDPMFOOLBTXQYKGDJFUYBGTZYDBVOLKHABWECDEWRWXRHGAGJEPLLOKUSMNKJELDHPTQDEQFDJZOOFSBFIRSXREFCH");

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
    msg.setTimeStamp(0.19214400871);
    msg.setSource(29346U);
    msg.setSourceEntity(60U);
    msg.setDestination(21999U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.901826788747;
    msg.lon = 0.00275745966315;
    msg.z = 0.0802276756382;
    msg.z_units = 114U;
    msg.radius = 0.920058528908;
    msg.duration = 44277U;
    msg.speed = 0.737039387342;
    msg.speed_units = 247U;
    msg.custom.assign("QHWEVLNTMQCVNHYWLQUXVYDBYRDFAEXKNVCKMFWDFJEMXSHSIELGDCEPZQLJRQWTUSMBPRXYTIFIPEONPANUDWLJXSOW");

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
    msg.setTimeStamp(0.708448726995);
    msg.setSource(62562U);
    msg.setSourceEntity(23U);
    msg.setDestination(18336U);
    msg.setDestinationEntity(253U);
    msg.timeout = 2511U;
    msg.flags = 13U;
    msg.lat = 0.817303577451;
    msg.lon = 0.705282436841;
    msg.start_z = 0.0774056462178;
    msg.start_z_units = 213U;
    msg.end_z = 0.450974519924;
    msg.end_z_units = 181U;
    msg.radius = 0.550076788871;
    msg.speed = 0.945821987799;
    msg.speed_units = 239U;
    msg.custom.assign("UQGURNDCBPRLHWULXDIGLXWSIMUUSBJDYDKWNHAGSCKRGLPRETDVZCVFRDIGCABCTORNFOKBYNTLNFXOHSVWPGCQJOEPKUQUZXYYDXSHLNDTTJHSAOBZBUTIEFVNTKDMXZEEVVLWPPFRQIBGQRJJOBYPMYSFTIXURLMBMJJLJMPEPOUHYYZAENJG");

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
    msg.setTimeStamp(0.499650346025);
    msg.setSource(31605U);
    msg.setSourceEntity(226U);
    msg.setDestination(21514U);
    msg.setDestinationEntity(209U);
    msg.timeout = 54101U;
    msg.flags = 65U;
    msg.lat = 0.899356005551;
    msg.lon = 0.792551863682;
    msg.start_z = 0.01217724043;
    msg.start_z_units = 1U;
    msg.end_z = 0.647632857655;
    msg.end_z_units = 252U;
    msg.radius = 0.696951025382;
    msg.speed = 0.379142898817;
    msg.speed_units = 65U;
    msg.custom.assign("TZEJIYMKAUUSKSMFOBWPVQKCZUEDYOICTIUWHEQPSXPCDPSODNVVQXGFBXAZQFHMCRNWPAYCHZWRMRQOEPVCIRZBJIGJFVQHYFLNQDYYYHPTGMBSDKAEWVTSCHRSTFXJZUUSWSORATDJJGNULNNKXEZRWXGVKCMEJX");

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
    msg.setTimeStamp(0.126050006013);
    msg.setSource(46681U);
    msg.setSourceEntity(196U);
    msg.setDestination(63837U);
    msg.setDestinationEntity(133U);
    msg.timeout = 15976U;
    msg.flags = 150U;
    msg.lat = 0.969832205216;
    msg.lon = 0.970474130844;
    msg.start_z = 0.86590737767;
    msg.start_z_units = 191U;
    msg.end_z = 0.495187325468;
    msg.end_z_units = 167U;
    msg.radius = 0.680448322768;
    msg.speed = 0.375718212942;
    msg.speed_units = 83U;
    msg.custom.assign("ARJMAXALGOFTGINXHCHTEKLVCMDCNRVTFIBJSCZFLDHPQOSRXDFOTQYSMFYQWBQPREPVPLJJOJEODLESSKUGOX");

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
    msg.setTimeStamp(0.186873759534);
    msg.setSource(57576U);
    msg.setSourceEntity(161U);
    msg.setDestination(29385U);
    msg.setDestinationEntity(222U);
    msg.timeout = 6677U;
    msg.lat = 0.527729303724;
    msg.lon = 0.91328966532;
    msg.z = 0.909391468456;
    msg.z_units = 217U;
    msg.speed = 0.174725073586;
    msg.speed_units = 37U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.77933766948;
    tmp_msg_0.y = 0.196112220985;
    tmp_msg_0.z = 0.451883545265;
    tmp_msg_0.t = 0.057794240494;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QBQHBEQJKAYYPDUCIQDGSQHTIIRUOZU");

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
    msg.setTimeStamp(0.912672941552);
    msg.setSource(63952U);
    msg.setSourceEntity(95U);
    msg.setDestination(13042U);
    msg.setDestinationEntity(45U);
    msg.timeout = 33179U;
    msg.lat = 0.405207961738;
    msg.lon = 0.386645812089;
    msg.z = 0.0742276310749;
    msg.z_units = 233U;
    msg.speed = 0.430134561196;
    msg.speed_units = 0U;
    msg.custom.assign("JBPLHYDIBRFDRQQGMNIKWZCJCEOAAJYQSJKTNBIKXXWPSFLMQRAOPRECVIXZWOJOKTVBBADOSFDTLKXTIGFWCHOZUVSUPYRVHXUOBEFSDLWUASZZXSVLOPMRNBDPDHXFMNTE");

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
    msg.setTimeStamp(0.570981764116);
    msg.setSource(62366U);
    msg.setSourceEntity(161U);
    msg.setDestination(11020U);
    msg.setDestinationEntity(9U);
    msg.timeout = 8192U;
    msg.lat = 0.784784051617;
    msg.lon = 0.720302407453;
    msg.z = 0.0556629069129;
    msg.z_units = 72U;
    msg.speed = 0.601037233491;
    msg.speed_units = 28U;
    msg.custom.assign("KJRWFBRTHVSVUZWISLOXDKDQGBJAFLBLGRKSOIBMPSUMQERLPJYGVNOBZHHYCJDYZQJKFKCFJFPMMEIGADFWGAGCOFXWVQXBKNSUXLVTUGHOVQNWTNHZIYCUBHQZZNFRBEZDNPYYLNDDSVYCOKSZEGAOTJKXAME");

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
    msg.setTimeStamp(0.344627840901);
    msg.setSource(4175U);
    msg.setSourceEntity(14U);
    msg.setDestination(29170U);
    msg.setDestinationEntity(175U);
    msg.x = 0.64564266003;
    msg.y = 0.467339848213;
    msg.z = 0.163012503769;
    msg.t = 0.112888329526;

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
    msg.setTimeStamp(0.189963422913);
    msg.setSource(53009U);
    msg.setSourceEntity(71U);
    msg.setDestination(14087U);
    msg.setDestinationEntity(171U);
    msg.x = 0.419182342957;
    msg.y = 0.727792722655;
    msg.z = 0.629344671736;
    msg.t = 0.866662496608;

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
    msg.setTimeStamp(0.921725473976);
    msg.setSource(5922U);
    msg.setSourceEntity(147U);
    msg.setDestination(9016U);
    msg.setDestinationEntity(140U);
    msg.x = 0.82544070314;
    msg.y = 0.0547156975493;
    msg.z = 0.558610520601;
    msg.t = 0.994843842516;

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
    msg.setTimeStamp(0.182466220718);
    msg.setSource(35394U);
    msg.setSourceEntity(1U);
    msg.setDestination(42347U);
    msg.setDestinationEntity(193U);
    msg.timeout = 32675U;
    msg.name.assign("GYEBHMQGKRKPUICVTPOCXTWAD");
    msg.custom.assign("JIKKQUJCOAOFYGUSKHQDWZLFERQPSXEHORNBJRODXPMTFQEZTSZCIKGWZQGYKMIVCWHSBANSLQHNSUUDXGGPYMPLFVZVRVHWDHTEXUTMVRXKCPKWRAIGYISDUERFM");

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
    msg.setTimeStamp(0.386203460206);
    msg.setSource(52379U);
    msg.setSourceEntity(239U);
    msg.setDestination(18289U);
    msg.setDestinationEntity(131U);
    msg.timeout = 15748U;
    msg.name.assign("MGXLBPRIEJHFCGGDOCEBWADMRULDSJGLQYNFDZYCKQZCGPIJKNCHQFLYJVV");
    msg.custom.assign("SXDBWIKFYVLGCQTFOOOHJCXAXMMRERZHJTCVOSPTZBPLYMDRYHLMHVDXSAUBEDKGGOSWYQGDEGJCMVTOPPIISEAINVTPJIWLYNOZHXNKUIKDGDKWXMPFVZNOKUZSVYHFZVXQWPESNRZODRUWQIFGLXWSRLCXJWEKKYZTNNLEB");

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
    msg.setTimeStamp(0.236015186471);
    msg.setSource(61758U);
    msg.setSourceEntity(230U);
    msg.setDestination(48536U);
    msg.setDestinationEntity(58U);
    msg.timeout = 44640U;
    msg.name.assign("JURPAOYUGEEAYBSPWZTMZVIZYDPKEFCPDRVCNQJRUMKNABQMPTEVYMGWJICVMXFWTKIFSIASCDAJVZXCVSGBMBZEPGEICMZKNCBWBPSFXCRBHQEGUHRPTUDLXQLWAUIDWCOGRJKUFKHNXTLGQDMIHX");
    msg.custom.assign("LSLDAKOIUYIJHGVVECDZHWSBSAZBTRQNQKUFWHYAQZANZNBOISICPUSQFWFKMEYTPROYYYTGOQOZXLEZKUJFVBKCESRIQQYWWGNKALNAADYDCEIVYMCELSVABHXTCFWJPDBOXXSZBBKFUJEGCLNJPLTUMDIRLMNDGMWCRFSGXTMPXPUFFAIJVCBEPXRVXTGTGHKHJSMDJCNQORIXLRHRMHJGN");

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
    msg.setTimeStamp(0.987817447709);
    msg.setSource(46460U);
    msg.setSourceEntity(26U);
    msg.setDestination(34198U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.782389036555;
    msg.lon = 0.303504894612;
    msg.z = 0.338500296965;
    msg.z_units = 125U;
    msg.speed = 0.338416870433;
    msg.speed_units = 237U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.98742709474;
    tmp_msg_0.y = 0.312805173495;
    tmp_msg_0.z = 0.200316034851;
    tmp_msg_0.t = 0.268844084779;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.150552170011;
    msg.custom.assign("YVZTYQTLWPNBSOMADKUYWIKZKKOIDULFAGWDOZCYTVAZRKDENGBEVHBMFSYXOHAHCPCLGJMQVJRILEZTLFSIVOKRFCEBOWXYNCGJDAMCUNUGXDAPEMMHDSXFNRAENZRCESOFQXXEVMXTMHUPMSPCP");

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
    msg.setTimeStamp(0.722821537346);
    msg.setSource(32914U);
    msg.setSourceEntity(160U);
    msg.setDestination(30257U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.122606108383;
    msg.lon = 0.181359614414;
    msg.z = 0.431044049607;
    msg.z_units = 16U;
    msg.speed = 0.930708510943;
    msg.speed_units = 159U;
    msg.start_time = 0.0515642711341;
    msg.custom.assign("NGZXIANBHEXYDEMOLEFDOUDBTWDXEOBUHRSFPALDVEHJBVSJIMMFWNBZLWWOGCTQSWOLQCRCYOHIURWAOCFFVCANTKJQHJQRJCKPRQFZBKAWPVLXMZKULKAHZDBTNNPZGQYSPXWIZUEJMLRYSXSXM");

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
    msg.setTimeStamp(0.402641143666);
    msg.setSource(11252U);
    msg.setSourceEntity(147U);
    msg.setDestination(49395U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.648766103888;
    msg.lon = 0.213715072732;
    msg.z = 0.662112546673;
    msg.z_units = 245U;
    msg.speed = 0.138290701913;
    msg.speed_units = 199U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.283066315317;
    tmp_msg_0.y = 0.727242742242;
    tmp_msg_0.z = 0.565701150314;
    tmp_msg_0.t = 0.263528140317;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 36253U;
    tmp_msg_1.off_x = 0.0840417806078;
    tmp_msg_1.off_y = 0.316303203743;
    tmp_msg_1.off_z = 0.300989329536;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.734815408623;
    msg.custom.assign("DIWFFACUFSBTQYLEYPMWKXBYHGMFWFNFRVZMZLKMIXEDPCIVVFKCLTGESNEMXJDMUORJBYASSXOUSKBMOXRQJJKTVGQZSJXAKGWINCEQRPXVUUZIRQHVOGNAZRGNTJIPRHWQNHLDHOSSPAZALKPKIZNEIPHTUODBAUDGTZXMLGTFLATHHZUCJFBOVXFNVDBVWEYYCGSLDYQDDRCAYJLJRLYUIOKREQ");

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
    msg.setTimeStamp(0.850370490239);
    msg.setSource(38517U);
    msg.setSourceEntity(105U);
    msg.setDestination(11623U);
    msg.setDestinationEntity(146U);
    msg.vid = 53811U;
    msg.off_x = 0.333987055507;
    msg.off_y = 0.939857241862;
    msg.off_z = 0.93884864886;

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
    msg.setTimeStamp(0.27314427325);
    msg.setSource(7055U);
    msg.setSourceEntity(15U);
    msg.setDestination(337U);
    msg.setDestinationEntity(77U);
    msg.vid = 47314U;
    msg.off_x = 0.671213949666;
    msg.off_y = 0.845921405103;
    msg.off_z = 0.806775249488;

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
    msg.setTimeStamp(0.785367326874);
    msg.setSource(46671U);
    msg.setSourceEntity(10U);
    msg.setDestination(22325U);
    msg.setDestinationEntity(54U);
    msg.vid = 18968U;
    msg.off_x = 0.0870460098774;
    msg.off_y = 0.839959566383;
    msg.off_z = 0.553906480605;

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
    msg.setTimeStamp(0.793659935669);
    msg.setSource(62886U);
    msg.setSourceEntity(177U);
    msg.setDestination(57702U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.392155024913);
    msg.setSource(15965U);
    msg.setSourceEntity(62U);
    msg.setDestination(56360U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.25692435899);
    msg.setSource(12889U);
    msg.setSourceEntity(64U);
    msg.setDestination(17763U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.592200920451);
    msg.setSource(3293U);
    msg.setSourceEntity(73U);
    msg.setDestination(40626U);
    msg.setDestinationEntity(4U);
    msg.mid = 13536U;

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
    msg.setTimeStamp(0.557315499571);
    msg.setSource(55093U);
    msg.setSourceEntity(66U);
    msg.setDestination(46956U);
    msg.setDestinationEntity(185U);
    msg.mid = 19599U;

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
    msg.setTimeStamp(0.330005249228);
    msg.setSource(63860U);
    msg.setSourceEntity(149U);
    msg.setDestination(29958U);
    msg.setDestinationEntity(80U);
    msg.mid = 13087U;

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
    msg.setTimeStamp(0.336535121698);
    msg.setSource(59171U);
    msg.setSourceEntity(103U);
    msg.setDestination(63389U);
    msg.setDestinationEntity(4U);
    msg.state = 214U;
    msg.eta = 39941U;
    msg.info.assign("QZLBXFENGUEWUSPKMTPCOOGHPGTHMFHRDDBIXWARJMONDRVSGFILFQVVDTKQHEYZIXAMXXRDVHURPJWQZGWYEBBQHQWDYNCAAQUYRPEJSZRIZJCUTFMBOMGDCVMKOPLJDPS");

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
    msg.setTimeStamp(0.760151554283);
    msg.setSource(12449U);
    msg.setSourceEntity(236U);
    msg.setDestination(39281U);
    msg.setDestinationEntity(24U);
    msg.state = 67U;
    msg.eta = 64068U;
    msg.info.assign("WNNVIUQGQIGSCRGIBEXVXRMVFKTTUBNXZGIORAZTNXNDYTRZEAMMUCHWWCWHEQBINLPYWQTEDNPAFGWDHCYAJOZTPNYSCTQJETKNRLKCMDIOMOXIOPGKUVQLVXRVBUQJPFTZSPSFYKVEIZSGMSZVPIAGAJKFRFCDGBFFOMXHRSHOJNJATMKQPEDOVDLYUSHAPEDZYCVWIWSXYHLBGCAUBFPLRXBXKQJJUJCASYWUMBYUOMHHWBE");

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
    msg.setTimeStamp(0.230729342902);
    msg.setSource(44052U);
    msg.setSourceEntity(97U);
    msg.setDestination(39301U);
    msg.setDestinationEntity(21U);
    msg.state = 207U;
    msg.eta = 30574U;
    msg.info.assign("EBQHYTVJSDEBDONJVKIZLMZIWOXWNDVRHIZJKHMSYUWNXFKCMIABTPYZXPFFMZDKEPJJKGGXJAF");

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
    msg.setTimeStamp(0.483152384317);
    msg.setSource(21043U);
    msg.setSourceEntity(199U);
    msg.setDestination(4008U);
    msg.setDestinationEntity(202U);
    msg.system = 27317U;
    msg.duration = 55475U;
    msg.speed = 0.845865110895;
    msg.speed_units = 1U;
    msg.x = 0.157832774984;
    msg.y = 0.412941649056;
    msg.z = 0.00771401965294;
    msg.z_units = 164U;

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
    msg.setTimeStamp(0.282431354843);
    msg.setSource(56748U);
    msg.setSourceEntity(68U);
    msg.setDestination(43669U);
    msg.setDestinationEntity(135U);
    msg.system = 26196U;
    msg.duration = 23299U;
    msg.speed = 0.274342870439;
    msg.speed_units = 115U;
    msg.x = 0.366168561843;
    msg.y = 0.590883552243;
    msg.z = 0.849577927009;
    msg.z_units = 105U;

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
    msg.setTimeStamp(0.120223116441);
    msg.setSource(62880U);
    msg.setSourceEntity(138U);
    msg.setDestination(24520U);
    msg.setDestinationEntity(240U);
    msg.system = 43305U;
    msg.duration = 22291U;
    msg.speed = 0.339363065963;
    msg.speed_units = 66U;
    msg.x = 0.913549175646;
    msg.y = 0.0488245890032;
    msg.z = 0.316918223959;
    msg.z_units = 127U;

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
    msg.setTimeStamp(0.869552888338);
    msg.setSource(47586U);
    msg.setSourceEntity(188U);
    msg.setDestination(21625U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.742224915158;
    msg.lon = 0.525657534922;
    msg.speed = 0.264454257103;
    msg.speed_units = 196U;
    msg.duration = 7581U;
    msg.sys_a = 42149U;
    msg.sys_b = 23166U;
    msg.move_threshold = 0.549355173139;

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
    msg.setTimeStamp(0.511138460175);
    msg.setSource(18386U);
    msg.setSourceEntity(89U);
    msg.setDestination(35122U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.34379752829;
    msg.lon = 0.504519292087;
    msg.speed = 0.41372843235;
    msg.speed_units = 112U;
    msg.duration = 34727U;
    msg.sys_a = 59670U;
    msg.sys_b = 27907U;
    msg.move_threshold = 0.0152948163526;

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
    msg.setTimeStamp(0.724997569522);
    msg.setSource(59991U);
    msg.setSourceEntity(29U);
    msg.setDestination(39191U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.235326124908;
    msg.lon = 0.662303904668;
    msg.speed = 0.286141292975;
    msg.speed_units = 238U;
    msg.duration = 57946U;
    msg.sys_a = 48234U;
    msg.sys_b = 24345U;
    msg.move_threshold = 0.77143148322;

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
    msg.setTimeStamp(0.665328282482);
    msg.setSource(8131U);
    msg.setSourceEntity(107U);
    msg.setDestination(35216U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.0178720351921;
    msg.lon = 0.861788986706;
    msg.z = 0.673256771891;
    msg.z_units = 84U;
    msg.speed = 0.524411163764;
    msg.speed_units = 9U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.659600540248;
    tmp_msg_0.lon = 0.127194738343;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ENSSSFRGHNYGGJKPUKGVATNYCBKWLRRLKFSIQRLKLAXBKTXTZEBRYLFNBQVVDIXJVWAZONTMYOKWZSWPMTWLTFRNUGPRPCPRHHJEZXPWIJTVYXVOCQMCGBYOKXHCDMQU");

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
    msg.setTimeStamp(0.13093009079);
    msg.setSource(2686U);
    msg.setSourceEntity(33U);
    msg.setDestination(28121U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.933013222674;
    msg.lon = 0.934365265536;
    msg.z = 0.226652486586;
    msg.z_units = 253U;
    msg.speed = 0.854572054215;
    msg.speed_units = 109U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.8576621585;
    tmp_msg_0.lon = 0.418039829523;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("YHLSZRLGWTLQXVVDPJOWWCLKATSDFTSXVIMGKDTPNPCAERVGBZMSFJFKUWZJYHZUWKDJVUVLLNXOSQSCITAYBKWRQOIVOCNMGEKORJARQVFLZPECEWTBRSXANIXXRDLCEFQEBYHJLNFKPXNQCYKQWERTLUPIQIUEPHHBMXTFPAFURGGBBIGNUDUFYJZPMPOHDGIWMAQIZON");

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
    msg.setTimeStamp(0.790685385133);
    msg.setSource(56502U);
    msg.setSourceEntity(233U);
    msg.setDestination(17014U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.411608092849;
    msg.lon = 0.259893094122;
    msg.z = 0.576515150943;
    msg.z_units = 71U;
    msg.speed = 0.175919998731;
    msg.speed_units = 216U;
    msg.custom.assign("TBXKCKZGCJKTILFRMHYPTBVSLAYHYOFTIGYWAEKBQHNBVBIEZESFRAUFGPAGRKLEZNYWTQXWFNSTDUCIRJUZMOWPXMRIJDNTDZMJSDLWBKHOIMNLVPZHJSGWDOVJNNGHMHHPDADUESRCTXYVODXCUXVMBSSQWZQUPUNPLBIGMJOCQYSAQLFQCULRVEBPPTNIEOQWAKLKFAIZQVWYCKZVWQNKOAROHMYDJZVTLOJEUAGXGFSGEMRYXXBUFXPEI");

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
    msg.setTimeStamp(0.729471089737);
    msg.setSource(10172U);
    msg.setSourceEntity(231U);
    msg.setDestination(30046U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.143372301094;
    msg.lon = 0.175653918019;

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
    msg.setTimeStamp(0.554422147477);
    msg.setSource(52524U);
    msg.setSourceEntity(147U);
    msg.setDestination(51444U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.370562190343;
    msg.lon = 0.702955493652;

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
    msg.setTimeStamp(0.593895132568);
    msg.setSource(55267U);
    msg.setSourceEntity(66U);
    msg.setDestination(9801U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.815269572672;
    msg.lon = 0.203717471132;

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
    msg.setTimeStamp(0.208255146392);
    msg.setSource(59890U);
    msg.setSourceEntity(1U);
    msg.setDestination(57845U);
    msg.setDestinationEntity(41U);
    msg.timeout = 121U;
    msg.lat = 0.999502431521;
    msg.lon = 0.356010051836;
    msg.z = 0.670850141909;
    msg.z_units = 61U;
    msg.pitch = 0.696707120102;
    msg.amplitude = 0.517018319767;
    msg.duration = 47620U;
    msg.speed = 0.191330715421;
    msg.speed_units = 169U;
    msg.radius = 0.933797813287;
    msg.direction = 146U;
    msg.custom.assign("FGYIANLTNPYRKQEHGMIZVBHBSWSUIGLSMZZTTDUCMAYOKHCCDXJDJNQMYLJVAORLYKAGOQFTDRFXPLQTRJPBLWLANMEUGNFESUDONQXXEJBRHZMIMEPDGHPQVKBIYDXBNZGQVPJSYQMDIUMXCHCITXZRKSRDJJOUESAEJCNQKTOCVWLVFHJH");

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
    msg.setTimeStamp(0.855620226991);
    msg.setSource(37307U);
    msg.setSourceEntity(94U);
    msg.setDestination(18215U);
    msg.setDestinationEntity(230U);
    msg.timeout = 11515U;
    msg.lat = 0.957869020367;
    msg.lon = 0.670409392656;
    msg.z = 0.397729970927;
    msg.z_units = 147U;
    msg.pitch = 0.396499770159;
    msg.amplitude = 0.406556380446;
    msg.duration = 42771U;
    msg.speed = 0.397183793975;
    msg.speed_units = 220U;
    msg.radius = 0.969019355166;
    msg.direction = 173U;
    msg.custom.assign("XMBMYHUMJLGYVALFIHPSMVOAOIEDVNGNHB");

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
    msg.setTimeStamp(0.933648179706);
    msg.setSource(14544U);
    msg.setSourceEntity(157U);
    msg.setDestination(45890U);
    msg.setDestinationEntity(39U);
    msg.timeout = 4526U;
    msg.lat = 0.47902505914;
    msg.lon = 0.201983671833;
    msg.z = 0.0427896262272;
    msg.z_units = 82U;
    msg.pitch = 0.813317006669;
    msg.amplitude = 0.398455035348;
    msg.duration = 53525U;
    msg.speed = 0.30575784987;
    msg.speed_units = 50U;
    msg.radius = 0.0604789587582;
    msg.direction = 156U;
    msg.custom.assign("DIJBIMWPSEDVARFGUYEPTRTEWRCVNGXUAGTCQHMZKLZAUYHMJAFQZTXAKWGCRSFLIZVY");

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
    msg.setTimeStamp(0.603491220508);
    msg.setSource(41922U);
    msg.setSourceEntity(189U);
    msg.setDestination(49106U);
    msg.setDestinationEntity(249U);
    msg.formation_name.assign("FKVBFJMCGLUMRFANLXSKQEGQJOLQYTXCTMSQQLMCAJPVNENSOCPRLIFYRDUQFOVHSHVCOEZZPXUOAZQZIWRNYVESUUGKHHMQXJBXKZTIJALDHRRTDGCFETVZGGBVZUCYVWCLNQBBCXKINMPNISMPALDUDJEAYAYLJISFNOXBDQOODNBBU");
    msg.reference_frame = 57U;
    msg.custom.assign("UBERXJBMFYSIQGLDALCNKPGGMYUBSFIQNQLIHBTQSXDRLYEFCOWWAVZXEOSAETWTVKZCCKSAGZZTARLOHFVEJLNBNXPQJOEAZUQTGWLNDVDNDX");

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
    msg.setTimeStamp(0.845491118229);
    msg.setSource(14407U);
    msg.setSourceEntity(213U);
    msg.setDestination(28069U);
    msg.setDestinationEntity(231U);
    msg.formation_name.assign("GKGJDRPNFRZFMBCQJODGYZWOEIUQXLPDBHRWIYSDIJXIZDCVEFTYFKBHFSZOGLXBSBMMDPULI");
    msg.reference_frame = 26U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 59478U;
    tmp_msg_0.off_x = 0.765088332347;
    tmp_msg_0.off_y = 0.894378162208;
    tmp_msg_0.off_z = 0.0341740965946;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("NYDCOJRPDLUJBLBGPKAUVWOFFTVHU");

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
    msg.setTimeStamp(0.25495937826);
    msg.setSource(32023U);
    msg.setSourceEntity(101U);
    msg.setDestination(43013U);
    msg.setDestinationEntity(197U);
    msg.formation_name.assign("QLNOZWMRHTJEGWGSFCWYTKBXEKZMBXSSOGHLMPPARNZMDQGMABMKTWDKHGAPYTNLTOAJVNIMYDSCIYQUKCJXBSVBLRSONILVCVBIKLKPTBTBYBXQGJXTENPULMGQINAUSRUHXGDOYRQEVQKTAXBADRZTLZFRCJUCHYSWCIAKKZYZYZOMANFWVZENJUVDOJPGAJCHVCDFVGPHEDIUDLQEXXFFVJQFWNIEEWFOPRFHJ");
    msg.reference_frame = 88U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 48384U;
    tmp_msg_0.off_x = 0.0945773644684;
    tmp_msg_0.off_y = 0.168496400517;
    tmp_msg_0.off_z = 0.430015149988;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("IDYOABZXHJJHHIXSQKCUDVGDOURUCPLUENGOPPBTZWXSUKYWCWQKGXNJHWPDINNVVWYQSBNVZRMEIHLGOBQPAMZMFEULXDIFLRMQRSOJNHTMDPUYDIAWOUFCBNJWPATHFEGKPVBXJQSZONLKVUALSTVVEDYEFGQGBPQOYESIKYCDGWYKJATRMAISFKZJHCHCSGJXWZNTSLBFLZAXKLCMTRJREY");

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
    msg.setTimeStamp(0.629036596888);
    msg.setSource(48755U);
    msg.setSourceEntity(140U);
    msg.setDestination(24675U);
    msg.setDestinationEntity(21U);
    msg.group_name.assign("GQMDKGTNGNRUMVLJGRCRHVILTQQWYOLXTVQESIFRKFUPMJSECTATROKOLWFNKMZADMYQCUOKWHGRQSHUJJBZOPJCYGOANTJZLECPXPJMHXWLADNOZMEBJAGIAFWMNRWIKPBZFOXRGSHVCODMADIBDXWQVSABCWALL");
    msg.formation_name.assign("OMDFUIEUUSQMIXGMYJZNVGVQCSBOBMCFDHYPSPLKJEUHFGHLHRQBJZBZRQHVTIQLEUIAEGWEEKCTLXDNXKTAXSPNBPONLDMSRXTOTQRFDMDQUAWOFBQZLLJLSRGUIAQKAYCNDIYPPIKFVHJEW");
    msg.plan_id.assign("DJUGMBMXZNHPCYCGWJPKWLTKWKMHXSFIVENCXKUWOGRTUGLJIJZLLCDCXMSTRTYVPZFYMHALVKSUENBRAYNYDTSCPBYUTNSENADDMYERIKXYNEHGZSWTQFTWLHJEZKIRGJPXSRCQKEZRBHELVNDOLIHMAGMZVZFVFSFOAKWGSOQYOXTITX");
    msg.description.assign("NWMTHZICBGMKIXKCMKLROODLCFOMXGPKPBBTZSMEIVDVXIDLPUQJAROQSWBVHMDCGTLJWAJBAWUCDHOQNUNNCAFPXICGNTCWOXLSAYZFEYRFVYOKZOFPQDEQFAIAMUYLYMBRRVYXTEIULHNASTWHBRHZ");
    msg.leader_speed = 0.58597234963;
    msg.leader_bank_lim = 0.947300123216;
    msg.pos_sim_err_lim = 0.166048125699;
    msg.pos_sim_err_wrn = 0.177559619079;
    msg.pos_sim_err_timeout = 890U;
    msg.converg_max = 0.266297030528;
    msg.converg_timeout = 25306U;
    msg.comms_timeout = 64217U;
    msg.turb_lim = 0.0152412295102;
    msg.custom.assign("DFRKBFUSQQQKSSLHVZPTWSPUJDSJVBKIDGFXYCPGXUHURGXMTKCOTLARMRPRHXDBEUPXOYYFNEVNGDWHOZVTRXNMPCBZFRJALUWFYYMYGWUJZVKKBIQPX");

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
    msg.setTimeStamp(0.930682461446);
    msg.setSource(3904U);
    msg.setSourceEntity(28U);
    msg.setDestination(8673U);
    msg.setDestinationEntity(1U);
    msg.group_name.assign("NHNWFZXKWGKEAPFTLBWHQK");
    msg.formation_name.assign("NKDSUHXVFHWEDXHZENQIQPJJUKRVMARBLZGZINWAAUJSLFIWVRSSPYMFQXBFHMCFFEHLNAKYOYCCWIYZHIJXITOGCEFOEMOUVNBLGUMMNOKEQSSATADTMZFDPQGDSTGQEOEOWJOCCZDVHEBPPVPYBRUTJWPCABCGFQKPLTGDNAMJWVSYRLTCWZLKHZWLXVBJQBXBOPURRAYQXHQVITTNGMGPZRYDXJJSOTXLVGHSIKYR");
    msg.plan_id.assign("TIQLUGYRUTIYNCCTQARDWBSBBTYTSFSJIESWNIMDZCEHXIRZARVBNEPGWHQVHNQLFRONBGIWQACUEWPNJMWECSXROJYGIUDACLAFOQDJQRARSHFKKMPLWKOTYJKKXZCQQVOHZUXHJGFBRWGATZXVTFVNLKYCZVLRGHTSDUDPKJU");
    msg.description.assign("SLFVCIJQZGMRCOYSFQWXKLHVUNMXYPLBTKFDYTTLGJBXOUSHGRDFNRNTNBKYQVXFAIMURRCSJQDGBIENRITJUUKFXWGUUGNVGWH");
    msg.leader_speed = 0.44428663668;
    msg.leader_bank_lim = 0.847499118804;
    msg.pos_sim_err_lim = 0.985466707081;
    msg.pos_sim_err_wrn = 0.375446746836;
    msg.pos_sim_err_timeout = 14525U;
    msg.converg_max = 0.224704001332;
    msg.converg_timeout = 31254U;
    msg.comms_timeout = 44299U;
    msg.turb_lim = 0.118611037018;
    msg.custom.assign("TFDEISSNIJJGBQMIFLTQOJBQXVALIGPAWIAWCGTPSMHZNARDDQIVRZZGBWZZDOSMKVLQTCPDXPLPKWOH");

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
    msg.setTimeStamp(0.977381294669);
    msg.setSource(1134U);
    msg.setSourceEntity(104U);
    msg.setDestination(21084U);
    msg.setDestinationEntity(224U);
    msg.group_name.assign("YNDQQRZFYETPOIUHAHKIUZJKCOXDVUBISGSTGE");
    msg.formation_name.assign("TRKKVUKWQGSJPNEOOCQFPBBFZERTHIWTFXQLNROKGESBHMMCGZEDRKCVLWAGWTSDMLVQDBUEHKOZFAPBARVINIDDGVWXXAMJCCHOIHLWNFHFDAKLAYZDWXRLATVQEAOTUBUIZDYVNBQJUHONXPQ");
    msg.plan_id.assign("CYVXZNSYSIJEV");
    msg.description.assign("DIBYDIHNFIWVOPUGEJG");
    msg.leader_speed = 0.140961286816;
    msg.leader_bank_lim = 0.747563646844;
    msg.pos_sim_err_lim = 0.0458124529791;
    msg.pos_sim_err_wrn = 0.0630672545289;
    msg.pos_sim_err_timeout = 19426U;
    msg.converg_max = 0.134259049553;
    msg.converg_timeout = 28490U;
    msg.comms_timeout = 11474U;
    msg.turb_lim = 0.349558803371;
    msg.custom.assign("ZQUSXJPDYPPTEFEBSNGLUIQLWRSMNOUCMHQEHXARDGIJNPEHBVUDGBQASZMEGKVLWGHNHKBBATQDYJDAYYIDAWHTMTKXRAMLKFWOAPHOZUWFVFNKOWUWMREXBCBPOFRVYVBVLKESTHESYMMYFLNDQCINZRGOCANT");

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
    msg.setTimeStamp(0.985670681466);
    msg.setSource(5747U);
    msg.setSourceEntity(140U);
    msg.setDestination(21616U);
    msg.setDestinationEntity(121U);
    msg.control_src = 18264U;
    msg.control_ent = 145U;
    msg.timeout = 0.0370464587163;
    msg.loiter_radius = 0.198881826338;
    msg.altitude_interval = 0.419757366774;

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
    msg.setTimeStamp(0.229941350043);
    msg.setSource(49034U);
    msg.setSourceEntity(135U);
    msg.setDestination(28939U);
    msg.setDestinationEntity(138U);
    msg.control_src = 31114U;
    msg.control_ent = 163U;
    msg.timeout = 0.02219571708;
    msg.loiter_radius = 0.119651674091;
    msg.altitude_interval = 0.781260112193;

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
    msg.setTimeStamp(0.373502944494);
    msg.setSource(53705U);
    msg.setSourceEntity(45U);
    msg.setDestination(4244U);
    msg.setDestinationEntity(131U);
    msg.control_src = 12589U;
    msg.control_ent = 149U;
    msg.timeout = 0.667633751739;
    msg.loiter_radius = 0.296390099817;
    msg.altitude_interval = 0.328024087033;

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
    msg.setTimeStamp(0.691177469898);
    msg.setSource(46389U);
    msg.setSourceEntity(29U);
    msg.setDestination(60805U);
    msg.setDestinationEntity(142U);
    msg.flags = 232U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.630029320941;
    tmp_msg_0.speed_units = 98U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.62407885599;
    tmp_msg_1.z_units = 237U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.851784597316;
    msg.lon = 0.798114122839;
    msg.radius = 0.816151219866;

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
    msg.setTimeStamp(0.139326393622);
    msg.setSource(51543U);
    msg.setSourceEntity(150U);
    msg.setDestination(56907U);
    msg.setDestinationEntity(167U);
    msg.flags = 248U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.64995671586;
    tmp_msg_0.speed_units = 198U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.820723087311;
    tmp_msg_1.z_units = 4U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.34872542826;
    msg.lon = 0.634116759693;
    msg.radius = 0.749342795021;

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
    msg.setTimeStamp(0.414792272755);
    msg.setSource(7427U);
    msg.setSourceEntity(175U);
    msg.setDestination(19331U);
    msg.setDestinationEntity(4U);
    msg.flags = 233U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.635766324296;
    tmp_msg_0.speed_units = 110U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.176851787307;
    tmp_msg_1.z_units = 202U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.60991058093;
    msg.lon = 0.701340947565;
    msg.radius = 0.227533782179;

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
    msg.setTimeStamp(0.748422050079);
    msg.setSource(60824U);
    msg.setSourceEntity(113U);
    msg.setDestination(34946U);
    msg.setDestinationEntity(44U);
    msg.control_src = 65293U;
    msg.control_ent = 221U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 217U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.11395831212;
    tmp_tmp_msg_0_0.speed_units = 251U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.229482977177;
    tmp_tmp_msg_0_1.z_units = 2U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.548815141636;
    tmp_msg_0.lon = 0.248904707824;
    tmp_msg_0.radius = 0.969030563138;
    msg.reference.set(tmp_msg_0);
    msg.state = 245U;
    msg.proximity = 68U;

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
    msg.setTimeStamp(0.335076282817);
    msg.setSource(40559U);
    msg.setSourceEntity(104U);
    msg.setDestination(60268U);
    msg.setDestinationEntity(210U);
    msg.control_src = 26751U;
    msg.control_ent = 161U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 34U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.845308300274;
    tmp_tmp_msg_0_0.speed_units = 14U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.246254445419;
    tmp_tmp_msg_0_1.z_units = 24U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.158846721741;
    tmp_msg_0.lon = 0.962377630328;
    tmp_msg_0.radius = 0.701933297174;
    msg.reference.set(tmp_msg_0);
    msg.state = 183U;
    msg.proximity = 71U;

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
    msg.setTimeStamp(0.105156931716);
    msg.setSource(45425U);
    msg.setSourceEntity(23U);
    msg.setDestination(12722U);
    msg.setDestinationEntity(71U);
    msg.control_src = 61495U;
    msg.control_ent = 218U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 215U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.807877778073;
    tmp_tmp_msg_0_0.speed_units = 226U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.484568548639;
    tmp_tmp_msg_0_1.z_units = 24U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.770929027941;
    tmp_msg_0.lon = 0.307090079263;
    tmp_msg_0.radius = 0.648721245966;
    msg.reference.set(tmp_msg_0);
    msg.state = 2U;
    msg.proximity = 113U;

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
    msg.setTimeStamp(0.864020975406);
    msg.setSource(41037U);
    msg.setSourceEntity(244U);
    msg.setDestination(21407U);
    msg.setDestinationEntity(43U);
    msg.ax_cmd = 0.253361627913;
    msg.ay_cmd = 0.266606904501;
    msg.az_cmd = 0.558234415021;
    msg.ax_des = 0.584638576265;
    msg.ay_des = 0.33702827187;
    msg.az_des = 0.282200963586;
    msg.virt_err_x = 0.994610121172;
    msg.virt_err_y = 0.147808865853;
    msg.virt_err_z = 0.969939646553;
    msg.surf_fdbk_x = 0.569962865213;
    msg.surf_fdbk_y = 0.0626359987186;
    msg.surf_fdbk_z = 0.919165962037;
    msg.surf_unkn_x = 0.700286373796;
    msg.surf_unkn_y = 0.45379276203;
    msg.surf_unkn_z = 0.326589427495;
    msg.ss_x = 0.321688190567;
    msg.ss_y = 0.592378430103;
    msg.ss_z = 0.391974201326;

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
    msg.setTimeStamp(0.364707931898);
    msg.setSource(18267U);
    msg.setSourceEntity(83U);
    msg.setDestination(62727U);
    msg.setDestinationEntity(158U);
    msg.ax_cmd = 0.524323662478;
    msg.ay_cmd = 0.914240767716;
    msg.az_cmd = 0.22318726323;
    msg.ax_des = 0.655701099768;
    msg.ay_des = 0.789679246309;
    msg.az_des = 0.0550363653838;
    msg.virt_err_x = 0.968339274911;
    msg.virt_err_y = 0.0421735260844;
    msg.virt_err_z = 0.512353429873;
    msg.surf_fdbk_x = 0.605509449107;
    msg.surf_fdbk_y = 0.0697972458252;
    msg.surf_fdbk_z = 0.170803105644;
    msg.surf_unkn_x = 0.730435066407;
    msg.surf_unkn_y = 0.246499504598;
    msg.surf_unkn_z = 0.251913580453;
    msg.ss_x = 0.544727898598;
    msg.ss_y = 0.303905703999;
    msg.ss_z = 0.727045089083;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("RGWKAHKDASBPZ");
    tmp_msg_0.dist = 0.817570106284;
    tmp_msg_0.err = 0.00635915474007;
    tmp_msg_0.ctrl_imp = 0.349691852591;
    tmp_msg_0.rel_dir_x = 0.51327098859;
    tmp_msg_0.rel_dir_y = 0.572454243699;
    tmp_msg_0.rel_dir_z = 0.609803103788;
    tmp_msg_0.err_x = 0.177427030059;
    tmp_msg_0.err_y = 0.3922764085;
    tmp_msg_0.err_z = 0.0616978498288;
    tmp_msg_0.rf_err_x = 0.760036679332;
    tmp_msg_0.rf_err_y = 0.190928782323;
    tmp_msg_0.rf_err_z = 0.418397733123;
    tmp_msg_0.rf_err_vx = 0.776894873485;
    tmp_msg_0.rf_err_vy = 0.708477439188;
    tmp_msg_0.rf_err_vz = 0.978927067067;
    tmp_msg_0.ss_x = 0.640745150349;
    tmp_msg_0.ss_y = 0.259893090211;
    tmp_msg_0.ss_z = 0.273768489307;
    tmp_msg_0.virt_err_x = 0.539450361025;
    tmp_msg_0.virt_err_y = 0.0119582797264;
    tmp_msg_0.virt_err_z = 0.717448483556;
    msg.rel_state.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.258591379855);
    msg.setSource(39980U);
    msg.setSourceEntity(20U);
    msg.setDestination(31634U);
    msg.setDestinationEntity(29U);
    msg.ax_cmd = 0.732813741749;
    msg.ay_cmd = 0.248580056051;
    msg.az_cmd = 0.108560603257;
    msg.ax_des = 0.146038079044;
    msg.ay_des = 0.061454047779;
    msg.az_des = 0.820343921475;
    msg.virt_err_x = 0.936965162888;
    msg.virt_err_y = 0.735867568738;
    msg.virt_err_z = 0.532653580987;
    msg.surf_fdbk_x = 0.825618832456;
    msg.surf_fdbk_y = 0.137064581603;
    msg.surf_fdbk_z = 0.145323854726;
    msg.surf_unkn_x = 0.398968417898;
    msg.surf_unkn_y = 0.53517246121;
    msg.surf_unkn_z = 0.28401511005;
    msg.ss_x = 0.566934395023;
    msg.ss_y = 0.736516528637;
    msg.ss_z = 0.921528393035;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("GTKTMFHOCRFMRASTDDRDIEVTXFDCJGPWLHMXQKCPJCIJQQMYOVNKYXZGYNILXHULHFZSBPISOREQZDOVBPEXYITIZPXFWRSHEIONBXMBOACWPAASXZATUUVUXCEVYNGFBSKD");
    tmp_msg_0.dist = 0.677049967367;
    tmp_msg_0.err = 0.644280220261;
    tmp_msg_0.ctrl_imp = 0.107608919592;
    tmp_msg_0.rel_dir_x = 0.34672738879;
    tmp_msg_0.rel_dir_y = 0.285232923811;
    tmp_msg_0.rel_dir_z = 0.866895543333;
    tmp_msg_0.err_x = 0.604698812547;
    tmp_msg_0.err_y = 0.830447341116;
    tmp_msg_0.err_z = 0.303111593606;
    tmp_msg_0.rf_err_x = 0.82728654025;
    tmp_msg_0.rf_err_y = 0.181111287207;
    tmp_msg_0.rf_err_z = 0.511708541161;
    tmp_msg_0.rf_err_vx = 0.809683853464;
    tmp_msg_0.rf_err_vy = 0.185970524189;
    tmp_msg_0.rf_err_vz = 0.846757329489;
    tmp_msg_0.ss_x = 0.768447131138;
    tmp_msg_0.ss_y = 0.0572338507344;
    tmp_msg_0.ss_z = 0.523276479618;
    tmp_msg_0.virt_err_x = 0.804787742923;
    tmp_msg_0.virt_err_y = 0.850260986389;
    tmp_msg_0.virt_err_z = 0.914204870042;
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
    msg.setTimeStamp(0.262131094377);
    msg.setSource(43709U);
    msg.setSourceEntity(59U);
    msg.setDestination(31383U);
    msg.setDestinationEntity(112U);
    msg.s_id.assign("EGKRHAWNSXAJN");
    msg.dist = 0.455043995279;
    msg.err = 0.628543977539;
    msg.ctrl_imp = 0.885561820734;
    msg.rel_dir_x = 0.877084194256;
    msg.rel_dir_y = 0.153762389399;
    msg.rel_dir_z = 0.253138842046;
    msg.err_x = 0.142946853772;
    msg.err_y = 0.42735317188;
    msg.err_z = 0.390179976514;
    msg.rf_err_x = 0.317346135927;
    msg.rf_err_y = 0.701700021377;
    msg.rf_err_z = 0.0799424819691;
    msg.rf_err_vx = 0.0194282770501;
    msg.rf_err_vy = 0.605387701396;
    msg.rf_err_vz = 0.27153401228;
    msg.ss_x = 0.0512525966954;
    msg.ss_y = 0.707831597984;
    msg.ss_z = 0.738805392777;
    msg.virt_err_x = 0.722078896323;
    msg.virt_err_y = 0.363936601885;
    msg.virt_err_z = 0.34654211927;

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
    msg.setTimeStamp(0.594754577262);
    msg.setSource(45275U);
    msg.setSourceEntity(217U);
    msg.setDestination(62858U);
    msg.setDestinationEntity(45U);
    msg.s_id.assign("GGVWUKFLZFSRYPBBTWUDRNWHKRECWEHWDAYPKKXCSYYBHPMHJLWMEDICTM");
    msg.dist = 0.577026196146;
    msg.err = 0.457172886976;
    msg.ctrl_imp = 0.766230005288;
    msg.rel_dir_x = 0.197565731627;
    msg.rel_dir_y = 0.882376180753;
    msg.rel_dir_z = 0.125989809033;
    msg.err_x = 0.961790487589;
    msg.err_y = 0.753086311846;
    msg.err_z = 0.160314867864;
    msg.rf_err_x = 0.761510968612;
    msg.rf_err_y = 0.620349937083;
    msg.rf_err_z = 0.911606015236;
    msg.rf_err_vx = 0.193757673115;
    msg.rf_err_vy = 0.118516618512;
    msg.rf_err_vz = 0.37240828536;
    msg.ss_x = 0.185668741177;
    msg.ss_y = 0.861832834924;
    msg.ss_z = 0.832157796962;
    msg.virt_err_x = 0.604425349076;
    msg.virt_err_y = 0.581435952339;
    msg.virt_err_z = 0.122115002378;

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
    msg.setTimeStamp(0.944257508881);
    msg.setSource(1328U);
    msg.setSourceEntity(94U);
    msg.setDestination(49043U);
    msg.setDestinationEntity(11U);
    msg.s_id.assign("ECZYBHZAZUFYYTLFYBGGOJVONQHYIILMMSPMRKJOZHSDXFREQYWPKOMEUQDSSIKBAYGLDLCIVQCKTLWRDCBBNXODKCCQGMAWQDUWTFWRJMYPMNKHLZBIJXAKHWDRECATX");
    msg.dist = 0.752894191923;
    msg.err = 0.216733926027;
    msg.ctrl_imp = 0.771180805836;
    msg.rel_dir_x = 0.12894499358;
    msg.rel_dir_y = 0.909634153807;
    msg.rel_dir_z = 0.947230908644;
    msg.err_x = 0.673028896007;
    msg.err_y = 0.324467294489;
    msg.err_z = 0.923455468267;
    msg.rf_err_x = 0.898776437728;
    msg.rf_err_y = 0.602273795397;
    msg.rf_err_z = 0.942831405314;
    msg.rf_err_vx = 0.751659324099;
    msg.rf_err_vy = 0.681482817283;
    msg.rf_err_vz = 0.591287381988;
    msg.ss_x = 0.16498967844;
    msg.ss_y = 0.353096134002;
    msg.ss_z = 0.762681201911;
    msg.virt_err_x = 0.241368830384;
    msg.virt_err_y = 0.0158326426312;
    msg.virt_err_z = 0.766129239073;

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
    msg.setTimeStamp(0.412408480362);
    msg.setSource(41067U);
    msg.setSourceEntity(69U);
    msg.setDestination(50745U);
    msg.setDestinationEntity(133U);
    msg.timeout = 56828U;
    msg.rpm = 0.325634952044;
    msg.direction = 76U;
    msg.custom.assign("QQJQLSYVCVBMKWMMDXXIFRURI");

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
    msg.setTimeStamp(0.493351341589);
    msg.setSource(46875U);
    msg.setSourceEntity(245U);
    msg.setDestination(5900U);
    msg.setDestinationEntity(10U);
    msg.timeout = 9165U;
    msg.rpm = 0.659277656787;
    msg.direction = 85U;
    msg.custom.assign("VJIOCGWCSHPYTNBVSPNDRALNRLTNKUALXCBYQOPHUJLXSHTEPPZWEYDHUICRZQXWXGOHREXVUKQBDTFDVKJFIXBJCVSYQ");

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
    msg.setTimeStamp(0.831192136875);
    msg.setSource(13556U);
    msg.setSourceEntity(232U);
    msg.setDestination(22750U);
    msg.setDestinationEntity(177U);
    msg.timeout = 54608U;
    msg.rpm = 0.249902676694;
    msg.direction = 119U;
    msg.custom.assign("CWHDHNZKVGWEKLIZDUQBJJMJRFYAIPNXERAQYEATSGDZBCMDBSQYCCDMQXXSNWZCWHVLFVLBYTTLOSRHYHRJWHWDRMVTRVVPMEQCKOBEIUUBMBJMNPSKPEGJNXFHVSLAYOOKTPIHTPOOSJEZFGNDILYFEHSYGIAUUYKXRNPSBLDEEJNLCNFZAQGYWBAWULAGQSTDDXTCUKXZKXPKQMUIJOM");

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
    msg.setTimeStamp(0.838432231074);
    msg.setSource(19132U);
    msg.setSourceEntity(141U);
    msg.setDestination(11911U);
    msg.setDestinationEntity(59U);
    msg.formation_name.assign("LWQGUKHPWJIEDZMNDMXYZAXDIZBJFKUAHEIEAAZCPHFULAVRDWWHQNATZDXIBRKYBDUVPQSEMPLYGIMREGKYXSHNTUJERSGTTJWMDMARSGJSDHNCCXNQOYLRKVBAPQVOEERSVFKIBTYMFGQLBGJ");
    msg.type = 134U;
    msg.op = 176U;
    msg.group_name.assign("XWQSYILQMBZIZMDRXPSZUVUNGKEFMIEFRKBMTOCENUXKJVKLNHYEZJBZWGODDXDRZBUBLIAXBIRNMWOJBCDOWIQVGFNJZUTOTGNSXMYKJONKGZZVVTWSCKHELC");
    msg.plan_id.assign("HAGOTEYMOYBBPRVRFITITBAWPJDYWEZEVNCRAHISSNPDGYNZSLVZTAINSPSLXFLCERGPQKJDHRMQTZTMUNGYMEFKBHBYBLHTIDCWHS");
    msg.description.assign("ONCXQNHUILSNPXZFIKVOQRDISWDRWDVMZXVHOYXBGQICNJAJOPFJUOXMREFZQAGWJASNCNHVZMQNLZDEJNOREBQESLQNERWLKVPSFNJUGSUGHPRGLYCMZZHEDFTLTJTMWMXDAULYYYVMADSYTTJSKMABIJPPVCOBTXYLTDPFPWKBHJCBCKEKZRWUTUIGHQZFSCHEXVIKBAWZFHUIGYYTFVRVWC");
    msg.reference_frame = 199U;
    msg.leader_bank_lim = 0.0697776972617;
    msg.leader_speed_min = 0.519147826833;
    msg.leader_speed_max = 0.0705288733923;
    msg.leader_alt_min = 0.0422455548234;
    msg.leader_alt_max = 0.399510536542;
    msg.pos_sim_err_lim = 0.0712393626946;
    msg.pos_sim_err_wrn = 0.439213846154;
    msg.pos_sim_err_timeout = 50866U;
    msg.converg_max = 0.52811496979;
    msg.converg_timeout = 37264U;
    msg.comms_timeout = 14437U;
    msg.turb_lim = 0.358363023747;
    msg.custom.assign("RUMJYLYAUQZZDIVWUWKHXTUHFOHHSMWPNZQTAKUZXGHVPTBDVPKOJUEDXPDZZOTXWIICNQQFXOGIXUCTMUTREBRMKVYLNLRCBEVNASHXJYOEFYWBIHHAJQDOPECXRJMNJBKGSOCCKNPQNBVQLIDYMTLOYASGJEAPRQCSUBVVIALGYHJAEZW");

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
    msg.setTimeStamp(0.40546391283);
    msg.setSource(41128U);
    msg.setSourceEntity(62U);
    msg.setDestination(4563U);
    msg.setDestinationEntity(223U);
    msg.formation_name.assign("OLIWNASRJEUPXTUSSYKPWGCCHIDJMRKNJQTNDLNPNQSMIBLVQEZEMGGSRVUVOENTYPWTCUHOKDAXIUFTUYDWBLIQMFRHJFVEZVCAIBQOTMGOXBYIMNHUKKXWT");
    msg.type = 75U;
    msg.op = 72U;
    msg.group_name.assign("TUSJOXFGJFDCUMFTDUZEMMLBAHIHFDDTZJMWWQAUVAMKKWCSNBPWSTXMNCAQUVTRPYIHHSYYZPIJXAGUCLGRGKQOWZMLJSJBHNAFLQHOYRLKJHPQVCEHYIJZHEBXTLGTJHQUNSODEIBNSYXPNFUFSDOVGWYMPERTZZKXFVVBURKAXJEBNIBKNKWQMBKCPQVRRPIKZIONVVLRETDWYRSLUVSFYCLCPEGOBMDXDOAWRPDAXTC");
    msg.plan_id.assign("WPRJYNELGEB");
    msg.description.assign("YHLQFBFAWKTTSLYBJKDCPVHVMPLIOXBCIQSPXWXEDVVOEXUFLRHUSIYWVDARCJHIWTBKOROGYIYXGTFGOFGQUHMVUTEYYLTZKVRAJQHFZYHURLVOOPQANNZZOTAIEQXWMDVTPUGWSBWYSAGIRUCENQNSQVZHKMBSNBANBXLUNEKMPNMNKDIGJMCBJWECRDOHRCEAKFUJYCFJPQDZPFUHEZRKSADTFZODJBXMASEGILZLMQXTNLKX");
    msg.reference_frame = 177U;
    msg.leader_bank_lim = 0.164596047874;
    msg.leader_speed_min = 0.200834275279;
    msg.leader_speed_max = 0.944673488326;
    msg.leader_alt_min = 0.343795677611;
    msg.leader_alt_max = 0.0778203274717;
    msg.pos_sim_err_lim = 0.0530033632056;
    msg.pos_sim_err_wrn = 0.512577849671;
    msg.pos_sim_err_timeout = 2385U;
    msg.converg_max = 0.669322736533;
    msg.converg_timeout = 11740U;
    msg.comms_timeout = 26085U;
    msg.turb_lim = 0.427063729306;
    msg.custom.assign("HNEZMPACAXSAKUAJ");

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
    msg.setTimeStamp(0.438933060149);
    msg.setSource(43314U);
    msg.setSourceEntity(120U);
    msg.setDestination(45507U);
    msg.setDestinationEntity(110U);
    msg.formation_name.assign("QDOTXAMDVLUSVKLXXBZRONRMYXGLEWMTWNREIZGPPQAUWDTKCLYOKBLJHJASSYULYALCCRJNVNHACUGODTJSPPDLDZZHMCCFBTFQTMTMLWCXLHUCMQ");
    msg.type = 41U;
    msg.op = 226U;
    msg.group_name.assign("YXBEXGCCCVJXPLSKOOHRDSZTZWSWVOVSDBLOGVYRIMKZMQQCQUGKNUPGWOABHMWHIACPVUCLHJNPZDJOXNTLYRTMEGJAATZYQASDVEBJDFWHRYZORRFWFLICSIJM");
    msg.plan_id.assign("KWMSIRIYLOCOZTQLHUCSRTKIFKEVLLLQQTGIJBZHHXPKKLFUMTASAVJNNVY");
    msg.description.assign("YIRZUGSRANIJOLDFZVKFLKJTBCIWMBPTGTKOJXYLHFCVXVISPOZHASZDRTOKNHNUSGXUKHIVUZCSFJKEINOYXQCSQEGILXLIBPEMFEWBAQUCBBVVSPVJKDOTEZJGMNSO");
    msg.reference_frame = 94U;
    msg.leader_bank_lim = 0.00944793822703;
    msg.leader_speed_min = 0.552223378555;
    msg.leader_speed_max = 0.410570777256;
    msg.leader_alt_min = 0.633319559137;
    msg.leader_alt_max = 0.258390722459;
    msg.pos_sim_err_lim = 0.083842619529;
    msg.pos_sim_err_wrn = 0.488164061534;
    msg.pos_sim_err_timeout = 8868U;
    msg.converg_max = 0.875908120098;
    msg.converg_timeout = 24055U;
    msg.comms_timeout = 12800U;
    msg.turb_lim = 0.904749711606;
    msg.custom.assign("JIWAHIMRVPPGBXUDLAAZRJMFFILPYWNLPVHMZWACHCYHCYVUHYRWJKALFLQAODTGBCYKXQMDWJDZPMMMJSGIKYNGSDFMIOPFBEFNMGWIHITPSCOUCXGKDVJUGVHENQBNITDEPRORMDTTWUKQTZAQSJSKTXYWGEEDOLRQIJNBBYPPRARUOFAEOVSAOZHXXGBJZESFDFYYFZTWVXHZSULXLKNEBEIVCSXXQLCBHZJUCRVERBGOVKNT");

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
    msg.setTimeStamp(0.580273760859);
    msg.setSource(3555U);
    msg.setSourceEntity(88U);
    msg.setDestination(5635U);
    msg.setDestinationEntity(204U);
    msg.timeout = 54409U;
    msg.lat = 0.743907810667;
    msg.lon = 0.129229733084;
    msg.z = 0.0406242805735;
    msg.z_units = 184U;
    msg.speed = 0.472080556836;
    msg.speed_units = 12U;
    msg.custom.assign("PWXCNAWIDCYKBZBNWZMZVQQYAVJKGQHSWFMXGQBKLZCJEXOWXPMTGXPKUTUDEHVZMGSPHTQTPBEALQIQGARJKGIFEAADMOMRBSRROIUWCTCENZREVVVRVHFYKXDDCITTOYUJPVKDZAYKIBBHRXPGS");

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
    msg.setTimeStamp(0.868399466438);
    msg.setSource(48906U);
    msg.setSourceEntity(137U);
    msg.setDestination(23743U);
    msg.setDestinationEntity(2U);
    msg.timeout = 22392U;
    msg.lat = 0.805438152693;
    msg.lon = 0.0853152719488;
    msg.z = 0.242487726869;
    msg.z_units = 20U;
    msg.speed = 0.19408789742;
    msg.speed_units = 234U;
    msg.custom.assign("EKYZGLZIYWRFSAOSHADFWNXTXNPSPGMNJQBFTDTAVBROCDXWRMHTPUJBLIOQDBPUOITAOELUESKZUWHBTZXNWKHRWJAAKKQKVELHURDVZJHQPGXCJVTESIYFFPGBIKHHYVGHVJNHCFICCNQBOPDXAEMEPZJSMCVYAXGWXNBCULZYSNUMQXOMNPAWDFIVRKYVUIDSYEZGBLGQCRXFQTPJEROCVNSLDJFFQIDQCJMTGWOM");

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
    msg.setTimeStamp(0.0871209183785);
    msg.setSource(17292U);
    msg.setSourceEntity(26U);
    msg.setDestination(35647U);
    msg.setDestinationEntity(192U);
    msg.timeout = 3635U;
    msg.lat = 0.544079781925;
    msg.lon = 0.761252309282;
    msg.z = 0.171683694578;
    msg.z_units = 249U;
    msg.speed = 0.679007643657;
    msg.speed_units = 133U;
    msg.custom.assign("LKQZXJJMBDXFZCRAASEWPAJGNRHHOGOEJKSUYOLNFDMMEDYBQIRWDCBZVMVFOMEGVPQTTSXXYBBOWRDFMAGOPCJNKQEJXUWCMOTGKZJVPVALLHIXAPQPHTLGAQBVYWJ");

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
    msg.setTimeStamp(0.466985332667);
    msg.setSource(28777U);
    msg.setSourceEntity(60U);
    msg.setDestination(33980U);
    msg.setDestinationEntity(136U);
    msg.timeout = 37272U;
    msg.lat = 0.00681230540396;
    msg.lon = 0.99761279165;
    msg.z = 0.683423551676;
    msg.z_units = 193U;
    msg.speed = 0.291563064782;
    msg.speed_units = 157U;
    msg.custom.assign("EXOQEMINUXOCADTWXDJVUNJPASBULRQECKVJJMYBYIFNJVZHFBZOJGFADVWSXIRPGEKISUOPFTLHQGVDZLLHPPMKJCLGXMIPSNK");

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
    msg.setTimeStamp(0.450264332874);
    msg.setSource(63984U);
    msg.setSourceEntity(114U);
    msg.setDestination(35410U);
    msg.setDestinationEntity(235U);
    msg.timeout = 30406U;
    msg.lat = 0.462159840771;
    msg.lon = 0.455559076482;
    msg.z = 0.76353272543;
    msg.z_units = 123U;
    msg.speed = 0.850203956193;
    msg.speed_units = 254U;
    msg.custom.assign("JEEUBTRVNFGOIQQZKDQKBMNIFYSFIXJHMRUWWKAVLQUYTOQKUJDHBQFYLKHCPGWEVMLBTZBDFUJVFXAXRULXPRHICAMPPTYKUVANVETCZGCSONONNAWXVEGWDKBONHO");

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
    msg.setTimeStamp(0.0101090572794);
    msg.setSource(35686U);
    msg.setSourceEntity(153U);
    msg.setDestination(56577U);
    msg.setDestinationEntity(129U);
    msg.timeout = 1767U;
    msg.lat = 0.985187201406;
    msg.lon = 0.255038732855;
    msg.z = 0.762392263353;
    msg.z_units = 88U;
    msg.speed = 0.950563806858;
    msg.speed_units = 147U;
    msg.custom.assign("YZYNCHYNDLNAZHYOKXJISCQWSSSEHTFXECXFGYABFPEAKULFDKZCZRKKMNUSBJJKWULVHEUMPXZIWRVLBDCBYDXMRYGQSDTIIJFKJQXPJWSWVLRRNZQCURHEROPVCOZZHRVUTPEDDNDSCGBGNTBAKJWYNKWPDAMKQLWZJHQTSFUBRJ");

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
    msg.setTimeStamp(0.963571997244);
    msg.setSource(12178U);
    msg.setSourceEntity(131U);
    msg.setDestination(61630U);
    msg.setDestinationEntity(209U);
    msg.arrival_time = 0.498091625744;
    msg.lat = 0.170300318449;
    msg.lon = 0.754580910959;
    msg.z = 0.401455670608;
    msg.z_units = 113U;
    msg.travel_z = 0.439623412066;
    msg.travel_z_units = 46U;
    msg.delayed = 90U;

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
    msg.setTimeStamp(0.959948395791);
    msg.setSource(28923U);
    msg.setSourceEntity(253U);
    msg.setDestination(23093U);
    msg.setDestinationEntity(103U);
    msg.arrival_time = 0.81658804957;
    msg.lat = 0.412100895863;
    msg.lon = 0.760849560223;
    msg.z = 0.194660181629;
    msg.z_units = 164U;
    msg.travel_z = 0.640357859762;
    msg.travel_z_units = 70U;
    msg.delayed = 67U;

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
    msg.setTimeStamp(0.201601156512);
    msg.setSource(44249U);
    msg.setSourceEntity(179U);
    msg.setDestination(35015U);
    msg.setDestinationEntity(80U);
    msg.arrival_time = 0.861738681947;
    msg.lat = 0.907565633115;
    msg.lon = 0.600439078247;
    msg.z = 0.227966580881;
    msg.z_units = 96U;
    msg.travel_z = 0.399033838925;
    msg.travel_z_units = 239U;
    msg.delayed = 222U;

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
    msg.setTimeStamp(0.0896629697375);
    msg.setSource(5868U);
    msg.setSourceEntity(76U);
    msg.setDestination(7898U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.65114617339;
    msg.lon = 0.382003649291;
    msg.z = 0.584997092946;
    msg.z_units = 241U;
    msg.speed = 0.0870060065555;
    msg.speed_units = 117U;
    msg.bearing = 0.247184557339;
    msg.cross_angle = 0.187123748593;
    msg.width = 0.693296226223;
    msg.length = 0.351980339401;
    msg.coff = 208U;
    msg.angaperture = 0.749362795782;
    msg.range = 57327U;
    msg.overlap = 64U;
    msg.flags = 109U;
    msg.custom.assign("SFAACAGRVBAZBZVOWIUYYEICKMSSNKFDGRHUSYZQDXIMOJYZXEKPSOEUPVTZTYEAVNWSHJCZXLHEFSKFXLRYISTNVBHLTKXZEPKJDNVUDJORPJTGWAMDFNPQBRKL");

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
    msg.setTimeStamp(0.248209914366);
    msg.setSource(60984U);
    msg.setSourceEntity(210U);
    msg.setDestination(30844U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.148754114754;
    msg.lon = 0.560874808637;
    msg.z = 0.893002208384;
    msg.z_units = 194U;
    msg.speed = 0.776869184764;
    msg.speed_units = 157U;
    msg.bearing = 0.431278878095;
    msg.cross_angle = 0.630525225938;
    msg.width = 0.402093954425;
    msg.length = 0.700180841301;
    msg.coff = 135U;
    msg.angaperture = 0.975708785562;
    msg.range = 432U;
    msg.overlap = 171U;
    msg.flags = 104U;
    msg.custom.assign("SZTEWSJGXPYUNVUPKMLJNSWYDHZLKFEHYMDTLWQPBFCXIZWGLOKPKLNRGWNBVPUJITJFJQTAGXYZRBKJCMAYNRDSMXDTBMCBVIVSDGYITDHVYGGHOXNQQLPYUFZAHZEDAOSQBVTEUZCAQOANEFVROMJSMFS");

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
    msg.setTimeStamp(0.750260978436);
    msg.setSource(9325U);
    msg.setSourceEntity(167U);
    msg.setDestination(8861U);
    msg.setDestinationEntity(243U);
    msg.lat = 0.0866397344015;
    msg.lon = 0.946350666933;
    msg.z = 0.436353367116;
    msg.z_units = 123U;
    msg.speed = 0.0285540347099;
    msg.speed_units = 1U;
    msg.bearing = 0.171396094133;
    msg.cross_angle = 0.51558859008;
    msg.width = 0.472588028044;
    msg.length = 0.133994444871;
    msg.coff = 148U;
    msg.angaperture = 0.437538986167;
    msg.range = 50859U;
    msg.overlap = 8U;
    msg.flags = 44U;
    msg.custom.assign("KNYQPBYVRQPOCACQLHNKRRXAFGHRXBFKADPJNVKVQWFMMEZOKIWPLTNLPGCVEIULGIAUASLUNYFZOLQMUMHWZFOYMJPAXBOHVYDERISEZGGROMJTCCKQGFUZLHJVMAIXBUPMBMBOUCXTDTYJPCDHEDGBRHTUPNOQWKBXTGXSISJXG");

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
    msg.setTimeStamp(0.234774598317);
    msg.setSource(41343U);
    msg.setSourceEntity(234U);
    msg.setDestination(64640U);
    msg.setDestinationEntity(88U);
    msg.timeout = 24332U;
    msg.lat = 0.465632153341;
    msg.lon = 0.671452343872;
    msg.z = 0.262761976741;
    msg.z_units = 142U;
    msg.speed = 0.912710932188;
    msg.speed_units = 93U;
    msg.syringe0 = 199U;
    msg.syringe1 = 249U;
    msg.syringe2 = 151U;
    msg.custom.assign("GDDAMNMGDBRRJEIGKSYFDMCTJFNBTICSWSMLQTPSRPYEZTBPYOPJZCLATDBWDBNVCKINHSOFPQUAUJXWPXMNINAZCHNLQERDZQRVEMERNYKUAURSOEXLIOXJD");

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
    msg.setTimeStamp(0.270546992397);
    msg.setSource(15007U);
    msg.setSourceEntity(60U);
    msg.setDestination(23409U);
    msg.setDestinationEntity(97U);
    msg.timeout = 5890U;
    msg.lat = 0.04404444214;
    msg.lon = 0.260529180843;
    msg.z = 0.663884255993;
    msg.z_units = 236U;
    msg.speed = 0.120193137568;
    msg.speed_units = 124U;
    msg.syringe0 = 86U;
    msg.syringe1 = 35U;
    msg.syringe2 = 95U;
    msg.custom.assign("WYVCDYCFZDBMJOAIPSTJ");

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
    msg.setTimeStamp(0.647227973335);
    msg.setSource(45547U);
    msg.setSourceEntity(161U);
    msg.setDestination(55486U);
    msg.setDestinationEntity(161U);
    msg.timeout = 174U;
    msg.lat = 0.356355293652;
    msg.lon = 0.492025027903;
    msg.z = 0.958094444585;
    msg.z_units = 30U;
    msg.speed = 0.997425235488;
    msg.speed_units = 76U;
    msg.syringe0 = 112U;
    msg.syringe1 = 22U;
    msg.syringe2 = 127U;
    msg.custom.assign("GORSQNWIMTLZNDUZFANMGXINOFMECSPKPBUNWTVKYBBHKFIWQDYIMXKPXYCALSLJOPVHN");

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
    msg.setTimeStamp(0.998975394489);
    msg.setSource(46406U);
    msg.setSourceEntity(242U);
    msg.setDestination(874U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.034775091728);
    msg.setSource(24343U);
    msg.setSourceEntity(85U);
    msg.setDestination(807U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.319338221002);
    msg.setSource(51279U);
    msg.setSourceEntity(193U);
    msg.setDestination(31436U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.0117863914732);
    msg.setSource(1099U);
    msg.setSourceEntity(240U);
    msg.setDestination(59108U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.584745905641;
    msg.lon = 0.718107912343;
    msg.z = 0.59213682871;
    msg.z_units = 224U;
    msg.speed = 0.834898765952;
    msg.speed_units = 113U;
    msg.takeoff_pitch = 0.908117737257;
    msg.custom.assign("AHXNGSRQUMAFQFIBVNTKPJQMKAJEBHYPTVLJINTTXHZZXBCHVHQFDCSNRUZXBKEISFLOYHLDMOJJOYMUDTSFDOBXTECDEJVZEWWMPKEOSWKCHMFYGUGSPVURVNWWOJIRGNNNELZBEZYRJQXUKQPEHXQFL");

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
    msg.setTimeStamp(0.454708956458);
    msg.setSource(38892U);
    msg.setSourceEntity(114U);
    msg.setDestination(11494U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.558363345755;
    msg.lon = 0.0168390774722;
    msg.z = 0.554892668851;
    msg.z_units = 53U;
    msg.speed = 0.819382688143;
    msg.speed_units = 169U;
    msg.takeoff_pitch = 0.947426063536;
    msg.custom.assign("BHIJUCDVVBGLVYSPGMUIWTLGIFNJGRFAYNWISDWPWGLOTLXTJSYLZHRBYATVEBPVODYRHGMISZKWUTIBEPHGSJVQUQATFAOVVFSZLUGJDCEXRLTUFAKQBPGOZCQHKAFJPWJMINUSMXIGPUXYDQZXZECWJRHQRXKNZTZKBCETOMHVSQRMSRBHXJNORXDPPONYDOZQWQTDFKUMNPCNCDAIKUOYAFJCKFDELLIXMVBEBNQHEKOYMLCCHKXARMWS");

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
    msg.setTimeStamp(0.224067600138);
    msg.setSource(12845U);
    msg.setSourceEntity(105U);
    msg.setDestination(2057U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.274130705692;
    msg.lon = 0.305068216586;
    msg.z = 0.152626415905;
    msg.z_units = 101U;
    msg.speed = 0.434072588585;
    msg.speed_units = 163U;
    msg.takeoff_pitch = 0.877613978823;
    msg.custom.assign("NBVFYHPTCABIROHOEANPVMYISSXKVDWZXCDFTGNOZKAQQRJULCYZOAAHSZBRPEOITFOEVMQSTFIOWZAHPVBBZED");

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
    msg.setTimeStamp(0.958583808229);
    msg.setSource(27350U);
    msg.setSourceEntity(218U);
    msg.setDestination(17634U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.0236366906389;
    msg.lon = 0.943668380449;
    msg.z = 0.955592658523;
    msg.z_units = 136U;
    msg.speed = 0.08036817122;
    msg.speed_units = 84U;
    msg.abort_z = 0.0973507859546;
    msg.bearing = 0.52952863569;
    msg.glide_slope = 121U;
    msg.glide_slope_alt = 0.202169971618;
    msg.custom.assign("RNGHUVGQPRLJKSGKWIRSDJNQIKAEUWMZUZKXCLTYGSZVSFFTFYVILGZWAIFAALMBSMDDEMVFGEPWPOUDZYIQZKBBWXXADBLLTUMHXMXOYPJDURUFXOCPCULDXOLSEARGERQAIQDMIOYHSWOJVJHCTGCQCGDNEWHPWSUABOJOYVIIKHUNHNTQKNCQFWB");

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
    msg.setTimeStamp(0.584289435283);
    msg.setSource(6750U);
    msg.setSourceEntity(51U);
    msg.setDestination(59494U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.265454813712;
    msg.lon = 0.267485730785;
    msg.z = 0.35436851389;
    msg.z_units = 191U;
    msg.speed = 0.276142569146;
    msg.speed_units = 198U;
    msg.abort_z = 0.119719092275;
    msg.bearing = 0.748439186545;
    msg.glide_slope = 170U;
    msg.glide_slope_alt = 0.900685905129;
    msg.custom.assign("NTODSNJKCPD");

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
    msg.setTimeStamp(0.0440444671937);
    msg.setSource(22731U);
    msg.setSourceEntity(128U);
    msg.setDestination(64421U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.134764781112;
    msg.lon = 0.231304091533;
    msg.z = 0.218028618031;
    msg.z_units = 13U;
    msg.speed = 0.518226681245;
    msg.speed_units = 173U;
    msg.abort_z = 0.207467832701;
    msg.bearing = 0.861768570198;
    msg.glide_slope = 95U;
    msg.glide_slope_alt = 0.961940916272;
    msg.custom.assign("WQZUJDORXSMPGLMMEXSPLYZIITMHEAGVEEWIRKFFVWQTFKGRQXCHCVGVYVADTYBYBVGFEAWIXIZXDWGQAPDBPTVNINHHZDOBRMFJJDHFKZWVBAMHTJLHZASUCAYSDYSBILIUKNYLPTGKJAMHPRKBFOWGUDSOSLCCJGEMJFNZRTKADTQPZKYWUXJNNOXUVKXUQQCSGOBIJMOQJNCNHRRTEEZWBKIODFQNUPXLOOHQAPYYLCTNPVUU");

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
    msg.setTimeStamp(0.235200582795);
    msg.setSource(1175U);
    msg.setSourceEntity(38U);
    msg.setDestination(23237U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.769890931088;
    msg.lon = 0.67120170045;
    msg.speed = 0.891848060526;
    msg.speed_units = 148U;
    msg.limits = 189U;
    msg.max_depth = 0.516481156842;
    msg.min_alt = 0.728579316935;
    msg.time_limit = 0.710346728232;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.120436192932;
    tmp_msg_0.lon = 0.411764158523;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("RHCXOIAAJGLKZFHJNCWSMOUZKRVOSZZOYRGAINRJVVLHFUPQXIGAVEKNTBQUWREUYCEAYKJMGEDPPTMBDAUAPYFLYZNTKMZVWDEVBHDEHNWILPQOQPKWXIKSUYQKRSCGTFMBFLCQTVPSSEVMHNXDCDTTQFUAWCWRPOJUFIDFBBXWMTZDYQQGFXSIHCLWUBOSLG");
    msg.custom.assign("MZGTWOTBEFPWMHRBWSPDCAAFTQBVYSXBRWHRZELURNDHNLKHREIIUQRZOGFJCBHEASYMVXYIPLWVSNUCKFBEISYGPTYASPIQQQHGVSBJOXKUYZPMXDALZLCNOSJCCULAIUQUVDIAGUMZGWORHWIWTQMKEJPNWKTGYLHNLGYCDVXBCNOXZEKBIPFPOHAGQXFTOYRCJOZKYOQFQMJRLCKBFTLDMZVZGAXURDAFEPJD");

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
    msg.setTimeStamp(0.926207043614);
    msg.setSource(18948U);
    msg.setSourceEntity(43U);
    msg.setDestination(24571U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.711607347909;
    msg.lon = 0.0830954419212;
    msg.speed = 0.44690606497;
    msg.speed_units = 134U;
    msg.limits = 186U;
    msg.max_depth = 0.849598839488;
    msg.min_alt = 0.106107629013;
    msg.time_limit = 0.763916794444;
    msg.controller.assign("WIWVMQKJNZJQWEYYFXBJIEGGPSTPBHMBNJDEXPSBDOKOMIZDNAIIFK");
    msg.custom.assign("YBYZLYHXBSZRTXAUYJNJVPFZMJQYHSCKREIQAAHZSJIUCWELJ");

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
    msg.setTimeStamp(0.433374468183);
    msg.setSource(14974U);
    msg.setSourceEntity(107U);
    msg.setDestination(30138U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.314547538065;
    msg.lon = 0.933828919992;
    msg.speed = 0.719763054128;
    msg.speed_units = 181U;
    msg.limits = 84U;
    msg.max_depth = 0.870763432654;
    msg.min_alt = 0.44952234806;
    msg.time_limit = 0.42382949473;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.871573283303;
    tmp_msg_0.lon = 0.437663812348;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("FFSDRGOMJNXJONBBEITPLNCRJRQKDOUEBLNYDHMSEFIDAOMQTFIYKQXKIZVRQFJHCGVECUFYCKBPLEGASLXN");
    msg.custom.assign("GANZJKHDDNSNCOJGBMXWOVVVKRSPJQFUXKFOYRJUCLIMJYARWWWDMDEQUASXWJXHZWTNGQERZKJYRYVMLYEIGKRYUEAGNPFLVGFBQDJLWLNIAGFOUUFLH");

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
    msg.setTimeStamp(0.740515250523);
    msg.setSource(28889U);
    msg.setSourceEntity(150U);
    msg.setDestination(60044U);
    msg.setDestinationEntity(48U);
    msg.target.assign("VNKGESCZVMZHRNVHZNYBXOJ");
    msg.max_speed = 0.235241241494;
    msg.speed_units = 213U;
    msg.lat = 0.131346914815;
    msg.lon = 0.29965948943;
    msg.z = 0.532223561648;
    msg.z_units = 113U;
    msg.custom.assign("GHNOUIYPFEMVZCZJGNPRTVLGYTKEQQYABJWCPWVOYOENAPDHNYZCESJZAXFBTRRNEFNSQDJHGOFBXQJPLGWTVXEZMGWGUORTCFUZDCIHPYJPRQLXMQFWUALBCWJKUCIXBMONFKMYXELMMODRKWYTHQQANIKUFVYISJMNHKIWIOZIFTKBSNOSTVZX");

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
    msg.setTimeStamp(0.912857956648);
    msg.setSource(60261U);
    msg.setSourceEntity(139U);
    msg.setDestination(14330U);
    msg.setDestinationEntity(45U);
    msg.target.assign("JKYTCQBIFCGSSKUKDGDEGLSPUTICPHOJKUOINXNXVQUZURCOVCAYYSEYZEHCVPQKCPDWJAV");
    msg.max_speed = 0.747428970827;
    msg.speed_units = 95U;
    msg.lat = 0.628842666843;
    msg.lon = 0.924784941327;
    msg.z = 0.48326439632;
    msg.z_units = 115U;
    msg.custom.assign("ZQDKFELIQLKSLSREEGHARNUNSQRVMAWXEPNYNZZOVYFGFECPWARCNFTHZRAXJCADAHLMSJVNTZPTXRJZWEBFOBBUCBIHPYZPZQYUDCXDDHWIBOJYDVQUFNOMVYIJEKTWQTJIFAMIUMIUABPLQXL");

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
    msg.setTimeStamp(0.524206092214);
    msg.setSource(36994U);
    msg.setSourceEntity(134U);
    msg.setDestination(44546U);
    msg.setDestinationEntity(214U);
    msg.target.assign("WIJXSMXXYFDJIEVOULMLWJFSMPDDHRTFGWLCGGYHKXPWGPURVRVZGIUXZLWBXPYTCYGJTRMOVNFYEENBLMQTJRTGMNSPUOKCQHEAWKLFHPCLJRGANKZIHDCNAPBSRSUTVWBQMXUWJDEJLQFHOQOBOZAZKCRMGDTVWRNILIYIOEBAONFSKVPEZYKXFPQLCVNZOJDQVDASHZYKBTMDHTXIGBFINBQHRWYOJVZCUE");
    msg.max_speed = 0.957983433512;
    msg.speed_units = 61U;
    msg.lat = 0.0890350829992;
    msg.lon = 0.299769785849;
    msg.z = 0.561550780693;
    msg.z_units = 137U;
    msg.custom.assign("YUNEZNWHFDMFTFKZOYDIVCDPEDZVBIJWQCHKOVMNGWPHYBDNVEWJAYNKKREOQEUYPFKHATXIBLPXMXLDJGTNAFLMKESMVCRVJZGIROXUSJSDFVLY");

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
    IMC::Alignment msg;
    msg.setTimeStamp(0.143201321758);
    msg.setSource(25434U);
    msg.setSourceEntity(92U);
    msg.setDestination(13070U);
    msg.setDestinationEntity(75U);
    msg.timeout = 29279U;
    msg.lat = 0.349894357856;
    msg.lon = 0.136720143023;
    msg.speed = 0.0883828445852;
    msg.speed_units = 129U;
    msg.custom.assign("TSOIOAUMFXEVSWPWQNXJVRSZMEPYFYUGLBZQGXPKESXYBRNSYKTGMJNIGHYCCZEKPDIYZZUKEZQNXCTEKBPBRNANSJNSHTUFVR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.777502467446);
    msg.setSource(20115U);
    msg.setSourceEntity(147U);
    msg.setDestination(63392U);
    msg.setDestinationEntity(145U);
    msg.timeout = 51232U;
    msg.lat = 0.720781868935;
    msg.lon = 0.695207193161;
    msg.speed = 0.569344825076;
    msg.speed_units = 232U;
    msg.custom.assign("JPDHGNCZFIUYBEHSBKVTBCNYACSOIATSMLTQWXVYKBQCEAXMLITRVEUGCXBLTPNFJHDBAHKKYLLSSTUZBQLHCXTDBLIZFIQLRPQXXFDLWMH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.0291102577194);
    msg.setSource(13007U);
    msg.setSourceEntity(124U);
    msg.setDestination(32591U);
    msg.setDestinationEntity(225U);
    msg.timeout = 41634U;
    msg.lat = 0.220867776084;
    msg.lon = 0.360018728648;
    msg.speed = 0.662047760929;
    msg.speed_units = 12U;
    msg.custom.assign("KWDXDBRHPAIUNPSANJNTFVFAMSBVVZYBAZRFVOLEKXDRJTULFROYAULEYLWFIEHCZBFCAGGNHJBMRSGUQOFRSCTEQYNCCHVYQWNOVIYWXQLNBLJSOIGYCGXSIZRZMOEIDHELVEKLLSUSRFMBKZNTKVOJKOKQGBXXDVZQCPRUDQUKIHKTDXHJMXMKUMAZPPEIHAYJWQDWTSCJDMMOJOZV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.961885491591);
    msg.setSource(30293U);
    msg.setSourceEntity(66U);
    msg.setDestination(60335U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.6779161021;
    msg.lon = 0.647928927409;
    msg.z = 0.631292849675;
    msg.z_units = 149U;
    msg.radius = 0.0321127114179;
    msg.duration = 37605U;
    msg.speed = 0.342120571078;
    msg.speed_units = 22U;
    msg.popup_period = 52609U;
    msg.popup_duration = 61870U;
    msg.flags = 226U;
    msg.custom.assign("NDSKZKSDGELOAYXZQQPZEIDXRBUAFFNLPTUYBMXVMLQRJLSCLFACPDWRUTMIWPNSZJSEAATZRFLGUOIUDPQYWFCXBJOHKOWNIDYKIOBCNGMVAGRLBTVFFBAMNYQZYWVTILBJOLTKKJNMGPRZCZUGIBEPSFYMSROSBFKWEWMVEXHRHQVUENURIVCEHWHBCHHZSTJEHXCHKJXMQDVGFAHLNIGQXTJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.1041264576);
    msg.setSource(42573U);
    msg.setSourceEntity(169U);
    msg.setDestination(22702U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.354713215557;
    msg.lon = 0.348768673562;
    msg.z = 0.315238314617;
    msg.z_units = 0U;
    msg.radius = 0.29406203353;
    msg.duration = 55088U;
    msg.speed = 0.966496823421;
    msg.speed_units = 175U;
    msg.popup_period = 56274U;
    msg.popup_duration = 4236U;
    msg.flags = 25U;
    msg.custom.assign("YAPEBTVIHOIFJFSYLUKCPARKTSQCBLXVQDPRONTJDCPQXFYISXOCKWGJEHQHITQOXWMLDJUWGVWFPYMPJQVAIMDAZGOU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.928644569805);
    msg.setSource(46201U);
    msg.setSourceEntity(5U);
    msg.setDestination(56076U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.639311612114;
    msg.lon = 0.771680822941;
    msg.z = 0.311445879904;
    msg.z_units = 250U;
    msg.radius = 0.666974163418;
    msg.duration = 55905U;
    msg.speed = 0.200758504969;
    msg.speed_units = 173U;
    msg.popup_period = 54109U;
    msg.popup_duration = 58564U;
    msg.flags = 99U;
    msg.custom.assign("GLHSXLQJKDARIOODUZVNMLUEMPMOPSIYNESQCPYANDWNTEVXHJIDCTHKUCLDIYKDYRASTUYCJEMWGXTRDDUGFLQHEFLNBRIWSMKBBWPTZLHVBUKQWNMPKBIYHWEZJCCBVYWSJAHJELEAUHPIIWOVRFFOGOIPSXAFNSBEWOBZTNRIS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.413722447603);
    msg.setSource(45975U);
    msg.setSourceEntity(143U);
    msg.setDestination(39029U);
    msg.setDestinationEntity(15U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.43793857715);
    msg.setSource(958U);
    msg.setSourceEntity(73U);
    msg.setDestination(36938U);
    msg.setDestinationEntity(57U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.341954146191);
    msg.setSource(43887U);
    msg.setSourceEntity(188U);
    msg.setDestination(58542U);
    msg.setDestinationEntity(47U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.749047704084);
    msg.setSource(14432U);
    msg.setSourceEntity(4U);
    msg.setDestination(51817U);
    msg.setDestinationEntity(219U);
    msg.timeout = 20482U;
    msg.lat = 0.615046665795;
    msg.lon = 0.815962114212;
    msg.z = 0.847065635813;
    msg.z_units = 97U;
    msg.speed = 0.275349536265;
    msg.speed_units = 194U;
    msg.bearing = 0.530185348387;
    msg.width = 0.233904008815;
    msg.direction = 64U;
    msg.custom.assign("RMRVJKYOEPYIWXQGHGPSEFXCUPZBWXDTFNHGHYKTTLQMYHMZILHPGOREUFOSERUTXDBD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.578112006182);
    msg.setSource(64561U);
    msg.setSourceEntity(162U);
    msg.setDestination(43798U);
    msg.setDestinationEntity(244U);
    msg.timeout = 63443U;
    msg.lat = 0.829506000822;
    msg.lon = 0.235944485337;
    msg.z = 0.728180158624;
    msg.z_units = 243U;
    msg.speed = 0.345446174769;
    msg.speed_units = 170U;
    msg.bearing = 0.347365202249;
    msg.width = 0.483895505876;
    msg.direction = 222U;
    msg.custom.assign("CPRQGGMTWLPZTBYVFBQVRKKVJEAEOWCCTOZQZKDRZYOLXUWASJKNAGTFQPCMUTEPOKWIFIUNRTKNRIZMGCN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.887000608054);
    msg.setSource(14303U);
    msg.setSourceEntity(47U);
    msg.setDestination(27495U);
    msg.setDestinationEntity(213U);
    msg.timeout = 49020U;
    msg.lat = 0.992380531904;
    msg.lon = 0.873339618907;
    msg.z = 0.446616003302;
    msg.z_units = 174U;
    msg.speed = 0.961525300578;
    msg.speed_units = 106U;
    msg.bearing = 0.676056750788;
    msg.width = 0.387430423156;
    msg.direction = 95U;
    msg.custom.assign("PKOWVBRUWVBUGJKMTWUSLZLSDHSHYMJQBQFEIEUAPMQYXANFBUMNCXSRYXGPEOQRMFCYOZLMRQXUDGVZFLJCAOJAACCUEHBKYNLFVSLIMHNRZZEQLQGUEUWXVJZTLIIIWSFAAXSHGGWMYYHRORDFBIPCKIRIPNJSHCAYONHPJVIGWEHTOO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #2", msg == *msg_d);
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
    msg.setTimeStamp(0.910716374993);
    msg.setSource(40054U);
    msg.setSourceEntity(203U);
    msg.setDestination(2918U);
    msg.setDestinationEntity(110U);
    msg.op_mode = 224U;
    msg.error_count = 214U;
    msg.error_ents.assign("MPAKPWTBFDJAOTXIDFBWDMBCUAUWQRHMEXMIKSNNNCRVDJKKFELZAKFPRTATHLIXLJDUGNJVGSFBLQCMRVYILSVLFUPGYRCVCXPDSSMEXZXUGKRCUANTONVHVGOCNXIJOKZNHAHUIJYLYTWYOBCSOBESPDYTSHAZKZWCREYOFDGFOMPWGBSAWETIQRGZPQKGVUSKBTYJTFPODJCQXAQYRZPZIEEHBB");
    msg.maneuver_type = 28644U;
    msg.maneuver_stime = 0.835617193877;
    msg.maneuver_eta = 19335U;
    msg.control_loops = 2123565553U;
    msg.flags = 65U;
    msg.last_error.assign("TRHOSACTKBPRKXOINZQMHHIEHTIRIJMUSPPRZSIVOWVWDAAEBYEIMMYXTVLPJYYCJHRONLVMGYTIWOGYBLFZSCBRLBWCOXKJXTJXJKUQZMXFKGETWDVKCUMELWLDYGDOQWNAAHPTRIPEDFDHFSEGPZZB");
    msg.last_error_time = 0.0164060791453;

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
    msg.setTimeStamp(0.0226144191988);
    msg.setSource(56797U);
    msg.setSourceEntity(214U);
    msg.setDestination(22059U);
    msg.setDestinationEntity(52U);
    msg.op_mode = 137U;
    msg.error_count = 38U;
    msg.error_ents.assign("SLRFKGPOZWEUQJTQUVTFXRFCFYUFKEAOYUGPVC");
    msg.maneuver_type = 49509U;
    msg.maneuver_stime = 0.618299460051;
    msg.maneuver_eta = 41888U;
    msg.control_loops = 1364118043U;
    msg.flags = 127U;
    msg.last_error.assign("LZJHQKHCRIGCQWLWWHBGEAMQUNRJVDCLYCTMZAZXNPONXOSGLFEBNUAEOZEYBANNUMUEKSMRVIFYAOWEWOPKBFYPSFFSK");
    msg.last_error_time = 0.229498603418;

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
    msg.setTimeStamp(0.743433386477);
    msg.setSource(17586U);
    msg.setSourceEntity(68U);
    msg.setDestination(50353U);
    msg.setDestinationEntity(70U);
    msg.op_mode = 203U;
    msg.error_count = 183U;
    msg.error_ents.assign("BISIWGBBUKDEWPOTJHDPYEFPOLZIOGBTEWQ");
    msg.maneuver_type = 47963U;
    msg.maneuver_stime = 0.613575322365;
    msg.maneuver_eta = 44987U;
    msg.control_loops = 2655024665U;
    msg.flags = 157U;
    msg.last_error.assign("BWXUXHQRXCOIISQHJQCQQTMAKZSEIUEERUUVXPKHWYCGWVKDACNFZQBMVMUJPZENWVA");
    msg.last_error_time = 0.789496654769;

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
    msg.setTimeStamp(0.0997296974562);
    msg.setSource(62107U);
    msg.setSourceEntity(197U);
    msg.setDestination(39446U);
    msg.setDestinationEntity(248U);
    msg.type = 101U;
    msg.request_id = 23972U;
    msg.command = 199U;
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 12098U;
    tmp_msg_0.lat = 0.209159458312;
    tmp_msg_0.lon = 0.724577405401;
    tmp_msg_0.speed = 0.588055098262;
    tmp_msg_0.speed_units = 17U;
    tmp_msg_0.custom.assign("GHHGELHMSIBQZY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 24886U;
    msg.info.assign("YEWJCNBKPUGPKBRJZXRTSOZWUPXADFYIJZATLIDGQRVYQWERHVWFKSKCHUWCMNTCQTUXZCIXKNHBGCYFIRGSPELMCVNQOBYSESCZUJMLKXIPJORFVQGETVBXBAQATRHHGLLEUNXOJDPCFFAODPZHUZWZTVGRIMMVRAPSGAHOYIPLYKOYBEQLNFLAYOMCQSEDOWHDAYSGUFNSIOVLWJUTPFJTBENDJFHXNUEHWT");

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
    msg.setTimeStamp(0.0317384886417);
    msg.setSource(34747U);
    msg.setSourceEntity(0U);
    msg.setDestination(14570U);
    msg.setDestinationEntity(94U);
    msg.type = 31U;
    msg.request_id = 38912U;
    msg.command = 226U;
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 1655U;
    tmp_msg_0.lat = 0.325006251067;
    tmp_msg_0.lon = 0.333390368401;
    tmp_msg_0.z = 0.147590923044;
    tmp_msg_0.z_units = 125U;
    tmp_msg_0.speed = 0.791664770504;
    tmp_msg_0.speed_units = 176U;
    tmp_msg_0.syringe0 = 105U;
    tmp_msg_0.syringe1 = 138U;
    tmp_msg_0.syringe2 = 234U;
    tmp_msg_0.custom.assign("ACBHTIADDDBJUQKIBZMBTHXOPUFDXWWKSYOGFSLCSTLGOKEUFXZMWMCZYQXOHNXMJVAYBVEDXOVJOZAWNCLUNYEJRRQLJCFROKEPFFMRYNELQRINDXAJTFSVSQHDVUHLPGPUB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 31568U;
    msg.info.assign("LKYGQBLWTYEYJGNHMJVAJEDBXMQJEXCHJDVGA");

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
    msg.setTimeStamp(0.222162070438);
    msg.setSource(63923U);
    msg.setSourceEntity(28U);
    msg.setDestination(49180U);
    msg.setDestinationEntity(173U);
    msg.type = 11U;
    msg.request_id = 20606U;
    msg.command = 209U;
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.623312697769;
    tmp_msg_0.lon = 0.116391442671;
    tmp_msg_0.z = 0.405966612901;
    tmp_msg_0.z_units = 163U;
    tmp_msg_0.speed = 0.948689169519;
    tmp_msg_0.speed_units = 144U;
    tmp_msg_0.takeoff_pitch = 0.554689206435;
    tmp_msg_0.custom.assign("VHEHVNXRRDXSMIFASQHOOMSGHXWZABJAQWWYRDRUJLCTDMDPLPZQMGNPDINZOIOJTTPVMATCPNGWBRCBBSMFJDEMULCGBRIUVKFSTFBEJIHIAZYHYGZQTMZNDFISUBE");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 10546U;
    msg.info.assign("AUSUJAVTZXBWSZDNAKCTWRN");

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
    msg.setTimeStamp(0.755013203744);
    msg.setSource(18787U);
    msg.setSourceEntity(11U);
    msg.setDestination(692U);
    msg.setDestinationEntity(152U);
    msg.command = 3U;
    msg.entities.assign("XUINMDGKVQRELVABSQVHQLMEITWHLFDLXDXPDPFPNNNGZHQMZCZKQAWGZNCUQXUPDVJKUVVYZVDRBBRWFNKTHGPN");

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
    msg.setTimeStamp(0.635234798572);
    msg.setSource(37781U);
    msg.setSourceEntity(204U);
    msg.setDestination(37491U);
    msg.setDestinationEntity(9U);
    msg.command = 105U;
    msg.entities.assign("YBNKZLVGXRQJIFULNUZASPDQNACHMECCVVPEVHFSCLGOMEAIHZUJOPJNGAMFCUKDZPALYMSFEM");

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
    msg.setTimeStamp(0.995018331496);
    msg.setSource(23648U);
    msg.setSourceEntity(32U);
    msg.setDestination(13567U);
    msg.setDestinationEntity(96U);
    msg.command = 63U;
    msg.entities.assign("HTMNSSAUSGPXPETOQWNMHEHOIWMUXIAKDCRSTIEXEGOSKJKFMMGKPDZMRXFRBPQBOYYKUNNKYXCVZCAJTWAVDUOJPCQVERLLAEULIDWJWRWVJFTZFWACYSVDUJPQAMBYPMFQECGQFDPPOSZINNOJSFDOHRQCELUCDWJVTBWTZGILKBYTFEDXHIFASIKMNHWNQHI");

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
    msg.setTimeStamp(0.884913120004);
    msg.setSource(34448U);
    msg.setSourceEntity(54U);
    msg.setDestination(64014U);
    msg.setDestinationEntity(63U);
    msg.mcount = 182U;
    msg.mnames.assign("JLGEQRNAAHWMOVMXFFZDBNKWTBUXLWMEDJTEBKOLGYFVYEAZGZDDTURJXXGKQOXRIOSQTFUJYAVZBLJYFSFNMILHNDVHMNECPWHZOBPEKWDBVPQSZKEYBZQDKMUOCAGCVRVSIRIKNTPHAVCQPFLSSYMIWSWFXDJJSIMCQOKGJFJYUKIRGAINQPYEG");
    msg.ecount = 9U;
    msg.enames.assign("ASMRWLYQEIPICYWASAKDQQSXLBZWPSLOUDNTOXUJLREZTBWEHEAHUAWJDBLYEWJ");
    msg.ccount = 19U;
    msg.cnames.assign("RPUIUQZYNIZASIWGNNKNLBEOLPJ");
    msg.last_error.assign("OJFOWVVXDEKSYLVVTPVZRVYLHRAOSAZTAETJEZRTIMMAYOCGXZHGAUPBYFDMWXUJGRIFCNTEJZPBXWDRBWCMREHIIGZSOEYINNMMQUHLEFDGOABCPTLMZGNKDKXUXSMXQTSFYHPNGNKPBSWLFQAHJQOTGI");
    msg.last_error_time = 0.89576539834;

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
    msg.setTimeStamp(0.563569212701);
    msg.setSource(29180U);
    msg.setSourceEntity(24U);
    msg.setDestination(61452U);
    msg.setDestinationEntity(159U);
    msg.mcount = 100U;
    msg.mnames.assign("UDKJBSNJJTXEEORRFWELHZMOVYXQXEYCVBUDGOCEEPXJKPCIGIOUBMXIQDAKNMJNSLZGQZIMHDGZVMWHCRAPWKWESAKVAFRSKVGNSHNIMTZOUNBDGRTMOWHUWKBVVHYFL");
    msg.ecount = 191U;
    msg.enames.assign("PFOPCAJGXXAKYQGWRZBNNSQAULLSGOCVLQFSNOAWEMYYKOTATRUCEPNJICDZOBDSGILHWMTMYMPPKTBKV");
    msg.ccount = 173U;
    msg.cnames.assign("OUFADSUXLAKSLMZWJBINNXBMHDJVADFCJWAUHIITKOWZTEVPSQYTEYQVWGEGLBFJJ");
    msg.last_error.assign("BGPRQKUWYSVKEOFKULHJRGQQVLXTUZCKMFNC");
    msg.last_error_time = 0.254774693375;

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
    msg.setTimeStamp(0.322007711951);
    msg.setSource(41680U);
    msg.setSourceEntity(39U);
    msg.setDestination(53412U);
    msg.setDestinationEntity(11U);
    msg.mcount = 213U;
    msg.mnames.assign("NRLFGTRDUMOVCWMFXUBAKRDMDJKUSSZZZOSNPXZLJVQUCWYQNAGPBASZBKUSOHYGZUIJBZQDMIDXJJVOFWEPYXAWDMZXUWGKSEDFOLKMCTYROQKNPCHLCYKPGHEOAWAMKAHQRXEWJLLRNNEMTTTRPIALIIUXCTHLVQWELAQHBKXVVZYFDYNSJIGRHBEBNARFDFHTVGJFXYICGKIESCSHQNQZPLPNT");
    msg.ecount = 159U;
    msg.enames.assign("JQPEJVFHQTPJVWXMUYGAPIDUCZSFHFHLYHYCWHLARNHERFOVJVLCKRPGLHROGBYUDAU");
    msg.ccount = 180U;
    msg.cnames.assign("SBVJDHPWWQAIFBSULREZUWELIAAOWOCZIRCZYHIBGVVAFWIPQDJQNJFRNYCWUGZVTQDFNKZQWSULYHTZJREYZSXCPGDCOFXL");
    msg.last_error.assign("QLJIBGNBKIXMFSNRPJIPPDYJTQCXBADUWNWUAQJVEPMXXTUYTRQZUOELQDQORYYAWVPPFLCVWPDGCREFVJDTRDYHFWXBUDKXRUZKJZGEBVEQCAXSEOLBOMFAGGSSNFMUHPJLDOOEX");
    msg.last_error_time = 0.775005172729;

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
    msg.setTimeStamp(0.939716818417);
    msg.setSource(10131U);
    msg.setSourceEntity(163U);
    msg.setDestination(54889U);
    msg.setDestinationEntity(243U);
    msg.mask = 251U;
    msg.max_depth = 0.845722579571;
    msg.min_altitude = 0.720259840479;
    msg.max_altitude = 0.926390866622;
    msg.min_speed = 0.485336846656;
    msg.max_speed = 0.642356352054;
    msg.max_vrate = 0.366241128672;
    msg.lat = 0.491041019916;
    msg.lon = 0.999894124153;
    msg.orientation = 0.499184614113;
    msg.width = 0.915742858516;
    msg.length = 0.854412576364;

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
    msg.setTimeStamp(0.196925425703);
    msg.setSource(27978U);
    msg.setSourceEntity(169U);
    msg.setDestination(57458U);
    msg.setDestinationEntity(245U);
    msg.mask = 67U;
    msg.max_depth = 0.732481751204;
    msg.min_altitude = 0.976491996396;
    msg.max_altitude = 0.570853605572;
    msg.min_speed = 0.60462143596;
    msg.max_speed = 0.11759667392;
    msg.max_vrate = 0.872233125866;
    msg.lat = 0.101143603335;
    msg.lon = 0.218309774822;
    msg.orientation = 0.914929674913;
    msg.width = 0.329758743977;
    msg.length = 0.910994881038;

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
    msg.setTimeStamp(0.578768230848);
    msg.setSource(3372U);
    msg.setSourceEntity(218U);
    msg.setDestination(59194U);
    msg.setDestinationEntity(245U);
    msg.mask = 173U;
    msg.max_depth = 0.71246897384;
    msg.min_altitude = 0.509993137012;
    msg.max_altitude = 0.51964166452;
    msg.min_speed = 0.173687189029;
    msg.max_speed = 0.00302389739557;
    msg.max_vrate = 0.689441954596;
    msg.lat = 0.91714282259;
    msg.lon = 0.565584522761;
    msg.orientation = 0.10519306489;
    msg.width = 0.0499262566539;
    msg.length = 0.42221896959;

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
    msg.setTimeStamp(0.7113818448);
    msg.setSource(26135U);
    msg.setSourceEntity(225U);
    msg.setDestination(16960U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.904411343453);
    msg.setSource(48429U);
    msg.setSourceEntity(105U);
    msg.setDestination(50703U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.108993872109);
    msg.setSource(20009U);
    msg.setSourceEntity(254U);
    msg.setDestination(33001U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.127779471925);
    msg.setSource(25621U);
    msg.setSourceEntity(115U);
    msg.setDestination(20680U);
    msg.setDestinationEntity(85U);
    msg.duration = 38146U;

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
    msg.setTimeStamp(0.380014263375);
    msg.setSource(5394U);
    msg.setSourceEntity(174U);
    msg.setDestination(29026U);
    msg.setDestinationEntity(64U);
    msg.duration = 48790U;

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
    msg.setTimeStamp(0.668029637068);
    msg.setSource(49999U);
    msg.setSourceEntity(153U);
    msg.setDestination(43414U);
    msg.setDestinationEntity(17U);
    msg.duration = 6209U;

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
    msg.setTimeStamp(0.030147629672);
    msg.setSource(21788U);
    msg.setSourceEntity(53U);
    msg.setDestination(34026U);
    msg.setDestinationEntity(248U);
    msg.enable = 129U;
    msg.mask = 397001857U;
    msg.scope_ref = 3463106203U;

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
    msg.setTimeStamp(0.826159164786);
    msg.setSource(49718U);
    msg.setSourceEntity(116U);
    msg.setDestination(18755U);
    msg.setDestinationEntity(18U);
    msg.enable = 219U;
    msg.mask = 1682422564U;
    msg.scope_ref = 2754858425U;

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
    msg.setTimeStamp(0.120216416884);
    msg.setSource(3678U);
    msg.setSourceEntity(15U);
    msg.setDestination(8774U);
    msg.setDestinationEntity(150U);
    msg.enable = 130U;
    msg.mask = 3197578151U;
    msg.scope_ref = 3528964026U;

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
    msg.setTimeStamp(0.30479558012);
    msg.setSource(1417U);
    msg.setSourceEntity(210U);
    msg.setDestination(41880U);
    msg.setDestinationEntity(115U);
    msg.medium = 202U;

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
    msg.setTimeStamp(0.605547370388);
    msg.setSource(61451U);
    msg.setSourceEntity(162U);
    msg.setDestination(34375U);
    msg.setDestinationEntity(86U);
    msg.medium = 128U;

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
    msg.setTimeStamp(0.969693492344);
    msg.setSource(531U);
    msg.setSourceEntity(198U);
    msg.setDestination(65493U);
    msg.setDestinationEntity(120U);
    msg.medium = 73U;

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
    msg.setTimeStamp(0.606283248119);
    msg.setSource(48554U);
    msg.setSourceEntity(105U);
    msg.setDestination(44747U);
    msg.setDestinationEntity(138U);
    msg.value = 0.194394959174;
    msg.type = 242U;

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
    msg.setTimeStamp(0.61387760984);
    msg.setSource(26508U);
    msg.setSourceEntity(107U);
    msg.setDestination(20753U);
    msg.setDestinationEntity(119U);
    msg.value = 0.852337109324;
    msg.type = 106U;

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
    msg.setTimeStamp(0.266966587602);
    msg.setSource(9119U);
    msg.setSourceEntity(10U);
    msg.setDestination(22665U);
    msg.setDestinationEntity(54U);
    msg.value = 0.365624167559;
    msg.type = 136U;

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
    msg.setTimeStamp(0.236444653255);
    msg.setSource(46976U);
    msg.setSourceEntity(85U);
    msg.setDestination(64214U);
    msg.setDestinationEntity(33U);
    msg.possimerr = 0.377457090217;
    msg.converg = 0.973831243814;
    msg.turbulence = 0.424311163573;
    msg.possimmon = 171U;
    msg.commmon = 220U;
    msg.convergmon = 141U;

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
    msg.setTimeStamp(0.857901909565);
    msg.setSource(14037U);
    msg.setSourceEntity(73U);
    msg.setDestination(2178U);
    msg.setDestinationEntity(225U);
    msg.possimerr = 0.350743837414;
    msg.converg = 0.472833696696;
    msg.turbulence = 0.830583981841;
    msg.possimmon = 194U;
    msg.commmon = 187U;
    msg.convergmon = 222U;

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
    msg.setTimeStamp(0.676979909803);
    msg.setSource(44927U);
    msg.setSourceEntity(218U);
    msg.setDestination(14859U);
    msg.setDestinationEntity(146U);
    msg.possimerr = 0.140463102799;
    msg.converg = 0.00177179311085;
    msg.turbulence = 0.554231288128;
    msg.possimmon = 133U;
    msg.commmon = 51U;
    msg.convergmon = 64U;

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
    msg.setTimeStamp(0.338217276854);
    msg.setSource(62225U);
    msg.setSourceEntity(72U);
    msg.setDestination(39524U);
    msg.setDestinationEntity(60U);
    msg.autonomy = 159U;
    msg.mode.assign("TPLIFBMCHRDXMJUUYMFWBBHUAUVIRHDIPKGTLAXSSGURBCYFOQLHGTGWRBICGSXKLFZRITGYWKBJNWZJACLXYXPPGJRQPOYXSKBQYWPZMRIHN");

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
    msg.setTimeStamp(0.245775123485);
    msg.setSource(54715U);
    msg.setSourceEntity(131U);
    msg.setDestination(1485U);
    msg.setDestinationEntity(18U);
    msg.autonomy = 165U;
    msg.mode.assign("NUFMBPLDYAUBCPLYHOHY");

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
    msg.setTimeStamp(0.792236362128);
    msg.setSource(17065U);
    msg.setSourceEntity(5U);
    msg.setDestination(5513U);
    msg.setDestinationEntity(132U);
    msg.autonomy = 66U;
    msg.mode.assign("ZGMJSGQUZLQPFIMKBTYYXIGHCDMJRRCHMAXEZGDGNXHGSWATDSPHZKSZMFCKKDKKNFYXOCXTOBQTEPTMSRITELVLMVLQPOOYRGSCQERLEFCHHZPFZUAAQUGQKTEOJCJ");

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
    msg.setTimeStamp(0.960072857075);
    msg.setSource(44452U);
    msg.setSourceEntity(27U);
    msg.setDestination(54921U);
    msg.setDestinationEntity(133U);
    msg.type = 195U;
    msg.op = 153U;
    msg.possimerr = 0.635236298886;
    msg.converg = 0.505698118164;
    msg.turbulence = 0.657786534843;
    msg.possimmon = 249U;
    msg.commmon = 244U;
    msg.convergmon = 28U;

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
    msg.setTimeStamp(0.480170599252);
    msg.setSource(41360U);
    msg.setSourceEntity(224U);
    msg.setDestination(26704U);
    msg.setDestinationEntity(104U);
    msg.type = 68U;
    msg.op = 67U;
    msg.possimerr = 0.244953428616;
    msg.converg = 0.382102581616;
    msg.turbulence = 0.517935777773;
    msg.possimmon = 153U;
    msg.commmon = 30U;
    msg.convergmon = 162U;

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
    msg.setTimeStamp(0.823327773903);
    msg.setSource(63491U);
    msg.setSourceEntity(100U);
    msg.setDestination(26679U);
    msg.setDestinationEntity(13U);
    msg.type = 98U;
    msg.op = 25U;
    msg.possimerr = 0.318178424262;
    msg.converg = 0.655945062802;
    msg.turbulence = 0.72938048513;
    msg.possimmon = 250U;
    msg.commmon = 190U;
    msg.convergmon = 7U;

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
    msg.setTimeStamp(0.415718411433);
    msg.setSource(52165U);
    msg.setSourceEntity(200U);
    msg.setDestination(16313U);
    msg.setDestinationEntity(40U);
    msg.op = 101U;
    msg.comm_interface = 9U;
    msg.period = 7210U;
    msg.sys_dst.assign("ZCCOYGOXYJYUJEWWOCXYRWJTZDVTPMDAKKSJHGLQBRZVNTILCQERHTZGYPBLCRRAPEPPIUJSVHVFIMMPLSGAV");

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
    msg.setTimeStamp(0.0244594996656);
    msg.setSource(48830U);
    msg.setSourceEntity(88U);
    msg.setDestination(23727U);
    msg.setDestinationEntity(130U);
    msg.op = 171U;
    msg.comm_interface = 73U;
    msg.period = 16011U;
    msg.sys_dst.assign("DWUIYPJJKJVOFRCNHKXAASENRJJMQPOZPXELQNBHCSELTBIOMFMFHCGFAYAMLQGGFBDESHRXXKDETGHMR");

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
    msg.setTimeStamp(0.0843922944107);
    msg.setSource(8448U);
    msg.setSourceEntity(215U);
    msg.setDestination(22978U);
    msg.setDestinationEntity(238U);
    msg.op = 74U;
    msg.comm_interface = 111U;
    msg.period = 14471U;
    msg.sys_dst.assign("AJPAGJXQBBHINUPSPZEMLCWVNOFFYBDRPVHQOPTZYKNOKAUCWVGBJVPHIRNWRQTTAHNZUZGJYCWTFCOJZUMCAXZYFYVGGXMCGCZLEDUYWTDUKEZMKPAVMXHSXREFPVEDBAEWSNJSROLIWZQNJ");

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
    IMC::StateReport msg;
    msg.setTimeStamp(0.198160422596);
    msg.setSource(39982U);
    msg.setSourceEntity(97U);
    msg.setDestination(37580U);
    msg.setDestinationEntity(199U);
    msg.stime = 2522836919U;
    msg.latitude = 0.82042831004;
    msg.longitude = 0.374680673086;
    msg.altitude = 28882U;
    msg.depth = 60557U;
    msg.heading = 42446U;
    msg.speed = -9205;
    msg.fuel = 3;
    msg.exec_state = 10;
    msg.plan_checksum = 26872U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.003147846027);
    msg.setSource(30060U);
    msg.setSourceEntity(214U);
    msg.setDestination(10062U);
    msg.setDestinationEntity(52U);
    msg.stime = 704810438U;
    msg.latitude = 0.131457733107;
    msg.longitude = 0.397722181627;
    msg.altitude = 50543U;
    msg.depth = 20706U;
    msg.heading = 11064U;
    msg.speed = -27057;
    msg.fuel = -118;
    msg.exec_state = -111;
    msg.plan_checksum = 8977U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.666606876655);
    msg.setSource(54737U);
    msg.setSourceEntity(6U);
    msg.setDestination(58675U);
    msg.setDestinationEntity(171U);
    msg.stime = 3517291983U;
    msg.latitude = 0.919328099773;
    msg.longitude = 0.611846213272;
    msg.altitude = 7778U;
    msg.depth = 20839U;
    msg.heading = 478U;
    msg.speed = 7832;
    msg.fuel = -87;
    msg.exec_state = -104;
    msg.plan_checksum = 53263U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.335348216349);
    msg.setSource(60076U);
    msg.setSourceEntity(233U);
    msg.setDestination(30929U);
    msg.setDestinationEntity(10U);
    msg.req_id = 47506U;
    msg.comm_mean = 23U;
    msg.destination.assign("QIDPHCTUGPVYDFQRFRUTOGONQQTGSNRWQRZHISXNQYWYASYPLPETWJXYOEILTMPASKMUJCEQXXM");
    msg.deadline = 0.321252489657;
    msg.range = 0.199175131426;
    msg.data_mode = 203U;
    IMC::GroundVelocity tmp_msg_0;
    tmp_msg_0.validity = 25U;
    tmp_msg_0.x = 0.913031730916;
    tmp_msg_0.y = 0.830682027857;
    tmp_msg_0.z = 0.601265997277;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("CYLUQURTEMCCILGYBWDITMKLUAYJFOMLDQZADAVLTUJRJXSTQGO");
    const char tmp_msg_1[] = {26, -72, -26, 29, -70, 82, 58, -98, 34, -88, -58, 55, 118, -19, 88, 121, -107, 77, -84, 59, 120, 80, -111, -11, 84, 25, -22, 35, 15, 84, -10, -123, -25, 14, 56, -116, -122, 4, -38, 98, -108, 120, 42, -21, -25, 102, 3, -114, -8, -124, -72, 35, 91, -106, -71, 120, 64, 39, -109, -24, -127, 35, -122, -124, 120, -46, 73, 72, -44, -32, 78, -107, -91, 21, -63, 19, 109, 97, 69, 124, -88, 56, 69, 119, 27, 105, 0, -24, 88, -43, -65, -121, -121, -60, 125, -118, 70, 66, 94, 92, 57, -48, -44, -67, -86, -78, -99, 15, 6, 43, -113, 79, 22, -64, 31, 23, 51, 4, -48, 114, 70, 53, 54, 97, 117, 126, 30, -60, 27, -43, -9, -41, -44};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.206401812474);
    msg.setSource(22482U);
    msg.setSourceEntity(244U);
    msg.setDestination(10896U);
    msg.setDestinationEntity(70U);
    msg.req_id = 27901U;
    msg.comm_mean = 223U;
    msg.destination.assign("SUHQPUTCPUANTMGKDTFNASLLLOOZNIUBRQGDUJGANFBZESLZWNPSWOUCCZNDKXFZWSFDNQVIHOOVQXLXBCPUGHEAISFOFKLWKDST");
    msg.deadline = 0.294548809025;
    msg.range = 0.18127452694;
    msg.data_mode = 145U;
    IMC::SaveEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("UENEISAWCANWIFSDQCLABFHRMGJJUYVBYQUKXALPLOYFHDOJOBKTENGGZRWXJGYEWFMICPJGBVXSLCYPGPCYCPKAZYWNJUVKDRHXVTOCZWIPVFIHMEOHNXTUDLOMHIAVGRWSXEKUEXYXNKHKEWFILHTHKSBASXQQYIFNOKBAMAJCGYDMDZVCJMI");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("QHFJHDARIZNVPQYKGVYUKLMRBHLGRHM");
    const char tmp_msg_1[] = {62, -58, 39, -15, 81, -102, -57, 7, -43, 76, -62, 89, -96, -82, 121, 33, -49, -71, -101, -45};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.0844581140143);
    msg.setSource(4762U);
    msg.setSourceEntity(100U);
    msg.setDestination(313U);
    msg.setDestinationEntity(178U);
    msg.req_id = 8825U;
    msg.comm_mean = 201U;
    msg.destination.assign("OXEUPRMXYLIWZUEEDJQYOZLHAJBNAVWWFBCNPGFOGEFQVUZDIVEBBGPCDMRUYS");
    msg.deadline = 0.34858161556;
    msg.range = 0.462099030298;
    msg.data_mode = 10U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.360781806209;
    tmp_msg_0.base_lon = 0.750275101067;
    tmp_msg_0.base_time = 0.650476470801;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("FGFQTKLTTRCYAAJKKENKTSTHBBAGZGGISFLWWELD");
    const char tmp_msg_1[] = {113, -36, -7, -23, 98, 104, -94, -35, -8, -42, -113, -108, 124, 117, -15, 17, -127, -42, 13, -127, -13, -84, -50, -45, 88, -26, 8, 90, -88, 66, 61, -37, -49, -70, 83, -32, 22, -30, 100, -89, -45, -127, -122, -123, 92, 19, -54, -85, 4, -54, -94, -29, -67, 114, 48, 25, 35, 49, -33, 41, -67, -19, -103, 111, -18, -111, -33, 25, 124, -63, 40, -79, 13, -1, 54, 44, -102, -69, 12, 48, -57, 91, -21, -17, 55, 74, 19, -126, 72, -77, -106, 46, -70, -83, -115, -33, 37, 119, 93, 111, 67, 67, 20, 105, 103, -125, 16, 113, 33, 71, 98, 53, 47, 82, -76, 14, -79, -109, -84, 43, 11, 109, -55, 121, 102, -82, 33, 64, -109, -119, -126, -47, -101, -76, -59, -110, 66, -55, 21, -46, -89, 90, -61, -11, -91, -94, 48, 53, 3, 69, 34, 79, -52, -67, 102, -51, 73, -64, 1, -107, 87, 36, 11};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.946417774614);
    msg.setSource(64939U);
    msg.setSourceEntity(174U);
    msg.setDestination(34769U);
    msg.setDestinationEntity(254U);
    msg.req_id = 15192U;
    msg.status = 248U;
    msg.range = 0.256057900003;
    msg.info.assign("GTEBJOLCNETBRGVEEMCPQOXWGMWQTBTWFY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.202226627766);
    msg.setSource(26144U);
    msg.setSourceEntity(66U);
    msg.setDestination(9491U);
    msg.setDestinationEntity(237U);
    msg.req_id = 23978U;
    msg.status = 215U;
    msg.range = 0.93924844981;
    msg.info.assign("RZWUKEKVSFMVTTSZQAPIOHFVXQOSYDIQPYSZWTYPXIMBJPAKSRUDOQOTTROGUVXGBMSGAWHAXUCJKEN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.501950110087);
    msg.setSource(45888U);
    msg.setSourceEntity(97U);
    msg.setDestination(6176U);
    msg.setDestinationEntity(36U);
    msg.req_id = 32779U;
    msg.status = 90U;
    msg.range = 0.119972233886;
    msg.info.assign("QYDBVFLICH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.949930973894);
    msg.setSource(2299U);
    msg.setSourceEntity(226U);
    msg.setDestination(16544U);
    msg.setDestinationEntity(120U);
    msg.req_id = 35817U;
    msg.destination.assign("QYQYVCLOQEUCKJVFNRYKZBUQRSGPYBGRVGCXWMHEZYYUWBICMBGWVPDYDSHVUVTDUTESSGWYHGUNVMULXDKKYOVAKFSHMPNTPININOWRCEBIHPHJPAGCAHFOHNLZZPSFFIGFQXWUMRXJDQLVTODEZQBENXGOCHNMXQTLRFEFCSRPRWJZCZBZGMQBKEOWYIJBLASZLZFTDEXPJJTAXKAKJUTABRNSTRJUDEIKCTXWOKIOSHLVAAIM");
    msg.timeout = 0.176327336247;
    msg.sms_text.assign("ZITSWRNUBMBLQZOQKEHQMXMOWWCGWALSQWFYAQDTSOBJEHRJPZUFKGSOMODJEEOMRKVUGVTSVZOTBYKSIVXFIXIRXYWPJMFXMPKEXJRRVNNNPZYIVOJGCDH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.427514476301);
    msg.setSource(24331U);
    msg.setSourceEntity(49U);
    msg.setDestination(14858U);
    msg.setDestinationEntity(221U);
    msg.req_id = 1866U;
    msg.destination.assign("BNPMTRWLDBA");
    msg.timeout = 0.581540433984;
    msg.sms_text.assign("CACHLVIBYRWWUWWHBMDUSTNPOVEBHDCOGOXKMRWYNFJTBUVTFOFDGBRFMSGXJWIAETSZVMHYILAVUUGOFNZLUXVULGKYQKXMCMAXV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.299325653827);
    msg.setSource(45204U);
    msg.setSourceEntity(205U);
    msg.setDestination(64624U);
    msg.setDestinationEntity(133U);
    msg.req_id = 43105U;
    msg.destination.assign("EIAFUHVJKNTWBQCAKUBVGDATKWAJIUBLKVKZRZBSXRNAUYOYIZRVBCOITRAQIJXEMEJZYLTMSLYXRXKVPXCZPCPJNDMNMVLRTYOCFSJFRPXYXBJOFTHKWLMLF");
    msg.timeout = 0.433491821955;
    msg.sms_text.assign("GPGMHASNVQKKIJGAUQFPLDYLAXJNVJBLHYOLXNQBYACGPCOOHQOHBUYHZMUHCDVWFSCMVWMYWDNOKSOTMCTKXR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.0671861303093);
    msg.setSource(7081U);
    msg.setSourceEntity(53U);
    msg.setDestination(23543U);
    msg.setDestinationEntity(241U);
    msg.req_id = 41335U;
    msg.status = 238U;
    msg.info.assign("QNIRHPJGXWU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.88774795758);
    msg.setSource(2035U);
    msg.setSourceEntity(132U);
    msg.setDestination(55722U);
    msg.setDestinationEntity(227U);
    msg.req_id = 34237U;
    msg.status = 225U;
    msg.info.assign("KJJHBHFCZBDEXBKBMKTISYVJMJXWQSLZVAMKPVJIQVAWWMAMAOXODXOYWCDKQRMISXZLYFRCELRPRMGJSURYCAOPYNUVHZQNVPDEIAMIRXFTNVGHFGTHHGWOADCPTUTCBBUQOMBGLSBLZNCNYRLOQGPUJVILHEUSCBPWVWUCNQGEDEKFRTGNOJTYXKSGYEHLTALEAEFMSCXAIDXWRDZHWZJOEJPPIHPXUFYNBKWTSLOZTSGVZKDR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.0164624702274);
    msg.setSource(43157U);
    msg.setSourceEntity(146U);
    msg.setDestination(36612U);
    msg.setDestinationEntity(11U);
    msg.req_id = 3281U;
    msg.status = 159U;
    msg.info.assign("RUZXAKKJDTBKCMQQSHNRKHAMMNNWXPJMDKLTIWSTEBNMSDANYXABOJLRZVVTPLQTLHCHHMVJZQMOPUPYXQFXTCGUXAECHQPNYVWAZFPFFQUIHDAZXOEXUSJVANYJKIAYEESENLSAUQFLBHGGEMKGLIKLFOODOLVJBTGUKCZYRWS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.381948688771);
    msg.setSource(30870U);
    msg.setSourceEntity(83U);
    msg.setDestination(57926U);
    msg.setDestinationEntity(224U);
    msg.state = 17U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.333487062064);
    msg.setSource(24861U);
    msg.setSourceEntity(27U);
    msg.setDestination(36191U);
    msg.setDestinationEntity(146U);
    msg.state = 12U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.414762152596);
    msg.setSource(20722U);
    msg.setSourceEntity(149U);
    msg.setDestination(24825U);
    msg.setDestinationEntity(112U);
    msg.state = 99U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.243778195251);
    msg.setSource(18018U);
    msg.setSourceEntity(56U);
    msg.setDestination(26260U);
    msg.setDestinationEntity(222U);
    msg.state = 211U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.769317789043);
    msg.setSource(10214U);
    msg.setSourceEntity(243U);
    msg.setDestination(33748U);
    msg.setDestinationEntity(210U);
    msg.state = 69U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.847657930604);
    msg.setSource(21529U);
    msg.setSourceEntity(55U);
    msg.setDestination(9712U);
    msg.setDestinationEntity(229U);
    msg.state = 109U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.702568816872);
    msg.setSource(26303U);
    msg.setSourceEntity(5U);
    msg.setDestination(19967U);
    msg.setDestinationEntity(233U);
    msg.req_id = 63712U;
    msg.destination.assign("ZJHWSTRVHHSNTLZKNVOARTECXWVKIDWLHOABAGPCGXFJXDSYFAFNCSBVQSVCFMIODSYBNOSJSIZVCHOEKIAZOVWHMEYXIBPAKKTLZJBDEKIGPMDOMTWGZWPJVGGAXERCXYEGRMDFJL");
    msg.timeout = 0.694429407952;
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 142U;
    tmp_msg_0.text.assign("RCINALBKITBHKEXMYUQZQHJIYAUAZGPSQJBUCRMTYXZTSTJMSKJVNRNIPXFKNNWRXVAKVGJMELEDTLMEMSUSFDPFPNDUBYOILXSDEOERUCRBCKKIILPEOITHWIIRRGQ");
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.948882770591);
    msg.setSource(56613U);
    msg.setSourceEntity(201U);
    msg.setDestination(41167U);
    msg.setDestinationEntity(142U);
    msg.req_id = 6987U;
    msg.destination.assign("FJKVTZGCIDHLPLBRYOFRDMBNFWYFNESMSUJSBRPTOQYESXRXOGKWRIVDUTATWOLGAFNSWWAPPULOZPAYDHUCFIPXCJSMUPEZKDKMNOAVCECKRCEENTIYWYVH");
    msg.timeout = 0.891834581783;
    IMC::Rpm tmp_msg_0;
    tmp_msg_0.value = -14231;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.115105570742);
    msg.setSource(22500U);
    msg.setSourceEntity(115U);
    msg.setDestination(45662U);
    msg.setDestinationEntity(110U);
    msg.req_id = 1563U;
    msg.destination.assign("WQTGSLZTPNPSINRPSJHUQPDOLIKHAPKREWGYXMMZAKKEKVCCRMJLILBGGRMXOEOZGPNEWKFIKUNSJCMJDZAAUTAZHXGCYOHXHPVBQHWUVYJSZDDTLMXBXDKSENJATQZBSRV");
    msg.timeout = 0.223450536106;
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 236U;
    tmp_msg_0.value = 0.115558779734;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.690913235178);
    msg.setSource(34083U);
    msg.setSourceEntity(9U);
    msg.setDestination(60241U);
    msg.setDestinationEntity(231U);
    msg.req_id = 49160U;
    msg.status = 117U;
    msg.info.assign("SFIRVZIXPGYGZJWCPFFTSISFGURNTEIKHHZIUY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.242851669961);
    msg.setSource(43312U);
    msg.setSourceEntity(134U);
    msg.setDestination(17607U);
    msg.setDestinationEntity(204U);
    msg.req_id = 29602U;
    msg.status = 94U;
    msg.info.assign("IDYOUVEWZCIFXJSJRZHJFYPUJWSWSYKQJSTCHIPOJXWBACUNVXZPXBUQZFZMTCYRCRTT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.614404545607);
    msg.setSource(42859U);
    msg.setSourceEntity(47U);
    msg.setDestination(17640U);
    msg.setDestinationEntity(63U);
    msg.req_id = 24939U;
    msg.status = 222U;
    msg.info.assign("VKKEEEXZQJMFIXIMRCWDSDZCZRMDDAZMLHTEWUBNYIITOHVQUAUILOFTAASKQUHYBQSVAWDEGWROHOPMVWDKLIXJUOJBFSYRXTGGTECFGZKOKYFKHD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #2", msg == *msg_d);
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
    msg.setTimeStamp(0.249423437643);
    msg.setSource(45479U);
    msg.setSourceEntity(26U);
    msg.setDestination(59268U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.101086441259);
    msg.setSource(26772U);
    msg.setSourceEntity(81U);
    msg.setDestination(6843U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.535385524078);
    msg.setSource(6400U);
    msg.setSourceEntity(39U);
    msg.setDestination(24576U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.564262182967);
    msg.setSource(59946U);
    msg.setSourceEntity(81U);
    msg.setDestination(10601U);
    msg.setDestinationEntity(181U);
    msg.plan_id.assign("YDNRYBFECEQJXISCRSWAVCTWQWASLWHKQIROVHPYAOXDRYBHWQTAAZXPFEFICSVMEASJBDTNNLYKMJETBPVPTUUONINVGTTENDPZVLWVTZKZGJKCGKOZBBDEA");
    msg.description.assign("INNHYMFZLWQUKSRHKSOUHGRRLYVIBWPAHGXECXBIEUYGGBEUNCKXPPTXQVBVEHA");
    msg.vnamespace.assign("SLWCKJDTTBTMWVKOZMOMAMLEHEXWIXTSJINMIIZSYRBNYIEXLCRALEWRBQBGAMGGCPHCYJFVIJOYEOFDNCEFJRWLGFKAREPNRSBKQNXOQLKGKLPRRCDCYUHKPTFZAQJYZHOUBYIERSFQIOFKJUWBGSPWFALD");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("BWPTIYJGNHSFUPKHBALQOCTYHMOHWXVCCCFEVIYGYPRYGXDHVXBYATQMLJIKWALTOLZKOHPLFZJBMAYZKWQBXJPNSYKGTZFMCVWSUSIEAELZOOGUQWPOHUSZRSRDEUTOMHDIKZPLCLMENBIJYVEQVZXUYTQRUXIDGBHRQMFWEACJNMCPCSIDBWGZFFUGCNNNXF");
    tmp_msg_0.value.assign("ETHDFQEQYEGFABOGRHDLVSASUNKFUUQPNIWDFSZSCYHGCMBDGQQGLTKMZTJRKDJCWIASZNVWUHHGFRRWFMMXISASFSWXZEUHYMCPRORGQDVNMEGHBWKKPCLMYKTULZHZTPVWCPIIFMKEACNBOGZKXMYZAOYIURLXWNWCXABMQNFTWBAOPLYPUSPJBQOITVZLIBDYJOLQIKXFJVSVJXJPJUGDUEVOTEC");
    tmp_msg_0.type = 190U;
    tmp_msg_0.access = 188U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("VPGACKHVLOVHQFQNYUJJDVRBBZFYVKOGWSLYLNSTAKIBPCNOETHFZATOTBHTXJIICAXLRGYDZXFCYLUFTTFECTISKMHZEWBAIOAIVYRZSRPNGHCSCQJBUPMWMPEJXUQQEMNHDKWURLKQHSNUTZBJGMEVECVDRKWFLYQGSXKEXOISIGWPYJLZBVIWOUUDDNPWMMGZUAMGJSK");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("NWEKSIEBFZCZERNZZPJDKTSHELAVMVNQROQKJYKCKFKYPXMXLMCTJTOTJSSVTEQCPOKIINFVWDNFHNOAGBEIMVHMFGSKBYFXGYYVTYZFDUGULQDIRRUYCBGMBIPDHERBACWENZXDAVXQWUCWQGXKHCYTVQEFLQXPAWPJCLDTTLSLHDOERRPONPYGNOAHMQWWXIGRVSZVZMJZTILORIILAJ");
    IMC::Teleoperation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.custom.assign("PGIJJFCRTNFRHUQHQXCIGRVPKHWJIXBRYVXOQ");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::Elevator tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.timeout = 37036U;
    tmp_tmp_msg_1_1.flags = 23U;
    tmp_tmp_msg_1_1.lat = 0.259547211601;
    tmp_tmp_msg_1_1.lon = 0.966742697955;
    tmp_tmp_msg_1_1.start_z = 0.351903405244;
    tmp_tmp_msg_1_1.start_z_units = 240U;
    tmp_tmp_msg_1_1.end_z = 0.654746036243;
    tmp_tmp_msg_1_1.end_z_units = 143U;
    tmp_tmp_msg_1_1.radius = 0.403345889569;
    tmp_tmp_msg_1_1.speed = 0.70225149763;
    tmp_tmp_msg_1_1.speed_units = 213U;
    tmp_tmp_msg_1_1.custom.assign("GGMOLCEBTTBSZFBYUKVGFAYRXUETZUXRIOLCGBAAMLKRJYUZAWSUDVSGDXEFRWPVNPFNBJUFQNDQWYOC");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.375500759326);
    msg.setSource(31026U);
    msg.setSourceEntity(246U);
    msg.setDestination(26017U);
    msg.setDestinationEntity(197U);
    msg.plan_id.assign("WUNYSAYDLYEERMWOGZQAUHZEICRLBRQIMDPJBNORVQSR");
    msg.description.assign("WVCQKWLYODUSOYWRJXBTWJGXRMPKXZEOAQIGRYUBUPHRNMVLNTEEVOQHOPFJFQBRBADEEIZKIXLCTFUJCZKAMAIUATZMXASGQYOEFHNCIRIOUTFBZAUZDTTMKPFUVHJYHYOQMWBQGMPTEQKLCFIMPHVLWBQVDKIHZTWZVGPRPHCGFBXZYVNUNMQHAXDXKIRYN");
    msg.vnamespace.assign("BLJHYUEOSXHYJTPRPTCDCUQUTOVVLUGOPGBWIRMXLZLQHNSCWYZKEOBTCGVFRQINYBVVAZBBICDWDDYCDCGTRGKFAQELIHEAZH");
    msg.start_man_id.assign("ARBEKZKFZROZTLOBSJPIRWSTHECAAGOVJLPVLFNSCCIXGQRMULAWWPYMNYOJSWXLMMIMUOZFFVRHQRNWZYUNHFSJDRYGBNQYQPVFXDELQHJPIMJOCUPYMTKWQCEDJGIRQIXTFKXAKDBIQBADQKCOVJLJSELSBDHEXXUELNBYTPKRNADFWVJUWZWGLFENNWCAVZXCSTTVIVBMHDABQTYXSGAHODHOIUR");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("IMGOEIILYUWFVMJASUSHGJZPGEJFXKMJFJXJKCKKYXJXCWDFQRFPGSPNQCRIQOCKEPQTLAOILTBQPSGDATHOPGITHTVFDDXFKILTPHISSAEVV");
    IMC::Drop tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 22211U;
    tmp_tmp_msg_0_0.lat = 0.947427185529;
    tmp_tmp_msg_0_0.lon = 0.993976743845;
    tmp_tmp_msg_0_0.z = 0.0452451124949;
    tmp_tmp_msg_0_0.z_units = 208U;
    tmp_tmp_msg_0_0.speed = 0.428168215489;
    tmp_tmp_msg_0_0.speed_units = 105U;
    tmp_tmp_msg_0_0.custom.assign("ZHPQBUCJDBOAFPRYIFXLLXFPPKCFQKKHACJRXENUFTYTGQQDKTWMGOIRHZTWAVQUIMLVIXENO");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::DevDataText tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value.assign("YJVHMVMAVFFKHAKEBCLDXLQIKFGJZAOARKNZDUUWBEVTTXSBWVYWDXINSEMWUONIKLYAGTBBMIRARULEBQSYHJGMLLWRZKAYVOONENRSKEBHERZFWCQZIPSUJJGHNCSLAOTQYPUNXQYMNTLDECFQDRXTQBNRDDAGHHCXYQOUVECKPZNGZHHCYVGZAMWOFJFISPIMUCTBXMGZXWH");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("IHLDYNPJLPCAFUNGGNUFXQOTFUKMYZLBJXSREUHWNYZTFBIWPIYTLZGMHUISQXSJMMTRLUXKCLRWRNBXOMAJFVZNOWJEROXVPYHVETJHKQNXZKXMBVDCWLDHESQBYCOCMHDQQEVUAK");
    tmp_msg_1.dest_man.assign("HSQZYGBFELJGAXV");
    tmp_msg_1.conditions.assign("ZLVZCFZIJEXDZCUEJTCALSDJHBBHXQDQKHJOFPRYKQDUKYTTFFPEIBYMHZSKCBLQNIWLJUGRGNVDHCTPVENSVUOMNAWKCPGGIVIYZWEFXHRRNFJEVWDTQUYTBEDYXPRACREMKYFSXNJEVWNFPLTIWVZWJLOCSKQLWCHKOPSPMMAJOTBXGGUOPUGHAXIPGYONSMIOVBOFXALZ");
    IMC::Sms tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.number.assign("BRTYJQXQNLPSHESDGGKKAJUKWOAF");
    tmp_tmp_msg_1_0.timeout = 18566U;
    tmp_tmp_msg_1_0.contents.assign("YAGWQUZHWCPQFOTEFFESPNKQCMJVPWZFYDHNKQAAYJLPGYRHZGKBOIXUFVROHQOAZIZNROCOFNSFUOLRBURDKKCGOTTZDDJUYXEBMTPLIEEMWGRILKSDVHTBGTUJW");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::SadcReadings tmp_msg_2;
    tmp_msg_2.channel = 70;
    tmp_msg_2.value = 1599078462;
    tmp_msg_2.gain = 151U;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::IridiumTxStatus tmp_msg_3;
    tmp_msg_3.req_id = 28769U;
    tmp_msg_3.status = 114U;
    tmp_msg_3.text.assign("OZICRERGALJCLCPBTDETDHKROKMW");
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.63410120143);
    msg.setSource(2690U);
    msg.setSourceEntity(222U);
    msg.setDestination(51241U);
    msg.setDestinationEntity(95U);
    msg.plan_id.assign("WYFUZEAIQBBVNCYKFQQVHSUCVKURBBKKPBSVKXKPSZSTHPAJITJSOMOAOZNXPNZPVSMHIMJEYOAIVZWXOIDCHFHMLEXBNLNQQWDUMROEUJMXSDIPTDOANDXHIGCQMLOFEMYHYNJPZCATLALCWRKOGRLDFGRIAZQYTCGNQJVEEFUDHQTLIUBAXSBY");
    msg.description.assign("WVSZRKOXEMXJAQCUGRGAJBIUFIKPGKVIFKPWDDTBCHVUDJFYUBMWQTPMNKJAQMFOAEIGSYTLZHZPKMRVFQLIZ");
    msg.vnamespace.assign("OOXGFKBXDHPJQJVFWXGVDCNBRZEVNVFWRUULVIGZTXCMYMWUVCSUWIEJCFXRSEAKJLNSYZBNYYKJZIABWBGKEHMHNSGFOGIQOBOTSPTIDPHNQNBESKSRCACLHDYZKFNUOFMWXTWJDUTDEYVBZLAQVTPFQLEMGCRLJYTPKKCUPHRZZRPRKDNVIFZUXAPHIMXATCALFGPXRUCJOEIWDLLHMYGQANTQSASMMJRAIHDQQMPUBTZKH");
    msg.start_man_id.assign("EZLFPIHAGJDJMNQJOOPRPGGYYEXVGYXZNQSQTDDBNEVLIRSALOWTHPDKFMVSBPYPAIHPOIYDGFKZHXPNCPAZYRVUETHUQFGZOLEQBXCMCWSAQBJCONBWESWWEXOMATZEUDLXTWNKSVWVUWUCSCVIAKLTSKYIZTKDCJWMBFMGN");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("BSLEPMCZDGILLSZMSIEPLTTWJFBQRDYWWIAANGTFOUXGJICHXHHWBDRACOPNWSRLVOBQQNEDJRGTZLITFXAIROJDKRWJVSRUVLYHERJHYQWARSFOIZYKMQIOJHXDPQDUCERZCFLUWZVJHZTKKCYVUNOOEGWXNEPFXYCFAWKBQJUQNGZOEAUBMPKSBGAYIZQCMPBKPSSVPEHYP");
    tmp_msg_0.dest_man.assign("GIEOYBEWKUZVMGUJTFEGAJBGTPFVLHCITTNOIRGIEXHEFZMNBMMVSMCXODWSTKQRLYCMDR");
    tmp_msg_0.conditions.assign("WVHLGSQGGHVRXPDYSJAJQEZNPNBHAOIIKLSETLQLBNOPUKVKZLSXKNFPTKOBTEJWREQQWDDCLFTNCDUXICMDWHEUUBYCEFSNGOUVMEBQYBOMMTHGJTGMY");
    msg.transitions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.774478051972);
    msg.setSource(1465U);
    msg.setSourceEntity(22U);
    msg.setDestination(30419U);
    msg.setDestinationEntity(237U);
    msg.maneuver_id.assign("BVKUVKZHNCIJCWRMYIMXFIAVBNRZIITGFWYKYSCWETLJXTUQEHUSCMIRTRPQSZBKJDTPSBVDNSUTNOLDEKQDHOXFFDJHECYPLXXMPBRWAGUVXXIYJOKDVAEXATQWLFBGZUROHMTOHGEDZOPLECVGXDTUMPEKNUBPQJZFVN");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("XHIMYQZBIKLXFSNICKSUAJJIDHPGNAGJAQNVZWECDLBANFANZKPCZNCFTQFTKMABUSSCKLEKSOBDYOIZYBECXNYSMEGWKFTWYXUIYOHJRHOFGGTEJAWNTWUABFDRWXVWLBTFKZUOCOQPFVZQVHCHEOMERYQVPBAIHPTNRTDJVRUUEPMLLOJOPEHVUCJSIIYBMPVVTADZXSDLUEWPSZZBMMQDXWXSRGRGCTMQLGVOJIYDLHPHRGMDNRX");
    msg.data.set(tmp_msg_0);

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
    msg.setTimeStamp(0.548527466106);
    msg.setSource(58320U);
    msg.setSourceEntity(220U);
    msg.setDestination(7280U);
    msg.setDestinationEntity(115U);
    msg.maneuver_id.assign("TSKPPHMZYVEOIQDLEZAXCGLPVZFBONSF");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 44512U;
    tmp_msg_0.name.assign("GVBHWRMJXCFDSYIKNSTEBUSTKFOWYOYNJLIGJDYO");
    tmp_msg_0.custom.assign("PORSQHTQFRVSZPWMGGXYKXLJLYKLBETNSBXMGOSOTDIQBNKFZDCHGROEYAPIQZAXTULPHCKNYVPEQJVKFUIZFMPAQNUHJHWYUGJEXTRRLSKIWDPENWWONKLHCDCTFRAVKRUXDXMZLTCNLVPFZKSFICWNSUWWIUYDOBBMHVSYQALYMUGOKJFBAMTCVADGMEDUPTHOCCBEVJHJQOGENBXWXFYJRXJURHQSAJYDMPSCWFDEQLRZAZZEGOVAIG");
    msg.data.set(tmp_msg_0);

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
    msg.setTimeStamp(0.667598583617);
    msg.setSource(44186U);
    msg.setSourceEntity(105U);
    msg.setDestination(64517U);
    msg.setDestinationEntity(50U);
    msg.maneuver_id.assign("SHXKSTBDMOQOIYSGMNYALOGDYGMTXDUNLJRSALKIHBDVTWTUESFCKDGXPTBLIZBSCUPWBQLKKXPFGHXXWSNOVKYWNIYRVGPUHVICRCEBVFEFZFQDOTRBUERJHYJTOQFZGWJEJPPHKLCSNVMHKOFQYNLCGANZUEILDTYIMUTZSASPRMU");
    IMC::ImageTracking tmp_msg_0;
    msg.data.set(tmp_msg_0);
    IMC::AlignmentState tmp_msg_1;
    tmp_msg_1.state = 172U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::WaterDensity tmp_msg_2;
    tmp_msg_2.value = 0.0865718103689;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.634239769811);
    msg.setSource(64902U);
    msg.setSourceEntity(42U);
    msg.setDestination(58699U);
    msg.setDestinationEntity(230U);
    msg.source_man.assign("UPWWLPSAJGJRKKZJYKOEFDEIXHLCMGNZYQWJRISYUEGSUBRTDWMQAXWALRSGUFXAZGQIWVAFDTDYFHKHMVTLGXYPLMAGSRLHIWFVEOCBGMGRVTQHRDISYZXVAVLYHXUIBHNSZPNEDPBTXZXWKBHNUCCFJMTOTJVQNRUNLFFOOVDFKIDC");
    msg.dest_man.assign("GPNICXRQSURLQOPWDYVMDVMRBOXFOXCPZMHVTZGOZVEFUTMIBMUAGEYATDHYSPHVEBFITDLXYOXKHSWJKNMYAVOZLCSNPWJNOWSCLSZUQVASREDCUACSHTXUJCYNQINPRJZPEKFOQWPFGHKHDTGWRTDZEVIWYFYGIWARAKCLDEQJOKHBHZNFKGCNZWOGXQJVPMZAUUYQPLIFLXELMXMQTRFIJWFEAUKLXQCLNHBMIB");
    msg.conditions.assign("DFITYPLDNCEUBGURDGXBSINACOHIQKNWQVAPFHGNEOSJAYYZTYSTVGMCEXUNITVQOQZRCZUFJMKHE");

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
    msg.setTimeStamp(0.293922213388);
    msg.setSource(42436U);
    msg.setSourceEntity(85U);
    msg.setDestination(62103U);
    msg.setDestinationEntity(21U);
    msg.source_man.assign("EAWWEGVWUFTMDPHCVBLTZFVYMXRHRIMEWCNLPUWK");
    msg.dest_man.assign("CPEJRABLTFJJDZZWWOSIXZAPRLKFAYLUCHOQFPKRXGBMCXIDPOHVEQYWZNQVHHCNLGGYRNQSOQTUSFAOCDOVQMHGEOENLSDPEDOYCJMGJIIEPIEBSBKJKKHUWHSOVTNAAYUFNOWXZUBXRLMFTBMSIDYGTCGZWUSKENFARJNAPIMTMIIYBDPQVMULCPKUXMLDXWKRDHITBGRKAZBZ");
    msg.conditions.assign("TJHZNFLCKQDYWALJBAMSGRNQBMJWIRRSYTCAGBFYOTIIOFNVWBYJILUJQMEFXLDCABZXKEZANUYFAQHHECCTXUPTPVCKKPXAMYJMXOJPLBLVPQYTMEPDQCRDVHDOMQGINROKSRHFTHDGURGYDQHTUAFVIUWGIPKMMSXZVUNBXENDJLCEKBQSOKXIENWWUEHKHVBGN");
    IMC::VelocityDelta tmp_msg_0;
    tmp_msg_0.time = 0.556748782159;
    tmp_msg_0.x = 0.628975803424;
    tmp_msg_0.y = 0.314748942522;
    tmp_msg_0.z = 0.496533848741;
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
    msg.setTimeStamp(0.371104610554);
    msg.setSource(19313U);
    msg.setSourceEntity(50U);
    msg.setDestination(28187U);
    msg.setDestinationEntity(106U);
    msg.source_man.assign("DRWJYLAJMLZONRVMMMJOYSAFKPCXBKWPJVOBGPLBYDBYGMCUDDMRPXKNKFEGNIWUVPCYGAXXRCKADTB");
    msg.dest_man.assign("KAHSMZKMTZPFMLTBZTZSSVOCPLNFGAPVZLDOMJYZPQRXEXAFIGICLBEADPHMQQHGVAIXXDCKXTIQDYYOFNTSHHORBVMQNZJRWLPARVYYCKJZOSDXUJEWEPSHAWAVCHKZARFBGYUMTKGKIRCGENVLQRWDGWNFFIWDXSCOJMMKPLQCUHISJSRZURDYQBYGEBLXVCWASJOCEQ");
    msg.conditions.assign("QNYBJIZPIGYGRGVZZKPIYGPHTWIOJABMWSTLTTGADFMFUEGZTLPIKDAXHKHGZYOOIFWIFFUOMYHEHZSFDSYPVKZNFTX");
    IMC::CompressedHistory tmp_msg_0;
    tmp_msg_0.base_lat = 0.453270763096;
    tmp_msg_0.base_lon = 0.871144211879;
    tmp_msg_0.base_time = 0.429572177373;
    const char tmp_tmp_msg_0_0[] = {-83, -2, -96, 88, 88, -61, 39, 24, 86, 32, -48, -5, -32, -105, 35, 75, -79, 25, -65, 101, 90, -75, -19, -70, -47, 22, 86, 62, -76, 125, -14, -70, -5, -48, 60, -84, 100, 103, -128, 63, 35, -89, 72, -120, 52, -61, -57, 8, 84, 95, -118, 121, 25, -93, -25, 94, 36, -94, -84, 51, -108, 26, -62, -81, 106, 21, -41, -73, 67, -42, 40, 67, -4, -112, -84, -55, 94, 52, 44, 14, 73, 109, 22, 70, 92, -98, -66, -41, 93, 57, -64, -36, 80, 88, -16, -116, -105, -102, 64, 34, 115, -99, 112, -126, 49, 26, 71, 95, 120, 60, -61, -13, 78, -25, 33, 85, 13, -108, 97, 92, 95, 66, -118, -20, -96, 54, 56, 119, -76, -68, 76, 14, 17, 33, 125, 37, 49, 119, 70, -40, -86, -113, 76, 88, 33, 46, 21, -126, -5, 58, 81, -56, 72, -27, -42, 86, 35, 37, 25, 87, 65, 53, 117, -16, 41, 14, 111, 61, 115, 109, 41, 1, -47, 58, 72, -30, 121};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.664556143579);
    msg.setSource(12544U);
    msg.setSourceEntity(135U);
    msg.setDestination(53584U);
    msg.setDestinationEntity(102U);
    msg.command = 76U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("INGPKRYHNEEINEWXZSRZLWPWVQIBKTVSBSNCHBKGCGLIFEXHPULLMORRVEHMCDMMIZTICXWMNRYKVDHJTTSFDQAZYKUPOYRSPVEQIHOODMQQLCGEGOJEKDGQWMYGYPRZQNALAJAXZBHBYHARBEXYOBWRVCDWWJIJMAOJLQBYFTUHWUXXVDPVVUFNLFJQNNUZXLFUSIAFZVDKPGUWAACKPTBQG");
    tmp_msg_0.description.assign("ISMYVTHKIZWHYAQXDXPGOBWPFQDSFOFYXVNTNGFNRQXBGAWTMEQFXCRIPVOQKPHZDGJSBRSRHVNSYEEVJTUMLSBVVWGNNBLYATYDMAQHLOJ");
    tmp_msg_0.vnamespace.assign("MXDNZWKTYPQUAKZCERSLBNLCMFCCXDGGYVFUKUMFYZDTGBXPHAWUPGWXQOAOAZXTKCIRBKRQHWHMUH");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZGFEPELDJHYORYKREDYSUANATWCITLDNZPUBAWMVJVZRFLBEVPMXYUZXFKOUHZMIJPHBCSTQVQDNWOTUMFDDKSISAPNHBJBJYZXUQKPXOPWHUJAVRVSNCO");
    tmp_tmp_msg_0_0.value.assign("ZBGTJBHMVADQNJTCXYVOKWONPFMLNQVWAYTHDZDIUIEKRIIURKOSYAJIRQBN");
    tmp_tmp_msg_0_0.type = 197U;
    tmp_tmp_msg_0_0.access = 178U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("FJJSGLIHTERTUDJUVNEYVPCDUYWMEOZVZAUPCFNXEBXMQHEGWNATIHXHMGZKPORSJXXMPSKC");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("YLIRWSOXFFYMTBSYCGAIHWNDXBFJBODLSAPLHOQAKBXXOPCWIFXHMMHJBPKLCOQTRPWVYOWTFVUFK");
    tmp_tmp_msg_0_1.dest_man.assign("OEXXPUAIEXOGQAGNWOPETNYSFYHGZBSUVRODUOJCWNRMCDHSGZVIYCPXBWAOMNWSRKQKHJKFUUFCITDCYLADQAHMBJRXVPWZ");
    tmp_tmp_msg_0_1.conditions.assign("MXGUHTJKSCVNABFQLDOXVDJDYDHOEHYREDEZZRFEJPUWNZZCCRRHCGDKQAGARZFQOUOVFQYQZJBCMCWJIDSWMRLNQASNXYBZHLPWWFXOUELASAXJVXOWYQLNZMGUIKWTKLKB");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::CoverArea tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.lat = 0.479269371993;
    tmp_tmp_msg_0_2.lon = 0.960530925169;
    tmp_tmp_msg_0_2.z = 0.245220753644;
    tmp_tmp_msg_0_2.z_units = 49U;
    tmp_tmp_msg_0_2.speed = 0.445527286081;
    tmp_tmp_msg_0_2.speed_units = 154U;
    IMC::PolygonVertex tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.lat = 0.618230855269;
    tmp_tmp_tmp_msg_0_2_0.lon = 0.263740623111;
    tmp_tmp_msg_0_2.polygon.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_tmp_msg_0_2.custom.assign("KUSUOLZBLVKZCUDAAQVWCRGFQXWLOHKIUCVMKJKXEHFRCALRTYOPTAXILBBMWFFIXKUOHUCLFVWEICEQZGKTXHLIHYYEKVERYNDMDFKGRTFPPPBEBLMACASNPUJBYSFJMUZDNJSTQSJJDPQSVEYZEOEWZAZQHOCXDIQRPGDGHONLSOPQISYKGGCRVHZTRJLGYBF");
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
    msg.setTimeStamp(0.426900077524);
    msg.setSource(61671U);
    msg.setSourceEntity(159U);
    msg.setDestination(6547U);
    msg.setDestinationEntity(128U);
    msg.command = 69U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QWXVHBLJCQPFVAXNDLNDUJMBELWLVTTPVNNQDPJLIREIUCHEFRUJBZQIPUZUVKMWYIWVGUZPZPHCYELXCOQGXPCGOMEUDMHPFYFLJWGSXTAEBABRO");
    tmp_msg_0.description.assign("SVCEJOXVYNFNGVINTMJLHHGX");
    tmp_msg_0.vnamespace.assign("VWBGOLJABHZVRFCCBYBFTKUQFKZWPHJDFLOLRIYZKGXRQJTFQZANSSTEWKKAAQQIJXCCHEBCYMEDNDONKVYMQMQPMHAGSJVUXWTTQOHVYGVJWPXIDKMTYMROZPXPLZLOURBLXIWEUAHZZVCHPKIICEYRNOYYZMGSDUQSKFGAORBPJFNDMEDBUSECUTDFBKTHAFWNESLWEGXXIOOUPCHWNHTMLNXJBRRRCVZPANG");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TLLWMXMDBSYZWFIHNNWJEIPRVFNBSRFZOMMCWJDOVOAHXXRQZNMDTUSSNIPUHEYFLJTLUPCJTVSVALICARPYRFIPQZACYTWNDTDYKNAHZVCGPUQYXKOGCQTXHOAYVECQWVHJDMIJDIUQEYDVMOJGOPKONBBUJSFPROYZAAEBTGQDGHC");
    tmp_tmp_msg_0_0.value.assign("XLTPWJTJODNPBFCKUKAYZWQBEGFDKJBKMWIORTNPSYULHWHBSCDUMLGKJOUFNOIZMWAZSTVEYTXUIAPHKWVRMMRGNFZTLJOPRYDBZKLTESWHEIQCODPSARDWLGHBICXCMGXLFL");
    tmp_tmp_msg_0_0.type = 130U;
    tmp_tmp_msg_0_0.access = 191U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("WJPTWEHYLCCRWAVPAIOIOAJVNYDTMEGOXCQXX");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("LHURBRVIFVNOPNGQDFVYRGRUDLFFLLPYUUOGBZNQODSGXUAHCHDWCAWVIJQLNXEPYCMGENKGYYQWZOQVZVSTBMBHTEKBWFKIISOKDOGLRCIECSSZVHNATAMKJNXAVDWPLPSZKKCLURWDTFDTMNYVIFJFSUXATGICSDNQLTTUSXJHWHXKFOSIPBQEXWDQYHJETEGAGMJIFWPPBTJKXQYPJZXOZREIJY");
    IMC::CommsRelay tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.750136979569;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.729489163402;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.460789402094;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 75U;
    tmp_tmp_tmp_msg_0_1_0.duration = 65233U;
    tmp_tmp_tmp_msg_0_1_0.sys_a = 55673U;
    tmp_tmp_tmp_msg_0_1_0.sys_b = 20555U;
    tmp_tmp_tmp_msg_0_1_0.move_threshold = 0.297349090605;
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::CreateSession tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.timeout = 3303338645U;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("VXZFXGTZCJOQYZLUUJFRAARXDLCJQNAKYXSTBPHXCWDIDJGNBQSDIQPZVLLXZXXTNRLRGHPWWRPGUIMHBWSV");
    tmp_tmp_msg_0_2.dest_man.assign("CEQCJVWJRWLUWGCGNGMPALYDCTELAHQIEIMCSYUIJHGQVZEBDWQOBCLMOPIVFKTJCPFURFAWPUZPZFJAGXQHOPBGRVQNXVJTTHZYNKOPYWETRWIKTZERNGDESBMLQGSDNLHYWXFSBXMTTIKXASGEZRMJHMONBDDSPUNKFNAXLKURJQHYSQFUTDYJOUKFVM");
    tmp_tmp_msg_0_2.conditions.assign("IZVJKECBYXFIYJEWRAQMLMTULMKUFCPGLMXGGAUENQOTBVBMGREHXSMSHFUDYTZONWXJJNDMAJRLCSLCAIAYVYAXLQRPFGNGDNLWVJOGCWFOKR");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.204483373169);
    msg.setSource(39774U);
    msg.setSourceEntity(82U);
    msg.setDestination(45107U);
    msg.setDestinationEntity(239U);
    msg.command = 194U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("CXICGTMIAMDLSQYLYGXWSXGVQBQGHTFEHSOZQCIFHAJRWINYDERZQKWMEWBPPUUUOMRG");
    tmp_msg_0.description.assign("ETJPITBNCUJUNNYBFFVRFFXBCTUZQCGCVZOJYJTJAQOGKAWIOKBRXGSZLLTLAYRLKDYPMHZTFMTJVPHFQKWRMYPGKONKXEBYOFAAEHBHPIMWIUEDDEIHSAUIQGJDXQHCNTZEMXAQOWRNYPEJCNRRPHUWMNXSCKZQVSWAYZVUODOD");
    tmp_msg_0.vnamespace.assign("CBYPTULFDHOYBGNHUTGGLDCDGVQVFLSMGEQLJDKRDAXCCXZBTFAOPTNCMPIYWVUWWZLKTXEJIKKUSIDVAIXPMJBSUWRXALQALADMOEZNJYHRFCRYZNWNSGWXEGBTFZUSPFIIENDZEEKAFMBVLKGVZCNKYRIFRNTPWZSHZEUYHMLPHFMRTHOEWVXJSPHOYJVZQPPSOLKURAQXEOKVBIBNYXJOQARIQOUKQTIWGSCUJTQCSHJJGOBDXMRVN");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JCOBCICZRISZSIYTMXQGZLZOPDAIDHRABMZQORRDEFPGOOPKFGWHQFTKIMVOKXQHDVHEVHULWBEGWANCPVAUWRUIGHAVCWNWLIRCSLSVZXLQQIYDXSDCKKVQJYCAYHBNSDUXKASOOCFFRMTTEVKPGMUNUEAHTHBRDBEYWSDGLDNXUJJNTLBWAZEBJLZPIJJJT");
    tmp_tmp_msg_0_0.value.assign("BKHIRGXEPLUWKYJSRGJFWYIKWQYYMKZDLQSJVHQKGEQTTPCOVGXJLLJMXIDBWEJOYNMZDFUXKU");
    tmp_tmp_msg_0_0.type = 164U;
    tmp_tmp_msg_0_0.access = 62U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("BFFWVNTGWQNBRWIXNLKYKSIKXSUFCJXXQORQWASHXHPZURZHRVNTBQZKWMGUFBMPQOTICPPLRKNYBMYJHJL");
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
    msg.setTimeStamp(0.683084575096);
    msg.setSource(37644U);
    msg.setSourceEntity(158U);
    msg.setDestination(53745U);
    msg.setDestinationEntity(254U);
    msg.state = 209U;
    msg.plan_id.assign("YFBGWWLIIDWYSESVUMXEQOFAIBFMLJHTNAMZWIPUWWCKETDJGFJOCSZTYXMXQQRTAEIUFTVPMOOMAUNWCNEYKSBVAEJQHCGGIDQRUJZUYPKBKYCVRDLEFQNLNSYWDCVYDPQHLKLDAGBBRHZRZKHDBBALETYMVNTE");
    msg.comm_level = 214U;

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
    msg.setTimeStamp(0.888715846572);
    msg.setSource(6710U);
    msg.setSourceEntity(166U);
    msg.setDestination(14652U);
    msg.setDestinationEntity(68U);
    msg.state = 77U;
    msg.plan_id.assign("LRWAFUXWEOMMLCPFULKSXKJUNTJJQOCGRVRMSXUHUKIHMKQYSVEHAJPPFTDWFYUBALIIDOLVEWNXGXGJZNNEJHIPZTWOVHLLBZHEGJSBBMODSFPOWXSMRIPTIHVDWQUDOFSJYEDPWEYF");
    msg.comm_level = 108U;

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
    msg.setTimeStamp(0.798402588637);
    msg.setSource(60778U);
    msg.setSourceEntity(231U);
    msg.setDestination(58245U);
    msg.setDestinationEntity(53U);
    msg.state = 8U;
    msg.plan_id.assign("UQZQKVAWCVGCIGMETCNEJWKNHCRPEJEFWMGSHFKZIBEXSBSCTFOHJFRVMRYKALPYPDNJJOGJXORXUYHTCXRMAPPWCZTHTYAZYZDYVBIYJXFLSDICBGTBDUFQVXO");
    msg.comm_level = 186U;

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
    msg.setTimeStamp(0.640251110089);
    msg.setSource(61791U);
    msg.setSourceEntity(19U);
    msg.setDestination(2685U);
    msg.setDestinationEntity(186U);
    msg.type = 174U;
    msg.op = 75U;
    msg.request_id = 23275U;
    msg.plan_id.assign("KXXXLGPVQPWPKHCQXOOBNGWISFAKKNYNLQNIFRNVYSPCUHYPJSVUHAAEWYAZZIJDOTZJSMSSYKPUPTLMMXQHMOOKBTCVGGIJAEBFATYSCXAUQDHVCJGTGBQDSOEZUNDUQORVHROGRDLQNJIXQFZELDZWFHOGPJGNCIBXAWREEKMEUFAXYFZZYMZJWRLVTALYWTRSMSCEKMHLOVITFDGBRPFDUDYWIRMBTCEFVCHNIPBLBMZULJEVWHRBKKUQ");
    IMC::StopManeuver tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TVHNGKSYLXUTODWEWFYENDCZAXRWRRIJKKKMUODXZJFDRKMMLHSRPNSPNILHCNVQFEUVXJJHCGEAOJYHUHGCMVOT");

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
    msg.setTimeStamp(0.944634300101);
    msg.setSource(2786U);
    msg.setSourceEntity(52U);
    msg.setDestination(1527U);
    msg.setDestinationEntity(190U);
    msg.type = 42U;
    msg.op = 232U;
    msg.request_id = 41118U;
    msg.plan_id.assign("AJJRIVEEVMPALRXWEWQCKBFSGYXKJNHDQYCZCTGMFJWFLWUQTAUUVPGEWZNNRGCPVOLWRURUNZPMNAXDVDJCBVIPDDPLAWROBVOHYYYYLEKUKLGLHQAYLSBFCWHHZFHXXIXSBJYUJBTAUEQOBNTSOE");
    IMC::HistoricSonarData tmp_msg_0;
    tmp_msg_0.altitude = 0.554870188744;
    tmp_msg_0.width = 0.732002874076;
    tmp_msg_0.length = 0.70529260202;
    tmp_msg_0.bearing = 0.00996584723078;
    tmp_msg_0.pxl = -15668;
    tmp_msg_0.encoding = 91U;
    const char tmp_tmp_msg_0_0[] = {18, -123, 110, 11, -121, 29, 59, -116, -31, -65, -49, 105, 34, -18, -77, -104, 98, -81, 38, 79, 106, 120, 107, 101, 13, 58, -74, -68, -106, 60, 34, -13, -53, 113, 67, 31, 61, 61, -14, 113, -52, 69, 98, -14, -29, -74, -33, -42, -124, -5, 39, 47, 19, 43, 31, -95, -53, -113, 12, -5, -69, -75, 56, -120, 17, 22, -69, -40, -63, 31, 25, -45, -15, 39, -87, 34, 102, -121, 113, 7, 31, -10, 103, 118, 83, -67, 75, 70, 100, -17, -40, 84, 22, 61, -71, 28};
    tmp_msg_0.sonar_data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QKHZBYLDTWRXDWRAHNOCWAOBSSSTDVYZRVAJLCSALMFKULJCJOWFVOXEIWTVROIXOSPNHUMPSXKEMAUNCDDUHLMIHDWTTUYGUTPKHNBWIZMYNLFPKGROETQHFJMNOMRGIGEICBFRVZHTQUQGCSBDJGFNIAPSCHZUXPYJZAPBVLMNGRYTKCPVPQABQFTKDYGBKQIREQVAXEXJMS");

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
    msg.setTimeStamp(0.0220720124553);
    msg.setSource(44841U);
    msg.setSourceEntity(58U);
    msg.setDestination(29881U);
    msg.setDestinationEntity(56U);
    msg.type = 156U;
    msg.op = 212U;
    msg.request_id = 14386U;
    msg.plan_id.assign("ULSJVPWOHEUSGAKVHFDQQMZHEHDMAXLDSTWTXVZGKBPVPAQXXEOQQYQMVTOQYCLEKBFGEYFMTTMLFCRZILMBELJNRRJJICXKAADAOIHZF");
    IMC::GetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 99U;
    tmp_msg_0.x = 47238U;
    tmp_msg_0.y = 36508U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PRWAJXWZWNNPDLRWNSNLICTZHXWHMBEYHDPJQXGKSTGORRIKQIKRMPMLGBCIFZOOVUXXKEH");

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
    msg.setTimeStamp(0.629934655921);
    msg.setSource(46957U);
    msg.setSourceEntity(69U);
    msg.setDestination(62033U);
    msg.setDestinationEntity(79U);
    msg.plan_count = 28035U;
    msg.plan_size = 419989681U;
    msg.change_time = 0.695130873035;
    msg.change_sid = 3363U;
    msg.change_sname.assign("VEDMHIGCUPMTCVCEEIVYYFRMXPLLDYJLEWSOKNTNFESJUUFPAAOUBXNVXLPBPUXBWOORLKCGGBKGGXWCQSPHNIDZARJMKSUWIEGTMPXWHFHDPXZWTWZRSVEQMSCXYJSQRDGUJJHVQVYGAFQIYKFBKVOZTPYXALJOYJJTHDCUALMWRJIQBMEMLIZBDOOBRVFWKEBQDZQRENMNFSKTRA");
    const char tmp_msg_0[] = {42, -117, 118, -106, -82, 59, -63, -119, -14, 47, -70, -103, 18, 75, -69, -3, -82, 30, -90, -118, -71, -124, -99, 122, 1, 101, -50, -97, -59, 2, 8, -44, 1, -73, -66, 14, 68, -6, -104, 3, -97, 16, -30, 120, -93, -122, -107, 3, -90, 104, -21, -13, -116, 84, -37, -69, -22, 82, -86, -74, -82, 93, 11, -47, -110, -99, 59, -44, -25, 125, -93, 65, 32, 66, -46, -15, 36, 17, -48, -24, -95, -15, 111, -105, -127, 102, 54, 86, 37, -71, -56, 17, 28, -95, 121, -75, -116, 43, -82, -116, -128, 49, 60, 99, 123, -127, 17, -89, -39, -101, -75, -90, -38, -9, -15, -25, -83, 94, -69, 104, 56, 58, 81, -87, -59, -79, -100, -20, 48, 33, 70, -11, -66, -56, -20, -80, 15, 99, -2, 14, -55, -121, -85, -44, 44};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("MNZBPFIFVSCJQENXOQETAHUGCCAHXNHKMUYKOTWKRJITZEBZRLSQNXLKLAZTCYWEPZRRFOYCXXQJRIFLBJZUOADIVLFDUZWRDUFTXRYBMYKQUSWVGMDPQLJGMPTIQAUPHVROPEVIGLDJWYXGLCFHBSMVOH");
    tmp_msg_1.plan_size = 20419U;
    tmp_msg_1.change_time = 0.225978879367;
    tmp_msg_1.change_sid = 24086U;
    tmp_msg_1.change_sname.assign("SFFMUBLASNATUAPFTOHUPEBQPYLXJQNSDIWYKQKNQCFPWHZA");
    const char tmp_tmp_msg_1_0[] = {-21, -91, 37, -43, 72, 26, 49, 28, -95, -66, 87, 16, 126, -1, 72, -72, -99, 76, -91, 102, 40, 5, 17, -26, -2, -44, 60, 82, -57, 22, -44, 67, -14, -113, -65, 28, 8, 64, -18, 104, -96, -104, 123, 50, -91, 86, 79, 25, 22, 89, 49, 73, -84, -92, 8, 70, 95, 74, -103, 61, 48, 14, 88, 124, 124, 54, -95, 34, -96, 112, 16, 29, 119, 76, 124, -86, -47, 17, -55, 72, -106, -2, -44, 96, -8, -84, -122, -87, 28, 45, 10, -107, -103, -95, -61, 48, -43, 100, 57, -48, -101, 11, 95, 5, -30, 77, -28, -20, -107, 57, -27, 104, -106, -83, 96, -11, 113, -99, -22, -12, 115, -124, 118, -8, -26, -13, -73, 121, 15, -15, -111, -27, 88, -37, -54, -101, 57, 36, -64, -13, -122, 126, 79, 123, 29, -116, -37, 125, 116, -45, -49, 23, 120, 93, 112, 1, -16, 1, 80, 91, 43, 21, 36, -76};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.315389352644);
    msg.setSource(49752U);
    msg.setSourceEntity(182U);
    msg.setDestination(10842U);
    msg.setDestinationEntity(107U);
    msg.plan_count = 58033U;
    msg.plan_size = 1390386293U;
    msg.change_time = 0.0372931668787;
    msg.change_sid = 49633U;
    msg.change_sname.assign("PKEIDAVNRXYBJORTOJFLZJAEBYHPXHRWQEPHHRECZMOPHUYTTKTUQLZNCQDMFFOLBXBRVSHKGLJMFGIQJUOPWOPRDCBQADC");
    const char tmp_msg_0[] = {-4, -95, -63, 107, 63, -93, 102, -121, -30, 44, -30, -9, -50, -7, 56, -79, 11, 89, -39, -94, -9, -45, -128, -4, -92, 40, -117, -50, -15, 9, 42, 96, -85, 44, -58, -108, -67, -102, 22, 9, -90, 37, -37, -42, -76, 35, -106, -93, -98, -86, 116, -70, -65, 78, -45, 19, -89, 94, 46, 15, 102, -91, 42, -126, -23, -49, -36, 58, -101};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.913433646387);
    msg.setSource(16821U);
    msg.setSourceEntity(130U);
    msg.setDestination(38119U);
    msg.setDestinationEntity(165U);
    msg.plan_count = 46058U;
    msg.plan_size = 4082253643U;
    msg.change_time = 0.733752126193;
    msg.change_sid = 52377U;
    msg.change_sname.assign("JCFSZFRZEDHPBXMFCQZEQWRYMQJUNPSNTGVMTGVPYPQNNLILKOPZCRWOAXGNMYHOWSAFVQHVEHNEVJYDFDWBPTQZLJOLMGTVAKESLACDLTXEFBBYHCIZTLFLZNSAVGGFMRWLXCMLXJUMYSBPPQMKIHIVAIIEZKRJWUKM");
    const char tmp_msg_0[] = {-24, -91, 113, 37, -2, 35, -54, 3, -89, 107, -55, -104, 12, -93, -119, -63, -19, -39, -89, 85, -60, -84, -60, 31, 37, -112, -51, -24, -64, -128, -75, -52, -114, 57, -23, -18, 85, -96, -94, -54, 106, -38, 58, -78, 89, -15, -58, -66, -84, -10, 11, -22, 74, 43, 98, -51, -124, 62, 14, 29, 27, 111, 87, -20, 105, -30, 91, 22, 6, -114, 56, -101, 35, -103, 23, 110, 12, -24, -6, 113, -79, 102, -109, -27, 81, 121, 77, -100, 6, 15, -84, -100, 104, -54, 104, -64, -16, -51, 67, 105, 35, 79, 23, 44, 71, 2, 7, -80, 120, -41, 88, -41, -126, -120, -46, -76, 32, -23, 43, -77, -64, 82, -74, -17, 15, -7, -102, -92, 66, 12, 0, 31, -24, 27, 109, 96, -39, 78, -34, 50, -83, -36, -102, -104, 56, 117, -75, -61, -106, -111, -107, -23, 108, 64, 99, 25, 105, 34, 65, 103, 106, 123, -93, 71, -87, 63, -114, 28, -49, 125, 100, 38, -35, 98, -107, 31, 106, -32, -1, -23, 51, 14, -71, -84, -19, -1, -3, -69, 7, 82, -21, 61, 3, 12, -115, -73, 7, 48, 70, -39, -59, 22, -35, -30, -100, -11, -13, 123, -104, 30, -21, 18, -119, 78, 55, -76, 45, -74, 53, -56, -23, -31, -2, 114, -92, -47, 101, -122, 122, -55, -2, 56, 23, 15, -78, -14, 117, -72, -91, -75, 41, 98, 76, -83, -92, -51};
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
    msg.setTimeStamp(0.179823380704);
    msg.setSource(25983U);
    msg.setSourceEntity(90U);
    msg.setDestination(30754U);
    msg.setDestinationEntity(200U);
    msg.plan_id.assign("TPEWRJIBMWRSMTDOFMGFCDMCYHHJEYFIYKAGNNUWFTGPQDRFVUQPILKIBWRLPDNKGMBAFWWKUSAESCHHGTMLWBQLUKYCBZPIDLBOGGFTYTIHQNVJFSRHICAMKXXJMEOXQXVFZCSDRZJGMTOPVIYABKUPQXZCRFXAJEEHRRPAAOXOSCVWTZDJSBIOIJJVBUETU");
    msg.plan_size = 63041U;
    msg.change_time = 0.769683610381;
    msg.change_sid = 27072U;
    msg.change_sname.assign("YGSVQNGFDWTCEIXILJIVXUYMKOGNXFHIUPALDZJNQTTSUJYYYEHREBYPKNIESNOVWHTVQSVLCGDCVBDVXLWGANYIW");
    const char tmp_msg_0[] = {107, -97, 66, -89, 97, -56, -51, -107, -91, 23, 84, 86, -84, 80, -88, 54, -100, 119, -10, 29, 89, -104, 52, 16, -50, -68, -28, 17, -68, -128, 43, 85, -74, -100, 93, 61, 63, -102, 41, -108, -11, 48, -80, -31};
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
    msg.setTimeStamp(0.692790791265);
    msg.setSource(53221U);
    msg.setSourceEntity(55U);
    msg.setDestination(54130U);
    msg.setDestinationEntity(197U);
    msg.plan_id.assign("SIRIHWKNSQHCBHXBJOVURDXKYYSRUEZDJCRBGDMPQMVQGRMTYQHXGPBLDHMNLPUNWWEAOOIUHJDFAVWIJXYALAQMPSGIIHXNLGXMMLEUEKMDZKODLVNHWEVPKFTRPJNVTCEQJFQBVOJHRZETGYRTFUUYSFUKL");
    msg.plan_size = 16076U;
    msg.change_time = 0.543007023242;
    msg.change_sid = 23173U;
    msg.change_sname.assign("SDQRFGKUNBHCXPFYXHYETFHFHAXGUCDSZ");
    const char tmp_msg_0[] = {-83, 54, 69, -107, -40, -113, -128, 113, -8, -13, -84, 19, 118, 1, -107, 31, -17, 44, -105, 41, -24, 13, 9, 65, 108, -91, -11, -122, 26, -112, 101, 29, -90, 71, -30, 51, 11, 79, -11, -75, -46, 67, -96, 65, -71, -31, 49, -44};
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
    msg.setTimeStamp(0.152960398563);
    msg.setSource(15990U);
    msg.setSourceEntity(29U);
    msg.setDestination(27829U);
    msg.setDestinationEntity(109U);
    msg.plan_id.assign("XDAFBGKIOYBYJPSGWIRJBOPJDDMCQISKUPWESIPFSVHEURMUVMQUCCOAHSAYZFFGBAXWBNHVBJVYDWXZCKTRLWIGITURQNCNGSMPZGQEWLMTSRFZNQYBGZXXDCJVTJNYUJCEBNSAVFWKJHCVLCZHCAKHYHNAKUPZTTVPKQOQXTDEIWESLIZLWWRZULEENAHIIROGNAALOHSDPETRMEMMUBYFFTQTUFJKMYQNMXDQRO");
    msg.plan_size = 2087U;
    msg.change_time = 0.0473998337572;
    msg.change_sid = 1993U;
    msg.change_sname.assign("WWIVOECVVEEHRPTFLLXHUNAQPQGDJUOPRZRNMYIZZLNRWMBMAEKGYRYCCLCXKIATTJAYBFQVAIDRDUIKWJKYZTNCVHPXSDSKOIDVEVLUVJHSCVSTWZNZSEXEGHZTYTZS");
    const char tmp_msg_0[] = {75, 119, -100, -62, -5, -21, -96, 61, -17, 32, -8, -35, 124, 109, -43, 7, 108, 55, 111, -48, -73, -78, -13, -41, -53, 110, 82, 55, -125, -39, -6, 77, -62, -29, 80, 60, 118, 50, 125, 35, -10, -38, 120, -5, 104, -20, -103, 32, -91, 2, 118, -35, -97, -27, 100, 16, -15, -87, -45, 16, -6, -33, -111, -43, -90, 37, -120, 21, 0, 95, 26, -109, 65, 82, 59, -126, -28, 125, -101, -12, -11, -89, -124, 125, 36, -13, -108, -24, 109, -84, -77, -15, -99, -101, -102, 13, 51, 111, -40, 90, 25, 112, -18, 35, 73, -28, -22, -51, -98, -23, 22, 56};
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
    msg.setTimeStamp(0.508875170625);
    msg.setSource(51787U);
    msg.setSourceEntity(110U);
    msg.setDestination(54372U);
    msg.setDestinationEntity(245U);
    msg.type = 213U;
    msg.op = 249U;
    msg.request_id = 15238U;
    msg.plan_id.assign("CYOIDBOKCYJHFGMGSUPTPERSQDVHELYTZLRUDOQMEEFSBLJHUZSQLKFQESREXQVRRZKOKZOHDXKRAAUCGJPNXMIGVNTJBRBRWICDCTXALPUKHBNINQWWDKNBAVAEJHNIFMGNUXTTQLZJAIPGJWKA");
    msg.flags = 33195U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 29128U;
    tmp_msg_0.lat = 0.0723926415231;
    tmp_msg_0.lon = 0.59557140507;
    tmp_msg_0.z = 0.970160062154;
    tmp_msg_0.z_units = 77U;
    tmp_msg_0.speed = 0.708420978962;
    tmp_msg_0.speed_units = 35U;
    tmp_msg_0.bearing = 0.151389554386;
    tmp_msg_0.cross_angle = 0.886048987393;
    tmp_msg_0.width = 0.656068436475;
    tmp_msg_0.length = 0.144083847287;
    tmp_msg_0.hstep = 0.961175199685;
    tmp_msg_0.coff = 243U;
    tmp_msg_0.alternation = 22U;
    tmp_msg_0.flags = 235U;
    tmp_msg_0.custom.assign("XDPEDGRKASEAUIWGZLQUECWFWDSHNARZQTJJJFCSUOYJMXOCFLUNMNMANQQCEPLPVBKVSZGDMZVBVYYKALRTMKXAAMOUYDHJCTQCPLEKSLPNZUXSWHGDBTWEIEOZWJMRSXTPWNUIHNXPQWNWCNFJXODVVBXIDOFQSATFCBJYZORTCAHSIKBQIFQPTHTABKKUXZOQIJEPCDFBFRLHGMLGGZRSUVLIKZ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ONCWOKIYGBUNOZZAQCIWDBEUDSNOJMEFJFNAFTBPYVMWLXYKLAUEKGKINXVZCQOHHDYQQLOSBMNSEILVIQQFSFPGAAMYMKKFJXQTHORGIXBPCPARCTSCBLMWWOAUMZUXDSSDBLRNUNAKOURYQEURTG");

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
    msg.setTimeStamp(0.514650844505);
    msg.setSource(41416U);
    msg.setSourceEntity(104U);
    msg.setDestination(13808U);
    msg.setDestinationEntity(205U);
    msg.type = 227U;
    msg.op = 86U;
    msg.request_id = 388U;
    msg.plan_id.assign("HBHBNFNUIXXHZRTEPSYMHIWKKBDFJUVQCXMRSMOEUCOXHGEPDDTIAJNKQDATKOIETQWEGBYBDSMRHFQLHLMDGYYUNKKJAPFG");
    msg.flags = 9342U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 2870U;
    tmp_msg_0.lat = 0.506985771293;
    tmp_msg_0.lon = 0.990139697463;
    tmp_msg_0.z = 0.286286459704;
    tmp_msg_0.z_units = 54U;
    tmp_msg_0.pitch = 0.791183016239;
    tmp_msg_0.amplitude = 0.0921909473892;
    tmp_msg_0.duration = 4537U;
    tmp_msg_0.speed = 0.733402859995;
    tmp_msg_0.speed_units = 212U;
    tmp_msg_0.radius = 0.56835266124;
    tmp_msg_0.direction = 140U;
    tmp_msg_0.custom.assign("EXWXMJFQZQKSULFWMFPTYGJOHKQIMTXAHGYCRULSZKFQICVTBZTQOKGGOBMULZHKKKLDSBVEHFNSRBRCRPOIZHJNRAKKXREAODCIUGVNNVDWYCUMPXVQGGAVNEKSMXCFOHGYRRSNHWTLWPQAISMFCUHTMBBFJNIECXVPIZSGUSPLWZHREAUAGYFHUJBDDYDBEJLMVWYMABOJWNTZYNDQPELOTQ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZEVNTRUUTTMWLUSWPTTFUDBXLDIUIHKJPUMDANKXKNASHZSJEMQHLIMYGPXHQNFXDCZBAPEGBEYEUCQCWRYEWNWEYBMPQAGABEQODHSZRULUUPWKWYWIDIBVGJBVRLKFYRPDIOXVQQWVOVHSDTFAYXNSDAVCLYNGKBGQSAIMXISLOAVJLEJCHJKKG");

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
    msg.setTimeStamp(0.795028851706);
    msg.setSource(13108U);
    msg.setSourceEntity(151U);
    msg.setDestination(5156U);
    msg.setDestinationEntity(211U);
    msg.type = 33U;
    msg.op = 72U;
    msg.request_id = 45631U;
    msg.plan_id.assign("TGNREDGLDVBVQKJMCEIXLYRPLOKBCADZVQCOCAZFRPYUHEUFNWBHYAZLGGJPNMVUVKEJDFGRTXCSWPYZWOTUOWDNEMDXSLMJBQGGFMEFMXOVNIHAMKXJNRICEQKHPUSYNYUQUJZOUDBIVIIENCTQWKGFSTAMFWYMRNOSRHUHLTFDWSTFCDZPBELXXSKBVZZB");
    msg.flags = 254U;
    IMC::DesiredVelocity tmp_msg_0;
    tmp_msg_0.u = 0.446871169611;
    tmp_msg_0.v = 0.743439413734;
    tmp_msg_0.w = 0.219337663378;
    tmp_msg_0.p = 0.914260538662;
    tmp_msg_0.q = 0.69241273103;
    tmp_msg_0.r = 0.400493035838;
    tmp_msg_0.flags = 164U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LYIPXKPAEPCEZUSAKLDCRWSQMLJWEOHKNQTQTTXASWOWAYIHURHRJSHYUMGBXPYYNTZAGKCILTMWTFCMDVWVNFOPFIGDNOZNBUQNQPINJKVTEBYCDGBZDJZLYOVOZOFWHYZSQAKHKVSSGCBENTCSUJPVQZMAQXLYFRDMBUGFGOJCBJOKW");

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
    msg.setTimeStamp(0.223967692855);
    msg.setSource(22104U);
    msg.setSourceEntity(158U);
    msg.setDestination(64388U);
    msg.setDestinationEntity(117U);
    msg.state = 156U;
    msg.plan_id.assign("DMEAPAMQGIPMBDFWYCDQKLGPLLYGYPVTCLIFCBCGWZHROEMDYOPZPKTTJSKTIITDLOEUDIGEAVPZFSUMXBFVGKIJATZNKHODSYVKLQSJYXKJZCEEJSLHEXXVXSRAZWQTAHZYRWOM");
    msg.plan_eta = -67056566;
    msg.plan_progress = 0.0577209712888;
    msg.man_id.assign("NOXSIAWDADLTSVRRGKUATNZVLFBBWMPRCZZPHXCHQEQWHASPZGZJQNEEYIMZHSAPWOFRUUQWWKXDLBDDBGKYRUMEJKI");
    msg.man_type = 29579U;
    msg.man_eta = -1236832523;
    msg.last_outcome = 23U;

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
    msg.setTimeStamp(0.971247469614);
    msg.setSource(28511U);
    msg.setSourceEntity(248U);
    msg.setDestination(12213U);
    msg.setDestinationEntity(63U);
    msg.state = 122U;
    msg.plan_id.assign("IROLQKUWMXWXJPRAQZEYHUGSHLOABXQMJNSEEPUQFKAHTJSQUKSHKJPRYLMTEZFQYSPDHOZSDHUJMOAGHOBVLCLEIHTFPXRTEGSFBNDRWOYANDYFFNWXQSGV");
    msg.plan_eta = -1569508658;
    msg.plan_progress = 0.985973134494;
    msg.man_id.assign("CHFJSIRNYPSQDLYFHBFGJLUZEVETRDSMOSYEHGRPBJXAVOOQGYQCTTCTYJPVW");
    msg.man_type = 43143U;
    msg.man_eta = 1928912552;
    msg.last_outcome = 118U;

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
    msg.setTimeStamp(0.506282428798);
    msg.setSource(41074U);
    msg.setSourceEntity(75U);
    msg.setDestination(55660U);
    msg.setDestinationEntity(213U);
    msg.state = 101U;
    msg.plan_id.assign("EVTROUGFLKDVAIGGQEJVPXHBFPWDKVISOLUSLWJPSPECWWBIYDCZRMRPXVGJJOEKFHYKIYDTPMMTNSHHLCRVHQNPCIOMRXHDAZKZYAAZBUNGOCXNUAFNEFOTSKZJXFHLCHTPWDOGVGTWGTYGYRZTNF");
    msg.plan_eta = -979708019;
    msg.plan_progress = 0.414107262959;
    msg.man_id.assign("HYNOMHXMTETMUGEFFQEXZKOIUSMZNDUDEGDAUGMCVGOQWYTPSHAGPHALGARGSUDEYRAAVWJMDZXNPCBTQYKFZGLFMVWCEBRUAWKBIDBFEWIUHWJOFPVCFCHKLLMHFTVRAUWILEZJNEJCTBKIPAYTRSWLVZQHAMUPYOVYOYYFKNCOXOBDNLKWQONJSLZLGKQQYIPQNTXWFZXCSRIZCRJXJBGXDLSPXIBHHRSDTRBI");
    msg.man_type = 51170U;
    msg.man_eta = 1408247058;
    msg.last_outcome = 161U;

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
    msg.setTimeStamp(0.627321981729);
    msg.setSource(39946U);
    msg.setSourceEntity(120U);
    msg.setDestination(41818U);
    msg.setDestinationEntity(18U);
    msg.name.assign("PWUKNGYGMOZLRNAKZIHWTCODIDTJZCYURIYGAWCRFVELYGSSLFMMFWPITKKPYV");
    msg.value.assign("FYJNOAPWNOWDEGPTKSAVZTHXVEVIRQQXAYRSGVHOPKGKMWLHDLIUJDHYRZBIXYAWPKHATZKCILLFFHJJCIQTUWUJJCOBNRWYERPBYFEKMJGRXIGLEDXATPUOIBZDNQAILPFJG");
    msg.type = 42U;
    msg.access = 19U;

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
    msg.setTimeStamp(0.447607870766);
    msg.setSource(59200U);
    msg.setSourceEntity(122U);
    msg.setDestination(34860U);
    msg.setDestinationEntity(163U);
    msg.name.assign("IXBEUBPOPBEZVCLNEIBNWBXKAYKKMRLKCSV");
    msg.value.assign("CGFVTNWFTMRGRRHUYRGFZVYEEGSSHJGXLYACADSKLWPQNNPBDYUHRIMILZCAOXWDVOGTWXVERPYNQSNJSTYZKUVZQQ");
    msg.type = 37U;
    msg.access = 177U;

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
    msg.setTimeStamp(0.260632393104);
    msg.setSource(45701U);
    msg.setSourceEntity(116U);
    msg.setDestination(44347U);
    msg.setDestinationEntity(134U);
    msg.name.assign("JGSLMNZALCBNWABGFXZASEFUMJIFZEPBVHUCLENSSVXXOIBKNMBQHRRPIGMFQHYTIPYUOQUXPFIMCWRCZKMBDGBSBEEKDBHRAPXQQKMYWDLBUYGIVEFKDGIQZPOWJACVGYZSFKNTALEZTOKTKHXASAVFFTHCWVUQDTMTWETGHWYDCRPPHIHQLVYOQRJVJJXWEIKYCLODDLNJNGOYJITU");
    msg.value.assign("UVAYXJOHAGPPEDGFOADTSJULLAAQOZWQCFTNPXTSBLTSTSVQJWMIMJCDNCKKIMLDGYAR");
    msg.type = 235U;
    msg.access = 26U;

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
    msg.setTimeStamp(0.960546140356);
    msg.setSource(58950U);
    msg.setSourceEntity(210U);
    msg.setDestination(5292U);
    msg.setDestinationEntity(22U);
    msg.cmd = 125U;
    msg.op = 227U;
    msg.plan_id.assign("GMJSVIXRZTFLDNBHBXCVLNPTTOQXBASOCJMPLQYRJKQMMCKJBVPPKUGEQSSQNGISNPRIQUTBFWOUIF");
    msg.params.assign("URGMXAHFDARZCSUPBOFYWMRBQQOIWTULKILGZAWJFVBHSFZCXNBVVWEGNZAZSYROVRUNXXRWCRPILQRZINZSRJHMAGTFFYJWBXDTMGJEBGMDYVHXLISDJVOLQEUCXWFOA");

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
    msg.setTimeStamp(0.776977090713);
    msg.setSource(65315U);
    msg.setSourceEntity(6U);
    msg.setDestination(60016U);
    msg.setDestinationEntity(41U);
    msg.cmd = 215U;
    msg.op = 169U;
    msg.plan_id.assign("GGDWGEMORGCUSPKLMYZUCQABOLDYLEYZXGQWTGFQAIFFDGTXJUENFAHKZPMHFKKDLHNKZCDAHFSCZSTBEFWUAKIRCEYBKNXAFVOTHNPTNXYTWSGIJVGOKIXZQXKPBJNUOKURHTLTSDLSHIQYPANRNVJEHWFWOAMRCETLENUOIWRIEJQVOYSMRZRBYDS");
    msg.params.assign("GOZPBBFTERAIMNELYSMCQNWIUSQTAXJUYVCTHNLYPLHPLOMXDZNMDSCUEXBSYPXUDVVMCWQTFHJYSPBIXGGTRPOQDFRESGAIQXQYZRGOLVZIJXKHNKAKEEMUJCBNNWFEWKESKOWVFDLYDEDZNOFLPJAVHVCJOIYAQMVMXTTWAUFGMBVKRIIVRCMUDHLWPCUXBZUSJAPHGWBKZQIGNHWKLHLYRQJOZGPRZZAJC");

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
    msg.setTimeStamp(0.99392138079);
    msg.setSource(56395U);
    msg.setSourceEntity(3U);
    msg.setDestination(1540U);
    msg.setDestinationEntity(6U);
    msg.cmd = 185U;
    msg.op = 248U;
    msg.plan_id.assign("BRJJVWCHIMMTUJVFBCRRJIAZRULSWMKEPADTEVTZKPHQGCVLWCMFPATWVQHNHMNNHIVKEWBNOAJMMAKXVPQKORATNUEHGQHVDQFGSWYCQRDSBYNFGUXJQSOOXHQDYEGSIICYGKEXQDGSZESUYFIFBZUVRZFODFNLZLSPXA");
    msg.params.assign("MFSCCAAYLKVHUHBQJSFXOKTHBDDEKRZHSOWAHJSFBDCYEPEVCQAKKVDIKIVTKUNISERVNJDPGNLCPACDQZRWNIPMRWLOPBCQVZDYOJAMERLRFTOEQTXOVLBPUWTMFGONIRDZFVJSGQFOWYXZLXSHUBGAZSQIGUPFUYHBQRQYXCBPYGSTAUZLITZJBSQKXYTDBPKFEWGTWXNUWEGMFDMHUCWNGMRYZXMMOJUWGCATJVERZNLEIO");

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
    msg.setTimeStamp(0.299777809447);
    msg.setSource(63377U);
    msg.setSourceEntity(244U);
    msg.setDestination(30061U);
    msg.setDestinationEntity(102U);
    msg.group_name.assign("JLLQORWZNYIPBELKVHAIREITCHWCYCWQDMCXGCPVGQHHYLMSXMTGUICAZCLRFKJDZRYVMAYWCFFEEBNMVRLPBKOTBDHNJUXBKMZPQSLORYJLVAIPXSAOBSLFEIBXNXPBWYUYKMISZTVSRGDXJGLJTQKTARUVIHPSQXEFQWDNDBHHGOAUKPMOJRTICZGUZAFUPF");
    msg.op = 7U;
    msg.lat = 0.666992927283;
    msg.lon = 0.781350118522;
    msg.height = 0.7091869134;
    msg.x = 0.00509523768093;
    msg.y = 0.506239984021;
    msg.z = 0.796851776913;
    msg.phi = 0.346425057118;
    msg.theta = 0.146372479377;
    msg.psi = 0.364385900127;
    msg.vx = 0.60176613098;
    msg.vy = 0.00843757877226;
    msg.vz = 0.399995732643;
    msg.p = 0.85120728394;
    msg.q = 0.608233979562;
    msg.r = 0.910617307487;
    msg.svx = 0.248431765932;
    msg.svy = 0.157504192201;
    msg.svz = 0.626243553006;

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
    msg.setTimeStamp(0.859370299603);
    msg.setSource(48390U);
    msg.setSourceEntity(144U);
    msg.setDestination(30446U);
    msg.setDestinationEntity(10U);
    msg.group_name.assign("NUYOUGXVBEWF");
    msg.op = 112U;
    msg.lat = 0.951237750103;
    msg.lon = 0.31766753549;
    msg.height = 0.829928294988;
    msg.x = 0.551856407258;
    msg.y = 0.152259359276;
    msg.z = 0.246531660668;
    msg.phi = 0.254690458052;
    msg.theta = 0.454770378924;
    msg.psi = 0.843050272758;
    msg.vx = 0.801093824521;
    msg.vy = 0.780927875838;
    msg.vz = 0.324851286048;
    msg.p = 0.55366051206;
    msg.q = 0.103418102257;
    msg.r = 0.692136265394;
    msg.svx = 0.482129662675;
    msg.svy = 0.547815762328;
    msg.svz = 0.837199838771;

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
    msg.setTimeStamp(0.55386514594);
    msg.setSource(45278U);
    msg.setSourceEntity(216U);
    msg.setDestination(34014U);
    msg.setDestinationEntity(80U);
    msg.group_name.assign("IELKKVMLDEQIHUJVOKXSGPQQJTPRAJZARCBAZHTAHCOUZWNEMYABDRVGBKMOWCEDPRQIWFBBEVJHKZSLCWOMOTMGFXOBYGWKXPWQFSQJTHLCYEYLIPNGAQUHSOTKNNMVACXAREMFDNTEXYRYNPJZVXMTIVISINYZVNUTSBOZSSXDKWRLPQVXHJAUYCUZEALBGUKFTPJDUONGBJUYHWPSSZRDHFUFXJMWWLDILGELTFVQRKCNOHZD");
    msg.op = 84U;
    msg.lat = 0.189319176325;
    msg.lon = 0.516177760243;
    msg.height = 0.148492897215;
    msg.x = 0.745329417825;
    msg.y = 0.720483643485;
    msg.z = 0.708350893832;
    msg.phi = 0.177955914869;
    msg.theta = 0.454188062657;
    msg.psi = 0.563865071903;
    msg.vx = 0.441640459587;
    msg.vy = 0.418779119245;
    msg.vz = 0.104898462669;
    msg.p = 0.367370829497;
    msg.q = 0.569130671314;
    msg.r = 0.0666349403945;
    msg.svx = 0.140069311419;
    msg.svy = 0.519784501437;
    msg.svz = 0.386159972438;

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
    msg.setTimeStamp(0.329322702716);
    msg.setSource(35539U);
    msg.setSourceEntity(95U);
    msg.setDestination(60450U);
    msg.setDestinationEntity(39U);
    msg.plan_id.assign("VXDWATWQSPJLBJHIYVOSREWBGPAXRDUQDAQXZODNXATEIBKMTLZURAWFDPNKMJOLNKSNJWPCZGAXTLORFXLNGLHHTHPRRHOMCDVLFIHOQFTCSXGIGGPGOOKJZZTKFDFIEYVWMJMUVFAZUVCQLJXMSCBGCNYVKKIHAAZECYNQODJESHKIHKWBUJEUFBFYCEKMGUYRMTQQPYCEYTLNSUDITZEIB");
    msg.type = 228U;
    msg.properties = 69U;
    msg.durations.assign("YDSDATORAPWEPEFGXIGIYNWWNFEIMSXQYEKVTJBZNHPWIHTAYLZVTTFWHGRPELK");
    msg.distances.assign("VYCCHJPMJZNCVPBNRURTAYVJQIQRTPWIGXRBSJTSGSDIOGOQKRHPIXUBKKXYYHSVJDYJFMUNMYLXTIILBBUCBQIBUFACMGENVZZNAKFQPLFHSTQFILWZDYUASKHWZUBSEFRPLSOPXYGFTXOQHIFCDMHLLKOJHTRE");
    msg.actions.assign("ZXGLLGUSBUFDPRGQCEJSMJYYHXZULWFVBTPSMSIOKHLTKGPXTNNBNXLAANJXRVKXVZKEBIDGAPOYKIEHKDKWZBDQXXZZYSVXJZRKPBFWDVLHHSLOEPRKWONUSENTTBSCIGUT");
    msg.fuel.assign("PBEDYKUIDNTASBLOLRQCVWGHCETYJFUIAPCWMKZDNOPVOWCNEYLIGXNMQTHPQMDUHJUFEELVLWAWWYFQDNOUUFJFLXBVBIUGGRTZGZVZVDIYTQAYTXYWSIXHKQDKJMMJWNTBNPHNAXEWRPPRYUCSIIEORUCCAMSNZMIGCLIFARZSDMFOVNLXRABZOHMAQLKJGPEPXEHDSKXTJQGJZVQAKSDKTHRFBBKRXGSSWEHZMJOVBYZSKBCFPFJOHRO");

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
    msg.setTimeStamp(0.460610964213);
    msg.setSource(55466U);
    msg.setSourceEntity(79U);
    msg.setDestination(50027U);
    msg.setDestinationEntity(175U);
    msg.plan_id.assign("BMZIEDPXGHMASDJCGKIKYRQOWNTEZVKRZBWIMUIPDZLOLGQWEUHJFPDRQCYHAMTQRAZPKMOXLTNZOO");
    msg.type = 227U;
    msg.properties = 128U;
    msg.durations.assign("FHHUPFOKLIAZIAGGLWXQNGOBRV");
    msg.distances.assign("EIIHZXHFUPLMEWQLGYJZXBKOALFEFIPCVTRVGHMPMVUKWWDIRJNLVCKWDONBPJIJARTJUJYBUSYNHLSQGHONUYZK");
    msg.actions.assign("RVNTYJSQPKMAYMUNRORVBCVMONPZKRKEEEEGPODICMAOCGYSMNPEHBZLMWJULALNJQFYGUYJKXOBSTPLIEANHXXSTUMFKIFBVVNWFDZJCJWSQAHZDMBCZHAIXDLHORWZFWYYQQTS");
    msg.fuel.assign("BMGVNINTMNCHPLZUKKWYDLZEQGFGSWCLYVKORESIRWODVIZXWRXBAICRFJOMRDABYGLBOKYKGQCQDOVNTWWSVHXLNYEAFTZRWTQMXBWQABZAQUPNPGMDHTSHAQUQBJYLMADLDIHCYE");

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
    msg.setTimeStamp(0.0815761517305);
    msg.setSource(44537U);
    msg.setSourceEntity(201U);
    msg.setDestination(1845U);
    msg.setDestinationEntity(122U);
    msg.plan_id.assign("ABVHBVLFRTBHXZQCMTGFOVZTCCEPZRZGOWRJUJNWVFERSIYNCDBTGTVIFMFPVBZTWDIPUDLSKLADHUMDCHFCSPGVHXITILEFFSHQHIISMQEEOIORFLQPQDAXLRAJWRXAXWDRUHOAGDVBGSNASNY");
    msg.type = 126U;
    msg.properties = 223U;
    msg.durations.assign("LPIRCSWHAGZPYOJEPLFGMJSERHHMROXUKJWFZIEADJFWDJXWSUEKRHVIXTFYMXLARULSMHGKVYXNGYSVUPRZQZLQBMTJUEEJQCIVQQDWCIHCLATIWEBJRROOYKBWCBQSYSIVOBPMAGNODCNNWFXFANMBDVGVTMQOXJKZBDKPQHCDXTUOEVIYLRU");
    msg.distances.assign("GWBEWPJWLSIGQBBAUZIFORAJMXHXWONFYOBBRSWHTNYLIYZIJWCWTSBD");
    msg.actions.assign("DMKWFQIRFAKLKPPIARMJYGYTXBTGLJCCQBFFNFEFCYWNPSXMEVHHZWBJODBWMSSLYTKTJPSDCPQJDNUONBPRKZOOOCRDARBGQMQDTRHAZJBPDYUUVLICCALRWQKGSFMAOMSZGSUEHIJNBCNTVWZBHYWIDOIYVCRZIK");
    msg.fuel.assign("MQMOUATTYBUKJHWXPSAIDGCLRFUIOJMNTFXEGUKDUXWBGMTQUTJZFOVDNHRTCIXAVZHWQZVZPCSZLBMVOOAP");

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
    msg.setTimeStamp(0.496962981546);
    msg.setSource(54020U);
    msg.setSourceEntity(118U);
    msg.setDestination(31201U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.00628492082273;
    msg.lon = 0.244646331998;
    msg.depth = 0.490161389599;
    msg.roll = 0.279390033523;
    msg.pitch = 0.171108817566;
    msg.yaw = 0.834073677975;
    msg.rcp_time = 0.468927319117;
    msg.sid.assign("BEIXOVUTSGREPGWNDMWTZNDOXDWFCKATSUJFBREUROCYBMMJMQKOENYXPRJEHQVWCYSUSBPNKHKZEESPHQQRVGDDWQDZFYIG");
    msg.s_type = 51U;

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
    msg.setTimeStamp(0.77880927722);
    msg.setSource(45385U);
    msg.setSourceEntity(26U);
    msg.setDestination(18076U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.822273715853;
    msg.lon = 0.927570533976;
    msg.depth = 0.739582574449;
    msg.roll = 0.556940081797;
    msg.pitch = 0.0593394413997;
    msg.yaw = 0.238930410714;
    msg.rcp_time = 0.968822715892;
    msg.sid.assign("PAZZPRVVQUIYXEPHGNKADXOSRZOCJHNYUCQARIBZQFXCEHUSJOTFYHNGGIEGKWDFCJAFHWMXNQAYYZDMQVBKDCBLHXTRCQWGAOEEB");
    msg.s_type = 124U;

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
    msg.setTimeStamp(0.912215844017);
    msg.setSource(39206U);
    msg.setSourceEntity(185U);
    msg.setDestination(55038U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.707509696043;
    msg.lon = 0.890628221046;
    msg.depth = 0.262365598794;
    msg.roll = 0.507158678238;
    msg.pitch = 0.607780724337;
    msg.yaw = 0.583651264366;
    msg.rcp_time = 0.134094346287;
    msg.sid.assign("DLECOKYLJNCMZLKPBTAVGZVUGRENQJEPAOHVRSKOUBUIHKCPUYIXEWQPODALRKZSFUFMKYDEZOJQGVRRDLQFUCBEWMRBAHJYWBZTGIVUARFHZQIJQVHMKXVGBYGCFFTEVMJIJSODXEPWDEJTBPLYQLAOZXIYAWZNKIVHWGFGCKZXFTDSOBSRTMTCCOH");
    msg.s_type = 113U;

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
    msg.setTimeStamp(0.694073337909);
    msg.setSource(35093U);
    msg.setSourceEntity(136U);
    msg.setDestination(33786U);
    msg.setDestinationEntity(44U);
    msg.id.assign("HMDZYOSSBTYFDYNIZYXWENYLNYGPDIMZLVPOZAQHMIQRUGPFXZACVKQNOQGZSEDKHQOSORBCBYDTYSASLKDUKHKRRMJVOTHNXFMWFIJBRLTXFWLGTOCERQJVJLEXWQFHECHWPXLSAZNGVRFEUODMLSKTPPNIYUUGXESPVSWKCDRMOAMHFCKGAJPXNJVIZJZITNTIHMQ");
    msg.sensor_class.assign("FEORSPSCXIVWDWEDWMJGTOHOISEMOWMCCUITNHGEFFWFGNXNXSPZZLPJVBOFPZEGQUQREHOUBBIEYUHADIORRJBWYKQLAHIPALKWWUTLRUPQKFGCXSZVTUEMSLVIDFCTYKMOUYOXNVPTVRPJHVAABLNQZDMFYLCIDYXRAKNEBKMBUADNLXHHNSGVHWSDXKONVRBBFH");
    msg.lat = 0.828518690797;
    msg.lon = 0.575600204397;
    msg.alt = 0.727988721784;
    msg.heading = 0.604319831059;
    msg.data.assign("JQGXUAGTWSMXCGJISEYJWFJKCLPFERQJKMQTPRUEUVCMDZCLSETZAPLUFEDRPXWKO");

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
    msg.setTimeStamp(0.58752524002);
    msg.setSource(49213U);
    msg.setSourceEntity(27U);
    msg.setDestination(57333U);
    msg.setDestinationEntity(188U);
    msg.id.assign("YDTSDYKACCEMZMPAIECXNUFYFMJZNBQUJCPVEKYNQIOLEM");
    msg.sensor_class.assign("XLXCVUQHSGUIVAYFODUICRKACMOBZDCBAPZHWHAMPGPOTTNYVKFMLLMEQCDNDZTTJEFQSKJKIDFQLLZUPXZKFIXURDHQGYJVSNJZSESEPRX");
    msg.lat = 0.879334823284;
    msg.lon = 0.0208904704183;
    msg.alt = 0.593766467583;
    msg.heading = 0.565740140795;
    msg.data.assign("UZWQMJFLQYQDBGMBHJFRKAWDXJXOZQXTXQEWCNFQNSDRPNVDJPDCRYVKISEKTEOSIZRCLPAWGNKMEFZZJMYFGINVPUWPKVHSSJBRITHAXYLQWJCPUJMGCYCVGNVYGZALAMFHCBOWUNAFETLCTHIOSN");

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
    msg.setTimeStamp(0.399816413717);
    msg.setSource(5672U);
    msg.setSourceEntity(5U);
    msg.setDestination(49829U);
    msg.setDestinationEntity(25U);
    msg.id.assign("QIFFLYXCBALPHZMNJAPUYSRMNDSDIOVOZKBBXYYJNDQIANHWOUMBHEOVBCKWITBVLSQSENZUXCTNAHKBXEUNHGCEWLTRCMRSJHPFIUQHLDTEZDVZJSGRUQLHQTMRPMUQMWOANPFCXJCAQGCYMEKKSVDGGUKGORPMZTLHSZQVXOIFYOPBGWRYZFUEPOAKBGPVELSTJCEWDLWOIARYFPEJWNJFTTVCJDKFQFSX");
    msg.sensor_class.assign("ISGKMSHHUMZROJYBQUYFLSAPUKJZJSFOEDAEDZPHQICNAMCFBQWOINFEHBGRXYKWZFUOTIGTQYUOYBXALIDYMYVHEMPFUZHYKNSNSGQLRMTRKVZXVJBRWSDJFGQUBDVXHWDCTMPHQVLXSAUEGGEXWNJRDLXTXMXCL");
    msg.lat = 0.100390616143;
    msg.lon = 0.043868268886;
    msg.alt = 0.51373894513;
    msg.heading = 0.786059269098;
    msg.data.assign("HYUECCHYQOQWWBRFHRTQTVVUMSKRJLEHNHNAUWCWFZGNIJMLLEGYMGWSCNWCOYLCMYWSVUKVOAIKUFOXGCKXAYASVZXZREINIAESPRMBTNDOTHFUZWACKDVFRADDTLJNNPQSDHIZTXFWVNBYKOROSC");

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
    msg.setTimeStamp(0.221292348187);
    msg.setSource(46884U);
    msg.setSourceEntity(246U);
    msg.setDestination(19649U);
    msg.setDestinationEntity(111U);
    msg.id.assign("TCPWMVKEPLBNVQOOARKBAJGODXFUKLUAUQPFFNYVNRZEBOYPEJELACRHEWNUYCHKSGJBVEXRVIPCILWHQQXHPJITZSTOVCGZYWTSVHDXS");

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
    msg.setTimeStamp(0.534252652126);
    msg.setSource(4680U);
    msg.setSourceEntity(239U);
    msg.setDestination(34629U);
    msg.setDestinationEntity(31U);
    msg.id.assign("LFVZHNAXLMHLFNTUQEZYZJHXJIYJLVNQQGYDAMLPDIWRZCNTOGJCQLXZEVPGYWCNQWPYKPUIWHJVVJKESKOXRTONWKOUOXWMIPTAUDPIXDCPOCXMZAVTRFKBNYYJEVCQBSFTEMCHJLUYCUPVTYRHSDFUDGHKRHHRFJSZMGRNBLVPGLHLQWABOGIMCQOQ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("QUSFJWYSLTHDJEJEHNPWAGPVJXEHBQMDUEBCROUSVNQMLUZFGBWVXXHAZKDFJPCHOYCAJCQMYMKKBVNSOWOUYKSGQPNZVH");
    tmp_msg_0.feature_type = 46U;
    tmp_msg_0.rgb_red = 83U;
    tmp_msg_0.rgb_green = 220U;
    tmp_msg_0.rgb_blue = 79U;
    msg.features.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.397741916496);
    msg.setSource(8117U);
    msg.setSourceEntity(198U);
    msg.setDestination(35792U);
    msg.setDestinationEntity(218U);
    msg.id.assign("VCJAPYCLIZLYBOKMOWETVNZSTAFFLNKUWODJGQNBMXCUODYTRKWVPQCIIJUQSPZHMWBFWTJNSXLCTNGJCZIPNPEXXOWDDPSOWHKKMNAOIDMRVTYXVQWMCCHDISTZWBPIJAEMEIRSAQY");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("OCLFHVCFBIBNRBFOSELWJJGUWKKPIDDYORPQUGSVSDZHCVGWVTDNEJBKAALDBFKJEPBUNTIZSYLHGXZYIJXBTHJUWCFARHOCI");
    tmp_msg_0.feature_type = 1U;
    tmp_msg_0.rgb_red = 203U;
    tmp_msg_0.rgb_green = 115U;
    tmp_msg_0.rgb_blue = 28U;
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
    msg.setTimeStamp(0.837829523936);
    msg.setSource(28140U);
    msg.setSourceEntity(22U);
    msg.setDestination(51702U);
    msg.setDestinationEntity(178U);
    msg.id.assign("OJTNQTYZKRPEHONFIXQZTMKUPJHFVVNMMPJCSSUJUAZXSWCTAEYRRYHBCHTQBSXNHUACELHEYVMEVZHWFVOHMQT");
    msg.feature_type = 200U;
    msg.rgb_red = 164U;
    msg.rgb_green = 208U;
    msg.rgb_blue = 65U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.714587066327;
    tmp_msg_0.lon = 0.713480740828;
    tmp_msg_0.alt = 0.752743882344;
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
    msg.setTimeStamp(0.106456298028);
    msg.setSource(31560U);
    msg.setSourceEntity(39U);
    msg.setDestination(56057U);
    msg.setDestinationEntity(98U);
    msg.id.assign("QKMZDHOTAXOGNIINOGPQVRELCHCDLFNXXNLNIFMDFRUHWUPXVIWGXKJ");
    msg.feature_type = 224U;
    msg.rgb_red = 126U;
    msg.rgb_green = 211U;
    msg.rgb_blue = 246U;

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
    msg.setTimeStamp(0.330902832425);
    msg.setSource(4164U);
    msg.setSourceEntity(241U);
    msg.setDestination(26922U);
    msg.setDestinationEntity(188U);
    msg.id.assign("VAFPHOPXMLOFRB");
    msg.feature_type = 172U;
    msg.rgb_red = 94U;
    msg.rgb_green = 253U;
    msg.rgb_blue = 65U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.816928280938;
    tmp_msg_0.lon = 0.886663811087;
    tmp_msg_0.alt = 0.57379714466;
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
    msg.setTimeStamp(0.916954232183);
    msg.setSource(12654U);
    msg.setSourceEntity(55U);
    msg.setDestination(57084U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.857746332653;
    msg.lon = 0.785399897479;
    msg.alt = 0.881691778056;

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
    msg.setTimeStamp(0.050344815234);
    msg.setSource(18207U);
    msg.setSourceEntity(224U);
    msg.setDestination(42714U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.0355308963867;
    msg.lon = 0.607004665749;
    msg.alt = 0.0578231993944;

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
    msg.setTimeStamp(0.582316912066);
    msg.setSource(12950U);
    msg.setSourceEntity(80U);
    msg.setDestination(39534U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.187608400485;
    msg.lon = 0.510533604944;
    msg.alt = 0.697461649665;

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
    msg.setTimeStamp(0.199623898932);
    msg.setSource(39678U);
    msg.setSourceEntity(251U);
    msg.setDestination(33250U);
    msg.setDestinationEntity(93U);
    msg.type = 145U;
    msg.id.assign("JUJITGAMCFKBKFKYMJRWJPQACREXPAXXHZYUNWXTFRUYMCOVQHOKZFPHQSZBLHKSBJSECWFLFZGGWVVAAUVYUIPOGVNUGTTUSSROIQQLIADBBSWKHXPZUKOQRDLGDQKEUTVXTSZBFIDHVCNYSLFVFELRUMDADXVJJOEMRCCGDOWJRDMXNHQMCYKRGFOXICVJELZMIHAANXTDENWILSWTTWZPBGJCPGPEKPOIDYNTNRNHO");
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 200U;
    tmp_msg_0.request_id = 40160U;
    tmp_msg_0.command = 109U;
    IMC::FollowPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 43495U;
    tmp_tmp_msg_0_0.lat = 0.973829169558;
    tmp_tmp_msg_0_0.lon = 0.554399381302;
    tmp_tmp_msg_0_0.z = 0.302567801715;
    tmp_tmp_msg_0_0.z_units = 115U;
    tmp_tmp_msg_0_0.speed = 0.72716981039;
    tmp_tmp_msg_0_0.speed_units = 42U;
    tmp_tmp_msg_0_0.custom.assign("PHKDROSUSGVMWUFBRPJHOZTOGEBVGIDGQKSMTUVLSUPUUKDXRNYCSCXJCNQIEAMGMWSVEBODGDBPFOGREYQNWZJCNMBAAMZWLRBVFXAKKPWLRIDZFFZRCYIJIVAITLAYFFPNHOTEHATUFXJICOTNUQLKCLYBYMHFHQZHRMGYVJBXHEXTOCTSACNTKOZYJKIVEKXEEDDZMVTWFULXLRDWWJJBLQWIGSCHWYKQMZHXJA");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 25966U;
    tmp_msg_0.info.assign("BRMLDSESALJFQJZECTZIHFRFOYUBIPBLTLCJBINOGVGAEEVHWIQCGRMDGALWBTCWJFYOQXEKEZFYNYBWUUHPYXRMVDOUSILUIAYJICFYGHPTPSXNPHGZFHYTHRPDXMSVBZHDOEDCLTSLANUMUQVLWDSRAKVMXWJCNQJAKFLNCAWINSHMJTSPNFVZQHGABVQXGEDWJOEKXRFPEX");
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
    msg.setTimeStamp(0.817111572877);
    msg.setSource(36775U);
    msg.setSourceEntity(112U);
    msg.setDestination(57085U);
    msg.setDestinationEntity(87U);
    msg.type = 89U;
    msg.id.assign("QHFVKTGOFINUBMJNZJCNMEKCHGLJJNDWIGIXSGLKGQCXCKKHMQKRLTIBNZCMKWXLTFTGZLRGAJPTVIZCDH");
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.989742456727;
    tmp_msg_0.lat = 0.99280533625;
    tmp_msg_0.lon = 0.676917956768;
    tmp_msg_0.z = 0.467878497407;
    tmp_msg_0.z_units = 10U;
    tmp_msg_0.travel_z = 0.528557433146;
    tmp_msg_0.travel_z_units = 250U;
    tmp_msg_0.delayed = 90U;
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
    msg.setTimeStamp(0.0459265497558);
    msg.setSource(10097U);
    msg.setSourceEntity(122U);
    msg.setDestination(7815U);
    msg.setDestinationEntity(18U);
    msg.type = 98U;
    msg.id.assign("XVXOFJGYYAJCBMDRPFNNHCZRKAWSEWOMSTSTKUKRHWAFQZMJAA");
    IMC::ImageTracking tmp_msg_0;
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
    msg.setTimeStamp(0.781701763412);
    msg.setSource(18953U);
    msg.setSourceEntity(241U);
    msg.setDestination(64227U);
    msg.setDestinationEntity(225U);
    msg.localname.assign("UPNRUYIDHTXCQAMYZVVOWZEBPFVYVUKBZZWNDQWPJNQJRZLQOFHKSESEITBTLUJHACTNWMOFAHFNMJYTBFQJURGNERMYSPNJXYPMKVZRMLAIFJEGSVIBDEEXIMWVNOOYDUTOREHIHDASKFQOSXYMHUKDFNLZALSQKBEPXKJBBUFIWDORDVLYAGITGEUGGURCAXRZNXRHWCGXLDMTHBCSXYGBKCVQIQTHGZIWKA");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("KZSLZNRYMYHVRUNTGXPCUJZXDCZCJLVOCOKFXXWBBQIFVGGBWASVRWDIHYZDJLFEALTEIMFHLWUTTRUEAJSFUXENHNCYGPSEQAFZDNWLAQNAUAVDEYBKZDQYCRWVWNRRBTRBWOIWSHBTQDSJOGPQHGHYIFOQUIGJCJGMSUZAKNIVVEYZGXPYDMKCJT");
    tmp_msg_0.sys_type = 116U;
    tmp_msg_0.owner = 21310U;
    tmp_msg_0.lat = 0.763370097538;
    tmp_msg_0.lon = 0.103422827369;
    tmp_msg_0.height = 0.484456943829;
    tmp_msg_0.services.assign("VQWUAKEQTCFFENANLAFZVBZCWMFRDIOIUZLPIJRJYBJNRUODCIISLCTMRFBUQKXPWMYIGQHIBGEKMLSFBZHEK");
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
    msg.setTimeStamp(0.373657287775);
    msg.setSource(31794U);
    msg.setSourceEntity(176U);
    msg.setDestination(28903U);
    msg.setDestinationEntity(73U);
    msg.localname.assign("DTKHZCZDVYHUNTYMHBOSWJNLSDMFJQXIGIFKXYIKFYVUNWLVZDLMESLFYPPRKJNCKQTPYSMHZVYKQNACTNBEIVBHPQSFSGLJUZETVOEEJUOVHIKTYGFXAECUSKMJRPPCRGPQDUPLNXDCIFXGGXLAVJMCFVUQGBJGCORIEBHTIWIEGWTFAMNCXOAWMAQWBGPDEKWOQMOBLLHWEZJXAWAUBPFBDSRRWNAVXUTAQBZNLZMXSZSODIHYO");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("SIJXTTOMMMYUNMYCBNARUQNYBIRPWZMETGZLAHJKMELCXLOOEKWZJJRKUOCHVSYYMOQMEQUOJFWZFUCJHBRITQQGEIDQWXWNNGUBKRYNYCSIFKGFGAACVTZQRSLGGTSOJYCPNCTHJS");
    tmp_msg_0.sys_type = 197U;
    tmp_msg_0.owner = 38281U;
    tmp_msg_0.lat = 0.842053890123;
    tmp_msg_0.lon = 0.332591672969;
    tmp_msg_0.height = 0.578544192501;
    tmp_msg_0.services.assign("RRCKSRFWENWEHZOC");
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
    msg.setTimeStamp(0.989453216343);
    msg.setSource(1715U);
    msg.setSourceEntity(60U);
    msg.setDestination(49982U);
    msg.setDestinationEntity(52U);
    msg.localname.assign("JPAFMIHIFTGHCERMRJDNQDSBNIUQUZBHYKCCOJTAQRYRJUFFLPEAEWVMSHCMSJMRJABPTIRYXVDK");

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
    msg.setTimeStamp(0.092685703382);
    msg.setSource(12377U);
    msg.setSourceEntity(88U);
    msg.setDestination(58539U);
    msg.setDestinationEntity(6U);
    msg.timeline.assign("VIRTHPDUVYXMDCULPKKJUVYCPFJSDEJRMZJEWMQEPXYGULELIKFCKUDOAHZUOFQSUMGAILETDXTRTSNXCWZKHYICLHQRNJYAZKDFAUMTLIRWNNWZHBVYEPZOAJBDAPOPAVPDDGIGMXERMERVNTOBECKLBJBIQRWUCVGNEUXWQSIBANBHXWXQJNMBCSQNHSGNR");
    msg.predicate.assign("XUEYPMEISWZPNVITGJBEOAAICLZZQRQGRJKXUDMIMEQWFEUBZKBDXKRVNVHNSTYWTHQQJOXSKDWRIGGIDHOKCMCFMFECCEXMDVXNBQSUWKAQHZWPCLSAONYYMOYEFONOWXMAZFJPHQUQLTVJUICYRKIFPJPEALJPULRLHBDWDALGBZSYUNYS");
    msg.attributes.assign("KBVCBUEVKHKZCFVWFTPOATGIUDQKFKRNHJVDEJZZPVAOFLSACBOOIRLIWXHRQPBXNWSUWDXSPCJAFLMAHVGEZVFPYBIHITCZBULCPEEXAEQJJHPZMNHRSRKFDNEDDLREBTYGMNYSANFLJTTKCBWYACTUGUYWYOOLYYVRGDI");

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
    msg.setTimeStamp(0.161191782551);
    msg.setSource(44966U);
    msg.setSourceEntity(231U);
    msg.setDestination(51538U);
    msg.setDestinationEntity(85U);
    msg.timeline.assign("UACIXMLBNBZDKXEQVHSDYMJRORGLNLLBWPGVOZSNGRPURFZPDTFSUDOJLKJMVRFTAPGJSNTFHQEXYIYJRCYGFMNJMIUVUUQEKPGNWWLTXDVFMUQYVHQXCQGTUBVMJYHHCYI");
    msg.predicate.assign("IUSHAPDXVKUUNLIJBZESOTRJETKDLCNKTBWAXXTFHGE");
    msg.attributes.assign("USWIQFEFCBIBEAHWITMXHABMGMRLZDJAHDLSMA");

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
    msg.setTimeStamp(0.384989412615);
    msg.setSource(39422U);
    msg.setSourceEntity(27U);
    msg.setDestination(18102U);
    msg.setDestinationEntity(145U);
    msg.timeline.assign("KUWYNPWVCLAVNXWECQDRHTRYSFBAIAVUGKMNDODPDVAKCFFGGZEGRMCTMXUMIQXEEJWANGV");
    msg.predicate.assign("KOCJHEKPJIWSRAWAHHMZTYNCSICJFJCOIAZXHRCYWLJNULLZJOAOUJXWRMXBDQGVNEBDOBFYAKLUFGOBPXLVVTUQCDPGEFIMEYUVOOGWPXQBJWDEGQJLWDHAJCCTULXHRSBFVAMWLRLLQYKGZODRGIWBNQYIDKXDMYDMVBKHSUT");
    msg.attributes.assign("RREWQRVNJDBEFLUAANZHMHNILGYNCUHOBMPJZPMBFUKLEHWOFOHYITDMBBDQFTOKVNIEZTSOCIEWVDOLBBORGZWSRYVBTMOQFLWPOPSSEXPNUNXLSVTFAXMNCTWKAKUIJCCCUKIGSQQJIRWUAPQWKJTIMRYZDXWVXGYGXVAPKVFMTYANQVZYYRJFZAVDBLH");

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
    msg.setTimeStamp(0.689572158567);
    msg.setSource(35494U);
    msg.setSourceEntity(83U);
    msg.setDestination(39136U);
    msg.setDestinationEntity(241U);
    msg.command = 53U;
    msg.goal_id.assign("CWXBAHIXNAGFDLVRUZVTTWWVTNOMVHCGQVPKQEWSFRSBNBIMHXAJLOFTUTXEYHGLCKDYSZCOQICWIPNCOOJRXFQEEIPRWGWHAJYYVUKXBYMCLBVFGUGPCPEWABKOYD");
    msg.goal_xml.assign("SOPESMLREACTMQDMSKERVBQBWQZSJHXJQYULERNQZIDPLJKSJRWHBKGGFYTSXIOCPGTXFURZVROZSZQUHCMCPD");

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
    msg.setTimeStamp(0.834485199762);
    msg.setSource(13851U);
    msg.setSourceEntity(17U);
    msg.setDestination(31112U);
    msg.setDestinationEntity(205U);
    msg.command = 20U;
    msg.goal_id.assign("NFATMLIQMJSZGOBTADRQHXYPXCQOVLEEFJZBLMECWWMURPHUPDXSWKHLUWJBQXZZUYAYUOEGVV");
    msg.goal_xml.assign("YEVKFIVIUXDRSIZHIXGDWBEUPLJEOQOWZWMMVJJVFEPYAESNDBBBNGPYOFYHDFJKZMGLUZYKCWOGWREYTDXHSDPBGKJNNUZJXXIILCAMPUOFHTYLHSWLZIAKTLMHKPSAKULTCDYNEUPRMYNGVTGGJZSABCXXROJHTRHMVKNXZLGQEQAMDCUFKWXBERRASSQJNZOQISPTNGAACSNFOXTLCFCUJIVQFVQVORZHHQODMEVBWBQIC");

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
    msg.setTimeStamp(0.550761770256);
    msg.setSource(45779U);
    msg.setSourceEntity(164U);
    msg.setDestination(17513U);
    msg.setDestinationEntity(108U);
    msg.command = 20U;
    msg.goal_id.assign("SXLZKSMNJHHLUISATXNPMBAWHFIUCZKWRKDSJMUTFFMSRFDIJUFUQCTVAMTQGVESHIETVQZQCNHZNFKNCPIGRZYUGZAXSJBMOKMMECLCBXAYXMXCYBPDHJLJYIWWYPYAWGDODBRJGUWDIKLDPJHLYGEHIHPCVXWKXMFSCUZVYQKPYROJQIROKGPOZRLUOWANFQGFTEZTWGEPDJGVULRROTTASVBOAOWZINNTQXFPXBVBD");
    msg.goal_xml.assign("UEEIYLEKFYTJNXBQSNJUDLMQOOWCIIIAVINXRSCSWLWIVQVINRBHKJZFABMNXHYCTZVBLKDCQMQZJNMUUAFNQUOFGACMOPNNZKPWWKABGDGGOWPVVIOSPIDGZYSXBDEQPURTLWUR");

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
    msg.setTimeStamp(0.105061259901);
    msg.setSource(44236U);
    msg.setSourceEntity(64U);
    msg.setDestination(33475U);
    msg.setDestinationEntity(241U);
    msg.op = 87U;
    msg.goal_id.assign("WNPJIMKEXHADMEAVWYCOBMSBACYRTDBRDTWYAXYZUJUKPAGNOMNDLGXLEJWSSJQAOITESCFBI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SDJTRONSHFYYXSPRBRPBBFGXUVWTVDKWUTVKYTXXHBZJIZQNIEJOADBJYGDULGSFTWWCGZURPXBQKEHHZIOJOAEALGTWQNVIJLCKIFOUYLFPWRKBWHLYEPSJQUGPCVGSOYMQGZZQLUPANABMAFPPCUMNVOMRDSMKOMIMIXTXRNUSAUEIKYVCIECHRTBBIOPFTEGEZQHZXHEDZDHQLRTOLDYNNKVKMDJCKW");
    tmp_msg_0.predicate.assign("BGLQJKFMHZMBYAWXAZYSJLIHVFORQSFOFNGNPRTEXYOLQISDEPSJBOYLYVDWZTURIBMCRBRTIHHDUWRXGNDIFWMKTKKPNVAMYFGXPEZICZZCTRBFEAMMTGIMDUOETGDNPCRAVPSUMRWNBSZAUYUWVKPNDUDYOECQTXBCLVJFRGGVWQKJOJAQQDXFGJHAVQTKHEXSKYBOPLHLAXNBJEAULZWVLKNJPXUIPCVEZEHZLCKFSSTDIX");
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
    msg.setTimeStamp(0.168578655243);
    msg.setSource(59497U);
    msg.setSourceEntity(109U);
    msg.setDestination(16274U);
    msg.setDestinationEntity(97U);
    msg.op = 43U;
    msg.goal_id.assign("ISBZOWUWQZEPDJVBVKJRJCBLXOVRDZIVUREGMTDEGQYJOGUIWFMZSHXMDOKZHLYQDKNJQBBLFAMTLZBCFIPSAIICREEWYOQSFCEKJXVGCDXIGLPCSWSMINVYANC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MIPRORWPSV");
    tmp_msg_0.predicate.assign("WRFTZQXZAMMMHVDAUGGMCWZDEAVDUSKLEETODUKIWCTCAZDLXUYVRTLDZCGCXQJEBQLVUTNQRVMEIYHGON");
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
    msg.setTimeStamp(0.298044662874);
    msg.setSource(31149U);
    msg.setSourceEntity(154U);
    msg.setDestination(50731U);
    msg.setDestinationEntity(220U);
    msg.op = 180U;
    msg.goal_id.assign("JZZNYLXKBNSJGSRGPKDERIUAPQPIQMLEVPFWAYPYQUHEEMNJICCMSPUVEZCGAITEWODRDTXUAWVYNEJDGIRXDASJSDGTUHUZXZTOLBMIJQFKFKNQKEOQCXWWXV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NQXDVRSWEQTTYCMUROUCPHKFDBUMIRZHDNSSXZFABCIYPTRQRAWHTPOSBBBYNLGMCNIYXHVJAZKADFYQRVJLUQZMWGGNMPEDDKRFEAWCXMGRSGTKZVARXEQVKEVKYCUXCMIJAWVRSILTFBIUHIQIAXNZOLAFGBSLPUGTKTOPWOUQYXOUAPFGLZIKLVZYWNJJONMEWXZEYWJPIHOSGMCHPVTNWSFDKUJJGMEBFCVOOTJZFPBDHEHCQDJD");
    tmp_msg_0.predicate.assign("MXFUEWISQQKQRRFCCBPWOZSLACZFEZTBXBNNDFPFBSHLEHVHWHFAEVJUSDDKZLITXKCOAKJDJYGDNSCLUHOIGGMLAJPBBQKERTGFYKYYXTNKDMQNDXFRIDEOOFBOJKRYRVCGWSOHLUYMQFEGXITZAHVIZSEXXAVXIGMMTIHZP");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VIVXFLNGZCFDHILDQGZOPIYUXVHVKSHSEBEORFDHTLAIFJGPKPJQRPGDLWRWUIXGOKBTONFUOWOSFRGGUMMNPMZCMEHTCMVXBHXJBMMRAIJUHRSZTBSUJEYVHAXEYKHFBDLSTPZMQEPKJLCITWDATBFEVQQDMR");
    tmp_tmp_msg_0_0.attr_type = 112U;
    tmp_tmp_msg_0_0.min.assign("XUHWOMONCKBLKGMMJHDWCVILASPWDSSDIBVRKMFIZVNKOBJYJTQSSXRTKYCEKPNRXL");
    tmp_tmp_msg_0_0.max.assign("KGBZBFAAYNSAFXZWJGNNEOACBUIZHP");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.760370845294);
    msg.setSource(1244U);
    msg.setSourceEntity(238U);
    msg.setDestination(51963U);
    msg.setDestinationEntity(158U);
    msg.name.assign("GYQAAYVSXYKMMLPCIIACDLQRNNRXFTXAQHJHCEKHSGAOYPZVJBCLEDMZBMWWJMZKNOCMYVSTCZSVJPLIRBAGKCJKXLHEKIHJH");
    msg.attr_type = 154U;
    msg.min.assign("HMRZUSWOJGXKBNZVRMBFRRDPZZOKVQHTTPRUTLAJDNIYXWNNNVUXBITCKQJCCHDLQHFMWFGUTHGMGBIHKOVKWEYLFOLIHADUVNCAPXIOVSJZIDZOXVALYELHOIXDWCPBIFSEKEMYLRRGZAFGVACYDZSSKLTXTQJFEBNYNMPWRRYUYFGHSCBDECXGQWUQPAFTGR");
    msg.max.assign("ILCTSEEKGRXOJXBXGGQPPKZUKYBSUCYM");

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
    msg.setTimeStamp(0.38334349741);
    msg.setSource(25591U);
    msg.setSourceEntity(110U);
    msg.setDestination(54740U);
    msg.setDestinationEntity(106U);
    msg.name.assign("LZKYUUHMDVAKYOPNGDZKLBAJQJZBCRHLZNJWCXCDIGCHGXQNUGWNUHQMFPAZDSFTNZXKFPSZNHJOIPQEZNTOABNTWXEPWQFTVXEHP");
    msg.attr_type = 186U;
    msg.min.assign("XSVXMSOUIHSNXGMUPDFZDSXOYUSEFBBHGACHOKRCTMUQTCIUWUGTMHIBQZFPZCIEJVFHIDZZKGQE");
    msg.max.assign("BIWYTRVCOARTFLAKZKUAPHIDUWFRNOSXBGZXSGKACYFPDQEELGJOQTHQELCAQXBNXFERBOUBWJAUNFTRRXKHTMDDCNSLVNBFIOBCIWJHTNDVKBZZZEDIIUNWUXQTIMHKOYSKDQJTBUUREJGMZVLMBTXGKWHPJCWGLOYMVDSLSMZGEPJKQJDCEYQMAJHMRYWFHVVASTPHPWYJQGCUWINOC");

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
    msg.setTimeStamp(0.645568747688);
    msg.setSource(2504U);
    msg.setSourceEntity(124U);
    msg.setDestination(41489U);
    msg.setDestinationEntity(80U);
    msg.name.assign("JUOGQMLUCVZDONJOPPDYGZWYTMVUDGIOHIACZMX");
    msg.attr_type = 183U;
    msg.min.assign("ILLJAQZCPVWNWSBVDZBRUWCJFSJAYSCAEELHKEVOWTNEKQSNOUWHXXQDFFUDZUNGIDEEXMGMYUUGQVTXBWBMFYVDPTZCGDRNBEXW");
    msg.max.assign("ZXNUTBATKUJLGAWPUMINWFVAYNJQMYCCDOVNISACDUDEQLTMFJQPLSUPLHAKEXZTCBQQMDHJDOHZWBZUQRSCXBZXIHTAHLEOFEHW");

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
    msg.setTimeStamp(0.0891774016741);
    msg.setSource(57904U);
    msg.setSourceEntity(249U);
    msg.setDestination(38024U);
    msg.setDestinationEntity(110U);
    msg.timeline.assign("WNCGHJINPBTMYDMWOERETBJQNGOQPYQTAPLUFPYFNKCOEWQBURBEDZTOOZIMN");
    msg.predicate.assign("RFOWDHYRLSQBXHQSMTPTKIJLCOMXNLJOPHERFZRXUIGIEWTHMPPCZZFDFNKFUANWYDO");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("JROJDGUAPNZJKLKIESQHPCOEBFBWQQNAIYSRXCLNTCSTDGWYNUYCRWHAMAXSKLMZPSFLZYIMGRQSUWTDKHLJLLTYVDWDYZHRYCTWHEORICBBH");
    tmp_msg_0.attr_type = 231U;
    tmp_msg_0.min.assign("VOMEGHXLLFIWBBAWNTVRJUKTRXBPBWGYZCILSSUVKJOYDHKAQRXKEOIYPAMDJUQCQAJPUQTHSSHNSKUZPQZCIPMYAJTJZZVMI");
    tmp_msg_0.max.assign("JSWYQRUBCRMYKLMSHSKBOXJATWKLLZNZYVUFBLCGDKFEYILNBBICDOAGSNUNFMXWZYXHQPDOQLPCSNMAOYXCETZKUHQJDEXICSQKAXZPJNMROWEEIRJJUVVCMSHYPAOODNFQIDBRGFXWVGPVZNSQKXUIGDAPTAXEGBWIWDRPPGYJPHJREVKWBQMOULIBNJUMSICRHTQLVTTEEOGUTDHVFHRZKWOPYATTFXTFCIMGBMLCZ");
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
    msg.setTimeStamp(0.76650969948);
    msg.setSource(18762U);
    msg.setSourceEntity(87U);
    msg.setDestination(65462U);
    msg.setDestinationEntity(71U);
    msg.timeline.assign("QPFHZNGDJRFAPKJIHBIFRULPCSVCPWIVODPTVFTMVOPGEGQEBMFRANNIVQKXJHPAZXUYDNYUGCRTHXYJBPQEKEDQYKXCXBHHJWODSZOKSQAVGBGABLKDZVBCWIFAUKCYDEQTRSDWIZPMBZLVTNQMYEZLEISFCARMMIXLUTHIEOTRZLOJONWCBMWHEBJPLIWJVZYHDXUSNOMSAUKTLUWNLVYSKTQSYAQFGRASMNFRCJZWUREGTL");
    msg.predicate.assign("QDPUDLWXDSZHICDEMVSVAHALKPPZPMICRMEQNJAEVCWTUGSHUNYPZTLVGNTSDPVTZFQYQFKRDNOPMLQKDSSYKINKCAYXBUGOPQXYXBIASWCLUIWFOFMYBHZIBGNTRCXYOBXJRULBDVRY");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("JBDSQFDGAIPUKBXBHNCONKLWWBOJHARORSGAQPRQNFRVDYCPQYNDPMYJXMKZHMHZQIGWDUJECAXHWRTAIFQRVWTKHGWWUZJVVDGHIHHMYRBVVXSUQCTLCKMUJLSVZYCUNYA");
    tmp_msg_0.attr_type = 11U;
    tmp_msg_0.min.assign("KHUMKKRSMLCBFQPFKAPUBYDOZTEUJNXTVDPMAAZBWFYPRBRZCQIQAWEXQUDHYDGAYJDNSHCGMB");
    tmp_msg_0.max.assign("KBYMFSGSVMTFYPO");
    msg.attributes.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.545886823261);
    msg.setSource(61871U);
    msg.setSourceEntity(196U);
    msg.setDestination(42217U);
    msg.setDestinationEntity(134U);
    msg.timeline.assign("LHUHOSPCRMSNAXTJQILFCDBFKJUBQDAYDBMJZYQESLICLEGTZLAQJGURHMVMKLEZGABNFWTKOZTYBMJVQFQZPKYKZKXTZXZOJZVPGFDAUNDISMCVYHSTRBVXXPDCECGCWYJUQFCXFENPHICVNIPPOOAWPGUEPWZSWDDRXQUBINTSFRAWG");
    msg.predicate.assign("NFWCXLJQHZRNJRIGPDUUEVKQAJYDYZKPOKRBFDHPYZHSSNV");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("SGWATOSORTHBQWREPTDDOGAZCACNXBDQZZOPVAOEQUMVTROIULIPYTFFWIHJSJCXZFVPFTGYUYMBKHCEBYIFABONXLUNRDVJNSQQVPGWJACSEUDUF");
    tmp_msg_0.attr_type = 63U;
    tmp_msg_0.min.assign("CFAOAZNGMZAXHYGGZMULDTYKOPBGLJHWKYGMMRUUSKTQSXYUIUBGSJPCVNJBJLBECGNJZAWAKYPACWOSODRTNYTHYDNZQKHEITCQQUAB");
    tmp_msg_0.max.assign("NNCUDGZFUONZPJLMREDIKUXXPUQAZOHWGTYWVHKXDAHCSPDETLEDGNFKTZACXPLKGPQUBWIPGOMJNPUZKZGCRIUTYYOSIRVVFKWDFCSSRRYIDGUAOTOELJRYNNLGWBIMRBEHRBAOVVTACIUEQAKCBXMHNTZQFSSPXYIWLYEMSRBFQLFJWVEMEIBKYJBVJMVCHXIAQTFZSUZLJXPYBAMDTESZOQASKL");
    msg.attributes.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.970522196299);
    msg.setSource(34902U);
    msg.setSourceEntity(52U);
    msg.setDestination(39400U);
    msg.setDestinationEntity(248U);
    msg.reactor.assign("NLJUDECPVGLEDZQUNGOIORBJMNGLFRJPRFXDYYOMQRHCCSBEKWNVTEEBCNUOYTXFFZBOAVFVPSDQYDTFDXSNSKSXZZBBAIHJYUMCVXTDTIRWMHMYMANVVJIOHVJXWWEARRJGFOEHRRBAMPA");

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
    msg.setTimeStamp(0.0540322724632);
    msg.setSource(32525U);
    msg.setSourceEntity(132U);
    msg.setDestination(45399U);
    msg.setDestinationEntity(3U);
    msg.reactor.assign("GFFCLIWCRHVMLCZZMBJZXTHFGAJXDETDVWZTVFYEJEYKUYXWLXHDUIEJPANOSDOZICZDQKZYMWPS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZXWBNKVAVMGMFDRIGYNCXWANFGYESZVWKPCHEUEEUURJTOVPSVOMTETROXLSCIMMQXNIDZLALFSBKSAJUCOSRZTTJNQRVVUUGZJTBBWGKWCXWASRPJICAPLLFOPYVQJZKZIPQXORHEIPKWYLTIMBNEGYSKYKEXRMDXMQCGNAWGHYHBSOZDEFOTOOHIAGIEIPANQFJHBDQ");
    tmp_msg_0.predicate.assign("NYQHSKCDSHIZSSAVFZTHDPCMRQIEIGJFGHYCSUGDWLPNDSVEEAVBFZDZSSMHDXCTIHIRGUNKJQIKBMPJPGUTRRBZUGERHUVFSPBKWKINRCQDZTWUUOWNPLFHGCMFNXORLLXFOUMWEARBEKRJMOPXQUCELYJVIPPWWOYCYCQYLARHALTLCQYABEKQOOATNVLNHXTDNLJQUEAFITKGDYYXVSZXOGFAJNWXPVGOVKBVJBZMADEMJTYZZ");
    msg.tokens.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.879453930259);
    msg.setSource(34225U);
    msg.setSourceEntity(205U);
    msg.setDestination(6956U);
    msg.setDestinationEntity(48U);
    msg.reactor.assign("HMNUETVRDYSOKUKBQCGYOQDZINYLMXFPGMPQSNJQGKNXGRAKDYGZVCUCKAADULJZDJZJYVTLIWRUSHLXNEBWEMIPOSKBFPTOIXHLLZFNPBBZSEOAOZFHMIVHCUEOKVABFJGZUXGHXKWSMAITQENCWAYEQMNLUTNBTHMRRZQCDHSDBJLQUBWPLJFJCIJBRWHIPHXSASIPGQXTVCTWZCRYYYRYAXJTDMRVDEFPFRODWEINWKTFCGXFSOEA");

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
    msg.setTimeStamp(0.703346717003);
    msg.setSource(18727U);
    msg.setSourceEntity(232U);
    msg.setDestination(22471U);
    msg.setDestinationEntity(32U);
    msg.topic.assign("RIBOFPKXRELLRCSNEDJTQNXIGCZTVNCGKPZFBYIVMBTZAEHPLVSSJOKDFDLFGBJQDYZEOQUKCRLHABFGHHPEVRTHINIDMFBLUCGCCX");
    msg.data.assign("WMOJFWVPWZYYJOOQNTFZDCKRNGVWYQZEIIHBMDKHMROFNBJJPACYRUVSQUSEXYFSGGJSLCSXKSUNECBYTTYCBTOONAIINKPCSEPGGTU");

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
    msg.setTimeStamp(0.55083297608);
    msg.setSource(61601U);
    msg.setSourceEntity(236U);
    msg.setDestination(45949U);
    msg.setDestinationEntity(169U);
    msg.topic.assign("XGWFGOKGDLTUFZSOMDVQASPTWHSQIYFXBPTWCEO");
    msg.data.assign("TBLPLADSBKOILSXWVRLNNVWHWMELQOVRKBEFSPOGUQRFSVYEQCQMMDJCQFRYDOQQCZIGSKPSSUYPJCNRYGBETFDTTCHAZCDWDVKHXTXIHQMLWBOJYMZMPUJVYHINAGPNLFBSUJANFIGAKXLIFCKOJPTXBVEMXUPWGUIJRAHUZFKHANBEZMZWKGILAEEOCVQJABMTQYNZOWXGYVXEDPNVZOXPHGAGWJU");

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
    msg.setTimeStamp(0.802228242756);
    msg.setSource(17921U);
    msg.setSourceEntity(65U);
    msg.setDestination(42778U);
    msg.setDestinationEntity(156U);
    msg.topic.assign("GNQRXPFDCSEUOHZAWQVSZJXGNIVJFUADZRRYWOCVZMDEWKCQMYNSPLRMAMKNXDPGGJWEQZYFVMGMFWEDNFJIOLOTTXFHSWIJEHTLSVVVGCWUEUWCYOUOYOUOIJEFYKQTDANCYRXNKQSSCJCUBSFHAPGXAZXHSMUFYGHKNQTIRQBERBHLXKUZRLNMALWPRBPTHAIPDMIFYLZDTIZBVDKORZLHCGBIEKBBQWNKLVDJ");
    msg.data.assign("MRRNYIWNEISDSLYBVNRGTQHCYNJOULWHMLDXKQXFJPPHWHSTCJMOFPEOZMDLABLGIRFJQUAFDTDAQGVJVRMFNAXAEJYQZGCGBDBGKSTNXKKWDNNQNUZBYIE");

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
    msg.setTimeStamp(0.894207293942);
    msg.setSource(59538U);
    msg.setSourceEntity(229U);
    msg.setDestination(57367U);
    msg.setDestinationEntity(237U);
    msg.frameid = 173U;
    const char tmp_msg_0[] = {-25, -86, -33, -125, 13, 122, -115, -54, -110, 98, -76, 88, -65, 93, -41, -18, -43, 103, 34, -3, -9, 56, 69, -73, 68, 124, 59, -99, -109, 108, 33, -108, -50, 96, 1, 79, -1, 32, -64, 102, -128, 99, 15, 112, -100, 12, 89, 114, -22, 9, 125, -24, -22, -55, -108, 56, 40, -3, -40, 42, 89, -71, 126, -19, 49, 20, 86, -29, 2, 122, 106, 124, 75, -27, 33, 86, 2, 8, 119, 69, 15, 98, -26, -25, 114, -43, 82, 125, -26, -61, -97, -127, 107, -11, 117, -101, -21, 54, -23, -80, -17, 73, 37, -35, 68, -107, 124, -128, 95, 87, -117, -65, -56, 115, 64, -11, 54, 75, -88, 96, -33, -56, 111, -114, 29, -92, 66, -121, 33, 19, 112, 28, -34, -17, 19, -93};
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
    msg.setTimeStamp(0.583415298989);
    msg.setSource(61792U);
    msg.setSourceEntity(217U);
    msg.setDestination(18329U);
    msg.setDestinationEntity(150U);
    msg.frameid = 29U;
    const char tmp_msg_0[] = {-90, -52, -21, -56, -98, -81, -12, 29, 50, 0, 35, -121, -117, -75, -80, -107, 34, 125, 30, -54, 38, 62, -127, 16, 108, 52, -49, 73, -29, -97, -71, 38, -42, 3, 53, 31, -59, -73, 104, -64, -117, 111, 89, -45, 70, 21, -62, -92, -5, -18, 57, -90, -18, 27, -64, -5, 83, -90, 78, -97, -47, 79, 77, 5, -30, -16, -90, 16, 108, 103, 108, -84, -69, 28, -86, 78, -112, -16, -118, -29, 13, -109, 64, 73, 64, 55, -40, 56, 116, 33, -16, 114, -103, 39, 85, 29, 25, -128, 76, 114, 74, 55, -64, -40, 87, 125, 56, 2, 111, 19, 3, -44, -110, 101, 106, 89, 102, -46, -121, 60, 39, 13, -45, -49, 69, -97, 13, 120, -128, 22, -17, -98, -107, -60, 106, 93, 105, -58, -25};
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
    msg.setTimeStamp(0.891226605374);
    msg.setSource(32532U);
    msg.setSourceEntity(218U);
    msg.setDestination(44163U);
    msg.setDestinationEntity(9U);
    msg.frameid = 64U;
    const char tmp_msg_0[] = {-102, 115, 28, 9, 121, -119, 50, 61, -105, -41, -23, -13, -26, -9, -45, -23, 4, -6, 63, -41, -58, 38, 86, -81, -125, 80, 116, -35, -15, -102, -29, 75, 76, -33, 104, 125, 69, 30, -111, -92, 18, -86, 94, 39, -79, -98, -39, -120, -9, 6, -22, -127, -23, -82, -39, 113};
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
    msg.setTimeStamp(0.574598114385);
    msg.setSource(40453U);
    msg.setSourceEntity(223U);
    msg.setDestination(6659U);
    msg.setDestinationEntity(182U);
    msg.fps = 249U;
    msg.quality = 251U;
    msg.reps = 108U;
    msg.tsize = 251U;

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
    msg.setTimeStamp(0.670673948261);
    msg.setSource(56132U);
    msg.setSourceEntity(77U);
    msg.setDestination(4863U);
    msg.setDestinationEntity(113U);
    msg.fps = 222U;
    msg.quality = 249U;
    msg.reps = 26U;
    msg.tsize = 130U;

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
    msg.setTimeStamp(0.868372600935);
    msg.setSource(11952U);
    msg.setSourceEntity(110U);
    msg.setDestination(37075U);
    msg.setDestinationEntity(200U);
    msg.fps = 57U;
    msg.quality = 104U;
    msg.reps = 69U;
    msg.tsize = 79U;

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
    msg.setTimeStamp(0.927081028956);
    msg.setSource(38545U);
    msg.setSourceEntity(39U);
    msg.setDestination(38961U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.903498588141;
    msg.lon = 0.401388003008;
    msg.depth = 27U;
    msg.speed = 0.391722866022;
    msg.psi = 0.18893191987;

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
    msg.setTimeStamp(0.525715012018);
    msg.setSource(19272U);
    msg.setSourceEntity(118U);
    msg.setDestination(59749U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.903338107575;
    msg.lon = 0.0184123995378;
    msg.depth = 115U;
    msg.speed = 0.260324834102;
    msg.psi = 0.854562473984;

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
    msg.setTimeStamp(0.919283444721);
    msg.setSource(64803U);
    msg.setSourceEntity(6U);
    msg.setDestination(25497U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.442580180397;
    msg.lon = 0.721109338099;
    msg.depth = 21U;
    msg.speed = 0.912108793607;
    msg.psi = 0.390416004844;

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
    msg.setTimeStamp(0.421188804442);
    msg.setSource(16328U);
    msg.setSourceEntity(60U);
    msg.setDestination(45526U);
    msg.setDestinationEntity(77U);
    msg.label.assign("QUHOTGSHZIWJCLUQWLUWGKODURAWGHGGTTWIMHFDVDBISBYZPMNWAFRFOAXDYTNASKBAYOXJYZINQQKBBPGLXUVCCMCAMMNVLSPHXMWKZCEARKYNTERXUYLRILNPWTKEYEVCLMVITHCQAPTJLZQZGGBIIDZYJFALPCJFTFYCSSHELSBKDORPXRPNUBOFIKPDYXEZRMSQFS");
    msg.lat = 0.789656414155;
    msg.lon = 0.711129327789;
    msg.z = 0.282435457703;
    msg.z_units = 171U;
    msg.cog = 0.880583816026;
    msg.sog = 0.19912091433;

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
    msg.setTimeStamp(0.365938519198);
    msg.setSource(21398U);
    msg.setSourceEntity(127U);
    msg.setDestination(26335U);
    msg.setDestinationEntity(44U);
    msg.label.assign("IBZVSDEWNBJEFKKOBYPUICGVKRYWIGBQCDMFMGGSDZUXUXHCFHDTJLQHTLUXIJLLEXNVGSEEWWAZCHXBNYDRNQEVFZUAFIGDQCBHP");
    msg.lat = 0.344050795774;
    msg.lon = 0.587973570266;
    msg.z = 0.380395604517;
    msg.z_units = 63U;
    msg.cog = 0.857515804585;
    msg.sog = 0.95210480257;

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
    msg.setTimeStamp(0.192134705457);
    msg.setSource(14728U);
    msg.setSourceEntity(17U);
    msg.setDestination(14562U);
    msg.setDestinationEntity(201U);
    msg.label.assign("JMCIJQRZPJYZKYSZGDVCQAKXEXYDTKZWAKESKAYIHPYEQHHJPLOMZVJMGWBJDYPLNIWBKIQUKURLMMSNGDVXWGYJWTTYRNVFUPSCLYEBSTDITCZNPLWEILMGJFQLMFIIGAXFVNRABRXXDRXAHUCONCNMFVOLEVKACJ");
    msg.lat = 0.955116144204;
    msg.lon = 0.237765152533;
    msg.z = 0.804828837795;
    msg.z_units = 57U;
    msg.cog = 0.650684969826;
    msg.sog = 0.924822599459;

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
    msg.setTimeStamp(0.218398103192);
    msg.setSource(13400U);
    msg.setSourceEntity(187U);
    msg.setDestination(39483U);
    msg.setDestinationEntity(156U);
    msg.name.assign("EBLWLNDGJMVXWKUBKWLHSFQOWHFFBVDQZKGXYOBKTPPCGRCRWDZXZFDTIACHNDRRVUPNICJDCENAGUXEXXJVXIQSMORUHIYUKONQMHN");
    msg.value.assign("SMAKLVFLUNPQIZCJJHNTKFCBQEGEYGUFVYLOTEJNGWHANKYWCZPKYQXHJOCHCEKBFGPGEGFXLYVZPMXDSUFEQTCTTYLAPZIFPUNOOENSRMDWYSPLASIANDRGVHWPOFUDOCTWDBDIVDGBKAZMXBVOEXBVQBCNISECAIKBVXOMLQWNVRGQLUWHLISTUDWHZJHRDK");

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
    msg.setTimeStamp(0.0358927100967);
    msg.setSource(50109U);
    msg.setSourceEntity(220U);
    msg.setDestination(46068U);
    msg.setDestinationEntity(172U);
    msg.name.assign("QECMPTDOYTVRDUTFAENVMYIJBJZHMGQEALWYWKALWEBEYLDWHMHZBQKNCKUMXLVBCPIWYEHIFDKZGRQGMPHCPRSCMAHVCWQQXEDBBRFBTTPAYHEFVBGNWBEPKCGTIGIDTYVCLEGYSDAXDNZXMJXODUHYZJOYNOOWVUSHOSJQSIZLUTVFNGRRGOD");
    msg.value.assign("SXLSNEIJGXTQHZTESRJOLRHQMEFNIQZCHLOCKTNWSUAUZVSAXCDCURMLRPUNNXYBULPWDZTBYEVEOSORVDVVFZCSYRAEUEIYGGCFHAUYQUKKXI");

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
    msg.setTimeStamp(0.51483225313);
    msg.setSource(15591U);
    msg.setSourceEntity(176U);
    msg.setDestination(53043U);
    msg.setDestinationEntity(20U);
    msg.name.assign("KTUDZJXKNCUQPEHEROBGKBMIJLISZNBHBFBBMGSTAYLSNWSXPIXAVVXBELPAEUJVTASBQEKPGSGHMOAVWYPTMHLGMAOMKZYEQZRLWQNYPRVHYEOJSDXDLAEXOVOYIZRHJHRMJNKNUCRTWFTFJCSSARNITLZDK");
    msg.value.assign("WHHZCJZLJKTXJBOJXUIDZQQUKDAHUIBOIGMPVUWIFBQCESAROAPDGNQVGNQPOTVKIZPTWDT");

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
    msg.setTimeStamp(0.0853444883167);
    msg.setSource(64498U);
    msg.setSourceEntity(202U);
    msg.setDestination(10887U);
    msg.setDestinationEntity(45U);
    msg.name.assign("YSHGDUBEHTFLMYXSNRPQDSQSHITUTSWUXIYBTBRWCZGGFVPCXCGOXTAIJLBTEVIZTBLROFJPNMGHFZKATEAJEPNFVAZCNBJLUQEMZMYXSSMYUNVAOFQOHYUMANKJCSWQFUWDZHYOKQWEAKGRAWTLBDZOAIOTABEPKVIYQGVWWMQKVVCSQLZCXNZRWN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("OKHUWYEDIEGGZRLFTNIUOWBLKSPCJALNDWZEGTQDOHXMFLHNHQPMNYNUVKXOPVECGOAXVFXVZAKMMZKAYENWPWTCAYQT");
    tmp_msg_0.value.assign("SBLKNGOLAPYSDVYONKZEBQRWFXQJBCSVPSNDQPBGXXFWEJVNJKMTWAJALXYVTUETMWZAAIHRBRFDRSOINVIURPDQEXOYOWBCMZDLKWAZTSTGHYZDIEBHPUG");
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
    msg.setTimeStamp(0.148186362983);
    msg.setSource(18495U);
    msg.setSourceEntity(236U);
    msg.setDestination(16333U);
    msg.setDestinationEntity(43U);
    msg.name.assign("KJLOMAKXGESVACQALYVORXFVOCNGKUKJSHLMXTQAZJCKHDJBZCEAZXXGLBSZMWHKNKSGJDHHPADWZKTXLGURCDPFJTVBWGRBCMOBTOHNPUDEQBSUMXEWUYLLZRQRIENINRYSFAWZYOQHRIRMPVYWIFSSXCSWPFZYYBTTPJBEBQDOXKINWHQBETQWUFCFGUMCHILVA");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IJCXPIRYKPRMAAHGMSQWQJOAQQJFBSZKGEXTAGUXXLEOYSOJBZXDPZFIUZHNPYCDVYICDBPHNOHDSXXTTMYJJSTOBFIJZTMHKBAFCQENFWVDZUVHUNUCGBZYIQWTRVMXKIEMDLVKENLMGWWICGPZLZAJQPWUNYFQLLJRKHMUNWDWROYSDKTQEMGKJXUTORCHFSDMSTGFEELBVVWRRYLAPGOLNIBQHIUNBKXACUABTERNRDO");
    tmp_msg_0.value.assign("MYBOEFKYCRYROWTVDTUJCYUUWH");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.0255637892872);
    msg.setSource(1977U);
    msg.setSourceEntity(90U);
    msg.setDestination(31211U);
    msg.setDestinationEntity(118U);
    msg.name.assign("PYUTCWXAQVCXOMGKSOTYAINUVHHXVFKRQTTYBSFGFCMEWDVDNKFRJEPJKCQHHJNDRUZWQYMZWHLRNCABPBQSAKVFXWSMBTJIVSTXIVVFSWL");

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
    msg.setTimeStamp(0.470693031951);
    msg.setSource(4377U);
    msg.setSourceEntity(6U);
    msg.setDestination(23153U);
    msg.setDestinationEntity(71U);
    msg.name.assign("SPLOUAJMUIAZGKRIMCHQAWNTGFEONETLPQADFWAWLMFPNYUSSULMNBLVBAXIWFCVLVMCPDBOKYRHEYGXBBZWPUWTGBVQWGTKLODWYFYYDRQCPIIHOYKAMSIXACNUDKASQLNGEHVBRXZLXSBCOBRMKKQRSGZYMZIEUZNHMOOGRHTCEVYTKCJPBKUFYVWZHVJTPDIQETODODMTEFXDJSFDNAJSJGHSENRXIQCFVXHRJIU");
    msg.visibility.assign("EZHHFFGMBDENOKWPXGVLNCBUVZVQGOWWFTJXTNDBZOTTSQJSXWKRSLIBCFUVTFLYAIINWSAMZMXHAUOCAHDIYLEGFVWYVJWIZPJQCMBARMXQRXBEINYWULBNICFRHECKELRVSKJPJGLWJNSGSMZTUKUXPQHZAQOZ");
    msg.scope.assign("MAEPNXTZNNFGCFDEGNOMWFRBUJIYQSFTOGPHCLSCEJOHZARLVQRMDVBHVVPVCDYWYCHAUXWURXKGUJXEXRJFCGOHZIHBQZHZTJLTVOEUKGAYSYPPKNOEUFWPOUEDKHQNMCVUSSZMMDAIFKJEACNBSDBLUWJSWYDMCTLPRZRXRRSPQ");

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
    msg.setTimeStamp(0.605467464869);
    msg.setSource(47027U);
    msg.setSourceEntity(239U);
    msg.setDestination(57617U);
    msg.setDestinationEntity(61U);
    msg.name.assign("QTHFQJTCWZDOKNFGIDXZVBMYIWXKPPPAZFOHXYXHPVSZHTYVULKLMFTKRLDIMTFRVMIATXYPQHBWIIDKQNVATUZUCAJUCMXBFGOGILWEPWROSDKBSADHMAVGYOBERZAZJLCDJLCSZOUNDNKQBCNHXEIGYUJASYWCNJZKFURREECSNRTAONBGJVIEMPMCSBHKJBOKUSNDQWQRYIGFEZRPPFGNXY");
    msg.visibility.assign("MHPVJIZCOGWFNGSSYQF");
    msg.scope.assign("UZOVDHNFJYFLWDPCASYDUUOKOJJVOMPBXUJPZSAALXLNIVORDZUIVFAABEQHKSXKVKEEHTTBZDJHZTNPWKABPHYIXMTKPQRFMXUCTMLMRXPHELYFWCWYDLLUNIJGZFLCRGYWYQGDHRBKWQROMDIGLBZFPIOGXWNFMINJ");

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
    msg.setTimeStamp(0.797638878625);
    msg.setSource(53241U);
    msg.setSourceEntity(117U);
    msg.setDestination(22811U);
    msg.setDestinationEntity(17U);
    msg.name.assign("LSMVTYPTYIADSMHXOVGDTLHHUJUHNRMWKXMIDXFJILKOGEQUADZJIAWJQCLNEPSFFWCPDLPMDRCHORQNJIZSAXWZSNSZDBLBHMQNEREHFMPBPIGKDYOVIGRXKXUCUFOPSQVYKHWTERVBJVOXKNJPJEJLGCB");
    msg.visibility.assign("QAUWRCTXFOOCVKDWGGWTDCIHFONESCGYEWFIEJNQAEXVJMMJPGRWULIBSUEZXUQSSDANBCLIMHHOLZSWCMKVRTLHZCGXWNLZMKKJPEPDGJTDXNUHCVIXTGLHTZTVJBRYAIEWZIPKZZPDKTHXRVSANQAHEYGJSPRJZXMWPTQRUOBFKVYJYKKLRDROAQESDYBWTRLGAAVLMMGFFHPBKIDFQUFNISYOBMAUOCPLMXYQXVHUSVIB");
    msg.scope.assign("JQSECXQTRISACNRLRTTGTPGLCCAOVFUCGCBEHJDZHGLLXLBIPSAVK");

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
    msg.setTimeStamp(0.57134583858);
    msg.setSource(56498U);
    msg.setSourceEntity(130U);
    msg.setDestination(59219U);
    msg.setDestinationEntity(73U);
    msg.name.assign("PKDJUTYUOYFIVRZBWJCLFIUWJYNXESMWCRDSXRPCDTLNEFXJTISHVIDWNXDLZNDROAHMSTQHBKSZE");

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
    msg.setTimeStamp(0.170551506868);
    msg.setSource(23316U);
    msg.setSourceEntity(57U);
    msg.setDestination(10279U);
    msg.setDestinationEntity(79U);
    msg.name.assign("BVZDXXDDCDFJPBVNSGNQFKJMYYWEXCGUNVTMUIOJRJBGNHUISPUXBFWRCKQZKVGTPIFPMENTRQXHALDZXPSJRJGSHHKWKIRBOYKSFPZMSAKJAQONNNBLECDPIEWVZZFAQZDFSEBEZOUMYUDZTRYKDVFALUVZWMLNLFEYKSWIXCLCRQIYMROAGQWHAPHEWCYULGCLUMWQDBRSPLVTWIOHFTYH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FIMHAGCDYLETOHRPWKAXSCQAMKADNNCYWPUKLXNSTCIETZTBYJGXGEDFFQOTZWSZTUGENAPJITNLAIYPAVYUWCHOLAZDGUDFSXMWOOTIVOZWWFZPBKKWVCPHNZRQSXCGQZPMTJVGUEEARSORUVOOIHHZQYQDJKCMZIRJVFHKODDNMLHYLSQJVJIRWPNKKNELTRYGBBRBVQFMXXDBDXGBJXF");
    tmp_msg_0.value.assign("CZVYMTETQZDAQEDKONQEOGHJTRELFIIKBEJYUDKZTMCFPURVULPSPPGQKBYAFVBMNKDBXOGUHTNBSAHNPUCUWGMHCTLTLGXDKOYLVQOMTHVSHIAVXVJWWSRJCJLJBNMOMAAWLPSIQLIZAJHFRKFZERBZMJWAFWLYPKFOWXCDGRIQZGAJRNUWWGYOFWUSEOBAENSODYUTSPNYI");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.508744112314);
    msg.setSource(30123U);
    msg.setSourceEntity(168U);
    msg.setDestination(53468U);
    msg.setDestinationEntity(51U);
    msg.name.assign("LPJGWQEIDWYYWZXRBTGBUSOOUXJEDPYGLERCQJZNMCHFYCQFBASGKVOBRBQFQSPGWKXZFIVRNWDAKANVCJXTJBPZ");

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
    msg.setTimeStamp(0.80935641083);
    msg.setSource(17390U);
    msg.setSourceEntity(135U);
    msg.setDestination(25603U);
    msg.setDestinationEntity(254U);
    msg.name.assign("WMQFPGCFTRWOCDKVRLLUQZZGJALNKPVFDAYHNFJPDBTKKTYWTVHJACHGNSSELLEEGNIQPFQMJNMXBXZBKIIIEYOOSVH");

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
    msg.setTimeStamp(0.409409479973);
    msg.setSource(22143U);
    msg.setSourceEntity(231U);
    msg.setDestination(25076U);
    msg.setDestinationEntity(15U);
    msg.name.assign("YVFLTCLEDVQOKUEUIZJVGXJLESIULZMVMFAYRSCOQOQTGTWDNZCNMXGJPULCBDWDPFSIVUPRMPCBLGHAJAWKFTUFJVBMYFNSASBNDHTYIHXSVDTZZNINXGYOJRHNMCKMRRKKAZUJZLZALZMKRWQCFOYGPKHVHYDSCSGQFHQKWTAUXWEEDOTGYBONWIJQUPQKOQBPYATRIBDJKPAELUOIMAXEMHEEXDBRQ");

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
    msg.setTimeStamp(0.202488502538);
    msg.setSource(64780U);
    msg.setSourceEntity(42U);
    msg.setDestination(45686U);
    msg.setDestinationEntity(139U);
    msg.name.assign("XNBEFUASVJWGWCTJGAUPIGDGFARHKASEQPIXRQCJQCEWSLSGVRKNDABKFCPULTHYMVGBJJXKFFZUNNEAQJBHQIDDROLQBMMWGPVNSTXOTXFYCEUWZZXCESOUJUEERIBYPQVWZTHFDLIFYKVTZBILHOFOVRMNBUQCRMXZRHPDYNUEGOMADNBIWZYSPSGQYRNOIMTPSZPBLRMLKAZQOEDWIYFXPLDACSLH");

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
    msg.setTimeStamp(0.832388505479);
    msg.setSource(34888U);
    msg.setSourceEntity(228U);
    msg.setDestination(47991U);
    msg.setDestinationEntity(24U);
    msg.timeout = 709284525U;

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
    msg.setTimeStamp(0.474793008146);
    msg.setSource(29899U);
    msg.setSourceEntity(175U);
    msg.setDestination(62443U);
    msg.setDestinationEntity(129U);
    msg.timeout = 1470750583U;

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
    msg.setTimeStamp(0.738809871503);
    msg.setSource(152U);
    msg.setSourceEntity(124U);
    msg.setDestination(62091U);
    msg.setDestinationEntity(162U);
    msg.timeout = 3028509648U;

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
    msg.setTimeStamp(0.755152539334);
    msg.setSource(61515U);
    msg.setSourceEntity(35U);
    msg.setDestination(38197U);
    msg.setDestinationEntity(92U);
    msg.sessid = 438397792U;

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
    msg.setTimeStamp(0.188810060343);
    msg.setSource(60646U);
    msg.setSourceEntity(138U);
    msg.setDestination(35689U);
    msg.setDestinationEntity(108U);
    msg.sessid = 3865396342U;

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
    msg.setTimeStamp(0.379733941962);
    msg.setSource(45041U);
    msg.setSourceEntity(113U);
    msg.setDestination(60829U);
    msg.setDestinationEntity(252U);
    msg.sessid = 4126275783U;

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
    msg.setTimeStamp(0.759272487969);
    msg.setSource(34127U);
    msg.setSourceEntity(83U);
    msg.setDestination(5062U);
    msg.setDestinationEntity(15U);
    msg.sessid = 2857068600U;
    msg.messages.assign("IXUAILPGQHUQOABDBAMHZKJMARGDGRFLDUXHPZPWUMYEJMCNTVDTBCLTWNSWQKONZWUAEMBNKSVXIZPSPNSRVYLEQKNSYAFZYOHYOMGLBOASRIPRYBIOFKWTDEBXRRKWG");

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
    msg.setTimeStamp(0.20123942786);
    msg.setSource(2730U);
    msg.setSourceEntity(248U);
    msg.setDestination(31649U);
    msg.setDestinationEntity(91U);
    msg.sessid = 3445175601U;
    msg.messages.assign("IXDJNHMOWUNXBZVSHADKMVGXLYQYWAOSPAHFZXFVIRRHEBUYSWEDGFWKGKZNQFCVREDITIYAEZKSGRONRPCIIEQGLZBIOTUBYQJJQPMXUCBTNLTYDIJFUDQMPHONVFUGWZYCBCOPADL");

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
    msg.setTimeStamp(0.289640828758);
    msg.setSource(1471U);
    msg.setSourceEntity(204U);
    msg.setDestination(2329U);
    msg.setDestinationEntity(177U);
    msg.sessid = 2328589686U;
    msg.messages.assign("DKHXRNWYGOUTHNSIVSBIPJHCQKWFCCTHRJPUERGMYZNLYZCGDTPBSJIKRLVFJVMHQZUNEPLUXYGOKMEAEAUDFKZVSIXNKCRSBGHAPEMI");

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
    msg.setTimeStamp(0.286941428028);
    msg.setSource(14870U);
    msg.setSourceEntity(9U);
    msg.setDestination(63238U);
    msg.setDestinationEntity(176U);
    msg.sessid = 3124649548U;

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
    msg.setTimeStamp(0.279338272819);
    msg.setSource(58714U);
    msg.setSourceEntity(35U);
    msg.setDestination(20580U);
    msg.setDestinationEntity(86U);
    msg.sessid = 3682736546U;

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
    msg.setTimeStamp(0.110903799962);
    msg.setSource(35541U);
    msg.setSourceEntity(222U);
    msg.setDestination(11476U);
    msg.setDestinationEntity(103U);
    msg.sessid = 3416919490U;

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
    msg.setTimeStamp(0.463968114788);
    msg.setSource(15397U);
    msg.setSourceEntity(251U);
    msg.setDestination(64056U);
    msg.setDestinationEntity(153U);
    msg.sessid = 778178261U;
    msg.status = 208U;

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
    msg.setTimeStamp(0.742882025001);
    msg.setSource(41722U);
    msg.setSourceEntity(50U);
    msg.setDestination(6396U);
    msg.setDestinationEntity(80U);
    msg.sessid = 2650341570U;
    msg.status = 168U;

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
    msg.setTimeStamp(0.870751869906);
    msg.setSource(34931U);
    msg.setSourceEntity(107U);
    msg.setDestination(37047U);
    msg.setDestinationEntity(244U);
    msg.sessid = 2776551608U;
    msg.status = 98U;

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
    msg.setTimeStamp(0.491275786419);
    msg.setSource(50438U);
    msg.setSourceEntity(194U);
    msg.setDestination(38909U);
    msg.setDestinationEntity(253U);
    msg.name.assign("BJWHTLCKKMHGSGNTXTJNUOZLQVWCRQRPRLNCFXIPIYEHPAIOTQPKYVHYDJCFEWZTWPBNUAFVDABXBUWHNHOYRQAPXSCBNFDDRETZJGZBCPPTAWOWDASIHRVLYIVEQYTVLYFAZFJDUUMBENTVQ");

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
    msg.setTimeStamp(0.665232229057);
    msg.setSource(52896U);
    msg.setSourceEntity(208U);
    msg.setDestination(2979U);
    msg.setDestinationEntity(226U);
    msg.name.assign("XFXDKNNSRLWWGCKGOUHEHTJQOAOMGSMIWGSAYZFXSBDEKNMEMMAVSVUGPYIXBDKTUQZPZWYFVWXVHVOJTHJSLKVQCUGANXJXFGFENLCEUDNFYPDNJUQQJXEZBRKMLIOHPORIASPLKBPREXETMOTDSFBC");

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
    msg.setTimeStamp(0.758578903591);
    msg.setSource(34649U);
    msg.setSourceEntity(211U);
    msg.setDestination(61801U);
    msg.setDestinationEntity(90U);
    msg.name.assign("PBCSMUGSJQDYDMWQNXTIWQCFYXTPOADSDWXCQPONACMBLZEJBJXSNMJPFGXCRBOQQNDQLLLLCIGTULIUMKRZXBTUHIQYVKGJLEIDOHHOWFAPATXWUPDPSVSMMNVNUHZRARVHCPOVKTWKYDOBYRIYETWERFCXOLWKSQRGRHYHYPVJZEBLSDEUHGZVEKIXWXOACNSOUKNTGGZYFJHATJKWEBFPLFAZUFRE");

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
    msg.setTimeStamp(0.901982381163);
    msg.setSource(15244U);
    msg.setSourceEntity(170U);
    msg.setDestination(38928U);
    msg.setDestinationEntity(52U);
    msg.name.assign("CCWGSWRJFRETKOVCVZJKMDDBOPWWAYCUX");

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
    msg.setTimeStamp(0.0730151894126);
    msg.setSource(59300U);
    msg.setSourceEntity(242U);
    msg.setDestination(26604U);
    msg.setDestinationEntity(39U);
    msg.name.assign("VDBDAWDIZJHWFIQUPOMLPIOVEGGNGUBGUOUAJDXRCEAGQIRJMTLHJTVSMRBTLRKFXISCNNGTVSHUIPEGO");

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
    msg.setTimeStamp(0.765385914875);
    msg.setSource(33335U);
    msg.setSourceEntity(116U);
    msg.setDestination(9354U);
    msg.setDestinationEntity(24U);
    msg.name.assign("DGZKPKFKMJNYHIQLVXFAINLGLZZTYDTUBKDWAATZDOJSWPXERRCWBDJ");

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
    msg.setTimeStamp(0.536384494552);
    msg.setSource(10352U);
    msg.setSourceEntity(237U);
    msg.setDestination(25171U);
    msg.setDestinationEntity(145U);
    msg.type = 80U;
    msg.error.assign("MOQWBRESKCYUATDIZCLOXVIYWOVLTPAFOFCHBGQOAWDNFYLESSSTUQPRJSABWGCGFIPJDKGHAUVEZSFTI");

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
    msg.setTimeStamp(0.0532873691597);
    msg.setSource(34879U);
    msg.setSourceEntity(142U);
    msg.setDestination(64980U);
    msg.setDestinationEntity(16U);
    msg.type = 217U;
    msg.error.assign("YRZTHEROTBYYJVFVFXHDKRLJZEQGKGNXVIMEOPAFNGUZPJFAURBQAJDEKBIQYHUTSVNOMLYHQQFEAUWRPZYTNBMJUGAMOSZSGERCKLFWBPLIBESSXADZXCXUBBJ");

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
    msg.setTimeStamp(0.0653474283033);
    msg.setSource(54361U);
    msg.setSourceEntity(44U);
    msg.setDestination(13736U);
    msg.setDestinationEntity(152U);
    msg.type = 221U;
    msg.error.assign("QBBWSYBUNEAXAHICODRDEHSGEVVGWAUFVQZJCFLFWACDDREQQXKKERNGJOHOASIPLBLONWMYOAIIKSBGIBKDHXIWJIQWDVGZEDMTGXAEFBDP");

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
    msg.setTimeStamp(0.762791608521);
    msg.setSource(5988U);
    msg.setSourceEntity(159U);
    msg.setDestination(29314U);
    msg.setDestinationEntity(92U);
    msg.seq = 27339U;
    msg.sys_dst.assign("CLYEGHOAZHTGOJUZMNBJWYLFVUKUKYCEJORNSZSSADRTAKLINSZYAXKRCRJPMIKNQAZDQRESRTTEDJESTXPGNBOSZWJHVWBAFLHMOEZLITRONHUXTDMFUOQFNHQCDNQPGGEQRHBDVIMVRJFLCXEJPXBADLGHQMDWYKVXLCVNWVYSAFYIXROHBHYGMFQPOPTUMWLCXCIAKKNIPPXOBMEBZEFVLDYTCIJZVQUVGZAUKQS");
    msg.flags = 7U;
    const char tmp_msg_0[] = {-32, 97, -101, -1, -109, 17, 49, -38, -92, -113, 30, -61, -87, 122, -95, 111, 105, 10, 30, 63, -127, 38, 74, 35, 15, 5, -14, -69, -94, -20, 70, -41, 102, -85, 10, 88, 93, 109, -127, -60, 30, 31, 29, 85, -98, 81, -103, 112, -96, -119, 83, 77, -57, 34, -110, -118, -7, 76, 79, -28, 66, 25, 122, -55, -32, -109, 82, -61, 18, 68, -86, -51, 39, -117, -50, -30, 76, 117, 34, -126, 47, -83, -115, 75, -45, 110, -20, 53, 104, 44, 116, 116, -46, -66, -83, -86};
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
    msg.setTimeStamp(0.250585404697);
    msg.setSource(29531U);
    msg.setSourceEntity(198U);
    msg.setDestination(26154U);
    msg.setDestinationEntity(67U);
    msg.seq = 43137U;
    msg.sys_dst.assign("ULLYWZYFWMTJSBIHXAEMEJYQTQGHZEQTAODOCCUQGPTMEXHLOFGJZEQIIBCIGSVRNPJORQDXLZSPNKBUDBJIIGEYROCDHXNJRTLGTOSTRBAUHNAPUOFVCIDQVVKAELMGEMFPMXKFIDUPWY");
    msg.flags = 198U;
    const char tmp_msg_0[] = {101, -3, 62, 86, -39, -21, 15, -101, 109, 87, 32, 15, -4, 45, 85, -41, -48, 13, -33, -66, 95, -11, 106, 80};
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
    msg.setTimeStamp(0.728975735458);
    msg.setSource(11811U);
    msg.setSourceEntity(48U);
    msg.setDestination(57146U);
    msg.setDestinationEntity(40U);
    msg.seq = 54660U;
    msg.sys_dst.assign("LIGEWXSFIVACPQMAOSNRMRGHWDXLBVDITTTPGKSMLNZFKYUDMCFGJSBIUUFMQYWFKYIPWBTKTUEXPTZJGRDLPLSKHBOZNXVDZNRHQULJAHYULSNCPAQQXYYJQCUHJRA");
    msg.flags = 193U;
    const char tmp_msg_0[] = {110, 71, 43, 99, 7, 94, 25, 46, -123, 51, 108, -68, -9, 5, 59, 89, 46, -8, -80, 9, -94, 63, -62, -40, 75, 105, 3, 76, -101, -6, -116, 51, 90, -90, 70, -14, 81, 23, -108, 58, -25, -32, 85, 126, -59, 38, 51, -46, -56, 27, 124, -3, 66, 102, 5, 80, -92, 23, 3, 69, 8, 83, -98, -49, 64, 20, -112, 102, 86, -61, -16, 15, -100, -102, -36, 114, 98, 64, 76, 2, -49, -74, -25, 113, 124, 100, 48, 33, -68, -8, -37, 39, 1, 43, 1, -96, -114, -18, -62, 85, 28, -119, -26, 72, -99, -17, -77, -49};
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
    msg.setTimeStamp(0.392309512778);
    msg.setSource(20602U);
    msg.setSourceEntity(136U);
    msg.setDestination(25240U);
    msg.setDestinationEntity(29U);
    msg.sys_src.assign("EJWTQQREFEOFVLCTEQFXAUSZOAVZTWBGNNWAEHYFRRDQYOBRGYSANMTNULGLQGEZKPFXWLOJYOIPZIFXNOJJFJHVNWBXKQBPYMCCGIUXUNBMFVTSXSUYKEMNDSTEGZDTPTUEIQRXHCZBDRXJRPOB");
    msg.sys_dst.assign("RFBXUSZZBAKXLYQHXSHOFEFLVSTFVARQUVEUMHGITJJXCNYUQXYHDKAEOPKHMNGABAZBJ");
    msg.flags = 238U;
    const char tmp_msg_0[] = {117, 1, 57, -49, 74, 120, 56, -46, -69, 88, -81, -126, 36, -37, 27, 87, -109, 87, 63, -21, 30, 31, -29, -37, -66, 2, -127, -104, 54, -59, 86, -122, -119, 22, 100, 53, -110, -51, -62, 34, -45, 83, -44, -106, 106, -15, -56, 38, 43, -110, 70, 125, -18, -46, -69, 35, -27, -59, -53, -99, 31, -14, -67, 63, 52, 29, -62, -116, 63, 106, -40, 30, -51, 52, -118, 63, -66, 57, 70, 117, 28, -35, -123, -8, 8, -6, -26, -18, 93, -11};
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
    msg.setTimeStamp(0.766915654236);
    msg.setSource(63913U);
    msg.setSourceEntity(235U);
    msg.setDestination(56759U);
    msg.setDestinationEntity(4U);
    msg.sys_src.assign("XMGIYADAJBILOGXQAUMMNPBZMUDPYOOXWYLVJXCBOXSLAVKMWFRIWLSCAYVEFMMHSVSFZWTYNGQSHDCJTKTOBQBWIPAZJUETNURTVFZUNYLJEQERJNZLGCKAFESGRKJVPGWOGMNCTNYDZIIETMLKUTQQEKDOMLZUEVHFTCGPQRYSNGHFZRHKFQDRPVCPCAXYPRIHCIKIQD");
    msg.sys_dst.assign("MWUSCIEZXTRQZWBOMDNVYNCGLHTHRISZVIYAOJOYQLOJJBTFOVKVAMQBJRNTARNDOXKHLTFOMQQQXFPYZPYQTXDK");
    msg.flags = 98U;
    const char tmp_msg_0[] = {93, 2, 34, -108, 69, -4, 34, -30, 90, -103, 67, -13, 63, -122, 91, -77, 52, -31, -37, 82, -81, 115, 94, 5, 89, -78, -86, 126, -99, -119, -73, 18, 114, 126, 81, -30, -1, 69, 81, 71, 111, 15, -7, -12, -88, 123, -100, 101, -72, 51, -16, 10, -73, -11, -77, 90, -115, 55, 118, 82, -70, 104, 9, 19, 120, -12, -124, -119, 79, -10, -33, -37, -42, 7, -73, -124, -49, 65, 42, 68, 71, -17, 24, -110, -84, 58, 61, -58, -67, -52, -24, -65, -101, -81, 45, 50, -69, -81, 104, 109, -127, 89, 89, -125, 32, -18, 65, 91, 32, -108, -72, -122, -66, 73, 126, -115, -16, -3, -74, -86, 90, 119, 122, -95};
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
    msg.setTimeStamp(0.0122080800917);
    msg.setSource(20903U);
    msg.setSourceEntity(82U);
    msg.setDestination(60621U);
    msg.setDestinationEntity(250U);
    msg.sys_src.assign("FOYYTVGZCAJKDX");
    msg.sys_dst.assign("GSJITOKIVCNMHAKXRVYRSUDWHCJXAHQAJIVLQJQSEYFPBTWUHWHXHMXOKZBUXSOWQOYFNGEATVOZCRABZHGDKMOJNLDBVBZTCKSTPRMVJUWDPQXANMBTLWRIIPJVLFPDODXPJZUDWCCGPDTIOFYEHNFBXNMZQFBWYWKOQLCSPBXLIZYVLOUCMANESITYWJFHTUGRKRHNUGGQFAYCEEACDKVRAUTZEFYMQNVKFQSIBPZMGEPJGSY");
    msg.flags = 155U;
    const char tmp_msg_0[] = {-90, -123, 55, 109, 64, -127, 34, 44, 35, 12, -12, -118, 43, 106, 42, 82, 23, 98, -38, 17, 86, -101, 26, -106, -28, 40, -69, 29, -45, 23, 13, -86, 51, 51, 8, -21, -85, 39, 43, 8, -83, -123, 16, 12, -74, -85, 60, 56, -87, 20, -72, 82, 115, 19, -43, -68, -23, -49, 123, -98, -18, -118, 92, -2, -28, 79, 60, 1, -88, 86, 55, -24, 121, -78, 11, 11, 94, 47, 2, 75, 115, 46, 45, 121, -89, 52, 123, -42, 69, 123, -116, -36, 49, 71, 25, 97, -124, -46, -113, 61, 40, 109, -36, -13, -35, 61, -88, -101, 55, -103, 23, 91, 22, 95, -74, -112, 108, 47, 21, 77, -58, 35, -18, 74, -53, 29, -1, 78, 19, -19, 22, 9, -8};
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
    msg.setTimeStamp(0.717559002331);
    msg.setSource(51148U);
    msg.setSourceEntity(22U);
    msg.setDestination(32205U);
    msg.setDestinationEntity(231U);
    msg.seq = 23037U;
    msg.value = 119U;
    msg.error.assign("OJMAEVBONQLDPHQEOVITDPFWVJXILPYIOOUVYDHQDPUJAEAMTNOUFMOHMDCRCCMQJHXEYPTLYLPZIUGZXHSCGKWARUKZFCEZXRIMNSNGKDZWNMNKGECLWZVMDNCBWTEBLGMRYFTHBQIYNX");

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
    msg.setTimeStamp(0.774964401275);
    msg.setSource(39026U);
    msg.setSourceEntity(168U);
    msg.setDestination(5521U);
    msg.setDestinationEntity(83U);
    msg.seq = 36620U;
    msg.value = 9U;
    msg.error.assign("QIHYGACYVDKUFZNDQMXDMRZESHPJPKWWXIPHCJOKJSYOGXVAQEFIOCBNNLRBGQMWERLXUGSZFAWTEBVMMBAYYCONDQMBEZLXUTLZHDHJZNTPVWKBATOKFGWVSMFECPY");

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
    msg.setTimeStamp(0.136533516307);
    msg.setSource(59874U);
    msg.setSourceEntity(178U);
    msg.setDestination(31205U);
    msg.setDestinationEntity(32U);
    msg.seq = 766U;
    msg.value = 71U;
    msg.error.assign("PDFHTRLNPVJYABZKVPZDFETPJNBRXUTSASWZNMVBEKIXHUFWDPKRWCWXUDOYDIPAEDYAJQDVEPOFQ");

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
    msg.setTimeStamp(0.0350957401302);
    msg.setSource(33734U);
    msg.setSourceEntity(141U);
    msg.setDestination(64445U);
    msg.setDestinationEntity(197U);
    msg.seq = 44253U;
    msg.sys.assign("RIKNKXJDDHKIKRQDJIIGYRFTLPOSHARQOYOVUBESXJXVGBRYIOCBQTICNLSWTWCJQNDVWZKLZXLTFOEQGECGCGXAIFBCQHZPBBEGXLMAMDKUPARFMIDPHWRCJMSHONEGAVASJNTMBFOZX");
    msg.value = 0.315307233711;

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
    msg.setTimeStamp(0.213777331474);
    msg.setSource(61246U);
    msg.setSourceEntity(216U);
    msg.setDestination(42112U);
    msg.setDestinationEntity(139U);
    msg.seq = 7703U;
    msg.sys.assign("ELOYSWKRHLUEPMZEUGECYRBLUNAFXDQVJDLSFMWQSUZTZPNGVDHPHUIWKDBRGMLQALOVVMVGZSPECZSBFCNRKJBMXKQMIRCJ");
    msg.value = 0.245789882281;

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
    msg.setTimeStamp(0.0197070197427);
    msg.setSource(16792U);
    msg.setSourceEntity(169U);
    msg.setDestination(8956U);
    msg.setDestinationEntity(219U);
    msg.seq = 46429U;
    msg.sys.assign("LBJZCHXVWQCMFAIQYUDFLVRZOCINAEQMWRAMESNKBGMFBPTDHTOICRMLWRQ");
    msg.value = 0.128794402379;

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
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.481868260645);
    msg.setSource(28730U);
    msg.setSourceEntity(94U);
    msg.setDestination(8806U);
    msg.setDestinationEntity(132U);
    msg.seq = 56338U;
    msg.sys_dst.assign("ADMXDFVMPJXUKMNVLNOXCEAHWOOZVENWBGTQSSBEPLRBPWGBCJNQIYTCCZHRXAEDKJNIZEYOCYFISHVFLYXQF");
    msg.timeout = 0.228006962616;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.994685439598);
    msg.setSource(32863U);
    msg.setSourceEntity(63U);
    msg.setDestination(39669U);
    msg.setDestinationEntity(235U);
    msg.seq = 34932U;
    msg.sys_dst.assign("UBRLPSHCZTSWFGMF");
    msg.timeout = 0.26742831288;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.346991280438);
    msg.setSource(56455U);
    msg.setSourceEntity(215U);
    msg.setDestination(34411U);
    msg.setDestinationEntity(1U);
    msg.seq = 47988U;
    msg.sys_dst.assign("LBRDOBFLNQVDBRTLNPCPYPEKNCYDFOKQZFXNSMECLSGLCOXQIPSITGTVKDPWAZJBFUIXJS");
    msg.timeout = 0.822038970228;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #2", msg == *msg_d);
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
    msg.setTimeStamp(0.866449716122);
    msg.setSource(28679U);
    msg.setSourceEntity(80U);
    msg.setDestination(45464U);
    msg.setDestinationEntity(199U);
    msg.action = 43U;
    msg.longain = 0.143398851679;
    msg.latgain = 0.0555209761719;
    msg.bondthick = 3307334303U;
    msg.leadgain = 0.597074017557;
    msg.deconflgain = 0.0981652036938;

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
    msg.setTimeStamp(0.266062775541);
    msg.setSource(21418U);
    msg.setSourceEntity(182U);
    msg.setDestination(14502U);
    msg.setDestinationEntity(132U);
    msg.action = 226U;
    msg.longain = 0.95973664316;
    msg.latgain = 0.261998709521;
    msg.bondthick = 3803836974U;
    msg.leadgain = 0.0393569356433;
    msg.deconflgain = 0.527169508444;

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
    msg.setTimeStamp(0.134412985203);
    msg.setSource(17533U);
    msg.setSourceEntity(90U);
    msg.setDestination(48901U);
    msg.setDestinationEntity(74U);
    msg.action = 143U;
    msg.longain = 0.0255698108884;
    msg.latgain = 0.074848343905;
    msg.bondthick = 3776151345U;
    msg.leadgain = 0.43965066286;
    msg.deconflgain = 0.655619251047;

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
    msg.setTimeStamp(0.130281837789);
    msg.setSource(51909U);
    msg.setSourceEntity(215U);
    msg.setDestination(22826U);
    msg.setDestinationEntity(103U);
    msg.err_mean = 0.0613067349067;
    msg.dist_min_abs = 0.143930906613;
    msg.dist_min_mean = 0.0415681550299;

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
    msg.setTimeStamp(0.755276254831);
    msg.setSource(53658U);
    msg.setSourceEntity(189U);
    msg.setDestination(56436U);
    msg.setDestinationEntity(54U);
    msg.err_mean = 0.248789629279;
    msg.dist_min_abs = 0.652102469091;
    msg.dist_min_mean = 0.259307541545;

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
    msg.setTimeStamp(0.218627569219);
    msg.setSource(33252U);
    msg.setSourceEntity(39U);
    msg.setDestination(14471U);
    msg.setDestinationEntity(130U);
    msg.err_mean = 0.799208489594;
    msg.dist_min_abs = 0.486225273217;
    msg.dist_min_mean = 0.836173280912;

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
    msg.setTimeStamp(0.800330656556);
    msg.setSource(64969U);
    msg.setSourceEntity(235U);
    msg.setDestination(51302U);
    msg.setDestinationEntity(147U);
    msg.action = 174U;
    msg.lon_gain = 0.552117072038;
    msg.lat_gain = 0.776786163386;
    msg.bond_thick = 0.22721589046;
    msg.lead_gain = 0.95147504258;
    msg.deconfl_gain = 0.786062150652;
    msg.accel_switch_gain = 0.303827564551;
    msg.safe_dist = 0.574182823835;
    msg.deconflict_offset = 0.213397215522;
    msg.accel_safe_margin = 0.481296066121;
    msg.accel_lim_x = 0.585859066787;

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
    msg.setTimeStamp(0.198149030819);
    msg.setSource(10401U);
    msg.setSourceEntity(105U);
    msg.setDestination(17693U);
    msg.setDestinationEntity(173U);
    msg.action = 83U;
    msg.lon_gain = 0.14700243716;
    msg.lat_gain = 0.0887186567951;
    msg.bond_thick = 0.229349321427;
    msg.lead_gain = 0.044748017321;
    msg.deconfl_gain = 0.843236332706;
    msg.accel_switch_gain = 0.724024921;
    msg.safe_dist = 0.104475118652;
    msg.deconflict_offset = 0.53743326783;
    msg.accel_safe_margin = 0.240988099422;
    msg.accel_lim_x = 0.723827707302;

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
    msg.setTimeStamp(0.735945604294);
    msg.setSource(47727U);
    msg.setSourceEntity(222U);
    msg.setDestination(60307U);
    msg.setDestinationEntity(71U);
    msg.action = 118U;
    msg.lon_gain = 0.384748697377;
    msg.lat_gain = 0.36730811081;
    msg.bond_thick = 0.209553192183;
    msg.lead_gain = 0.921622740801;
    msg.deconfl_gain = 0.472625781045;
    msg.accel_switch_gain = 0.330090866796;
    msg.safe_dist = 0.760544968121;
    msg.deconflict_offset = 0.854708668529;
    msg.accel_safe_margin = 0.830950766966;
    msg.accel_lim_x = 0.365169517834;

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
    msg.setTimeStamp(0.210616910652);
    msg.setSource(29631U);
    msg.setSourceEntity(121U);
    msg.setDestination(1053U);
    msg.setDestinationEntity(65U);
    msg.type = 71U;
    msg.op = 208U;
    msg.err_mean = 0.8411210661;
    msg.dist_min_abs = 0.903164052576;
    msg.dist_min_mean = 0.812283495835;
    msg.roll_rate_mean = 0.236750195411;
    msg.time = 0.594929640355;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 126U;
    tmp_msg_0.lon_gain = 0.150524941845;
    tmp_msg_0.lat_gain = 0.86671113984;
    tmp_msg_0.bond_thick = 0.666396029667;
    tmp_msg_0.lead_gain = 0.718101646313;
    tmp_msg_0.deconfl_gain = 0.0754905661885;
    tmp_msg_0.accel_switch_gain = 0.820170406983;
    tmp_msg_0.safe_dist = 0.500491753422;
    tmp_msg_0.deconflict_offset = 0.733698638212;
    tmp_msg_0.accel_safe_margin = 0.93877168938;
    tmp_msg_0.accel_lim_x = 0.0745735885844;
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
    msg.setTimeStamp(0.405057003437);
    msg.setSource(11161U);
    msg.setSourceEntity(45U);
    msg.setDestination(35342U);
    msg.setDestinationEntity(28U);
    msg.type = 252U;
    msg.op = 216U;
    msg.err_mean = 0.612690200668;
    msg.dist_min_abs = 0.851709602425;
    msg.dist_min_mean = 0.815044404988;
    msg.roll_rate_mean = 0.569735581216;
    msg.time = 0.378409258244;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 133U;
    tmp_msg_0.lon_gain = 0.497316966745;
    tmp_msg_0.lat_gain = 0.854294398269;
    tmp_msg_0.bond_thick = 0.736859952628;
    tmp_msg_0.lead_gain = 0.746981993149;
    tmp_msg_0.deconfl_gain = 0.744801286549;
    tmp_msg_0.accel_switch_gain = 0.800531534619;
    tmp_msg_0.safe_dist = 0.0479411308119;
    tmp_msg_0.deconflict_offset = 0.0497350085265;
    tmp_msg_0.accel_safe_margin = 0.162197616861;
    tmp_msg_0.accel_lim_x = 0.944056977496;
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
    msg.setTimeStamp(0.618319865655);
    msg.setSource(13348U);
    msg.setSourceEntity(124U);
    msg.setDestination(62213U);
    msg.setDestinationEntity(168U);
    msg.type = 235U;
    msg.op = 236U;
    msg.err_mean = 0.388964700168;
    msg.dist_min_abs = 0.350394906572;
    msg.dist_min_mean = 0.488015205246;
    msg.roll_rate_mean = 0.742304998376;
    msg.time = 0.509129510432;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 129U;
    tmp_msg_0.lon_gain = 0.329827389801;
    tmp_msg_0.lat_gain = 0.867463247864;
    tmp_msg_0.bond_thick = 0.609150039931;
    tmp_msg_0.lead_gain = 0.543185792341;
    tmp_msg_0.deconfl_gain = 0.193866731148;
    tmp_msg_0.accel_switch_gain = 0.773999421528;
    tmp_msg_0.safe_dist = 0.655915986621;
    tmp_msg_0.deconflict_offset = 0.335071152176;
    tmp_msg_0.accel_safe_margin = 0.0930993126606;
    tmp_msg_0.accel_lim_x = 0.466910068018;
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
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.286281555304);
    msg.setSource(26298U);
    msg.setSourceEntity(168U);
    msg.setDestination(55583U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.297439522333;
    msg.lon = 0.0996278346005;
    msg.eta = 1249606036U;
    msg.duration = 49854U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.653367818578);
    msg.setSource(29097U);
    msg.setSourceEntity(5U);
    msg.setDestination(59681U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.586183009969;
    msg.lon = 0.591546149596;
    msg.eta = 1302117752U;
    msg.duration = 20470U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.0762396101929);
    msg.setSource(45909U);
    msg.setSourceEntity(203U);
    msg.setDestination(43276U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.54440853889;
    msg.lon = 0.619292205109;
    msg.eta = 551274554U;
    msg.duration = 11834U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.51242756623);
    msg.setSource(50750U);
    msg.setSourceEntity(50U);
    msg.setDestination(55984U);
    msg.setDestinationEntity(209U);
    msg.plan_id = 19620U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.11891282206;
    tmp_msg_0.lon = 0.00732970052176;
    tmp_msg_0.eta = 2901453351U;
    tmp_msg_0.duration = 48146U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.576984896583);
    msg.setSource(15973U);
    msg.setSourceEntity(196U);
    msg.setDestination(33360U);
    msg.setDestinationEntity(9U);
    msg.plan_id = 45002U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.653640783482);
    msg.setSource(12732U);
    msg.setSourceEntity(91U);
    msg.setDestination(12569U);
    msg.setDestinationEntity(21U);
    msg.plan_id = 50247U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.53126640904;
    tmp_msg_0.lon = 0.451894895533;
    tmp_msg_0.eta = 3849276761U;
    tmp_msg_0.duration = 3728U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.755569494378);
    msg.setSource(63465U);
    msg.setSourceEntity(77U);
    msg.setDestination(31091U);
    msg.setDestinationEntity(131U);
    msg.type = 136U;
    msg.command = 217U;
    msg.settings.assign("NCJPJRDIFNQNVZQZELTBWOBCWJNRHSMNFVCVCBAVTMUKTNARYALAWBFBFTRWMLGHAADMVMXQTOOYYEPIYYCHKMXOODHJKYGNAPWGHGVVDROREIKEMKQCEDZGDAWEWKXXRLYJSRU");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 45053U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("JOAIJXMSXUJWADPPEIWRBANYRWUMTFOADKOQYMBVAMRARNEXYTNTSEUUUTFUFLITPRXHZEHMAJHXOONVKIJFJQNYSWFMZRCZPFVPFSSDZGPYTLSUB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.327723420952);
    msg.setSource(61430U);
    msg.setSourceEntity(179U);
    msg.setDestination(20394U);
    msg.setDestinationEntity(199U);
    msg.type = 120U;
    msg.command = 14U;
    msg.settings.assign("FOTRTGWJHGQQFRYFXHFLGJCBCLGSNQAUNZOMKZQDBZBUDPLWNGUVTSMFFEJPJHGJXZQOKKYRSPOLSOGASDIPVCLAQMJRWLMLSDDXCQKTMIJGBPYAYOBYZCRCFGZSXKFORCPVTTPUBUHVCEHNEWELCXKSNIHWMYITYQQPELAEFNIMVXEYAXHVAAQXNWXNOEITYHNUHJRAIBDXKIDIJGYDUMOUKRKCLJPWEPZN");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 44731U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("WOAWUJIBXRMNVKLOQGMAIBXNTAKFQBGRSQSEENXWBNDWOOADZZZVKHACGCJOYLRKYWWZGPLVJYUNXUIGULEIYIKCTDQFIVIPPIPAVHOKSWFJETDJBXDONDMXQNYQBHTSTXNVFPSUEVSORVMFCQGKJJSPMSCBWSHNJYCVMYJKCDPEUEHHFZGRJIRNMPVKBFLMLYPLQLUDHRGAYRADEAZTTUAWDUPTOXWBRYMKFXSLBETMHGQGFQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.693762346383);
    msg.setSource(23048U);
    msg.setSourceEntity(22U);
    msg.setDestination(51375U);
    msg.setDestinationEntity(104U);
    msg.type = 141U;
    msg.command = 131U;
    msg.settings.assign("UXRBTQLPTEHDMSQUSMPFCKMCVBSZMTTOGVBRYWBWYHUAXOVLQDTZBRHWENCJRYUFZHIHILNVXKMEJDYXAEOZPDCFCIQTCEOJOUZSFWFUQNUVBXGDZKAEKYNPFGXWLIMWKCWJIWAIFHINANFPOMLAYOYQJMYNNQABVGEDDJWLSZOUPVTHTCXBTHBRYRSKQZHGPEOGHBOTEAALRDKVLJUMIXZGVQKNJSMJPFXXKGCRKAGDUSRLQWDYGRNIJ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 16836U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("XVKMWVBXBKGZRXARLJRPANBXGUEABUKCSTUQTQIMYANOODCFMOWTKLDJHXABZIEYRTYZIIZVTYJWKDLVKLGFFEKYAIZWEETFCWQRBDOPSVZOHQUDPNOJFNIJPDBNYDHLCSHGPWUCCSFSRGBWPZLGOHARAYLUPMTESSXRIJXYXVVAJLHOFSUWMQPI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.74793618241);
    msg.setSource(15339U);
    msg.setSourceEntity(0U);
    msg.setDestination(29647U);
    msg.setDestinationEntity(98U);
    msg.state = 92U;
    msg.plan_id = 33741U;
    msg.wpt_id = 215U;
    msg.settings_chk = 13945U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.506103976843);
    msg.setSource(64087U);
    msg.setSourceEntity(215U);
    msg.setDestination(28715U);
    msg.setDestinationEntity(5U);
    msg.state = 16U;
    msg.plan_id = 32240U;
    msg.wpt_id = 15U;
    msg.settings_chk = 6524U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.396693899278);
    msg.setSource(47120U);
    msg.setSourceEntity(6U);
    msg.setDestination(4126U);
    msg.setDestinationEntity(188U);
    msg.state = 151U;
    msg.plan_id = 57138U;
    msg.wpt_id = 127U;
    msg.settings_chk = 16740U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #2", msg == *msg_d);
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
    msg.setTimeStamp(0.613527255833);
    msg.setSource(33347U);
    msg.setSourceEntity(148U);
    msg.setDestination(33333U);
    msg.setDestinationEntity(150U);
    msg.uid = 56U;
    msg.frag_number = 119U;
    msg.num_frags = 77U;
    const char tmp_msg_0[] = {-112, -103, 109, 120, -60, -79, 116, -61, 38, 55, -88, -7, 35, 106, 83, 21, 122, -102, -45, -114, 0, 20, 92, 52, 23, -63, 41, 125, -36};
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
    msg.setTimeStamp(0.583200331377);
    msg.setSource(60189U);
    msg.setSourceEntity(89U);
    msg.setDestination(63473U);
    msg.setDestinationEntity(66U);
    msg.uid = 150U;
    msg.frag_number = 187U;
    msg.num_frags = 38U;
    const char tmp_msg_0[] = {-104, 16, 102, -104, -76, -64, 68, 42, 98, 39, 124, -37, -12, -62, 26, 37, -32, 52, -34, -114, 123, 11, -43, 32, -71, 1, 24, -66, 87, -19, 39, 81, 35, -127, -117, -123, -2, 69, -108, -78, 89, -90, -55, -127, -95, -112, 35, -82, 53, -5, 90, -111, -26, -2, -95, -3, 30, 17, 102, 28, 58, 85, 17, -36, 104, -10, -51, 43, 61, -35, 121, -62, -34, 45, -56, -76, -79, -64, -106, 48, 30, 19, -48, 2, 54, 37, -100, -97, -80, 122, -8, 21, 25, 120, 29, 93, -53, 99, 70, 110, -91, 126, 122, -2, 43, 88, 88, -9, -19, -21, -27, -47, 71, 113, -57, 111, -47, -104, -28, 19, 111, 108, -103, -42, 56, -110, -75, 47, 38, -113, -98, -101, 33, -99, 79, 110, -38, 61, 96, -42, -48, -14, -108, -125, -95, 22, 80, -123, -64, 93, 44, -17, 42, -102, -108, 114, -102, -25, 99, -17, -109, -72, -39, -18, -77, 35, -110, 60, -20, -38, -16, 66, 115, 71, 37, 118, 99, 32, -25, 34, 38, -122, 108, 114};
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
    msg.setTimeStamp(0.359294091788);
    msg.setSource(59207U);
    msg.setSourceEntity(78U);
    msg.setDestination(49774U);
    msg.setDestinationEntity(96U);
    msg.uid = 16U;
    msg.frag_number = 161U;
    msg.num_frags = 101U;
    const char tmp_msg_0[] = {-78, -124, 82, 67, 54, 30, 85, 80, -108, 100, 59, 3, 118, 31, -21, 26, 101, 117, -62, 18, 114, -115, 42, -81, 55, -56, 123, -71, -14, -43, 32, 126, -32, -13, -86, 103, 113, -126, 27, 4, -11, -103, -71, 42, -49, 11, -26, 70, 123, -68, 26, -65, 18, -42, 50, 75, -21, -62, 50, 70, -43, -41, 20, 89, 56, 39, -51, 94, -11, 115, 0, -39, -13, 3, 0, 29, 72, 32, -82, 77, 51, 94, -19, 42, -31, -48, -60, 107, -21, -73, -61, 36, -71, -38, -68, 40, 78, -5, 61, -98, -31, -89, 89, -90, -59, 37, 75, -17, -41, -67, -61, -81, 14, -49, -40, 54, 110, 86, -67, 4, -118, -35, -12, 99, 32, 56, -73, -84, -108, 27, 50, 26, -5, -97, 66, -62, 97, -28, 39, 72, 85, -116, 23, 67, -105, 81, 100, 79, -27, -128, -54, -41, -49, -34, 96, 123, -75, 86, -8, -11, -115};
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
    msg.setTimeStamp(0.189764719481);
    msg.setSource(37072U);
    msg.setSourceEntity(37U);
    msg.setDestination(7779U);
    msg.setDestinationEntity(247U);
    msg.content_type.assign("BHGGSBLZEAHNRVEWQDUXUUNUXIBQYXCIZZFONQZXSZPZZOVCULTHNFYEJFQJFUTBREGHKUCGCJBWTJLAQVIWJICSNMAONYYQRKMYTVNXWIADTICTSSFEGBRFRLAWFUBMLTPKRWMQGYBYHXIYFNOLDKENUMDWYXBDPORISDLPJOADVCVCTGJFKZALVQMOWRPP");
    const char tmp_msg_0[] = {-13, 32, 14, 55, -71, 60, 6, 55, 74, 87, -66, 78, -69, 78, -120, -89, -96, -8, -47, -63, -72, -85, 47, -81, -45, -75, -52, -88, -56, -87, -111, 45, -113, 52, -68, -70, 8, -112, 124, 12, -97, 72, -45, 12, -98, -122, 117, -58, -82, -29, -97, -20, 63, -106, -88, 119, -128, -54, 48, -100, 48, 110, 121, -53, 2, -9, -13, -90, -65, 60, 31, -43, 21, 6, 125, -108, 102, 86, 39, -82, 104, 85, -111, -84, 51, 125, 97, -40, 101, -22, 102, 62, 83, -18, 17, -17, 22, -80, 100, -24, 90, 105, -66, 42, 41, -73, -103, -64, -53, 104, -99, 81, -100, 74, -66, 26, -97, 107, 34, -72, 14, -79, -96, -71, 122, 41, 86, 94, -36, -47, -96, -120, 3, -6, -15, 7, 35, 25, 7, -103, -110, -98, -67, -97, 87, -61, -51, -11, 81, -105, -127, -47, -59, -46, -38, 59, 17, -112, 70, -90, -94, -95, 85, 47, -112, -71, -104, -54, -10, -14, 119, 25, 95, 37, 72, -123, -77, 106, 51, 83, 19, -128, 79, 92, -69, 53, 87, -68, 5, 53, 7, 59, 74, 61, 40, 95, -28, 44, 46, -7, 84, -13, 51, -101, -82, 85, -107, -45, -103, -85, 81, 117, 53, -58, -59};
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
    msg.setTimeStamp(0.337451865347);
    msg.setSource(62640U);
    msg.setSourceEntity(104U);
    msg.setDestination(47971U);
    msg.setDestinationEntity(158U);
    msg.content_type.assign("PIQMFVXLGRZVAUHFOTIFMSAOIQLBSDJZESAQXWMVBOPJOCDKKT");
    const char tmp_msg_0[] = {-79, 119, 33, -88, -124, 75, -62, -17, -100, -71, -117, 25, 39, -48, 57, -90, -65, 98, 90, -4, 33, 44, -124, -33, -53, 69, -47, 62, 12, 23, 91, -43, -94, -26, 13, -34, 108, 14, -11, -1, -107, -51, -22, -27, 123, -68, 77, -82, -97, -36, 88, -81, 74, -124, -53, 80, -90, 54, -6, 47, 126, 39, 20, -35, 123, -12, -50, -121, -30, 65, -45, -86, -16, 47, 119, 3, 113, 93, 14, -56, -109, 52, 22, 90, 85, 80, -25, -63, -68, 11, -100, 1, -5, 80, 5, 12, 77, -98, 40, 117, -21, 73, 84, -101, -122, -50, -61, 82, -73, -62, 26, 50, -19, -109, -11, 54, -35, 111, -69, -42, -93, 45, 23, 104, 24, 15, -28, 49, 43, 63, -40, 100, -11, -79, 88, 63, -83, -22, 7, -98, 100, 35, 113, 126, 100, -88, -78, -105, 93, 64, 30, 55, 48, 120, -66, 111, -105, -121, 110, 72, 7, -43, 110, 10, 59, 87, -119, -28, -67, 10, -128, -97, -117, -89, 48, -103, 37, 111, 12, -21, -2, -87, 77, -124, 29, -80, -26, 28, 36, -104, -113, -4, 8, -59, 107, 64, -45, -100, -115, 37, 89, 23, 113, 45, -99, 96, 98, 43, -64, 55, 122, -123, -113, 39, 3, -47, 87, -45, -99, -39, -105, -58, 72, -23};
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
    msg.setTimeStamp(0.790876934842);
    msg.setSource(13315U);
    msg.setSourceEntity(21U);
    msg.setDestination(40132U);
    msg.setDestinationEntity(52U);
    msg.content_type.assign("BRHGATHVMMXSGPTRZYLXASODBPHWXLBFWXPVIQEENQXMWJQTBZNUJOOAKCYHUPWEWZTUSTVDIOOEKBYMNVCESSPILRFAFVTGWKZPFMTOCYQGGILRZQPEXRVQFYFSVSRESLHDLNGZLTVKUPMCNFMHZSBTRJXACYMMWDYGACRYRJZKPXQGUXIHKUKNGIXJLNOHOUSIFCJCPCUDDAOLHWUWNQKNH");
    const char tmp_msg_0[] = {45, -88, -83, -1, 112, 95, 14, -29, 105, -104, 41, -83, 23, -7};
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
    msg.setTimeStamp(0.446217217875);
    msg.setSource(51635U);
    msg.setSourceEntity(103U);
    msg.setDestination(60477U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.463435869029);
    msg.setSource(33603U);
    msg.setSourceEntity(98U);
    msg.setDestination(46037U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.634913416783);
    msg.setSource(55330U);
    msg.setSourceEntity(175U);
    msg.setDestination(34203U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.366762751827);
    msg.setSource(889U);
    msg.setSourceEntity(168U);
    msg.setDestination(39193U);
    msg.setDestinationEntity(31U);
    msg.target = 9454U;
    msg.bearing = 0.409427914329;
    msg.elevation = 0.221501478358;

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
    msg.setTimeStamp(0.379789617181);
    msg.setSource(26526U);
    msg.setSourceEntity(86U);
    msg.setDestination(28386U);
    msg.setDestinationEntity(80U);
    msg.target = 51144U;
    msg.bearing = 0.867033659761;
    msg.elevation = 0.690316329364;

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
    msg.setTimeStamp(0.161786996124);
    msg.setSource(33686U);
    msg.setSourceEntity(175U);
    msg.setDestination(34783U);
    msg.setDestinationEntity(127U);
    msg.target = 38240U;
    msg.bearing = 0.523761689595;
    msg.elevation = 0.188504751907;

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
    msg.setTimeStamp(0.138186626526);
    msg.setSource(6640U);
    msg.setSourceEntity(151U);
    msg.setDestination(28116U);
    msg.setDestinationEntity(119U);
    msg.target = 56535U;
    msg.x = 0.216683731236;
    msg.y = 0.581686761784;
    msg.z = 0.334381788248;

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
    msg.setTimeStamp(0.00969388672978);
    msg.setSource(60788U);
    msg.setSourceEntity(143U);
    msg.setDestination(15383U);
    msg.setDestinationEntity(106U);
    msg.target = 46267U;
    msg.x = 0.148461932672;
    msg.y = 0.0981075479227;
    msg.z = 0.570698900678;

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
    msg.setTimeStamp(0.260326328048);
    msg.setSource(58136U);
    msg.setSourceEntity(28U);
    msg.setDestination(10814U);
    msg.setDestinationEntity(181U);
    msg.target = 26818U;
    msg.x = 0.712789791188;
    msg.y = 0.575785700112;
    msg.z = 0.796079523784;

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
    msg.setTimeStamp(0.32471660718);
    msg.setSource(34963U);
    msg.setSourceEntity(178U);
    msg.setDestination(29543U);
    msg.setDestinationEntity(145U);
    msg.target = 44493U;
    msg.lat = 0.933177368559;
    msg.lon = 0.941562584016;
    msg.z_units = 132U;
    msg.z = 0.435726471199;

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
    msg.setTimeStamp(0.198123175478);
    msg.setSource(26219U);
    msg.setSourceEntity(93U);
    msg.setDestination(3634U);
    msg.setDestinationEntity(137U);
    msg.target = 3847U;
    msg.lat = 0.828828384398;
    msg.lon = 0.318015835305;
    msg.z_units = 140U;
    msg.z = 0.855613877318;

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
    msg.setTimeStamp(0.659507844511);
    msg.setSource(42663U);
    msg.setSourceEntity(217U);
    msg.setDestination(51227U);
    msg.setDestinationEntity(105U);
    msg.target = 56739U;
    msg.lat = 0.484868444968;
    msg.lon = 0.795614106776;
    msg.z_units = 232U;
    msg.z = 0.267494607015;

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
    msg.setTimeStamp(0.92868555717);
    msg.setSource(9184U);
    msg.setSourceEntity(130U);
    msg.setDestination(282U);
    msg.setDestinationEntity(114U);
    msg.locale.assign("PRZKKGETCOUXKAZEAUDFREHREQUVAEJHTTJZFZTCUNCFBRCTQQWF");
    const char tmp_msg_0[] = {21, 54, -70, 2, 37, 14, -54, 38, 83, -104, 54, 102, 8, 8, -114, 119, -97, 89, -100, 71, -28, -19, 75, 41, 0, 65, 12, -6, -93, 16, 8, 95, 68, -83};
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
    msg.setTimeStamp(0.527942263533);
    msg.setSource(8909U);
    msg.setSourceEntity(118U);
    msg.setDestination(16777U);
    msg.setDestinationEntity(37U);
    msg.locale.assign("YFCHSUVLIFCAZXXJTKERDEGI");
    const char tmp_msg_0[] = {77, 42, -97, -87, -104, 65, -18, -56, -7, -71, -39, 83, 33, 11, 62, 40, 32, 37, -126, -83, 93, 118, 30, 91, -69, -107, -24, -81, -5, -96, 22, 80, 2, 19, -94, -21, -103, -123, 65, 73, -126, -32, -19, -53, -92, -70, 97, -44, -31, -89, -32, 125, -2, -35, -99, 56, -57, 19, -36, 35, -82, 104, 80, 13, 91, -75, 26, -81, -66, 29, 4, -54, 18, 33, 111, 89, 117, 79, -128, 69, -66, 82, 111, 113, 1, -45, 51, 116, 60, 72, 67, -84, 29, 4};
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
    msg.setTimeStamp(0.606184042498);
    msg.setSource(7967U);
    msg.setSourceEntity(136U);
    msg.setDestination(53977U);
    msg.setDestinationEntity(156U);
    msg.locale.assign("CVQJUDFJVPTH");
    const char tmp_msg_0[] = {32, -112, -90, -88, 70, -95, -106, 106, 30, 115, 54, -52, 12, -21, 104, -83, -45, 124, 76, -31, 76, -34, 29, -117, 56, 52, 106, -101, 65, 63, 34, -116, -111, 80, -117, 77, -40, -60, -4, 0, 121, 124, -31, -24, 78, -42, 37, -72, 120, -80, -125, -25, 43, 93, -31, -85, -59, -51, 76, -38, -109, -58, -107, -49, -100, 3, -102, 67, -16, 83};
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
    msg.setTimeStamp(0.428463944457);
    msg.setSource(3817U);
    msg.setSourceEntity(199U);
    msg.setDestination(9980U);
    msg.setDestinationEntity(52U);

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
    msg.setTimeStamp(0.648056508712);
    msg.setSource(3563U);
    msg.setSourceEntity(62U);
    msg.setDestination(31712U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.993816748207);
    msg.setSource(51542U);
    msg.setSourceEntity(130U);
    msg.setDestination(26991U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.551668462092);
    msg.setSource(40611U);
    msg.setSourceEntity(227U);
    msg.setDestination(54738U);
    msg.setDestinationEntity(204U);
    msg.camid = 53U;
    msg.x = 8575U;
    msg.y = 8986U;

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
    msg.setTimeStamp(0.928200107152);
    msg.setSource(19482U);
    msg.setSourceEntity(231U);
    msg.setDestination(21401U);
    msg.setDestinationEntity(253U);
    msg.camid = 25U;
    msg.x = 38361U;
    msg.y = 7893U;

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
    msg.setTimeStamp(0.655049353615);
    msg.setSource(58382U);
    msg.setSourceEntity(145U);
    msg.setDestination(24169U);
    msg.setDestinationEntity(140U);
    msg.camid = 165U;
    msg.x = 33029U;
    msg.y = 61867U;

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
    msg.setTimeStamp(0.253860029024);
    msg.setSource(60746U);
    msg.setSourceEntity(149U);
    msg.setDestination(17007U);
    msg.setDestinationEntity(40U);
    msg.camid = 188U;
    msg.x = 47989U;
    msg.y = 21844U;

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
    msg.setTimeStamp(0.608380939334);
    msg.setSource(57598U);
    msg.setSourceEntity(153U);
    msg.setDestination(15716U);
    msg.setDestinationEntity(165U);
    msg.camid = 59U;
    msg.x = 58916U;
    msg.y = 26982U;

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
    msg.setTimeStamp(0.914844556584);
    msg.setSource(16681U);
    msg.setSourceEntity(154U);
    msg.setDestination(64262U);
    msg.setDestinationEntity(170U);
    msg.camid = 210U;
    msg.x = 59038U;
    msg.y = 47775U;

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
    msg.setTimeStamp(0.740109104157);
    msg.setSource(41869U);
    msg.setSourceEntity(203U);
    msg.setDestination(6467U);
    msg.setDestinationEntity(32U);
    msg.tracking = 206U;
    msg.lat = 0.599566915419;
    msg.lon = 0.286837794973;
    msg.x = 0.65689670371;
    msg.y = 0.336559751199;
    msg.z = 0.804920285706;

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
    msg.setTimeStamp(0.359702683265);
    msg.setSource(37941U);
    msg.setSourceEntity(228U);
    msg.setDestination(14056U);
    msg.setDestinationEntity(187U);
    msg.tracking = 61U;
    msg.lat = 0.868180436231;
    msg.lon = 0.918493501982;
    msg.x = 0.652177519568;
    msg.y = 0.198290196845;
    msg.z = 0.784913076868;

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
    msg.setTimeStamp(0.581254824919);
    msg.setSource(36132U);
    msg.setSourceEntity(249U);
    msg.setDestination(4629U);
    msg.setDestinationEntity(128U);
    msg.tracking = 136U;
    msg.lat = 0.658555094672;
    msg.lon = 0.739311267779;
    msg.x = 0.996460269835;
    msg.y = 0.505270894434;
    msg.z = 0.0311324194281;

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
    msg.setTimeStamp(0.695559797124);
    msg.setSource(1219U);
    msg.setSourceEntity(120U);
    msg.setDestination(17633U);
    msg.setDestinationEntity(231U);
    msg.target.assign("PKXLTJMOAMAYVXURBGXMUVLFKHYICKFUNWCHCZZXZQBIVPFNDXFKTHHNFWDTVWGKDYQHYYCBKXXBBFBCTGPFLWWEZIUQBRDDPGLODTDNXZRHZIIYXOJCUUTSEDJAKQMQMSOTVJMNSHIQPEUZWVWFZQPQEPWXNAVVKUTMNOZDRWGESHBOAKSGGLILPSAGSRHUGISVCANBQJENBPJRDYVRIFCLNZTYMCEAWYFUEMYSORAIGAPMO");
    msg.lbearing = 0.687962481487;
    msg.lelevation = 0.324448378683;
    msg.bearing = 0.488847121101;
    msg.elevation = 0.0985543005022;
    msg.phi = 0.483868512799;
    msg.theta = 0.154240639789;
    msg.psi = 0.697923561288;
    msg.accuracy = 0.521760246991;

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
    msg.setTimeStamp(0.108359794984);
    msg.setSource(9533U);
    msg.setSourceEntity(181U);
    msg.setDestination(15515U);
    msg.setDestinationEntity(178U);
    msg.target.assign("QOTJSSVGAEUAJLAZIOLHYXWHHJKBBQEHOZQLDCACOJUIXVMPMCKOUXGNRTSYEVKNCPUIODYZDGMRTZHKXJAQKIESSMBDPXCXSQINJFCKZDEUXLOMZXDIJMTQVMHIFQGINSRVSGRHWLPHWGDGWNBMUXDOZAJNCHTFERPFEFRUPQDACEYBLYBUVOIFKYRRPTVLZKOUEUYSAYFNCNGQBPRZVHXZACFALN");
    msg.lbearing = 0.230269836502;
    msg.lelevation = 0.941315599402;
    msg.bearing = 0.301638363103;
    msg.elevation = 0.1825557079;
    msg.phi = 0.858825747338;
    msg.theta = 0.388234818382;
    msg.psi = 0.762451845422;
    msg.accuracy = 0.842960954284;

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
    msg.setTimeStamp(0.446100803686);
    msg.setSource(12173U);
    msg.setSourceEntity(141U);
    msg.setDestination(36586U);
    msg.setDestinationEntity(0U);
    msg.target.assign("BKDILFMXCWOVGOIRKILQORKHPJTYGYKPLUGDZZNJGWCAIWCZVZZBRJMTFCVGUBPQBYPSSWWSDEHAFVHOMATECXFJHUZXDIBQFCKJNQQMDRMGXLNNQJVCZPT");
    msg.lbearing = 0.634237464063;
    msg.lelevation = 0.895547619991;
    msg.bearing = 0.18046158148;
    msg.elevation = 0.836249328671;
    msg.phi = 0.892456769774;
    msg.theta = 0.728264921531;
    msg.psi = 0.8703497953;
    msg.accuracy = 0.377891202383;

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
    msg.setTimeStamp(0.0542419110043);
    msg.setSource(32573U);
    msg.setSourceEntity(135U);
    msg.setDestination(10938U);
    msg.setDestinationEntity(197U);
    msg.target.assign("OUTTSSIYIXWJTFKVNXNBVBUINOYPXDHRUQQXRUOMYTRGEWKQCGBYNZLVFAVSPMOMYRJBDPHDWNLPXIFZJAMINHOSXMDUFILZLVNULGFSEHBRWAZCFBCGAVBRNPVKZBSY");
    msg.x = 0.757526820293;
    msg.y = 0.112619681822;
    msg.z = 0.899944976906;
    msg.n = 0.765030661989;
    msg.e = 0.0729397791171;
    msg.d = 0.790571244861;
    msg.phi = 0.816739677905;
    msg.theta = 0.677135089785;
    msg.psi = 0.0851668967203;
    msg.accuracy = 0.994428166108;

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
    msg.setTimeStamp(0.251750532658);
    msg.setSource(22684U);
    msg.setSourceEntity(93U);
    msg.setDestination(2834U);
    msg.setDestinationEntity(38U);
    msg.target.assign("NKPKRICIHZVUWGTVKWTGRWYHMKQTCBFZXSPOOJTMRRWHFHZLUDPRMHKKJQLEHEBXASSBRCICXTASXDVGFAZCDSUUYNEMWEPFMISJFWIJRVDZMJPEGOLVYIWJQLUGBKXGVNXVBLTXMLEEEAASZOLMUTFPROSPPONCZOYVLFDNQSWQUZQAVJBOUYLHCMARNXQHWKHWKINVQBNXPTMYDRYBZGBUTLCUIAQJIDBQF");
    msg.x = 0.739472420727;
    msg.y = 0.831108632827;
    msg.z = 0.502626186575;
    msg.n = 0.58299185989;
    msg.e = 0.762191873636;
    msg.d = 0.67506292763;
    msg.phi = 0.0953826449061;
    msg.theta = 0.718876890339;
    msg.psi = 0.300378496628;
    msg.accuracy = 0.844237271808;

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
    msg.setTimeStamp(0.332735994754);
    msg.setSource(16417U);
    msg.setSourceEntity(217U);
    msg.setDestination(34511U);
    msg.setDestinationEntity(253U);
    msg.target.assign("RRRIWGOEBVTJEANUETHMWHSVWEKWJVLEIBPMMGZOQPTNQLBXRRWVCQBZCUSXJESVQOJILLTEM");
    msg.x = 0.932912173841;
    msg.y = 0.79478478925;
    msg.z = 0.403218616902;
    msg.n = 0.168838240872;
    msg.e = 0.190053113895;
    msg.d = 0.686487547194;
    msg.phi = 0.850266343744;
    msg.theta = 0.890506498753;
    msg.psi = 0.217983389632;
    msg.accuracy = 0.995752250526;

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
    msg.setTimeStamp(0.963515996658);
    msg.setSource(61190U);
    msg.setSourceEntity(57U);
    msg.setDestination(15504U);
    msg.setDestinationEntity(53U);
    msg.target.assign("IOHKJAOPMLLSDPSUYMDCWDKIQBZPTAASQOHFWOWRFRUYJQPGNODZKXYXVLXEEXGPYZKYZSUHYJDGUVTLYMXHLSVWQFPFRJNGFHADKIANFXBVNTJUFZLVOJGKCHQOKFY");
    msg.lat = 0.302377693708;
    msg.lon = 0.599298257162;
    msg.z_units = 233U;
    msg.z = 0.227569325403;
    msg.accuracy = 0.750735213144;

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
    msg.setTimeStamp(0.490258689146);
    msg.setSource(51680U);
    msg.setSourceEntity(212U);
    msg.setDestination(63904U);
    msg.setDestinationEntity(162U);
    msg.target.assign("UVKCGDNYWUJAEGWDTVJRFORJUGZMRZOLAIBQKVFWXLSTPCWQZCQYEYNIDILFJSGUYDOMAIYPXEBXEEBLKGWRJZIMVJVEPIDLZNRCRHWYFOXSLHTOKITUCTMUCEVXCIMVPOLQQNCFKXCRFSNEDCTULHABVABWEMHXHZIHPPBNSNSTUHENUZQGONZBYRZKFPAWSQMGQMWYL");
    msg.lat = 0.150979644862;
    msg.lon = 0.276061254403;
    msg.z_units = 131U;
    msg.z = 0.467844694605;
    msg.accuracy = 0.675757551611;

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
    msg.setTimeStamp(0.489522193517);
    msg.setSource(51430U);
    msg.setSourceEntity(58U);
    msg.setDestination(64748U);
    msg.setDestinationEntity(213U);
    msg.target.assign("EGYXIPVOJDXEODWFLUIQPCRGGACRLQDCNWNFBZWAKCIZRJHKLROUGJACWYCLKAZXMDLNPBZWFNVHVFXXMNEEJKGHUXBRKSBAIOSVMITIJTRPEEFYTQFXLBTPWHJK");
    msg.lat = 0.672325131608;
    msg.lon = 0.0180310867612;
    msg.z_units = 59U;
    msg.z = 0.115428734417;
    msg.accuracy = 0.339985888379;

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
    msg.setTimeStamp(0.604481245496);
    msg.setSource(41354U);
    msg.setSourceEntity(98U);
    msg.setDestination(54548U);
    msg.setDestinationEntity(67U);
    msg.name.assign("PTJXEOQPVUEFWNWWLXTZYKHIUIHCMMPLX");
    msg.lat = 0.413974937299;
    msg.lon = 0.121523589217;
    msg.z = 0.522614793341;
    msg.z_units = 53U;

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
    msg.setTimeStamp(0.785486207792);
    msg.setSource(30612U);
    msg.setSourceEntity(72U);
    msg.setDestination(55758U);
    msg.setDestinationEntity(88U);
    msg.name.assign("HPQTRNBSKUJEXNGEZDFDWASMOFKWCLGYRKUAPZIRUGRBKUCJGHVLHZMTQMVCCBPZIWVQUWKJZNEDNWIZJITVKUATCLPHBTJYPEVUUEAYXORXTQGVVNPBRQCBVJDBGYIIJHFNMOQOLSSEWDMFIDOFHAFYXOWCLYOVAEJROTZPZMFWXGN");
    msg.lat = 0.616698008008;
    msg.lon = 0.527526473995;
    msg.z = 0.849241245812;
    msg.z_units = 226U;

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
    msg.setTimeStamp(0.137713625691);
    msg.setSource(19360U);
    msg.setSourceEntity(86U);
    msg.setDestination(65145U);
    msg.setDestinationEntity(42U);
    msg.name.assign("GWATWMMKCHFVMBXCTUKVSMLRQCFDGZILWTWWPTNPBUYGZKIRPFWQSJPGOJZJBIPVNEPRYBQSJFRNAUIKOUODOKYEMYYCVUATHIBYNQKSTLKQZRXUSUUFXRSKHFJBJVZWHDSEHONOVPXNJABJHFPSNOZMDVQP");
    msg.lat = 0.931731416604;
    msg.lon = 0.990374533637;
    msg.z = 0.443021736014;
    msg.z_units = 210U;

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
    msg.setTimeStamp(0.932176499869);
    msg.setSource(11619U);
    msg.setSourceEntity(241U);
    msg.setDestination(59175U);
    msg.setDestinationEntity(14U);
    msg.op = 29U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("JBCPKRFYZRVWZPABRAKAEAYQAPCIJTFBOYAGMVLYRXMGKBNPYUKLZDJFFOWXCSKJKSHLTPCIIMSQQWUSOBIOBEZZECWMKLTXODFSNXMBC");
    tmp_msg_0.lat = 0.424092113514;
    tmp_msg_0.lon = 0.122207810014;
    tmp_msg_0.z = 0.318829284914;
    tmp_msg_0.z_units = 220U;
    msg.modems.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.255472436193);
    msg.setSource(50945U);
    msg.setSourceEntity(246U);
    msg.setDestination(16770U);
    msg.setDestinationEntity(232U);
    msg.op = 182U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("TFTMNXCRJBATEDVCNGJJQDCWGEOBTDRLDYOSQBPTIADJLWFEGHCEJIJHPRDJNJLBJFFLIOZKULKWABOWGFRUFWXOYGBSRKRQCZAYUBWZCRHWDGMUZKFYSXBOJEHYEPZIIUYHIQVLQKMOPNXKYVOCYGNSKDZCRDFNULDUIRIYVTFSPWUBEHVZUGQAAKEVPLOXSCGOTEGYIUMXCIMAMPTPVBSKQQNRQHKVXT");
    tmp_msg_0.lat = 0.738780373664;
    tmp_msg_0.lon = 0.0371511507487;
    tmp_msg_0.z = 0.21161801469;
    tmp_msg_0.z_units = 218U;
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
    msg.setTimeStamp(0.902998904343);
    msg.setSource(28250U);
    msg.setSourceEntity(186U);
    msg.setDestination(36409U);
    msg.setDestinationEntity(205U);
    msg.op = 189U;

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
    msg.setTimeStamp(0.528084628768);
    msg.setSource(7083U);
    msg.setSourceEntity(147U);
    msg.setDestination(34034U);
    msg.setDestinationEntity(79U);
    msg.value = 0.593777655048;
    msg.type = 89U;

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
    msg.setTimeStamp(0.679533096428);
    msg.setSource(26964U);
    msg.setSourceEntity(248U);
    msg.setDestination(5775U);
    msg.setDestinationEntity(188U);
    msg.value = 0.413313472847;
    msg.type = 204U;

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
    msg.setTimeStamp(0.488998043697);
    msg.setSource(416U);
    msg.setSourceEntity(52U);
    msg.setDestination(7578U);
    msg.setDestinationEntity(42U);
    msg.value = 0.405019352389;
    msg.type = 149U;

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
    msg.setTimeStamp(0.835033241326);
    msg.setSource(60915U);
    msg.setSourceEntity(90U);
    msg.setDestination(19052U);
    msg.setDestinationEntity(89U);
    msg.value = 0.11592222481;

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
    msg.setTimeStamp(0.544611406865);
    msg.setSource(27594U);
    msg.setSourceEntity(58U);
    msg.setDestination(32822U);
    msg.setDestinationEntity(46U);
    msg.value = 0.522060910077;

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
    msg.setTimeStamp(0.392731382889);
    msg.setSource(6544U);
    msg.setSourceEntity(220U);
    msg.setDestination(43015U);
    msg.setDestinationEntity(70U);
    msg.value = 0.523538915918;

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
    msg.setTimeStamp(0.392031897859);
    msg.setSource(9434U);
    msg.setSourceEntity(205U);
    msg.setDestination(16559U);
    msg.setDestinationEntity(12U);
    msg.timestamp_last_service = 0.752658177094;
    msg.time_next_service = 0.797745687704;
    msg.time_motor_next_service = 0.816814260841;
    msg.time_idle_ground = 0.0991846513013;
    msg.time_idle_air = 0.925158022902;
    msg.time_idle_water = 0.343329186788;
    msg.time_idle_underwater = 0.614857606675;
    msg.time_idle_unknown = 0.319875882211;
    msg.time_motor_ground = 0.442884301341;
    msg.time_motor_air = 0.666893384129;
    msg.time_motor_water = 0.200958996692;
    msg.time_motor_underwater = 0.701132322022;
    msg.time_motor_unknown = 0.829156186135;
    msg.rpm_min = -12546;
    msg.rpm_max = 18336;
    msg.depth_max = 0.66143500419;

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
    msg.setTimeStamp(0.925866206841);
    msg.setSource(27760U);
    msg.setSourceEntity(244U);
    msg.setDestination(39173U);
    msg.setDestinationEntity(13U);
    msg.timestamp_last_service = 0.252254222898;
    msg.time_next_service = 0.517096332959;
    msg.time_motor_next_service = 0.196035692455;
    msg.time_idle_ground = 0.751662532738;
    msg.time_idle_air = 0.89861080705;
    msg.time_idle_water = 0.958712913165;
    msg.time_idle_underwater = 0.672390207335;
    msg.time_idle_unknown = 0.111352987326;
    msg.time_motor_ground = 0.74861279801;
    msg.time_motor_air = 0.606177792693;
    msg.time_motor_water = 0.108057793856;
    msg.time_motor_underwater = 0.138421697384;
    msg.time_motor_unknown = 0.981263857775;
    msg.rpm_min = -12785;
    msg.rpm_max = 28278;
    msg.depth_max = 0.321185573483;

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
    msg.setTimeStamp(0.962325036742);
    msg.setSource(24438U);
    msg.setSourceEntity(94U);
    msg.setDestination(10512U);
    msg.setDestinationEntity(97U);
    msg.timestamp_last_service = 0.447343258793;
    msg.time_next_service = 0.0961945944111;
    msg.time_motor_next_service = 0.636063596178;
    msg.time_idle_ground = 0.208272075295;
    msg.time_idle_air = 0.120352744459;
    msg.time_idle_water = 0.0224537910691;
    msg.time_idle_underwater = 0.586619253509;
    msg.time_idle_unknown = 0.642729774443;
    msg.time_motor_ground = 0.345346108655;
    msg.time_motor_air = 0.121058420163;
    msg.time_motor_water = 0.225537571596;
    msg.time_motor_underwater = 0.897094916971;
    msg.time_motor_unknown = 0.820826875318;
    msg.rpm_min = -11021;
    msg.rpm_max = -26681;
    msg.depth_max = 0.862797805551;

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
    msg.setTimeStamp(0.575553736219);
    msg.setSource(8492U);
    msg.setSourceEntity(156U);
    msg.setDestination(10464U);
    msg.setDestinationEntity(90U);
    msg.severity = 73U;
    msg.text.assign("AGXPBGTZPIYKQNHKUSPFPZFVAVWDDBZKEKSBROJZWUWYKMFONFOMZIMWGGNLBXEPLXYGIRAOEQPFQMXQVZXOZSGCHWYETYAFEXCBKQYFVYTBQWPRJQRDZRKTVCLVGXCRNQCJKCTVMOUPJSSOMJPNVLWIXWTOUCXRJEZDMENSSXUHHHGNLVAIRDZHBYFCINIKHOLBYC");

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
    msg.setTimeStamp(0.560495896621);
    msg.setSource(14127U);
    msg.setSourceEntity(90U);
    msg.setDestination(42656U);
    msg.setDestinationEntity(220U);
    msg.severity = 186U;
    msg.text.assign("PVDIOKOIAEYDRVVMCSJXAFJYIQJKSQPMIJYLXLUBTSNTKXDYMRKLSXZBRCCQTNOWTBMAGHPIZFAYZGUHNDDRBRMPLPERBBVMUQTZOTFYHAUSEGTLVZWIWNZMKRXZHVCJQLVIJWXWJETA");

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
    msg.setTimeStamp(0.0717661291947);
    msg.setSource(36701U);
    msg.setSourceEntity(190U);
    msg.setDestination(21097U);
    msg.setDestinationEntity(67U);
    msg.severity = 136U;
    msg.text.assign("VKZOLQWKKIEHURBXGWRCFMRFIZOKEMXYVVIKYCNJIQAEMEWSJGOPHABSWTBGQXGQAZBDRPSLWMXJNNPMEOFIZCFPDDQVDWHQYFKWNUVHZJTAPPOAHEZOSQJCUTSKUGMTLUXYBENJSUF");

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

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.954013822885);
    msg.setSource(63513U);
    msg.setSourceEntity(236U);
    msg.setDestination(21299U);
    msg.setDestinationEntity(165U);
    msg.channel = 4;
    msg.value = -594430783;
    msg.gain = 167U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.657329952045);
    msg.setSource(23826U);
    msg.setSourceEntity(81U);
    msg.setDestination(49339U);
    msg.setDestinationEntity(26U);
    msg.channel = -33;
    msg.value = -1121056734;
    msg.gain = 131U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.348006762135);
    msg.setSource(42614U);
    msg.setSourceEntity(231U);
    msg.setDestination(54356U);
    msg.setDestinationEntity(136U);
    msg.channel = -109;
    msg.value = -6252327;
    msg.gain = 44U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.977034884952);
    msg.setSource(30928U);
    msg.setSourceEntity(11U);
    msg.setDestination(5007U);
    msg.setDestinationEntity(181U);
    msg.ch01 = 0.285311239629;
    msg.ch02 = 0.104636121822;
    msg.ch03 = 0.219442152478;
    msg.ch04 = 0.15034832952;
    msg.ch05 = 0.208233106213;
    msg.ch06 = 0.830752080202;
    msg.ch07 = 0.31522467474;
    msg.ch08 = 0.524374736761;
    msg.ch09 = 0.617686557352;
    msg.ch10 = 0.940961317968;
    msg.ch11 = 0.00835925657932;
    msg.ch12 = 0.376991599674;
    msg.ch13 = 0.570386146222;
    msg.ch14 = 0.564543547726;
    msg.ch15 = 0.05026978937;
    msg.ch16 = 0.9933365961;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.330129674652);
    msg.setSource(10437U);
    msg.setSourceEntity(138U);
    msg.setDestination(10434U);
    msg.setDestinationEntity(9U);
    msg.ch01 = 0.927356167842;
    msg.ch02 = 0.1398096343;
    msg.ch03 = 0.637474440174;
    msg.ch04 = 0.421963063888;
    msg.ch05 = 0.357262361599;
    msg.ch06 = 0.889011181812;
    msg.ch07 = 0.475978561037;
    msg.ch08 = 0.580448148382;
    msg.ch09 = 0.765789875307;
    msg.ch10 = 0.45989909216;
    msg.ch11 = 0.533233908907;
    msg.ch12 = 0.851116957177;
    msg.ch13 = 0.950973926166;
    msg.ch14 = 0.697436669616;
    msg.ch15 = 0.414124693463;
    msg.ch16 = 0.633788621608;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.0975124400689);
    msg.setSource(37985U);
    msg.setSourceEntity(87U);
    msg.setDestination(49201U);
    msg.setDestinationEntity(80U);
    msg.ch01 = 0.845083373831;
    msg.ch02 = 0.795860851857;
    msg.ch03 = 0.757419489954;
    msg.ch04 = 0.506090754452;
    msg.ch05 = 0.125300381742;
    msg.ch06 = 0.396470858624;
    msg.ch07 = 0.249819596439;
    msg.ch08 = 0.35042192472;
    msg.ch09 = 0.0576506149967;
    msg.ch10 = 0.234852053847;
    msg.ch11 = 0.805783522186;
    msg.ch12 = 0.616403053759;
    msg.ch13 = 0.814133510913;
    msg.ch14 = 0.229098508915;
    msg.ch15 = 0.731120629724;
    msg.ch16 = 0.0879016493485;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.80792682001);
    msg.setSource(23872U);
    msg.setSourceEntity(201U);
    msg.setDestination(14118U);
    msg.setDestinationEntity(162U);
    msg.value = 0.894211926878;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.851933642511);
    msg.setSource(33807U);
    msg.setSourceEntity(223U);
    msg.setDestination(38859U);
    msg.setDestinationEntity(158U);
    msg.value = 0.547290522819;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.405065852489);
    msg.setSource(63547U);
    msg.setSourceEntity(199U);
    msg.setDestination(15782U);
    msg.setDestinationEntity(198U);
    msg.value = 0.0436817521316;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.378417569168);
    msg.setSource(19708U);
    msg.setSourceEntity(238U);
    msg.setDestination(20456U);
    msg.setDestinationEntity(118U);
    msg.op = 73U;
    msg.lat = 0.901066459755;
    msg.lon = 0.633409640966;
    msg.height = 0.867382151616;
    msg.depth = 0.866574514745;
    msg.alt = 0.783831711915;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.133946675633);
    msg.setSource(54460U);
    msg.setSourceEntity(45U);
    msg.setDestination(18303U);
    msg.setDestinationEntity(243U);
    msg.op = 70U;
    msg.lat = 0.272782424963;
    msg.lon = 0.300769385343;
    msg.height = 0.506098745692;
    msg.depth = 0.946353864136;
    msg.alt = 0.905004861456;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.847315427955);
    msg.setSource(16787U);
    msg.setSourceEntity(31U);
    msg.setDestination(2036U);
    msg.setDestinationEntity(198U);
    msg.op = 191U;
    msg.lat = 0.166064060903;
    msg.lon = 0.613436188207;
    msg.height = 0.87123573498;
    msg.depth = 0.129926080756;
    msg.alt = 0.076444368562;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #2", msg == *msg_d);
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
