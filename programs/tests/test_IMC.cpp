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
// IMC XML MD5: 8f9795208e5717ed821a0ff07614460f                            *
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
    msg.setTimeStamp(0.0406386224612);
    msg.setSource(18610U);
    msg.setSourceEntity(203U);
    msg.setDestination(64729U);
    msg.setDestinationEntity(53U);
    msg.state = 44U;
    msg.flags = 158U;
    msg.description.assign("QHYWGYRZVGKEJGFERDIYNKWUKNIHJPXXNWYBODMAFAOCQWNTAOMFOVCBXBTMDWPZPFRAFSGFIMRUWNNQSCYMEXEIZHMLVKNQVDDLRLSPSUBIILZGOBSXMFCLUXCABVJRIGKOJRBCPCOELLQGAE");

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
    msg.setTimeStamp(0.911956659403);
    msg.setSource(20425U);
    msg.setSourceEntity(113U);
    msg.setDestination(36251U);
    msg.setDestinationEntity(30U);
    msg.state = 219U;
    msg.flags = 137U;
    msg.description.assign("JHJKNGHDZCDLMWITURINBQPHFIURXEDMDYFCIFOSEPPDIXZWDXWMOQPNLPUECGGETTZMWXHFWWKJKQZYHMVSVKJUABRUQ");

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
    msg.setTimeStamp(0.318672271737);
    msg.setSource(63574U);
    msg.setSourceEntity(218U);
    msg.setDestination(57071U);
    msg.setDestinationEntity(45U);
    msg.state = 25U;
    msg.flags = 134U;
    msg.description.assign("QPUQWGPZLFCFSINYTRKOYWURUELABDHLTABYIQYEFTGTLIBRMLZOCBDWHSGJAZRNBOSYFGIWFUEQKARSJJNDASBLXNAJNWCZWYOUXGNGQFBMKYOPMKNLTRMUNQUHRDICZCMYKXXCHOJQBCMVFJZNMTZDEDOVUPIZXAPVOHZIEGXRVAJTVATROWCEPXEJSAILCFEYMBFMXVSSKPWQGPXFVIELGQKPHK");

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
    msg.setTimeStamp(0.577257638531);
    msg.setSource(47353U);
    msg.setSourceEntity(94U);
    msg.setDestination(22567U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.385179818365);
    msg.setSource(48252U);
    msg.setSourceEntity(202U);
    msg.setDestination(40089U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.841984742732);
    msg.setSource(43783U);
    msg.setSourceEntity(145U);
    msg.setDestination(32519U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.92031784865);
    msg.setSource(10917U);
    msg.setSourceEntity(50U);
    msg.setDestination(42355U);
    msg.setDestinationEntity(86U);
    msg.id = 202U;
    msg.label.assign("YAAEYLJHHHJMGFKHZXUNVOCSVHGKVWPEKYLXUABLFXQCSZBZHXTSAEOINRQRTPXUFNOXMSMMWVIZ");
    msg.component.assign("QHTLTRBUFOTIGPDIEBQOSTMVPPSJVDUDUJWYJTVKQCHPNVJBXEIDAWLMIDXZNFVDRNTKUUCQWPQISMSIHOPRLHOWOGHOEDZJXMWJVHBYQXJNLACLJKWHAYDXSNRPUVXGEIABKFBQRRGVICANFXBNKSDCLSMSZIZZYPENRZGGZFAWXFEBLBCYLEXWKIGFACPTMZOYTOFKBUFQMCZKJTOK");
    msg.act_time = 42722U;
    msg.deact_time = 12694U;

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
    msg.setTimeStamp(0.312457529758);
    msg.setSource(13372U);
    msg.setSourceEntity(252U);
    msg.setDestination(58640U);
    msg.setDestinationEntity(62U);
    msg.id = 48U;
    msg.label.assign("ZFNOLENUGAYYDAVYCOXAZDKVMHGVUDCQWQLBKSIWRTECRXBBXQTPGJTAIOUCHYSULPTAGPZLEKFUNFUMRZJMDFQDUSAKWADWQPNZBJFXHLLJYFFWYQRXHFLXTUZAQOZWIHKXSYDOEOWPRQCNPEWAGCUKKBDOAUPMINKZMBENBKGNYLIKJZHQGMOCRELBSHVCTVZLJEPSFSQITOWGHJIGEVEPJFTOHRCDTYRCMJBJIVX");
    msg.component.assign("OJYFOMKIJGWTPFMSDVIUBSMAERQGXVVTWNSIUYMWONEPXWUVTFYCNFQZYZWLSEONTQCSKAANEHDLWFCXSELDHJYIZFYKOAUUXXLVEGAJAJHCPBQLDGWVPCKMEXYVQIQUFYARFZESQWKJTNPHJKPGTAXPZRQTBNXRKTGZPHOPZRCAUMIEDAVCZBCLMIIYBXJRHDRTDGCLRHJGBBSBBKIDVQKVOZGZOULDIWMRSJPNTHKQLDBMYOL");
    msg.act_time = 8862U;
    msg.deact_time = 6878U;

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
    msg.setTimeStamp(0.657321639447);
    msg.setSource(36649U);
    msg.setSourceEntity(143U);
    msg.setDestination(55978U);
    msg.setDestinationEntity(8U);
    msg.id = 228U;
    msg.label.assign("PGFWWEBVBMYUXTTOBHJSKMJLEFKJGJUQNHABMAYCTJPAXKBOZFWCLKDPIRTYPYYOMNAZGTQEQPSGROLWQSCHOVFS");
    msg.component.assign("MOAXSZNRYOEQJFBXUKMHRZRPIDVCAEBQTTYQKSHZOLIJDQHCSACSCJREOLQHBGDXVNPVSLAKJIAPNTDFCBUBRZHWOZSVSZLIPYWRFKYGCWKJRMFYMVGWBQJNSPTTXWNBCKMUWJRMNKMUPDBKLYGBANVEZEFPOEJAWGGHFUEGEVKTODYUQWTUGZXYFMNXUMALPHLE");
    msg.act_time = 891U;
    msg.deact_time = 35281U;

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
    msg.setTimeStamp(0.00127468857761);
    msg.setSource(29324U);
    msg.setSourceEntity(77U);
    msg.setDestination(5582U);
    msg.setDestinationEntity(52U);
    msg.id = 253U;

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
    msg.setTimeStamp(0.15235311578);
    msg.setSource(65058U);
    msg.setSourceEntity(102U);
    msg.setDestination(4948U);
    msg.setDestinationEntity(237U);
    msg.id = 183U;

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
    msg.setTimeStamp(0.547540608322);
    msg.setSource(10949U);
    msg.setSourceEntity(91U);
    msg.setDestination(18635U);
    msg.setDestinationEntity(80U);
    msg.id = 238U;

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
    msg.setTimeStamp(0.549293770419);
    msg.setSource(8881U);
    msg.setSourceEntity(204U);
    msg.setDestination(21014U);
    msg.setDestinationEntity(150U);
    msg.op = 114U;
    msg.list.assign("QDZOSDSPWKMHPYEUEJUKHHBYWVBFDLDSWQDVASACGUNXCMXCMKANDDGRHSAWTUIMRJLLFXTPHHATBMNRFPUPRFJYXMKSWMYWARXSPLAPZWFJINGBBMBDGEFOHUUYZBXAVOQTINRTLTYCVKKWOJSHQBROLGDRFPNGIZTOETVRHGXCZNCMHBZUVTQENSNOCPQFJJEZM");

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
    msg.setTimeStamp(0.34415687337);
    msg.setSource(8167U);
    msg.setSourceEntity(45U);
    msg.setDestination(52067U);
    msg.setDestinationEntity(122U);
    msg.op = 42U;
    msg.list.assign("NLEWBYUOIQNAQITEARDAXPQYRLUUDPQWDTCMYATXDWWHTAVKXUCBIFYBF");

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
    msg.setTimeStamp(0.411983130348);
    msg.setSource(38064U);
    msg.setSourceEntity(22U);
    msg.setDestination(63572U);
    msg.setDestinationEntity(223U);
    msg.op = 34U;
    msg.list.assign("TZSHDLXLMGGZMIGMBDQGZDTVGLAZEQWVRYHTLWUJVOEFUAHPZXWBBGHWSSDZKHIHNMFFWYOTPNYPOUUQCICTRBNJARRDBVJAFICRKEYICMPFOLEJXDOQCFZJBYKEKKTSUFMHJVYZHWVOKMINUMHXNCOSWLRPRRJBXZGVSAKLSCAIRDPFEHWLSWTEEGTZRTNPXVQYDUNVMLXCXLSNUNPBTYAOMJGQKVBIBGPFJIAWEDODUIPJYAQQNAYQK");

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
    msg.setTimeStamp(0.854255447307);
    msg.setSource(32596U);
    msg.setSourceEntity(12U);
    msg.setDestination(53401U);
    msg.setDestinationEntity(230U);
    msg.value = 55U;

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
    msg.setTimeStamp(0.370976002973);
    msg.setSource(35423U);
    msg.setSourceEntity(200U);
    msg.setDestination(58371U);
    msg.setDestinationEntity(78U);
    msg.value = 69U;

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
    msg.setTimeStamp(0.953956514038);
    msg.setSource(56801U);
    msg.setSourceEntity(183U);
    msg.setDestination(6005U);
    msg.setDestinationEntity(165U);
    msg.value = 183U;

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
    msg.setTimeStamp(0.632933290569);
    msg.setSource(43076U);
    msg.setSourceEntity(176U);
    msg.setDestination(31129U);
    msg.setDestinationEntity(250U);
    msg.consumer.assign("HYIVHRODMEFJUGIVKFJFCEQWHCVKFNRLB");
    msg.message_id = 55425U;

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
    msg.setTimeStamp(0.312910882972);
    msg.setSource(9982U);
    msg.setSourceEntity(10U);
    msg.setDestination(51636U);
    msg.setDestinationEntity(145U);
    msg.consumer.assign("KFBDVPFMJOHONNLDHFYKGMVLXFZXWTYXIBRWFEANWJFKEKZCJYJUGYSLDQGPSDNEWQVKYHZYHXAOXLBCMMVBRCWSSBMPNBSAIPVMOSOHNDGZIRFTEDURUAGDSXLRYTAOLACSTOBLBXKZGQAU");
    msg.message_id = 34557U;

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
    msg.setTimeStamp(0.38659790521);
    msg.setSource(64295U);
    msg.setSourceEntity(202U);
    msg.setDestination(17634U);
    msg.setDestinationEntity(159U);
    msg.consumer.assign("VYBEKLPYUURFDXXMXIJUTWYRZZTSRNTQDAMGECVMKITNOYBIEYKNEARGPDEPGOAJRGBBULSFSWXIRGOOCFHJDJEJBVOZYSFCSHKPMCAZBCWHXEDYEWXASQGOTISJJDEHMTYHLCSIHUZPLLAUUFQFQCJARYWNDNQBEPPYI");
    msg.message_id = 19771U;

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
    msg.setTimeStamp(0.569029294071);
    msg.setSource(16373U);
    msg.setSourceEntity(46U);
    msg.setDestination(34226U);
    msg.setDestinationEntity(158U);
    msg.type = 174U;

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
    msg.setTimeStamp(0.393041726009);
    msg.setSource(10552U);
    msg.setSourceEntity(157U);
    msg.setDestination(11296U);
    msg.setDestinationEntity(247U);
    msg.type = 220U;

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
    msg.setTimeStamp(0.89711011892);
    msg.setSource(57659U);
    msg.setSourceEntity(147U);
    msg.setDestination(25202U);
    msg.setDestinationEntity(68U);
    msg.type = 101U;

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
    msg.setTimeStamp(0.981273877021);
    msg.setSource(33381U);
    msg.setSourceEntity(40U);
    msg.setDestination(61978U);
    msg.setDestinationEntity(229U);
    msg.op = 58U;

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
    msg.setTimeStamp(0.222575808558);
    msg.setSource(27418U);
    msg.setSourceEntity(101U);
    msg.setDestination(24074U);
    msg.setDestinationEntity(159U);
    msg.op = 49U;

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
    msg.setTimeStamp(0.215147904496);
    msg.setSource(23117U);
    msg.setSourceEntity(28U);
    msg.setDestination(13313U);
    msg.setDestinationEntity(253U);
    msg.op = 175U;

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
    msg.setTimeStamp(0.032285513903);
    msg.setSource(32906U);
    msg.setSourceEntity(198U);
    msg.setDestination(5902U);
    msg.setDestinationEntity(34U);
    msg.total_steps = 131U;
    msg.step_number = 194U;
    msg.step.assign("LXZJADDWHYXEQFKPRICFLEVHTWATWQGRCKBGZFHQPVMXJOBFVJZG");
    msg.flags = 66U;

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
    msg.setTimeStamp(0.965208370253);
    msg.setSource(30693U);
    msg.setSourceEntity(19U);
    msg.setDestination(27891U);
    msg.setDestinationEntity(125U);
    msg.total_steps = 27U;
    msg.step_number = 186U;
    msg.step.assign("JGLJWXKOMNNUFAYB");
    msg.flags = 13U;

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
    msg.setTimeStamp(0.881209453861);
    msg.setSource(49034U);
    msg.setSourceEntity(69U);
    msg.setDestination(13229U);
    msg.setDestinationEntity(151U);
    msg.total_steps = 237U;
    msg.step_number = 142U;
    msg.step.assign("RWPOBAEDRUMZBTHYLPSHCEHKATSRENZZBBAWNUIBJRCXBQVMEWLYFPNLKKFDYMFGSJPLPOAJQZVLZSJLTEJHTQYJTEGLIIRULMTXCKPRNMCTNTSIDTECGWIRGVCXCD");
    msg.flags = 86U;

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
    msg.setTimeStamp(0.751959744872);
    msg.setSource(21210U);
    msg.setSourceEntity(76U);
    msg.setDestination(38723U);
    msg.setDestinationEntity(171U);
    msg.state = 71U;
    msg.error.assign("UKMBZNVFIJMAIAWCMIQRCYRPSSOBFQEOLALLJNYTHUYZSOQPNBZDPNIBQUHSZEAWGVMDDQOTBKXZTIDJVCGHSLIYOWFSEURNKJZIHSPYTMJAJEXOOBDOWLFPGTDDGXKECXZVGCGVVGQXPEAQFOFNDPODMLUEWBJYQWUQIYJLKECTCKYTKTPRESRHHKXVSKYPXBMCWHRFVPGAAULNYXWTXXZVIUBGLAJHJVFNDRFZBEMW");

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
    msg.setTimeStamp(0.640916103502);
    msg.setSource(6293U);
    msg.setSourceEntity(134U);
    msg.setDestination(30756U);
    msg.setDestinationEntity(111U);
    msg.state = 63U;
    msg.error.assign("VERROUIXGYHVARKGRBMEICHNPKELAVVPCKNXWZIBVZPXLPAECYMEMZHXIDUGLGKFWSAKXLOMBFCLQZNDBNSWVSEGVYUMHFDIDHMJFIJYOJLIXTWOSTZS");

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
    msg.setTimeStamp(0.228005482309);
    msg.setSource(27037U);
    msg.setSourceEntity(144U);
    msg.setDestination(26133U);
    msg.setDestinationEntity(191U);
    msg.state = 91U;
    msg.error.assign("UZAYORHAEUBNLTQCEMVAAVEFPFMCCWUFBPTQWHSOQHKHSUKIWSCYSYGDPPIPFORKJXZDDSESWJFLKHOLRSGDVJPOTIGUGJNVXJMYOVQMURKTGZICFOMHLWXERHNXDUZVYJDEAAHIXFCURIINPZHPZLRZTLTPSBLUSZZXDLTNMBBACBJEEWYJNNTGXXGGCIOLTJBCQPZWMJKYSFNUQYKCGKDQYFABWYIRDGVKRVNF");

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
    msg.setTimeStamp(0.532392132333);
    msg.setSource(15314U);
    msg.setSourceEntity(225U);
    msg.setDestination(22038U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.966889147307);
    msg.setSource(21866U);
    msg.setSourceEntity(24U);
    msg.setDestination(44981U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.136740981141);
    msg.setSource(54985U);
    msg.setSourceEntity(239U);
    msg.setDestination(56545U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.950515456753);
    msg.setSource(50899U);
    msg.setSourceEntity(21U);
    msg.setDestination(33033U);
    msg.setDestinationEntity(125U);
    msg.op = 226U;
    msg.speed_min = 0.983413726776;
    msg.speed_max = 0.903468381347;
    msg.long_accel = 0.905258485468;
    msg.alt_max_msl = 0.283628535032;
    msg.dive_fraction_max = 0.57269970094;
    msg.climb_fraction_max = 0.0937390397043;
    msg.bank_max = 0.485541818932;
    msg.p_max = 0.928971102772;
    msg.pitch_min = 0.126962218259;
    msg.pitch_max = 0.866417516938;
    msg.q_max = 0.95217914958;
    msg.g_min = 0.399505334875;
    msg.g_max = 0.74851693954;
    msg.g_lat_max = 0.811513826927;
    msg.rpm_min = 0.502642398727;
    msg.rpm_max = 0.075021223704;
    msg.rpm_rate_max = 0.200728216944;

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
    msg.setTimeStamp(0.961159923998);
    msg.setSource(20696U);
    msg.setSourceEntity(134U);
    msg.setDestination(44921U);
    msg.setDestinationEntity(159U);
    msg.op = 177U;
    msg.speed_min = 0.174816934079;
    msg.speed_max = 0.723716365879;
    msg.long_accel = 0.128194543062;
    msg.alt_max_msl = 0.55747847602;
    msg.dive_fraction_max = 0.794431436822;
    msg.climb_fraction_max = 0.614494727741;
    msg.bank_max = 0.542436511304;
    msg.p_max = 0.499679094391;
    msg.pitch_min = 0.334664240348;
    msg.pitch_max = 0.912443759813;
    msg.q_max = 0.0990094574602;
    msg.g_min = 0.967147402787;
    msg.g_max = 0.708625344938;
    msg.g_lat_max = 0.905185484497;
    msg.rpm_min = 0.629873877421;
    msg.rpm_max = 0.848849140729;
    msg.rpm_rate_max = 0.117193401223;

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
    msg.setTimeStamp(0.607621499022);
    msg.setSource(13032U);
    msg.setSourceEntity(114U);
    msg.setDestination(27090U);
    msg.setDestinationEntity(188U);
    msg.op = 180U;
    msg.speed_min = 0.122335003286;
    msg.speed_max = 0.432923633706;
    msg.long_accel = 0.485420257989;
    msg.alt_max_msl = 0.228591317233;
    msg.dive_fraction_max = 0.967838257023;
    msg.climb_fraction_max = 0.594606261297;
    msg.bank_max = 0.110951208413;
    msg.p_max = 0.989843032722;
    msg.pitch_min = 0.47360961255;
    msg.pitch_max = 0.747007941153;
    msg.q_max = 0.206656725488;
    msg.g_min = 0.152674015974;
    msg.g_max = 0.87851704598;
    msg.g_lat_max = 0.266532052431;
    msg.rpm_min = 0.743547361128;
    msg.rpm_max = 0.84535138588;
    msg.rpm_rate_max = 0.217130262425;

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
    msg.setTimeStamp(0.665109514936);
    msg.setSource(10716U);
    msg.setSourceEntity(167U);
    msg.setDestination(2289U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.571272713995);
    msg.setSource(11770U);
    msg.setSourceEntity(87U);
    msg.setDestination(37111U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.0188227515907);
    msg.setSource(4166U);
    msg.setSourceEntity(87U);
    msg.setDestination(58018U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.815989179389);
    msg.setSource(1048U);
    msg.setSourceEntity(224U);
    msg.setDestination(57784U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.867798090917;
    msg.lon = 0.844058024179;
    msg.height = 0.653014866042;
    msg.x = 0.487995335216;
    msg.y = 0.258599177623;
    msg.z = 0.700104294694;
    msg.phi = 0.177595740523;
    msg.theta = 0.434144691683;
    msg.psi = 0.726593412907;
    msg.u = 0.493531904849;
    msg.v = 0.849086033739;
    msg.w = 0.415908253476;
    msg.p = 0.98350322895;
    msg.q = 0.0148243419014;
    msg.r = 0.876080202455;
    msg.svx = 0.88858081255;
    msg.svy = 0.581987524298;
    msg.svz = 0.409480789483;

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
    msg.setTimeStamp(0.709410836824);
    msg.setSource(1217U);
    msg.setSourceEntity(153U);
    msg.setDestination(38428U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.167560065644;
    msg.lon = 0.822205528534;
    msg.height = 0.331811394217;
    msg.x = 0.041785397158;
    msg.y = 0.622107865583;
    msg.z = 0.405226973123;
    msg.phi = 0.665618687469;
    msg.theta = 0.51523271004;
    msg.psi = 0.737350403322;
    msg.u = 0.567925813095;
    msg.v = 0.622929743738;
    msg.w = 0.864000084092;
    msg.p = 0.025669156395;
    msg.q = 0.482279335086;
    msg.r = 0.282902897581;
    msg.svx = 0.0251592232102;
    msg.svy = 0.452717638569;
    msg.svz = 0.247945280867;

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
    msg.setTimeStamp(0.164265705224);
    msg.setSource(33169U);
    msg.setSourceEntity(121U);
    msg.setDestination(50071U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.540751671319;
    msg.lon = 0.49845160722;
    msg.height = 0.841881612999;
    msg.x = 0.819907846108;
    msg.y = 0.298642728125;
    msg.z = 0.888284978033;
    msg.phi = 0.989762676714;
    msg.theta = 0.679861835839;
    msg.psi = 0.316949030825;
    msg.u = 0.0136984793442;
    msg.v = 0.794558855772;
    msg.w = 0.741001958284;
    msg.p = 0.749060852764;
    msg.q = 0.17479687265;
    msg.r = 0.465475918291;
    msg.svx = 0.560942626189;
    msg.svy = 0.0331922781489;
    msg.svz = 0.162099894929;

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
    msg.setTimeStamp(0.468132350199);
    msg.setSource(53735U);
    msg.setSourceEntity(242U);
    msg.setDestination(36369U);
    msg.setDestinationEntity(49U);
    msg.op = 189U;
    msg.entities.assign("ZKTVGALCOWGOQQKPIROUQSNAHRCELPJYFBSRANPPALDXITYSTBCFABWVRZKYXUASMUVUTKBOYDOCZXPZOOIQJTJGAIYUEHTPRWBOEZUMJZLTANIMGZNNGMRYYWLKDVRDQWHNCCEJJEZNDEIJFFWGSLCVMUYSMSVDDLAEFKAKSQMKEUIVDHLOBKXZGHQIIQ");

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
    msg.setTimeStamp(0.250168029184);
    msg.setSource(33968U);
    msg.setSourceEntity(172U);
    msg.setDestination(21359U);
    msg.setDestinationEntity(9U);
    msg.op = 118U;
    msg.entities.assign("IMQJJGQEVVJRFSOFANNIXACJVUNSYGTDVBBVRJBZGXHDMTEFKYFCSSDJMTZUKORQXXCVPLVTZBELWPPNRJPIGBSGLOLEZMSTLWNMMHIPUTIERGDJOGIKXPXEUZCJDOESUAAIAWKBFEVGRWQTUKLEPHXQYRWKTQYLHBUOACTLF");

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
    msg.setTimeStamp(0.0546631851421);
    msg.setSource(45027U);
    msg.setSourceEntity(109U);
    msg.setDestination(34817U);
    msg.setDestinationEntity(132U);
    msg.op = 103U;
    msg.entities.assign("GEIKABBSYIJRVGCZOHMIGYOJMOFPKDGUVKYXWGFPKGTYBGPKJFNBZIAYIPWZPJHXUQQODGRNTLHRBNENXLITHOCXTLYFFKRVRLDRXAVUAUSNSRDUTXDTMESC");

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
    msg.setTimeStamp(0.851076032851);
    msg.setSource(39789U);
    msg.setSourceEntity(234U);
    msg.setDestination(6436U);
    msg.setDestinationEntity(108U);
    msg.type = 95U;
    msg.speed = 24901U;
    const char tmp_msg_0[] = {-84, -26, 69, 33, -99, 72, -123, -58, -105, 38, 80, -21, -20, 4, 10, -85, 11, 20, 106, -12, 78, -54, -93, 1, 80, -73, 58, 9, -12, -105, 120, 126, -43, -29, 32, -50, 55, -54, -8, 59, 85, 69, 66, -1, -2, -11, -72, 60, 85, -50, -97, 49, -117, -50, -120, 44, -44, 84, 122, 48, 98, -21, 69, 54, 28, 118, -36, -122, -105, 99, 94, 21, 13, -81, 91, -44, -57, -60, -22, 76, 99, 80, 104, -52, -72, 34, 118, -25, -104, 66, -21, 78, 4, 31, -125, 97, -121, -91, -20, -11, -106, 51, -70, -13, 49, -2, 0, 123, -52, 73, 69, 22, -90, 90, 78, -31, 118, -46, -124, 6, -87, -93, -9, -60, -2, -18, -91, 103, 92, -81, -105, -60, -104, 93, -60, -88, -99, 36, 76, 32, 116, 65, -23, -70, 54, -122, -71, -19, 43, 114, 32, 91, 120, 98, -61, 78, -85, -99, -125, -59, 13, -58, -19, 117, 41, -41, -34, -87, -13, -120, -128, -110, 83, -106, -11, 81, 3, 91, -122, -8, -120, -90, 64, 47, 15, -47, -14, -116, 31, -120, 62, 40, -83, -88, 33, 1, -37, -80, -115, -123, 8, -7, -35, 62, 83, 116, 78, -123, 94, -37, -117, -117, 28, 25, -15, 12, -51, 36, -103, -26, 65};
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
    msg.setTimeStamp(0.585264251342);
    msg.setSource(6533U);
    msg.setSourceEntity(84U);
    msg.setDestination(9025U);
    msg.setDestinationEntity(128U);
    msg.type = 89U;
    msg.speed = 14224U;
    const char tmp_msg_0[] = {-68, -33, -55, -104, 43, 14, 36, 17, 61, -119, -12, 102, 77, 52, 9, -105, 48, -89, -106, 6, -94, 69, -33, 90, -20, -69, -32, -91, -52, 51, -8, -96, 71, -94, -15, 98};
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
    msg.setTimeStamp(0.986995132719);
    msg.setSource(63517U);
    msg.setSourceEntity(107U);
    msg.setDestination(16295U);
    msg.setDestinationEntity(184U);
    msg.type = 168U;
    msg.speed = 52972U;
    const char tmp_msg_0[] = {-65, -52, -15, 27, 31, 14, -39, -7, -101, 91, -47, 47, 6, -61, 0, -106, 100, 13, -55, -78, -119, -27, 47, -78, 14, 120, -1, 107, -44, 115, -124, -72, 24, -44, -74, -91, 100, -44, -31, -7, 119, 11, -111, -122, -33, 64, 50, -101, 56, 47, 59, -6, 124, -9, -87, -10, -117, 59, 50, 34, 7, -95, 7, 23, -34, -67, -52, 14, -116, 41, -67, -68};
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
    msg.setTimeStamp(0.466212073156);
    msg.setSource(8662U);
    msg.setSourceEntity(214U);
    msg.setDestination(12330U);
    msg.setDestinationEntity(0U);
    msg.op = 206U;
    msg.tas2acc_pgain = 0.49287311432;
    msg.bank2p_pgain = 0.775550339182;

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
    msg.setTimeStamp(0.0904930201438);
    msg.setSource(23072U);
    msg.setSourceEntity(195U);
    msg.setDestination(4624U);
    msg.setDestinationEntity(223U);
    msg.op = 105U;
    msg.tas2acc_pgain = 0.298359350663;
    msg.bank2p_pgain = 0.976470576836;

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
    msg.setTimeStamp(0.773384035749);
    msg.setSource(50197U);
    msg.setSourceEntity(97U);
    msg.setDestination(54759U);
    msg.setDestinationEntity(154U);
    msg.op = 250U;
    msg.tas2acc_pgain = 0.999560093483;
    msg.bank2p_pgain = 0.920273557556;

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
    msg.setTimeStamp(0.781713904232);
    msg.setSource(55571U);
    msg.setSourceEntity(202U);
    msg.setDestination(51091U);
    msg.setDestinationEntity(58U);
    msg.available = 128092496U;
    msg.value = 65U;

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
    msg.setTimeStamp(0.391557383741);
    msg.setSource(4199U);
    msg.setSourceEntity(98U);
    msg.setDestination(25310U);
    msg.setDestinationEntity(182U);
    msg.available = 2848795217U;
    msg.value = 161U;

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
    msg.setTimeStamp(0.640890203873);
    msg.setSource(63716U);
    msg.setSourceEntity(107U);
    msg.setDestination(43269U);
    msg.setDestinationEntity(78U);
    msg.available = 744612448U;
    msg.value = 196U;

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
    msg.setTimeStamp(0.264099944242);
    msg.setSource(29668U);
    msg.setSourceEntity(9U);
    msg.setDestination(31746U);
    msg.setDestinationEntity(96U);
    msg.op = 0U;
    msg.snapshot.assign("XYCPTWEPRETQBOXDXMZDUUCBZ");
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 115U;
    tmp_msg_0.actions.assign("MZINDNPMKELPRABFGMRDFVIZYVQSCZXVHFKTLYOGEMZXJQROJTVSGMUECBECPOVGCBBUIUZOKHUKKANFUVTYTJXAEQGPCLGUSKWRYTBAHWDXXNSCQTOGAQQUZJHANQASEQJA");
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
    msg.setTimeStamp(0.696484683098);
    msg.setSource(22070U);
    msg.setSourceEntity(218U);
    msg.setDestination(39925U);
    msg.setDestinationEntity(100U);
    msg.op = 63U;
    msg.snapshot.assign("SXYAWZPCYEHQPNFIXHNALXKDIEURBRQUVJJEZPVDCIBEYSCQRALVXGPGUZPMLLYDJOSMTZFSRCJTIWXCLQMNKAIRCFFSQNJNQKOQKUPTCIEXBGKFPPIVAWSHWDTCTYZYOWUZBNNDHHDZVMZJWGMAEN");
    IMC::FormationState tmp_msg_0;
    tmp_msg_0.type = 27U;
    tmp_msg_0.op = 189U;
    tmp_msg_0.possimerr = 0.804853508627;
    tmp_msg_0.converg = 0.9658630208;
    tmp_msg_0.turbulence = 0.441880312334;
    tmp_msg_0.possimmon = 101U;
    tmp_msg_0.commmon = 88U;
    tmp_msg_0.convergmon = 250U;
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
    msg.setTimeStamp(0.926439687923);
    msg.setSource(57538U);
    msg.setSourceEntity(47U);
    msg.setDestination(56428U);
    msg.setDestinationEntity(130U);
    msg.op = 185U;
    msg.snapshot.assign("BQIBLZKZRMYJKHKWMNVQJBPWYFTZUXMCEOJPPUTGZHCNVEFVBEDUNTNQWORUVIBFEXELRDPDDWSSVIRTJOQHSKOSKPMLQAAHSNTOPOHLSWEKUBOANJYYKSIWUYTPJWJCISFDNIIZQJOZHXMANRXUNETVFGYXDGMGSMQPUARWAWVQZFJMZKRSOFBMQUARGYXHKXURGILYZFHDBAFXGIVCLEQLLTGCO");
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.797894111877;
    tmp_msg_0.lon = 0.62815849843;
    tmp_msg_0.depth = 0.239568227303;
    tmp_msg_0.roll = 0.690340993595;
    tmp_msg_0.pitch = 0.702944124692;
    tmp_msg_0.yaw = 0.811906114543;
    tmp_msg_0.rcp_time = 0.0769109880586;
    tmp_msg_0.sid.assign("CFTHQLURXQNCXXGDQUAKLEINJJZVMMTMAUDBNDXECRWBYEVMVGQSANVSURCWOOHWJQYZDJZPSRZHTSIYRANFVSVEEUKLFRDXACHTGPUFECODNWFNBZXQHJGUMJGIFGJFMCQBO");
    tmp_msg_0.s_type = 228U;
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
    msg.setTimeStamp(0.895771101969);
    msg.setSource(29391U);
    msg.setSourceEntity(171U);
    msg.setDestination(49902U);
    msg.setDestinationEntity(183U);
    msg.op = 41U;
    msg.name.assign("GTMVGJGGKZEBKHOSKKINXSYLXNFYZLSZOHWZXAHNPAOGRYLUPMXQSNWLZY");

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
    msg.setTimeStamp(0.358036964822);
    msg.setSource(38750U);
    msg.setSourceEntity(119U);
    msg.setDestination(8061U);
    msg.setDestinationEntity(243U);
    msg.op = 142U;
    msg.name.assign("MKEVEFWECWRLUUDPOICVFAJIBVWJDAJZHYZPNEQIRQYHXXWPLCKASMQKAHIBBDCOOSHAYZQPKOETSUIRJSORSXLKMLYKHEJKCZFUTXG");

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
    msg.setTimeStamp(0.867669737597);
    msg.setSource(35637U);
    msg.setSourceEntity(112U);
    msg.setDestination(29132U);
    msg.setDestinationEntity(9U);
    msg.op = 211U;
    msg.name.assign("AYXBOPRYKURKZHFKXBDLBQCMQRXVXYMVVSIEIMSFTHRTMTBSPYQNJJBQBTIZSVCHZUQBIQUGADDAXNCYKJAEPVMLRIGLPBAHFICWWMFJGODTQPPUITXSCCWNLCZJMMPJEWLEUHBGXVVRAAONKWOTDUZGXBIPZGAKKCLNYFRWETLOZJFLHEUSDUFYLFCNHPYHHXEQNSKTHENJOVWFNWRJZXDILFZKUMQUZMAOGIOOEYCTWVA");

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
    msg.setTimeStamp(0.351848845471);
    msg.setSource(20448U);
    msg.setSourceEntity(183U);
    msg.setDestination(23730U);
    msg.setDestinationEntity(15U);
    msg.type = 22U;
    msg.htime = 0.903240691358;
    msg.context.assign("LCNCFTRDWGNQOKVNKHVWIVDQIKPHYAFMJAKIZYYOSSWFLFERLEPTLSQCHLHWCPXQJIXDWNWJYJNGKPCXLACTNHUBUJPMTUUCLTDSTKRWKVDVMGDNLTQXAXFBG");
    msg.text.assign("KWBTFMGRXURIAJRBQZXHYSILFRPREXCHTBZQEUONFHZAAHKKWEUKMAXDSUVBGBVYYEKMIHLCXOTJGHDAPIVMTXWUWDVZJLLFCLRMFPXNRAGCZOLVJQUHRVWWUVNQJUDSZJTOPFHXEHJFBDRYEAPKIBSZLMWLAIAQJHPVOWEVGCTPZEASKBCSNIWYXECBONPLINZRWSOQCCFPSMGIEGMNOMKLKXJZTSGQGPGMTNBKFDSDYT");

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
    msg.setTimeStamp(0.209842946924);
    msg.setSource(58633U);
    msg.setSourceEntity(64U);
    msg.setDestination(20585U);
    msg.setDestinationEntity(244U);
    msg.type = 9U;
    msg.htime = 0.390446594861;
    msg.context.assign("YPBTDWPVASKWXUZGJDEBPNNPTGAKJELFVOFAVUXBPEKMWTXLUOQZOQKZSKAXJQDVFFGKMOBHLQUFLROGB");
    msg.text.assign("OTWCQMASNOPLUSMFEZPDLEYLUCCXPTRXPIGFHTQKPQCQWQSBVCCZQMRUZTSJJKTGKWVQJOBKLACMBPAJORUABRMJFOHQFRDRVWNXSNZNYGKABMBSLEKREUYTFXHEGNUVANNGZJRXLIGQUEKHUFNADSDRMPMOVBFPEDCJADFNXDVDWEWIPVTYHXVZHQHCYLPEXYOHJYKTBUGOIALMBD");

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
    msg.setTimeStamp(0.554776600308);
    msg.setSource(59978U);
    msg.setSourceEntity(69U);
    msg.setDestination(40703U);
    msg.setDestinationEntity(53U);
    msg.type = 129U;
    msg.htime = 0.0252261066673;
    msg.context.assign("TVJCFGBQQNQPYJLPNJDBOUSWVIXVREEQKAKSTAAAICWWKLHSKBRNOYVSHGZMUBZTDJKFETGYHLAYONU");
    msg.text.assign("AYAZCDSLQEGFYSXBCNVOPIACWHUPBDSKORLVXKFMVUFIUEVRMNKYDNRGXACIXVEHVZMMEXOSGTGTINIKZNGBYOVWWJFBCOWIHBCHWQLYYBFSNDAPFMIHFQRJEPEEYNHLLZKLSPRUPMOOHQUCJGPLJXDIFQKEIYDQMLRXATEZSTHKTHWUQYCPWSODAUBRZRSBPXKLMVZXJWOUPJZTTRVQMOFVNJESUBBUZQNYJDK");

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
    msg.setTimeStamp(0.819033318096);
    msg.setSource(5800U);
    msg.setSourceEntity(85U);
    msg.setDestination(52433U);
    msg.setDestinationEntity(24U);
    msg.command = 125U;
    msg.htime = 0.324356933738;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 95U;
    tmp_msg_0.htime = 0.684204400863;
    tmp_msg_0.context.assign("AFPIAFSYWFVNELJGCFRGURTMUURHTZOGBRSSXJLVZZFBHASEHCYHMTANALDADIGSDLVQDQDILXSEHAAOOLGZAXRBUWBPHXMKOROTPKZLYJBWASILTJNFJXKEUCKGSXFBOMJIWCQBOYTEVIMPVJQVJKTZCCCSXNVQTICGMNKK");
    tmp_msg_0.text.assign("BEANSEBTLWOIRTBLQXGPMEUHSIQSSPIDJIKMRDSFQGKVOPMNWWBXWLHCFKQUMVRCFTBKHJCOZVXIZMYDMNYWGQCRQKPOGVCRAQVTTBG");
    msg.msg.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.831467440939);
    msg.setSource(57952U);
    msg.setSourceEntity(134U);
    msg.setDestination(20100U);
    msg.setDestinationEntity(248U);
    msg.command = 145U;
    msg.htime = 0.145784163407;

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
    msg.setTimeStamp(0.559848293046);
    msg.setSource(1845U);
    msg.setSourceEntity(81U);
    msg.setDestination(62719U);
    msg.setDestinationEntity(232U);
    msg.command = 150U;
    msg.htime = 0.0154167337284;

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
    msg.setTimeStamp(0.434050671598);
    msg.setSource(14852U);
    msg.setSourceEntity(157U);
    msg.setDestination(52399U);
    msg.setDestinationEntity(140U);
    msg.op = 92U;
    msg.file.assign("HZNTMXADLNBJTMENCUGNBRSXTNKPVTPUAQPVT");

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
    msg.setTimeStamp(0.030649877191);
    msg.setSource(48765U);
    msg.setSourceEntity(150U);
    msg.setDestination(26566U);
    msg.setDestinationEntity(232U);
    msg.op = 116U;
    msg.file.assign("ZRYIEIEAZXXXKGWAZGMBUQSIKIUJLNRTLFOFMQWPLJFUVHYPLQODXSJCBJZZBNVXOLSDCDDSRMKVWCAEEPJUHQOYVZVIIFFRHEIYPXQRDLYCYCWAHFGLFSMRHFKMOIPLWTNWUSWLZJUBNDUQQMDGDEHYOBIZGFGNHAKCKPXKZVWKAD");

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
    msg.setTimeStamp(0.514120444682);
    msg.setSource(3195U);
    msg.setSourceEntity(90U);
    msg.setDestination(19984U);
    msg.setDestinationEntity(63U);
    msg.op = 130U;
    msg.file.assign("EKKWQXVZPEHYALTTOCHDBZRYXPFCNHZOIVDOBDBTAGNVECNUEFMZIJGXLVAUGYCHCNXSNAVITNDYZEJZYBWBWWGYXGPSYQWBSFGSVNGORMMJQPTWQDMPEJFNMOKAEINKDOHTLE");

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
    msg.setTimeStamp(0.490770994084);
    msg.setSource(38043U);
    msg.setSourceEntity(72U);
    msg.setDestination(60448U);
    msg.setDestinationEntity(93U);
    msg.op = 54U;
    msg.clock = 0.537917242724;
    msg.tz = -75;

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
    msg.setTimeStamp(0.387757170498);
    msg.setSource(64734U);
    msg.setSourceEntity(221U);
    msg.setDestination(21421U);
    msg.setDestinationEntity(188U);
    msg.op = 223U;
    msg.clock = 0.138877850702;
    msg.tz = -1;

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
    msg.setTimeStamp(0.203625170774);
    msg.setSource(61495U);
    msg.setSourceEntity(160U);
    msg.setDestination(30580U);
    msg.setDestinationEntity(78U);
    msg.op = 31U;
    msg.clock = 0.440149141507;
    msg.tz = -84;

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
    msg.setTimeStamp(0.92810038377);
    msg.setSource(23196U);
    msg.setSourceEntity(59U);
    msg.setDestination(14296U);
    msg.setDestinationEntity(157U);
    msg.conductivity = 0.872872674838;
    msg.temperature = 0.613378334249;
    msg.depth = 0.918838802708;

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
    msg.setTimeStamp(0.12267233985);
    msg.setSource(35053U);
    msg.setSourceEntity(149U);
    msg.setDestination(58757U);
    msg.setDestinationEntity(121U);
    msg.conductivity = 0.92718525465;
    msg.temperature = 0.542853180626;
    msg.depth = 0.707372434867;

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
    msg.setTimeStamp(0.868886543808);
    msg.setSource(11394U);
    msg.setSourceEntity(174U);
    msg.setDestination(8993U);
    msg.setDestinationEntity(232U);
    msg.conductivity = 0.892910921002;
    msg.temperature = 0.916414965357;
    msg.depth = 0.960252022435;

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
    msg.setTimeStamp(0.264051293098);
    msg.setSource(40542U);
    msg.setSourceEntity(180U);
    msg.setDestination(40756U);
    msg.setDestinationEntity(27U);
    msg.altitude = 0.357607603936;
    msg.roll = 39686U;
    msg.pitch = 16202U;
    msg.yaw = 38812U;
    msg.speed = -22600;

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
    msg.setTimeStamp(0.00786742625691);
    msg.setSource(36750U);
    msg.setSourceEntity(89U);
    msg.setDestination(1447U);
    msg.setDestinationEntity(250U);
    msg.altitude = 0.12542980939;
    msg.roll = 60623U;
    msg.pitch = 7044U;
    msg.yaw = 40308U;
    msg.speed = 18539;

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
    msg.setTimeStamp(0.171646602322);
    msg.setSource(44420U);
    msg.setSourceEntity(93U);
    msg.setDestination(14027U);
    msg.setDestinationEntity(147U);
    msg.altitude = 0.693401556945;
    msg.roll = 21214U;
    msg.pitch = 9761U;
    msg.yaw = 60425U;
    msg.speed = 5729;

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
    msg.setTimeStamp(0.522414775843);
    msg.setSource(11704U);
    msg.setSourceEntity(234U);
    msg.setDestination(30136U);
    msg.setDestinationEntity(51U);
    msg.altitude = 0.333454581978;
    msg.width = 0.572661260325;
    msg.length = 0.895396171259;
    msg.bearing = 0.348616512492;
    msg.pxl = 13895;
    msg.encoding = 125U;
    const char tmp_msg_0[] = {-45, 61, -4, 26, -49, 117, 94, 119, 100, -42, 91, 12, -116, 75, 104, -99, 24, -36, -39, 47, 41, 88, 103, -88, 90, 88, 45, -82, 42, -6, 40, -97, -126, 18, 12, 104, 21, -18, -60, -70, -31, 107, 97, -100, 91, -118, -111, -44, 123, -52, -54, -12, -8, 55, -26, -87, 108, -5, 22, 55, -4, 8, -34, 126, -70, 115, -45, -75, 74, -49, -35, -42, -104, -27, -46, -76, 79, 118, 34, -81, 93, 115, -63, -86, 18, -24, -45, -69, -65, 112, 85, 17, 15, 48, -57, 54, -109, 23, 39, -38, 0, -21, 99, -36, 107, -15, -19, -119, 126, 108, -117, 78, -48, -32, 41, -5, 18, 7, -110, -82, 48};
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
    msg.setTimeStamp(0.849337564297);
    msg.setSource(15252U);
    msg.setSourceEntity(25U);
    msg.setDestination(58815U);
    msg.setDestinationEntity(214U);
    msg.altitude = 0.330574573566;
    msg.width = 0.535171014218;
    msg.length = 0.152564329577;
    msg.bearing = 0.401476186213;
    msg.pxl = 24671;
    msg.encoding = 12U;
    const char tmp_msg_0[] = {-51, 15, 59, -28, 43, -32, 119, -49, 32, -52, -59, -65, -111, 30, -114, -17, -89, 1, 112, 29, 73, 78, -13, 7, -41, 118, 102, -19, 28, 34, -20, -99, 76, -116, -47, -93, 122, -41, -9, 50, 48, -119, -114, 6, 48, 0, 116, 108, -77, 35, 35, 53, -13, -8, 5, 49, -102, 31, 120, 87, 5, 84, 4, -89};
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
    msg.setTimeStamp(0.804856269977);
    msg.setSource(10311U);
    msg.setSourceEntity(72U);
    msg.setDestination(57530U);
    msg.setDestinationEntity(137U);
    msg.altitude = 0.293869585404;
    msg.width = 0.66530980874;
    msg.length = 0.302131134978;
    msg.bearing = 0.18315869936;
    msg.pxl = 23017;
    msg.encoding = 223U;
    const char tmp_msg_0[] = {-103, -111, 65, 61, 32, -71, -16, -1, -107, 111, -24, -63, -105, -59, 90, 95, -39, -60, -33, -85, 55, 39, 78, -24, -14, 111, -112, 74, -66, -79, -90, 122, 10, 3, 123, -120, 104, -88, 33, 40, -12, 8, 77, 122, -32, -41, 111, -9, 86, 105, -68, -122, 27, 105, 22, -70, 37, 31, -76, -73, 21, 82, -63, 123, -67, 33, -124, -59, 30, -93, 119, 82, 21, -17, 105, -47, -5, 87, 3, -35, 42, -24, -14, 7, 81, 26, 14, -39, -3, 39, -101, -23, 124, 17, -106, -28, -49, -93, -49, -15, -13, 95, 100, -49, 78, 113, -105, -65, -25, 41, 2, -125, -44, -67, -80, -102, 97, 3, -8, -23, -8, -18, -119, -47, 41, -100, 99, 115, -51, 13, -39, 21, -125, -21, -54, -35, 0, 90, 123, 83, -87, 65, -76, 50, 101, 46, 14, -27, 59, 82, -119, 38, 120, 48, 102, -41, 72, -86, 125, -21, 58, 40, -15, -45, -36, -92, 25, 55, -15, -81, -9, -31, 112, 54, -102, -75, -100, 69, -36, -114, 20, -123, -59, 42, 28, 57, -46, 26, 111, -13, 88, -127, 72, -57, 26, -108, 5, -37, -51, -38, 108, -6, 39, -77, -55, 33, 42, 98, -38, -98, 50, -121, 71, -120, 2, 0, -92, 10, 107, -25, 2, -40, -126, 52, -118, 56, -6, -57, 63, -104, 49, -93, -83, -95, 107, 86, -11, -95};
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
    msg.setTimeStamp(0.961442869105);
    msg.setSource(23329U);
    msg.setSourceEntity(34U);
    msg.setDestination(34517U);
    msg.setDestinationEntity(158U);
    msg.text.assign("KPCYNGJHPKNZSJDYQXOZMJITXKBNERWQKXBTGPBSRMUJDJGWZRCPYIXPQERVLHMAMQPROZLZATMIQJESUKERUJWBOMJPBCFMAHDFXTOLDUQOULMQHGHTKVLVLWCGCEXCZWRWWJAKAIGFGWYGUSYASTIMWQTVUDBFYNWTZBQDBDYZERCSZUYXSPVERTIVGUVAHYCVYPIRLAVDNOJ");
    msg.type = 125U;

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
    msg.setTimeStamp(0.396541723101);
    msg.setSource(51338U);
    msg.setSourceEntity(254U);
    msg.setDestination(17754U);
    msg.setDestinationEntity(97U);
    msg.text.assign("AWDTPKCSUAIEGUVEIZOKJBFMESIVTYFDKTZOPNFBSRLICRHJVKLQQMVAUQZGRQOWMUJAZPNRAGJEDDLQXFHYYTJJVDLWPEGJZNCRLNAONUHRNLDSOUIGLPFXYXTWKPRBTGSVWXLCWSKRMBAXPNHVCACUQJQUPEBQXITBMISCDDUKBHOYKIJWBXOIMGVXPENSCPNYLCETMBEKYFMWFVDQHODHHZHBUQHSMRZRKILFZJXGOGZOXWZ");
    msg.type = 196U;

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
    msg.setTimeStamp(0.253987757498);
    msg.setSource(25856U);
    msg.setSourceEntity(226U);
    msg.setDestination(52975U);
    msg.setDestinationEntity(129U);
    msg.text.assign("CDOTIMNODKRPQVCGBEWKGFNDTAKBHFUBORSWIIMATTRKPVQGUKVLMUWPQNYJWSGURPSCOYCVHPVXBQGRQIHGGGMKVEUNXQJSAUXJCEETGATLUPFVZFYMVKWODXAEAHESZJICKOFPTFCRHGQBULSDJMZSLMEPOXCFRTNXIJBFUSKZINDQJALQUAXDEQMBMCEPIPVWDZIXWTHYAFLDBRXVYYTHCZYSSYHMNBNRFZIJZOLZWWHXK");
    msg.type = 38U;

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
    msg.setTimeStamp(0.435109245346);
    msg.setSource(53441U);
    msg.setSourceEntity(173U);
    msg.setDestination(5778U);
    msg.setDestinationEntity(47U);
    msg.parameter = 93U;
    msg.numsamples = 203U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 49167U;
    tmp_msg_0.avg = 0.168879564113;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.293569424003;
    msg.lon = 0.445940945445;

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
    msg.setTimeStamp(0.163035514858);
    msg.setSource(45534U);
    msg.setSourceEntity(175U);
    msg.setDestination(6071U);
    msg.setDestinationEntity(187U);
    msg.parameter = 188U;
    msg.numsamples = 7U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 23977U;
    tmp_msg_0.avg = 0.442111043429;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.340954563749;
    msg.lon = 0.92683513628;

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
    msg.setTimeStamp(0.779548197041);
    msg.setSource(37645U);
    msg.setSourceEntity(241U);
    msg.setDestination(1290U);
    msg.setDestinationEntity(163U);
    msg.parameter = 22U;
    msg.numsamples = 203U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 37430U;
    tmp_msg_0.avg = 0.297696559094;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.731308305017;
    msg.lon = 0.732458820081;

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
    msg.setTimeStamp(0.163754096898);
    msg.setSource(61841U);
    msg.setSourceEntity(198U);
    msg.setDestination(53769U);
    msg.setDestinationEntity(234U);
    msg.depth = 43237U;
    msg.avg = 0.705478307765;

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
    msg.setTimeStamp(0.220465012515);
    msg.setSource(24124U);
    msg.setSourceEntity(26U);
    msg.setDestination(65533U);
    msg.setDestinationEntity(196U);
    msg.depth = 51931U;
    msg.avg = 0.643075664486;

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
    msg.setTimeStamp(0.705281844794);
    msg.setSource(7235U);
    msg.setSourceEntity(202U);
    msg.setDestination(41756U);
    msg.setDestinationEntity(182U);
    msg.depth = 53625U;
    msg.avg = 0.957143977425;

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
    msg.setTimeStamp(0.933606142054);
    msg.setSource(34607U);
    msg.setSourceEntity(127U);
    msg.setDestination(8560U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.397223831315);
    msg.setSource(5792U);
    msg.setSourceEntity(249U);
    msg.setDestination(36224U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.234411137107);
    msg.setSource(54696U);
    msg.setSourceEntity(218U);
    msg.setDestination(4717U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.686187309912);
    msg.setSource(42633U);
    msg.setSourceEntity(25U);
    msg.setDestination(29466U);
    msg.setDestinationEntity(69U);
    msg.sys_name.assign("EXCUZDMJYZAEPIGVTSYVQYHOPUOFQLELVTLFIOGWKHZRWYMNVTIDBADSKGDZRBJBWQUJIQKMJUUCDQBOTCCAHAFVWMEPLPOXWHPZJMGKFEXZLQITMHQVJVLGXKOEHNR");
    msg.sys_type = 88U;
    msg.owner = 32115U;
    msg.lat = 0.313493757012;
    msg.lon = 0.240546006034;
    msg.height = 0.238171943465;
    msg.services.assign("HFTWIGNFVKEECZTQPBHFJRLSVUIZIGMIHORPKGJQGFCTMZSVIVSPHHXYACHQFRDBJBQTMNHOQUKVYKHPGLGMSSNVNIACOYXKUNSGQFACEVGMXDODXPDRDLYJHGWEYATZDZVUUYJNFWOXROGJUXIUBJTKPPPINXWPDXWOVZCZLCJDRZ");

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
    msg.setTimeStamp(0.631768598666);
    msg.setSource(43330U);
    msg.setSourceEntity(247U);
    msg.setDestination(44137U);
    msg.setDestinationEntity(204U);
    msg.sys_name.assign("LXXZWTXRBEZEWCEKKYAGJXZQTIWGRNCSUVPVPMOOLDWFYJXROAHDQBDTRFHFBXC");
    msg.sys_type = 234U;
    msg.owner = 22797U;
    msg.lat = 0.321073559872;
    msg.lon = 0.373357513053;
    msg.height = 0.0513786416558;
    msg.services.assign("MLEHKBTIXQOYGOSIXBPWIJVTYRFYVQQXUQWMJPRJKALXSEOWQMDKCEYLSU");

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
    msg.setTimeStamp(0.442447183355);
    msg.setSource(7101U);
    msg.setSourceEntity(29U);
    msg.setDestination(49795U);
    msg.setDestinationEntity(230U);
    msg.sys_name.assign("HICIKHWDHASWOJHEMLEJHZKXTNIYQVBDNTVISKOJEDRFAPCBXCZLRGTZEQMNTOOLAUCBPRDSACYOROWTDQWVYKMABBGHBCMSPFUJQWLENDLLFDQCZZCIGZLGARLXBLVOXGYXWPFKGFVYGVBNQXIWRUPYQPFYLSNUJCPREJUOMEQYPWKRFMNUVYSBUJWPMZPGGTCTNSVKMQUTJMIVDZHIXWASFZEUNYHQMTUS");
    msg.sys_type = 167U;
    msg.owner = 6301U;
    msg.lat = 0.525434733977;
    msg.lon = 0.253780070575;
    msg.height = 0.235978631387;
    msg.services.assign("JVBKQQYDUWZFTSJRFSALEWNHVERHZIDMCZKGYBPIMYYTGDPEIUQCFGJCJBSFQBTAINBETEBSXISSCOKPAWTAEHZKRBFYSCBRAZGLXGUQPUFFYXKEDOUUHOXZZAVQAVBNIRM");

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
    msg.setTimeStamp(0.897749860246);
    msg.setSource(43740U);
    msg.setSourceEntity(92U);
    msg.setDestination(32946U);
    msg.setDestinationEntity(34U);
    msg.service.assign("NHJCZHPEXSFDBKBNJKIGIGSRZAWGCVARELXICLAGSMTJDVPHPRMRGMJEGYIBBQVBFEXJSQZJZFDRLFYMXOGWXZAXHWYBPEMSWCGWDHPKPMVORHJODYOQE");
    msg.service_type = 83U;

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
    msg.setTimeStamp(0.137214686195);
    msg.setSource(12859U);
    msg.setSourceEntity(95U);
    msg.setDestination(21184U);
    msg.setDestinationEntity(254U);
    msg.service.assign("RZLLDFSTYCRPGYLKCFYKGJBFQSIHSZLZDJZUGZHVRCAPBXYHWEFWEBMIKSDYOEUQRTUDSSMPDONDJMAHJFYBXOGOMBNGHZQFCTUJYANQVJL");
    msg.service_type = 183U;

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
    msg.setTimeStamp(0.634113638764);
    msg.setSource(30918U);
    msg.setSourceEntity(162U);
    msg.setDestination(19288U);
    msg.setDestinationEntity(125U);
    msg.service.assign("MRGNUPGYTMDWBTVSXCXZZICUECDHOQZZCUBMHNWOFGWCKRVVBPBLDKPTAOBMVCXAQGJJBFWEZEHYJDOGWORLDVKTCRSQQMHEUZQJNXTZXFSNKQGIKIPLSIUSOIBKSEGQPMFMWZASCRTAIJYYFNHNDYUQJGKEEMGCNHXVKILVDALXPIXN");
    msg.service_type = 9U;

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
    msg.setTimeStamp(0.562098328047);
    msg.setSource(55209U);
    msg.setSourceEntity(143U);
    msg.setDestination(40769U);
    msg.setDestinationEntity(82U);
    msg.value = 0.0360114692793;

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
    msg.setTimeStamp(0.788841152306);
    msg.setSource(58618U);
    msg.setSourceEntity(175U);
    msg.setDestination(15394U);
    msg.setDestinationEntity(138U);
    msg.value = 0.226336278195;

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
    msg.setTimeStamp(0.45404112995);
    msg.setSource(54051U);
    msg.setSourceEntity(46U);
    msg.setDestination(26563U);
    msg.setDestinationEntity(7U);
    msg.value = 0.259594250756;

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
    msg.setTimeStamp(0.819089573384);
    msg.setSource(15229U);
    msg.setSourceEntity(176U);
    msg.setDestination(9580U);
    msg.setDestinationEntity(186U);
    msg.value = 0.258972865867;

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
    msg.setTimeStamp(0.506243678625);
    msg.setSource(45847U);
    msg.setSourceEntity(109U);
    msg.setDestination(48057U);
    msg.setDestinationEntity(90U);
    msg.value = 0.5235756045;

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
    msg.setTimeStamp(0.973126643755);
    msg.setSource(13221U);
    msg.setSourceEntity(39U);
    msg.setDestination(40944U);
    msg.setDestinationEntity(181U);
    msg.value = 0.964685815106;

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
    msg.setTimeStamp(0.70980178761);
    msg.setSource(28300U);
    msg.setSourceEntity(126U);
    msg.setDestination(38642U);
    msg.setDestinationEntity(163U);
    msg.value = 0.663228910437;

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
    msg.setTimeStamp(0.164259974374);
    msg.setSource(8745U);
    msg.setSourceEntity(58U);
    msg.setDestination(64820U);
    msg.setDestinationEntity(42U);
    msg.value = 0.233481604155;

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
    msg.setTimeStamp(0.644036387353);
    msg.setSource(62835U);
    msg.setSourceEntity(98U);
    msg.setDestination(4060U);
    msg.setDestinationEntity(62U);
    msg.value = 0.750498490653;

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
    msg.setTimeStamp(0.988672888877);
    msg.setSource(62091U);
    msg.setSourceEntity(104U);
    msg.setDestination(49254U);
    msg.setDestinationEntity(61U);
    msg.number.assign("KOILODUPJTPXEMDYXXBMDIGUIWQMKYGMUABOWQZYXFAYHJRWAHRJGGHOLRJBNBFCKKWAFVMEQZGICUBCAEQPJBFZDFBIUEMTZVZVERSWFSNDAEAFMFMZQGLPNLZCRXHQYOVWRJWDGZTDJNZKYHVERBVOJGJUMTYVDRLOOWKVPKRSHLQGYU");
    msg.timeout = 39403U;
    msg.contents.assign("WCGAJLKDNMUPVDHQSXYBFSESBQZNTWMQYVDRJXTCOGIJYHZLDILHVFZKBOEFURPZSYUWPUJTCAPTKRKEKIKIGZVGJFWBUHNJBNCNYRHRZLYFGTSXCVOEHIPVSDLUPXATNGFOFRSBLAIMUJGAQTGQTOOKXKGAEOXCHQISDDVAGMOANUWVWDICJMEYWRQOLLKBFTHZMXECSXLAZRYRHI");

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
    msg.setTimeStamp(0.849070717906);
    msg.setSource(37733U);
    msg.setSourceEntity(94U);
    msg.setDestination(20838U);
    msg.setDestinationEntity(96U);
    msg.number.assign("VXGXBRPPWLLSIDBMKRKXKRFRDBTDWHHSWHYVJHTZGCNKGMSJKGVZKTGVZQCSALNISZVQQMDLJYITZMELDYTURZYAFNZXDMNCDQNOXRLBNUZAOFFMIBRHKWFOPOPSINMLYEQMJUXVPHIAVHUVJOBG");
    msg.timeout = 317U;
    msg.contents.assign("UCBXNAHMDIKZHWCGDBXQHSYZWDQPGUNYVKNNEYP");

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
    msg.setTimeStamp(0.0158351864632);
    msg.setSource(12522U);
    msg.setSourceEntity(236U);
    msg.setDestination(28823U);
    msg.setDestinationEntity(207U);
    msg.number.assign("FLCGAOTFHPBUDKFICTYSUTZLZQSHGMFKLSUWIVLZYLWPDUBKQXYMKMLWYBTIIMAROPNRXNYMZXLKWGPMJCQVXHNENWAMRFDZMQKHMWJHZSEXQVVVPKRQDHCTFNTBVJPAXBIKCJHSCARWPBMOEPEQJFTWGZGEUNWHSGRVTZIYLAJOYIOVPOOAOHNXDNRXKBDQISDFTCVCLQOFLGGYQJJECZDPKSZFJAEBISEEARW");
    msg.timeout = 24983U;
    msg.contents.assign("SIIVMSKDFQRWCAZMOULHPLLXVQLWJVNTHPUCNKZONBCGFZWBBQPUKTDFYGJOGJWPOTSKTZCSOYZGMDBJYYXXGXBXARQAMNKXCHCIXDEZIFORZEJIEJJVNPOOWPHSHHJKEGPYPTSUXBIWAYCECVNNYBQENWWQEKZQSLTAULXFSFADEEMDMKSPADHMRI");

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
    msg.setTimeStamp(0.856500818711);
    msg.setSource(55104U);
    msg.setSourceEntity(72U);
    msg.setDestination(12630U);
    msg.setDestinationEntity(5U);
    msg.seq = 1439694285U;
    msg.destination.assign("GDUNZUGHUAPYISVLGMOPWVCDXDJHGAVRXQALSPTZMWZYVETOSRZHBKUWKPDXEJMCQITDOGYZOZQEVNGTYWVGMIDUNBBCTFMGBHIAZQYQNQBOERPFLOWFKKAYECGRQTFJPPIOAPKKJUWRHXPSTKNCXRBJHLCRBJIAUZXMKDIAETZWIDCWMESAWMYXPYVSJCIFNJK");
    msg.timeout = 7384U;
    const char tmp_msg_0[] = {75, -97, 96, 7, 116, 99, -71, -62, -43, 88, -14, 116, -73, -74, 91, -39, 81, -116, -119, 6, -27, -20, 119, -15, -52, 10, 22, 102, -5, -76, 90, 24, -67, 25, -123, -14, 126, -52, 21, 61, 68, 108, -4, -85, 54, -57, -123, 25, 35, -125, -4, 68, -49, 87, -127, -119, 42, -77, -42, 126, 113, 111, -97, 18, 95, -67, 86, 68, -110, -118, 96, -88, -70, -49, -88, 55, -80, -39, 89, 87, 88, -71, -116, 16, -121, -89, -54, 13, 22, 14, -124, -73, -40, 79, -35, 86, -110, 73, 70, 123, -19, 112, -35, -57, 16, 23, 4, 100, 99, 1, -56, -22, 90, 107, 21, 35, -47, -98, -47, 100, 2, 83, 124, -92, 25, 30, -18, -66, -74, 30, 106, -4, -85, 29, 81, -8, -99, -99, 92, 13, -123, 117, 77, -104, 46, 57, -57, 47, -86, 125, -122, -89, 90, 25, 63, 124, -49, -59, 101, -94, -1, -117, -12, -31, -126, -16, 93, 83, -27, -37, -117, 23, -29, -95, 38, 6, 116, -44, 105, 12, -17, 22, -56, -109, -79, 118, -4, 15, 104, -15, 34, -6, 7, -24, -16, 39, -20, -22, 115, 5, 39, 126, -67, -11, 10, 41, -4, 91, 119, -109, -82, 41, 64, -88, 53, -128, -7, -58, 71, 16, -100, -99, 89, 16, -84, -112, 79, 119, -77, -32};
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
    msg.setTimeStamp(0.231762687135);
    msg.setSource(56585U);
    msg.setSourceEntity(167U);
    msg.setDestination(3918U);
    msg.setDestinationEntity(23U);
    msg.seq = 1209416414U;
    msg.destination.assign("OUKVDTYJCMNPAYSDJ");
    msg.timeout = 7964U;
    const char tmp_msg_0[] = {-35, -45, -73, -109, -50, -102, 23, 32, -94, 53, -88, -3, -7, 56, 113, -19, 91, 48, 19, -4, 48, -100, 79, -9, 103, 73, -40, 43, 95, -55, -113, -14, 115, -111, -5, 9, 6, 87, -1, -38, 110, -98, -31, -6, -80, 23, -49, -17, -79, 73, -69, -8, 43, -121, -82, -51, 25, 65, -126, 48, 47, 81, -64, 107, -127, 61, -29, -40, 13, -117, -23, 30, 15, -62, -76, -78, 85, -24, 29, -91, -118, 73, 63, 95, -107, -54, 82, -128, -76, -40, 5, -72, 94, 82, 93, 8, -56, -47, -33, -91, -95, 80, -21, 95, -12, 3, -83, -72, -119, -83, 85, 63, -107, -50, -44, 108, -91, 33, -39, 16, 58, 49, -104, 110, 91, -16, 113, 24, -36, -111, 48, -51, 59, -83, 16, 57, 29, 20, -44, -122, -107, 66, -27, -47, 22, -93, -15, 111, -39, 113, -48, -15, -67, -39, 105, -112, 76, -99, 31, 57, 30, -37, -125, -85, -117, 117, -80, -98, 96, -92, 18, -6, -72, -98, -99, -5, 32, -84, -43, 51, 49, 42, -83, 83, -29, 126, -89, 60, -25, 60, -63, 90, 6, -51, -28, 53, 86, -9, 18, -17, 98, 25, -126, -58, 76, 39, 112, 59, -84, 65, 98, 40, -70, 97, 78, -113, 57, -58, -84, -81, 98, -6, 123, 108, 77, 119, 72, 117, -88, 114, 109, 68, -120, 76, 22, 23, -88, -37};
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
    msg.setTimeStamp(0.731759367655);
    msg.setSource(52673U);
    msg.setSourceEntity(216U);
    msg.setDestination(26105U);
    msg.setDestinationEntity(123U);
    msg.seq = 1671600369U;
    msg.destination.assign("IMGZYWJBANHELHNGGRYQHRJBSLICPSSCMZNGAEMFOQWAREQJRIIADYUPDZTWJBDGVWDUZZIEZOKNGCKIGMCZXXCTYJXRELQLFCWOWTBFZICSJUSBTTYUJGXPVQKMOYKDMQDJEWFHLKULXTTTDOPPOUYUSKRRVPXSFHHPFFHDZUSDBNIVPLKQNAWQXEYOXRKDQJINBIFOFMMLBHPWVZAAVKFMNCPRCWHEYOQXTAVYTSSNVR");
    msg.timeout = 37107U;
    const char tmp_msg_0[] = {79, -64, -127, -26, 48, -23, 125, -8, 67, -97, -87, 110, 7, 63, 121, 98, 18, -8, 55, -103, 68, 51, 40, -106, 121, 123, -99, 79, 59, 49, -89, 104, 30, -4, 19, -60, 27, 50, 115, 9, -108, -105, 33, -39, -45, 50, -6, -6, 0, -56, -99, 119, 62, -61, 56, 56, 30, -69, -33, -126, -76, 78, 113, 116, -128, 67, -3, 3, 101, 49, -46, 30, -118, -54, 30, -39, 8, -125, 50, 6, 113, 44, -2, -83, 106, 106, -66, -100, 22, -13, 31, 3, -8, -24, 57, 89, -86, -48, -48, -23, 59, -38, -61, 84, -25, -108, 102, 117, -71, 97, -36, -87, -35, -9, 26, 70, -27, 123, -125, -120, 118, 115, -39, 59, 76};
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
    msg.setTimeStamp(0.522144423134);
    msg.setSource(46362U);
    msg.setSourceEntity(200U);
    msg.setDestination(35269U);
    msg.setDestinationEntity(202U);
    msg.source.assign("LYJLFGKXCSNMSJSDAHVVKKUVGBIALHMYQQWEYZDLDBZOWIJTGIGHREXCRBCOSCSNRTMPKGJYKBRZKZJAESOSMOM");
    const char tmp_msg_0[] = {43, -103, -115, -45, -50, -45, 117, -31, 39, -91, 97, -19, -73, -125, -11, -7, -102, 116, -85, -4, 83, -4, -34, -110, 70, -15, 59, -100, 116, -20, -85, -104, 27, 101, -106, 118, 102, -4, -127, -116, -38, -113, -30, -34, -120, -104, 6, 9, 122, -92, 113, -97, 106, -5, -69, 80, 113, -113, 27, 61, -23, 23, -128, -18, -13, 97, -77, -15, 1, -88, 5, -74, 90, -84, -35, -93, -19, 120, 25, 54, -97, -26, 63, 26, 88, -114, -27, 110, -61, -90, -112, 26, 82, -34, -107, -32, -49, -70, -90, -53, 0, -46, 126, 8, -44, 17, -113, -95, 13, 2, -59, 110, -4, 74, 44, -87, -6, 19, 7, -90, -59, 9, 54, 20, -84, -106, 51, -45, -6, 121, -16, 18, -37, 65, 2, 48, 102, -3, 102, -17, 98, 16, 107, -115, -121, -100, 125, 70, 34, 68, -31, -31, -62, -103, -37, 64, 30, -90, -88, 18, 15, -70, -9, -69, 71, -74, -62, 61, -98, -42, -80, 75, 34, 19, -50, -91, -44, 108, 11, 82, 58, -111, -18, -11, 121, 76, -29, 54, 46, 95, -76, 5, 115, 60, 35, -5, 115, 85, -60, -26, -110, 13, -60, 115, -3, 109, 114, 73, 119, -43, -53, -8, -77, 79, -109, -127, -99, -33, -21, -71, 38, -58, -23, 15, -50, 21, 63, -13, 45, 110, 60, 126, 90, -120, -112, -112, 60, -100, -99, -124, -76, 92, -107, 113, 116};
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
    msg.setTimeStamp(0.796308903781);
    msg.setSource(34050U);
    msg.setSourceEntity(99U);
    msg.setDestination(17847U);
    msg.setDestinationEntity(162U);
    msg.source.assign("FPHSVPJPOJKSTKVMHLNJAUUYKIJDDTZQQFSDXOWDGIMXKDTRZELFJPQVRRHAQEWNUHKVCWLYAUNXBCEEWEUXYKQRIBFZLGIEZQHQVAMIUFOHYUSJGYFTMGCFHAKWGCSTDPYRMQJDSRMIOTAZXTJNZGWZAUT");
    const char tmp_msg_0[] = {47, 53, 44, -42, 26, 72, 119, 85, 65, 86, -1, 68, -40, 69, 52, -26, 63, 70, -114, -107, 52, 0, -123, 7, 15, -65, -49, -69, 6, -119, -107, -22, 88, 69, 95, 126, -59, 10, 50, 39, 93, 57, -60, 65, 106, 98, 7, 104, -112, 91, 68, 84, -122, 122, -33, -89, -11, 95, 21, 90, -76, -117, -84, 7, 119, 74, 14, 29, -64, -52, -115, 9, 16, -78, -106, 121, 18, 74, -31, 99, -72, 101, -97, -60, -2, -96, 118, -58, 116, -99, -56, -91, 51, 72, -8, -24, -60, -94, -40, -75, 33, -60, -20, 101, -60, 16, 2, -88, -11, -53, -101, -62, -29, 104, -50, 51, 54, -72, 48, 97, -9, 47, 95, 38, 32, 33, 32, 93, 85, 37, 29, -90, 72, -99, -59, -86, -31, -97, -91, -73, -1, -126, 55, 118, 14, -52, -31, 98, 100, -34, -128};
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
    msg.setTimeStamp(0.00820344626787);
    msg.setSource(61162U);
    msg.setSourceEntity(183U);
    msg.setDestination(1880U);
    msg.setDestinationEntity(42U);
    msg.source.assign("IWHTBXIZVBNOCAKSYIJLKDKKCLGEKLRTLWCVPXDFYCEJNBERGGRBUFRKOHQFCCUTOPMDZTNVKCNMUWSPBZPVGUMJMEOWJHYOLQSYQAKOUYHZXEBHNGWTJVDIHAKWFNVHOEGHLOXSDZJVSYDBQWFARKQIMAIBMNVNASFXYFAU");
    const char tmp_msg_0[] = {-21, -107, -27, 32, 12, -100, -6, -126, 28, -80, -69, 1, -53, 85, 29, 96, 67, 57, -1, 121, -52, 10, 93, 34, 24, -31, 95, -17, -104, 63, 78, -56, 101, 106, 36, -20, 121, 99, -74, -72, -24, -116, 112, -31, 115, 114, 65, -114, 54, -68, -89, 105, -93, -64, -42, -77, -3, -54, 122, -110, -89, -107, 75, 47, 88, 45, -37, -86, -122, 79, 73, 30, 113, -28, 58, -42, 58, 41, 22, -39, -50, 115, -80, 12, -45, 1, 111, 124, -104, 21, 106, -126, -93, 42, -54, 58, 63, 83, 25, 125, -82, 47, 70, -98, 81, 23, 112, 104, -67, 72, -53, 125, -48, 52, 84, 2, -105, 114, 117, -87, 24, 108, 0, 25, -99, 13, -82, -21, -36, -61, 107, -6, 35, -66, 52, -99, 105, -56, 78, -116, 40, 27, 74, 1, -23, -40, 26, 95, 120, 43};
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
    msg.setTimeStamp(0.652919760461);
    msg.setSource(39966U);
    msg.setSourceEntity(250U);
    msg.setDestination(62932U);
    msg.setDestinationEntity(101U);
    msg.seq = 349012676U;
    msg.state = 150U;
    msg.error.assign("UMOPTWHZWEDC");

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
    msg.setTimeStamp(0.322016822103);
    msg.setSource(18218U);
    msg.setSourceEntity(22U);
    msg.setDestination(25418U);
    msg.setDestinationEntity(37U);
    msg.seq = 3145022444U;
    msg.state = 192U;
    msg.error.assign("MGPOCNLNWPMUHQAVXYOBNZCXCIJRIFYMEBEFLVCFSTYSRSBDZGSRWNFLLIHVOHGCLKHHTDPXBEHQSCKXZAZIGPPZTFTGSFTQGRZUAEMILKUQDUFYTCNAMOKSYMDGAXQIHGIWTUXVXPCOEBVJOQJRCRMHVWTTILV");

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
    msg.setTimeStamp(0.0477031592106);
    msg.setSource(9577U);
    msg.setSourceEntity(172U);
    msg.setDestination(55763U);
    msg.setDestinationEntity(147U);
    msg.seq = 2531711020U;
    msg.state = 40U;
    msg.error.assign("IMQHBWYFDXGJCVNDJHWKGSWBPINOENVPXSLYGTFBX");

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
    msg.setTimeStamp(0.382404206305);
    msg.setSource(61763U);
    msg.setSourceEntity(151U);
    msg.setDestination(32023U);
    msg.setDestinationEntity(184U);
    msg.origin.assign("EUTDBQHBOARYMQALPIYHMXFRHIESSYVICSCRFXNEKUGWWPTJXDUJQAUJJSZAVAOMMRUDVJGHZLFKDODHEWNGLBOODJQWVHMOPTZBELDPGUVSHZZZTWQCQNENNSUSFBXFYCHTOEWIXFCRKVIGONGYBVCFENWZMJYIXCXSMZOTHZOSFBWJKXPFRANUUINMKLGVKKRKTXQIVRYYEBGZLPEYLB");
    msg.text.assign("URAXZGLSXJJGPOZXSILHGHMQWATCIQDJHWRQLLCLZIVRMBAHJUKTEOTLWKJSGBZTSQSCKDKRIOUUKJRXVNBEJAHWIRMGYSXMWNZFNWYREKDFEAORPYTBKPGCLLNHUDWPZXYXIOUY");

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
    msg.setTimeStamp(0.25697220875);
    msg.setSource(38500U);
    msg.setSourceEntity(244U);
    msg.setDestination(39528U);
    msg.setDestinationEntity(244U);
    msg.origin.assign("ARPUPHNPIOMSIDSOKGSVVUGFZNNNFDESCKHNAHXVZDNLAAJUNHZUIPIDUGXRNTEFMKYCFCPFHKFMLPJAHTFIFCVQSPIGIGJMEDKMLQYOBWTRVXMEEQXLAEYKDWIAOYMTYLYJMQTXRDCYLDHHLSJNAYLGCHUICPBBZYQCBQTQAOWBRJFRSKGOGOYWRLEUITRVFMWZZSBWKGTBCPMJDZEBOVTQQVEVXUTAJVXWRSBRXZG");
    msg.text.assign("VNZVOVFEBRDMXUWIDNJIPRAXEOBIPGKGPRUSYUIXAOOPBCQDJJKQINKNFGH");

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
    msg.setTimeStamp(0.393521798643);
    msg.setSource(15754U);
    msg.setSourceEntity(43U);
    msg.setDestination(15279U);
    msg.setDestinationEntity(228U);
    msg.origin.assign("HNVJUYICGWUMOEBNKPCRRCMATIYQFZGVITHUHQAQVKDZVCLZBPSYVHQBEHRIFEJGYZMWQFJCEMSLKKVQWGALZDIXBQCJWKUAKINFESYXRMXNVUHKOLMYUNGCDN");
    msg.text.assign("XEPDAIDPRCNDBGAUTVMJSHQCESOMFNCYFZQGFXWJRQWKOXVNMLIGIQHTNEYJICEYPAOOFLUJEDPUVMTZXAKLTJDJSMIOYZPHYNHPETMWSROFSNCOMZKXKSCWYVBKBWGBEBMLTCAQFJJEPBKUSLKZKOXRYRAIAOVSMWCTJUFNEVVZGWOFKRYRZSWYZWRDQTLASUHILIPDULV");

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
    msg.setTimeStamp(0.153491500169);
    msg.setSource(6956U);
    msg.setSourceEntity(178U);
    msg.setDestination(55969U);
    msg.setDestinationEntity(201U);
    msg.origin.assign("OOYHWPNNILQUWKFGOIOAVIBOLHCMZNFEZRLDTFEMDHNPWLRUXVRSWBPLZCWAEQDRVGLKDWCFEEIMJSYKPXMUARQXOIZEPUSTNIYLCJFQFZPTMABXDWJPXEBUFOQGRHXVJUGGXDUTQQJYYRCKUYHKBTQOQMOV");
    msg.htime = 0.114600723611;
    msg.lat = 0.588602453121;
    msg.lon = 0.743612798599;
    const char tmp_msg_0[] = {-23, -63, 39, 2, -95, 54, -69, -14, -112, -22, -111, -55, 11, 85, -66, -122, 18, -79, 62, 95, 104, -107, 111, -125, 56, 1, 50, -54, -95, -1, 90, -103, 54, -64, 108, -83, -91, -31, -87, -36, -65, 24, 64, 79, -31, 42, 114, -67, -8, 19, -119, 94, 109, -21, 102, 30, 56, 72, 54, 116, 106, -98, 28, -57, 110, -6, -100, 86, 70, 97, 66, -93, 38, -60, -23, -111, -99, -39, 96, -89, -70, -31, -13, 120, -14, 79, -87, 51, 32, 121, -128, -105, -35, -44, 34, 74, -56, 83, -110, 87, -93, 11, -72, -6, -119, -122, -97, 8, 51, -63, 2, -28, -105, 35, 60, 107, 123, 98, 54, 45, 69, -60, -21};
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
    msg.setTimeStamp(0.0922772154996);
    msg.setSource(44474U);
    msg.setSourceEntity(26U);
    msg.setDestination(41148U);
    msg.setDestinationEntity(95U);
    msg.origin.assign("IJNQIGSYRTURZVTOLUHAXOMMPZPZNTAVJHVYDRBZFDWNWTGLJCMJAHTQASVLWUAASYYZTSOKBOUIFFXFEMGGVWOHGBQTPFNCOJBRXRHYXEVVYHKPMLLTRXNFPZDEZBQPGCYQYAEBEOYDTWFICSDLMBDJMCLUEFERCWJEFWNVGHVXUIULNXAKIQ");
    msg.htime = 0.321080048301;
    msg.lat = 0.164182560942;
    msg.lon = 0.265860622913;
    const char tmp_msg_0[] = {15, 119, 74, -33, -70, 36, 19, -92, 91, -1, 42, -65, 41, 96, 80, -106, 83, -88, -84, -18, 81, -39, -101, 18, -87, -23, -22, 65, 33, -49, -32, 9, -20, -33, -13, -90, -76, 85, -106, -55, 91, 120, -97, -114, -119, -55, -127, -37, 73, 98, 17, 64, -79, 101, 65, -9, 51, -13, 24, -6, -43, -108, 113, 38, -59, -17, -32, 65, 40, 75, 107, -65, -106, 36, 104, -61, 12, -109, 106, 44, 101, 68, 98, -72, 27, -6, 97, -7, 67, 95, -81, 59, 72, -50, -58, 69, 124, 1, -11, 98, -104, -66, -109, -99, -10, 49, -102, 122, 31, 73, 47, 33, -93, 109, -126, 20, 67, 16, -49, 121, 67, -69, 102, -62, 36, -75, 68, 11, 9, 51, 47, -88, -63, -6, 65, -124, -39, 124};
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
    msg.setTimeStamp(0.989744751748);
    msg.setSource(6814U);
    msg.setSourceEntity(102U);
    msg.setDestination(12652U);
    msg.setDestinationEntity(236U);
    msg.origin.assign("PJCTKWBIUTBNFGSYBYEXZHKUFERJWWPNWPRPVXKATYGCHILVLCATBZEIKIBFMMNNPOQLCEVQGPKVBOHWDRNWNUZHPVDMJZTRIWSMOXMLILYCGRTJYCIVOOMYKLMDHRHSBAKEJFASOOVEHXOADGCYRZJDQGMWRQHUDYUVQQOLNLHPZBKNTWMFZKDDHXDJDISGLPUYVSYCOXETFSTNZXUAFZSKWUCAQJUX");
    msg.htime = 0.823661258741;
    msg.lat = 0.667541449596;
    msg.lon = 0.467576948621;
    const char tmp_msg_0[] = {-28, 55, 84, -78, -23, 109, 76, 105, -46, -22, 108, 31, -67, 82, 26, -79, -120, 39, 117, 69, 92, 5, 89, -53, 32, 35, -109, -60, 2, -97, -83, -119, 55, -79, -31, -13, 19, -24, -113, 66, -83, -117, 8, 54, 100, -62, 103, 13, 125, -75, 8, 87, 80, -97, -116, -59, 34, 91, 62, -21, 34, 80, 88, 33, 118, 80, -1, 42, -81, -69, 7, 56, -20, 13, -28, 25, -53, -58, -113, 119, 13, 80, 77, -104, -34, 92, 60, -23, 89, 92, 64, -103, 101, 67, -96, -13, -92, 22, 72, 33, 125, -67, 102, 1, 101, -2, -75, -101, 28, 43, -121, 93, 67, -82, 58, 105, 90, -117, -116, 24, 17, -90, 24, 29, 80, -80, -25, -38, 6, 114, -22, -50, -28, -99, 46, -8, -96, 63, -35, -99, -72, 104, 83, 5, -103, 20, 1, 77, 27, 120, -14, -91, 11, 47, 118, 16, 100, -112, 12, 25, -108, -46, 21, -53, 32, 111, -53, -69, -94, 53, -17, 26, 78, -8, -19, -49, -104, 15, 74};
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
    msg.setTimeStamp(0.504205070447);
    msg.setSource(7900U);
    msg.setSourceEntity(207U);
    msg.setDestination(11635U);
    msg.setDestinationEntity(157U);
    msg.req_id = 9504U;
    msg.ttl = 36675U;
    msg.destination.assign("PNZESFCVHJNILSXBAJLZGXGMGDZDRENFZBLFAXGSWDWOQMURKCOYHXJZLAGNQEDBPYJOCDTMGUEEJDLADEYKIPTTKPHHBPZKCGBQQIASRRFKJYPSMJ");
    const char tmp_msg_0[] = {-80, 77, 98, 24, -110, 101, 34, 64, -29, 94, 56, 27, -27, -63, -23, 19, -33, 8, -121, -45, 24, -39, 76, -39, 29, 8, 26, 82, -78, -76, 88, 95, -74, 19, -74, 68, 80, 8, 98, 116, 71, 9, 5, -48, -27, -16, -127, 27, -2, 21, -18, -56, -50, -85, 121, 117, 102, 116, -69, 14, 79, 27, 51, 93, 68, -24, 1, 111, 87, -125, 33, -100, -62, -28, -86, 86, -7, -119, 96, 107, 102, 94, -81, 88, 48, -34, -95, 23, 126, -92, 40, 59, 109, 65, -95, -94, 41, -105, 26, -21, -76, 55, -26, 100, -74, 90, -121, 112, -53, 63, 126, -93, -120, -90, 91, 72, -100, -124, 23, 46, -58, 66, 87, 54, 84, 105, -44, 2, 119, -45, 63, -78, 20, 106, -66, 111, 1, 55, 51, -81, 13, -27, 17, -72, -71, 72, -46, -55, 33, -106, 83, -5, -1, -49, -84, -93, -76, -80, 100, -21, -70, 29, 55, -124, -5, 19, -103, 94, -52, 32, 22, -118, 91, -100, -63, -33, -37, -5, 10, 28, -78, -20, 11, -80};
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
    msg.setTimeStamp(0.298153787191);
    msg.setSource(58389U);
    msg.setSourceEntity(13U);
    msg.setDestination(49918U);
    msg.setDestinationEntity(181U);
    msg.req_id = 55630U;
    msg.ttl = 59543U;
    msg.destination.assign("CDNWSYMBMGGZXLXKPPYQBYYNGKNEVBWJVWKIPUVATZHLOINXLRIPADLXFMDZITFDWLTXDYEFHIUKOQWXSOGRUALPRRBCJMJLMBJEGKAAZOZGAHGVQAPXTEVHNDICIOUQTJBZNFNQXD");
    const char tmp_msg_0[] = {-88, 47, -71, 4, 39, -71, 87, -12, -78, -23, 66, -85, -52, -115, 118, 33, -102, 122, -27, 83, -97, -99, 0, -47, 19, -60, 3, 107, -113, 53, 107, -70, 88, 64, 81, 37, 21, -41, 52, 28, -14, -43, -52, 72, 77, -103, 34, -91, -26, 51, -55, 7, -43, -14, 58, 100, -22, 54, -45, -97, -76, 124, 125, 96, 64, 72, -87, -24, -57, -12, -44, -52, -121, 72, 46, -104, -15, -5, 36, -118, -75, 98, -99, 53, -18, -92, -39};
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
    msg.setTimeStamp(0.533361565655);
    msg.setSource(4452U);
    msg.setSourceEntity(34U);
    msg.setDestination(23788U);
    msg.setDestinationEntity(94U);
    msg.req_id = 35996U;
    msg.ttl = 24699U;
    msg.destination.assign("YYVBFBOAFIHHGLCHQMNEIFMRDCQIQOELOSJVDCSLMFHRAQYRWUHKPTQWKODMMVACDULQEPSQZDZWCNVNEOMCBFQDPSKSAIGAGVTQABOFTHITYRWMWILXTUZCNXVXTWEJNTNLPXLSNXIHOGVKMRKNZJRXOFYIPFJKYPSUHJYRGIZAMPLXARKHGPFWKGLSPFXNJECDUIZODUTMEWUEOVJKUZPULHCJYZJX");
    const char tmp_msg_0[] = {-43, -121, 80, -39, -1, 65, 31, 99, 108, 72, -104, -42, -93, -86, -47, 43, -65, 123, -127, 58, -52, -100, -101, -97, 68, -27, 124, 60, -92, -109, 83, -74, 5, -105, -74, 96, 84, -52, -103, -50, 74, -28, -71, 116, -19, 27, -52, -112, -36, -17, 124, -111, -4, -8, -124, -93, -41, 5, -60, -23, -106, -69, 90, -104, -62, 30, -72};
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
    msg.setTimeStamp(0.86305299952);
    msg.setSource(45592U);
    msg.setSourceEntity(106U);
    msg.setDestination(18219U);
    msg.setDestinationEntity(248U);
    msg.req_id = 24675U;
    msg.status = 139U;
    msg.text.assign("HODBXEWMSUYUUHKCGJPTMERSEWPACOWRIDFFWLCQRZLTKZVOQTQFLBWDBJOSQGRRUZLAVRBHIILDFKDZDQHTWFYHJJFXUPLFEBKMSLFNGDQIONSTMHXMEEZAUJICQMGJTCMUQOAOAWAMXXBYTKOXVPCBEWTWHLIOYJDAXYBANCOPIGEQRSCLHQXLPCMAXHYPCEUEURJIY");

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
    msg.setTimeStamp(0.22435110048);
    msg.setSource(4107U);
    msg.setSourceEntity(33U);
    msg.setDestination(25005U);
    msg.setDestinationEntity(104U);
    msg.req_id = 39759U;
    msg.status = 121U;
    msg.text.assign("GENJOEBTLUWIARAKQRBTHOYWPHGEVIKPFOBFLBVVSQRELFXOJQJLTVYYCSDSFXCC");

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
    msg.setTimeStamp(0.677304804067);
    msg.setSource(62717U);
    msg.setSourceEntity(195U);
    msg.setDestination(50214U);
    msg.setDestinationEntity(126U);
    msg.req_id = 55283U;
    msg.status = 208U;
    msg.text.assign("WJQUABXSIGWPJGHDPXCTZCUGMVOQHOZDNCMCPRBQFSKXGSMSHHKVKFYSCVAFUSTFLYUNXZRKFYFJNFLIDBWJIOSGEXPUTTJYCDHC");

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
    msg.setTimeStamp(0.689704047593);
    msg.setSource(62493U);
    msg.setSourceEntity(151U);
    msg.setDestination(28081U);
    msg.setDestinationEntity(83U);
    msg.group_name.assign("EYNYBTZWBCVVWYLIURNFLLXRXXKVALPQCEQUZAJMJHBHSWGOKDCTKNTEQSWQSGQKHDMPLUZJJOECCUNFZYZCKPTSXJQWITFIYLTGGUHJKNIAZFGKLYHXDUBFRQKQCZPBNVHNLAORGGUDRMBRSUYLAWDVRGFCOIUWMNDOXPSOOSGXIOYPRCXITVSJAAKNEBBFFDKHXEIDVIFZDHTEJSMAPFDPAWVBXOTWAY");
    msg.links = 1610585332U;

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
    msg.setTimeStamp(0.891422947442);
    msg.setSource(58272U);
    msg.setSourceEntity(19U);
    msg.setDestination(1870U);
    msg.setDestinationEntity(55U);
    msg.group_name.assign("TLLNJYJXDPZGO");
    msg.links = 277846135U;

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
    msg.setTimeStamp(0.0338324655579);
    msg.setSource(59652U);
    msg.setSourceEntity(95U);
    msg.setDestination(3647U);
    msg.setDestinationEntity(96U);
    msg.group_name.assign("DWSPMULHMVVZVWKWQOIQUMPCLFODGFGGLPWCUZRQGQBTEITRIZHZSOPWJNARUYHYRUIZYTASTJIYID");
    msg.links = 2913303474U;

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
    msg.setTimeStamp(0.145877805769);
    msg.setSource(43879U);
    msg.setSourceEntity(132U);
    msg.setDestination(1238U);
    msg.setDestinationEntity(218U);
    msg.groupname.assign("SPXULVHZXCITKOKMSGNXGAXMMEVHOBFGBUNGWWIOMRQRTWUQPNJKKGYDURUPVDGZDMYBIVPHQLEGPMWIJTAWKNVKSTUWTMJFQHEGYLRKCEDHQFGSVAYALIQIUJWFZRPUHEKDOXTFEJALPCEKZCBOXYSFPJPIHNYXBBOLUDOPACAYZKHQDXWZFOATLCWVDTNVFAQVBUOHSJVNJRRCRFYENCXZCIEBILJZRGMNBYA");
    msg.action = 7U;
    msg.grouplist.assign("XNQONYIKRXRSHFLMKRRTWOWCVTTPTKUBBAWKULAD");

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
    msg.setTimeStamp(0.58737153516);
    msg.setSource(35737U);
    msg.setSourceEntity(70U);
    msg.setDestination(31954U);
    msg.setDestinationEntity(35U);
    msg.groupname.assign("EXOUTYLCGEGNXCKBWBGNGMCRFKZHGFYLDLQMYJALQFOAPUNRNCKOYLHCPDINFPZZZDAMOKWIFYOUVVQTSSTLKXVRIGHPEMXULNARVEBGVSNPCACZEYOHHQFQXIMFDRASKTTVRLXHIIIEBDPQRJJMENUHOSFQAZNJKSUABOZBKDCUXWBJWJGOEMDHJWZTAKISMVLJNFKUDVSMQWFHPRUOTDSPWWSXVTYJCXEYRIBZYVMWPXECTG");
    msg.action = 91U;
    msg.grouplist.assign("FCMGUEZLULPJJBAJNCQEMSSUWNYAVBNVAZZXXZMDLTBDSWRTCEWYIFIYLVABZLQQUVHHTBKWRTGLHOUOOWQGOOMRAPKENMJGJTOTWUUDXSPVTBGOYKFXSADDGIPHRSZCRRFKVUKZWFCNDEXMBYGPZHJISVYEHPBVINAGFQEQHXFRQUHD");

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
    msg.setTimeStamp(0.175548540053);
    msg.setSource(766U);
    msg.setSourceEntity(81U);
    msg.setDestination(30202U);
    msg.setDestinationEntity(240U);
    msg.groupname.assign("CYQNXWYOZKGEVDYZEEJZXHKCHPENSQRAAROAJLIVWEADKTWZWDGSVATZQWJLPPTI");
    msg.action = 76U;
    msg.grouplist.assign("CFLOSDPSJLXKEQRBSRIHBMONHBCXVUXJZIOSFGODLKGFBWQCRTDHAUAVHKJWMGTCYDERMDPTMLREMWAFWSTTKUZIGQLBNPPUXQGNHNYTHEAFTVJUZIVDYUPQQVKXJGMANPOWVSDRWRPYUOVZFKSETHLKCJWQUZKFMOZZGFYLLSLGJTDMCENGENDXWAQACIRQYFHXZP");

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
    msg.setTimeStamp(0.0887351979105);
    msg.setSource(63762U);
    msg.setSourceEntity(166U);
    msg.setDestination(3766U);
    msg.setDestinationEntity(201U);
    msg.value = 0.852989574979;
    msg.sys_src = 51725U;

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
    msg.setTimeStamp(0.319170853213);
    msg.setSource(49941U);
    msg.setSourceEntity(154U);
    msg.setDestination(37782U);
    msg.setDestinationEntity(2U);
    msg.value = 0.265694556691;
    msg.sys_src = 7299U;

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
    msg.setTimeStamp(0.363483580255);
    msg.setSource(42728U);
    msg.setSourceEntity(224U);
    msg.setDestination(55452U);
    msg.setDestinationEntity(37U);
    msg.value = 0.443464521862;
    msg.sys_src = 62379U;

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
    msg.setTimeStamp(0.117666487058);
    msg.setSource(25543U);
    msg.setSourceEntity(36U);
    msg.setDestination(22621U);
    msg.setDestinationEntity(214U);
    msg.value = 0.00697860323179;
    msg.units = 70U;

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
    msg.setTimeStamp(0.0256889731775);
    msg.setSource(36417U);
    msg.setSourceEntity(219U);
    msg.setDestination(58344U);
    msg.setDestinationEntity(200U);
    msg.value = 0.462560155456;
    msg.units = 48U;

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
    msg.setTimeStamp(0.670089784023);
    msg.setSource(9334U);
    msg.setSourceEntity(28U);
    msg.setDestination(1845U);
    msg.setDestinationEntity(157U);
    msg.value = 0.787820607426;
    msg.units = 36U;

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
    msg.setTimeStamp(0.0934575518429);
    msg.setSource(44900U);
    msg.setSourceEntity(39U);
    msg.setDestination(40458U);
    msg.setDestinationEntity(212U);
    msg.base_lat = 0.459131474212;
    msg.base_lon = 0.0423426758118;
    msg.base_time = 0.966821625985;

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
    msg.setTimeStamp(0.684719424725);
    msg.setSource(45895U);
    msg.setSourceEntity(16U);
    msg.setDestination(27144U);
    msg.setDestinationEntity(73U);
    msg.base_lat = 0.836502927618;
    msg.base_lon = 0.983761821735;
    msg.base_time = 0.773430539782;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 38784U;
    tmp_msg_0.priority = 27;
    tmp_msg_0.x = 12593;
    tmp_msg_0.y = 16763;
    tmp_msg_0.z = -22707;
    tmp_msg_0.t = 4187;
    IMC::SessionStatus tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sessid = 686985989U;
    tmp_tmp_msg_0_0.status = 12U;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.392599337233);
    msg.setSource(41236U);
    msg.setSourceEntity(242U);
    msg.setDestination(64776U);
    msg.setDestinationEntity(196U);
    msg.base_lat = 0.0912017921452;
    msg.base_lon = 0.957435071089;
    msg.base_time = 0.592333696746;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 5834U;
    tmp_msg_0.priority = -37;
    tmp_msg_0.x = -16154;
    tmp_msg_0.y = 20275;
    tmp_msg_0.z = -15042;
    tmp_msg_0.t = 13782;
    IMC::FineOil tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.315167023927;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.682169895751);
    msg.setSource(7142U);
    msg.setSourceEntity(194U);
    msg.setDestination(45337U);
    msg.setDestinationEntity(55U);
    msg.base_lat = 0.189226102272;
    msg.base_lon = 0.0599455119892;
    msg.base_time = 0.24860215063;
    const char tmp_msg_0[] = {-29, -5, -43, -62, 9, 32, -73, -99, 116, 1, 69, 61, -93, 115, -92, 52, -41, -93, 6, -9, 6, 85, -84, -88, 109, 88, 3, -51, -90, -29, 115, -77, 102, 76, -26, 34, -101, 71, -55, -63, 5, -29, 70, 109, 76, -22, 16, -101, 14, 118, 50, -34, 123, -69, 126, -47, 85, -14, -88, 54, -54, -25, -48, -84, -100, 43, -40, 88, 120, -91, -32, 75, 90, -111, 120, -66, 41, -113, 90, 7, 47, -38, 36, 32, -18, 118, -28, 29, -13, 5, -90, 70, -118, 105, 62, 79, -126, -79, -64, 38, 90, -101, 7, -117, -33, 101, -34, 80, 11, 69, 68, 120, 13, -99, 113, 101, -49, 85, 42, 86, 25, -13, 78, 34, 122, -2, -95, -26, -98, -19, 52, -31, 43, -56, -94, 84, -86, 63, -49, -90, -66, -116, 2, -35, 10, -80};
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
    msg.setTimeStamp(0.991452581484);
    msg.setSource(63284U);
    msg.setSourceEntity(216U);
    msg.setDestination(42140U);
    msg.setDestinationEntity(223U);
    msg.base_lat = 0.0421296888819;
    msg.base_lon = 0.507167131041;
    msg.base_time = 0.928131643299;
    const char tmp_msg_0[] = {56, 114, 123, -9, 112, 13, -3, -54, 23, 48, -15, -41, 79, 101, -31, -127, -62, -65, -37, -99, -60, 81, -5, 50, 123, 3, 116, 65, -36, 44, -21, -124, 107, 83, -18, 97, -114, 13, -3, 103, -33, -1, -98, -26, 48, -20, 92, -72, -19, 114, -6, -38, 58, -97, -107, -64, 26, -65, -83, 90, 122, -53, -28, -82, -70, -107, -15, 94, 56, -97, -18, -17, -47, 108, 56, 94, -7, 120, 21, -80, 63, -3, 78, -126, 79, -74, -85, -118, -112, 25, -69, -7, -2, -65, -52, -97, 20, 110, 46, -41, 2, 7, 85, -20, 52, -96, 73, -48, 31, -121, -97, 104, -72, -67, 126, -3, -33, 7, -73, 28, -104, 77, 124, -102, -16, 1, 102, -8, 69, -100, -86, 120, -69, 88, 33, -82, -50, 91};
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
    msg.setTimeStamp(0.348748550101);
    msg.setSource(29699U);
    msg.setSourceEntity(179U);
    msg.setDestination(2888U);
    msg.setDestinationEntity(183U);
    msg.base_lat = 0.976670852224;
    msg.base_lon = 0.94194440321;
    msg.base_time = 0.0716137356381;
    const char tmp_msg_0[] = {113, 22, -24, 98, 119, 82, 82, 100, 50, 4, -5, -58, 111, -23, 30, 82, 112, -39, 24, -106, -23, 101, 85, -72, 6, 58, 0, -102, 93, 101, -106, 99, -106, -114, 50, -31, -78, 72, 98, 64, 56, 23, -109, -69, 37, 81, -19, -128, 43, 47, 37, -55, -82, -62, -121, 17, 50, -21, -20, 101, -47, -71, 126, 118, 72, -34, -116, -18, 21, 109, 62, -93, -63, 1, 49, 5, -5, -57, -18, 90, -15, -34, 56, -121, -64, 65, 4, 40, 100, -75, -23, -125, 4, -94, -86, 60, 81, 61, -85, 12, -49, -53, 23, -115, 74, 57, 82, -55, 27, -89, -74, 46, -97, -75, 91, 50, 66, 17, -81, 49, -98, 102, -1, 72, 38, -117, -122, 120, 109, -114, 83, 4, -63, 35, -24, 91, -99, -11, 52, 5, -120, 124, 31, 57, 58, 119, 35, -31, -68, -110, 59, 15, -82, -22, 112, 115, -60, 25, -54, 124, -88, 10, 1, 116, 4, -102, -81, 8, 88, 84, -75, 74, 31, -74, 46, -105, -26, 80, -111, -63, 64, -23, -93, -128, 60, -108, -83, 116, 43, -64, 8, 15, 75, -39, 126, -3, 12, 117, 38, -9, -58, 49, -120, -32, -94, -96, 108, 91, -9, -14};
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
    msg.setTimeStamp(0.0700166642102);
    msg.setSource(35989U);
    msg.setSourceEntity(241U);
    msg.setDestination(2881U);
    msg.setDestinationEntity(154U);
    msg.sys_id = 49235U;
    msg.priority = -24;
    msg.x = 17050;
    msg.y = -21068;
    msg.z = -25955;
    msg.t = 22067;
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 78U;
    tmp_msg_0.request_id = 54601U;
    tmp_msg_0.command = 188U;
    IMC::Teleoperation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.custom.assign("DXNKFKGXVEAJKLKUMXQWSJHCTSJVWHOLBGNYXNGPROVFOKZTLMOREMKRMDCCZNUKYLNBREYJXLIDYCREFNNWQOGCRDBZXUQRJSCKVPRIANPQJIHHWPAWVASDFUQGETGICMPJMABQBYOOFASTHXLWHQKASQPGBNAZTBYWPHOVUVSVUFCHQLZDPKVATNUMSTWUTEJEZGHPOZTFYIIBDRMXQMRYGIESSOJZIUDDFDLMLHCFFTIJYPWUEYVAZXZ");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 45606U;
    tmp_msg_0.info.assign("RXQLYQWMYWCFVMFGFFVVWPERHONOGYRSPDCPPRCFNDGPAAETTHLEZPYHXFDFUQJGQKDIAUEADZXUTLFDGHWMJCHGSFOQMTBCKGBKVONLARHLVNWLMWYMDAKUVSFVKLSYHXRUSLJUXNYORHPJNLTOAZNDKKCKSWXMIXCZIRPBSIQTEQSXUJZZNQRHZVWYCEEOBUIQVIPBQCDYDJML");
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
    msg.setTimeStamp(0.646245325934);
    msg.setSource(60209U);
    msg.setSourceEntity(253U);
    msg.setDestination(31613U);
    msg.setDestinationEntity(30U);
    msg.sys_id = 9338U;
    msg.priority = -29;
    msg.x = -28461;
    msg.y = -20919;
    msg.z = -8141;
    msg.t = -19852;
    IMC::Brake tmp_msg_0;
    tmp_msg_0.op = 191U;
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
    msg.setTimeStamp(0.986602920848);
    msg.setSource(43721U);
    msg.setSourceEntity(103U);
    msg.setDestination(29406U);
    msg.setDestinationEntity(67U);
    msg.sys_id = 24975U;
    msg.priority = -70;
    msg.x = 4229;
    msg.y = 12128;
    msg.z = 29836;
    msg.t = 7114;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.561450137395;
    tmp_msg_0.beam_height = 0.280471102744;
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
    msg.setTimeStamp(0.430708898267);
    msg.setSource(19379U);
    msg.setSourceEntity(239U);
    msg.setDestination(57542U);
    msg.setDestinationEntity(167U);
    msg.req_id = 55825U;
    msg.type = 21U;
    msg.max_size = 41862U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.798086816799;
    tmp_msg_0.base_lon = 0.261814063894;
    tmp_msg_0.base_time = 0.363452656323;
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
    msg.setTimeStamp(0.110929248298);
    msg.setSource(23028U);
    msg.setSourceEntity(105U);
    msg.setDestination(6664U);
    msg.setDestinationEntity(96U);
    msg.req_id = 32129U;
    msg.type = 143U;
    msg.max_size = 27789U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.854965671202;
    tmp_msg_0.base_lon = 0.130003036075;
    tmp_msg_0.base_time = 0.830200105253;
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
    msg.setTimeStamp(0.896379219782);
    msg.setSource(34334U);
    msg.setSourceEntity(29U);
    msg.setDestination(58298U);
    msg.setDestinationEntity(21U);
    msg.req_id = 33231U;
    msg.type = 55U;
    msg.max_size = 53209U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.57486932022;
    tmp_msg_0.base_lon = 0.132760166047;
    tmp_msg_0.base_time = 0.91147349117;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 42937U;
    tmp_tmp_msg_0_0.priority = 86;
    tmp_tmp_msg_0_0.x = -32086;
    tmp_tmp_msg_0_0.y = 15855;
    tmp_tmp_msg_0_0.z = -7731;
    tmp_tmp_msg_0_0.t = 2600;
    IMC::DynamicsSimParam tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.op = 119U;
    tmp_tmp_tmp_msg_0_0_0.tas2acc_pgain = 0.0497778737148;
    tmp_tmp_tmp_msg_0_0_0.bank2p_pgain = 0.315537549591;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.888915372337);
    msg.setSource(30771U);
    msg.setSourceEntity(253U);
    msg.setDestination(47796U);
    msg.setDestinationEntity(212U);
    msg.original_source = 45800U;
    msg.destination = 1194U;
    msg.timeout = 0.843217491616;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.616974638655;
    tmp_msg_0.base_lon = 0.334884710965;
    tmp_msg_0.base_time = 0.985852626546;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 44527U;
    tmp_tmp_msg_0_0.destination = 21797U;
    tmp_tmp_msg_0_0.timeout = 0.316839204826;
    IMC::AcousticOperation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.op = 202U;
    tmp_tmp_tmp_msg_0_0_0.system.assign("SPSPYHZSRGQLWTQJMKNXXPZKWKDJFAGPITDFROBWLCZTPTRHIEVUTAFKJYFLDESWHURMNDFZABOTRRQULEQHNVIXOEOGLBIZRILOVDABLHFMIGOEOXPE");
    tmp_tmp_tmp_msg_0_0_0.range = 0.808121938896;
    IMC::AllocatedControlTorques tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.k = 0.274434106998;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.m = 0.0567291798757;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.n = 0.283428798304;
    tmp_tmp_tmp_msg_0_0_0.msg.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.753606312338);
    msg.setSource(58190U);
    msg.setSourceEntity(240U);
    msg.setDestination(175U);
    msg.setDestinationEntity(183U);
    msg.original_source = 26249U;
    msg.destination = 10646U;
    msg.timeout = 0.232250128484;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.48276745668;
    tmp_msg_0.speed_units = 223U;
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
    msg.setTimeStamp(0.600554280614);
    msg.setSource(4086U);
    msg.setSourceEntity(0U);
    msg.setDestination(28246U);
    msg.setDestinationEntity(62U);
    msg.original_source = 50429U;
    msg.destination = 20559U;
    msg.timeout = 0.452675743717;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.451478640907;
    tmp_msg_0.lon = 0.765070808039;
    tmp_msg_0.eta = 3638486630U;
    tmp_msg_0.duration = 43477U;
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
    msg.setTimeStamp(0.046224918885);
    msg.setSource(60194U);
    msg.setSourceEntity(208U);
    msg.setDestination(31667U);
    msg.setDestinationEntity(250U);
    msg.type = 155U;
    msg.comm_interface = 1350U;
    msg.model = 9340U;
    msg.list.assign("MEFSTXZOIMZRHLJOAUEIQAUDSGWUQMZAMOTCDVAWJWOPHKIEJPDAOPNOVGRTBWGKJMSEHLUWHTNCKRVSVFWYHSRZXT");

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
    msg.setTimeStamp(0.21127283644);
    msg.setSource(62830U);
    msg.setSourceEntity(203U);
    msg.setDestination(943U);
    msg.setDestinationEntity(240U);
    msg.type = 201U;
    msg.comm_interface = 41964U;
    msg.model = 43626U;
    msg.list.assign("WHYJGGNZNCOQJLIVVXPNGISBXBHHTHFXKHKFSJBKITLZZBBZMCISOYOSQOUSOUMDRTHDRUGKVLFYYKRVIWPOMIXWGMXLPREMNACZTDRFSYRYXSWWYAVFJNYGZTGOBSWLCBNONGDINAMAUYJEOKLUXLJZQCEYUQDMGKBUKCHSALNWCVAFUQCAJJOFVTQLRPAQHLPEVPQCXRFKDPENDDMTSXZBETQPBUDAQJMFPEJTIAGWXTKVM");

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
    msg.setTimeStamp(0.570584365028);
    msg.setSource(25561U);
    msg.setSourceEntity(135U);
    msg.setDestination(7157U);
    msg.setDestinationEntity(220U);
    msg.type = 9U;
    msg.comm_interface = 50367U;
    msg.model = 62812U;
    msg.list.assign("TJALDHVVABGYCQUGOHRWCEOXKNJULRAHLNPSDTDAXRAWEFNVZKYZIANHFOPXOZTZ");

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
    msg.setTimeStamp(0.99929374931);
    msg.setSource(51954U);
    msg.setSourceEntity(15U);
    msg.setDestination(63450U);
    msg.setDestinationEntity(247U);
    msg.type = 131U;
    msg.req_id = 3868038628U;
    msg.ttl = 34134U;
    msg.code = 127U;
    msg.destination.assign("RONRLMNXKBDZOCGACUNBALICLTGDZMYFCYYYOYUMLBPSSHWPCEGGYXAJUTO");
    msg.source.assign("MUBEGVGNGMJTGMSLMRAXJZOJLWDSGJDPDFHXOODTQWEDALUANKMSTBYSOVKBLFGRYWMSICQULOKXSKYZMGVAXXNZDKZKFTREZAQHLWI");
    msg.acknowledge = 37U;
    msg.status = 166U;
    const char tmp_msg_0[] = {62, 33, 38, 120, 61, 116, 15, 109, -35, -31, -22, -47, 74, -23, 96, -100, 93, -128, -4, 20, 113, -53, -58, -104, 69, 16, 6, -101, -108, -61, -83, -104, -121, 124, -101, 93, 46, -101, 69, -28, -14, 12, -67, -111, 66, 119, -47, 5, 103, -125, 107, -107, 102, 56};
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
    msg.setTimeStamp(0.418079003303);
    msg.setSource(8707U);
    msg.setSourceEntity(10U);
    msg.setDestination(3240U);
    msg.setDestinationEntity(10U);
    msg.type = 44U;
    msg.req_id = 1651167910U;
    msg.ttl = 39921U;
    msg.code = 105U;
    msg.destination.assign("OXABWDXECYRTJZZVBJBQLIMGUMXQDWKXMNUIBYYLKBYENCNGIDRETGZLOIHQESFATSYHRHZPYSRMZFAVIOPCHVZOGLSJPRYIJIWNLAROQTLFDCUUSCHUHJI");
    msg.source.assign("XDCJGLHSRNDWKRTKOZNIQURABHGVBCCOHYEBGVKJGZFELSVASVQQFNFJNAJZBUPWJDTXLVWYMOBAAXLOTSBFZUZEITVSCHFDCHCRTNXKYVIOCSFODJPFHVPBXXILSWQGGUHUDGMQSOMGEIPYVRZGDOTBYRAP");
    msg.acknowledge = 67U;
    msg.status = 251U;
    const char tmp_msg_0[] = {53, -102, -39, -30, 17, 12, -51, -10, -120, 118, -64, 1, 0, 91, 30, -40, 109, -115, 30, 123, -74, 25, 51, -26, 76, 25, 26, 20, 54, 11, 73, -89, -44, -103, -65, 45, 20, 37, -68, 122, 122, 120, -89, 79, 60, -7, -37, -122, -29, 58, -18, 96, 48, 84, 37, 72, 39, -56, 86, 101, -35, -27, -17, -93, -71, 16, 62, 40, -128, 42, -58, -103, 113, -31, -14, 119, 37, -123, 7, -31, -85, 62, -122, 73, 9, -99, 61, -19, -9, -29, 51, 27, -12, -59, 122, -68, 15, 48, -21, -61, -117, 125, 71, -27, -61, 98, -79, 90, -64, -127, -126, 106, 111, 104, 26, -12, 9, 20, -117, 125, 98, -85, 0, 78, 74, -116, -5, 89, 115, -60, 2, -110, -43, -5, -7, -66, -4, 1, -23, -96, 121, 112, 26};
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
    msg.setTimeStamp(0.71363446161);
    msg.setSource(27393U);
    msg.setSourceEntity(57U);
    msg.setDestination(32296U);
    msg.setDestinationEntity(10U);
    msg.type = 12U;
    msg.req_id = 2002648044U;
    msg.ttl = 41391U;
    msg.code = 96U;
    msg.destination.assign("LHMBIPZKPVYCIJGSCLAKGQUCRXJDGQDPHKEDTODMMFUJQXYBDQWYIOONEFVVWKHFW");
    msg.source.assign("NIANNWUZURRIKKDGWLALOBSKZYEPQJOMHCQRHJ");
    msg.acknowledge = 20U;
    msg.status = 201U;
    const char tmp_msg_0[] = {-34, 59, 13, -30, 37, -126, -32, -20, 79, 73, -90, -93, -89, -50, 93, 7, -49, 72, -93, -111, -92, 3, 10, -115, -36, -90, -32, -26, -38, 10, -109, -85, 59, 5, 84, -14, 51, 70, -35, -61, 63, -32, -95, -10, 50, 14, 5, -41, -97, -107, 39, 100, -14, -45, -126, 79, 68, -12, -124, -24, 83, -72, -5, 91, -3, 126, 96, 112, 45, -108, -21, -118, 15, 93, 16, 22, 50, 92, 25, 93, 39, -85, 101, 23, -110, 51, -99, -83, 6, -5, 2, 56, 98, 49, 15, 96, -59, 13, -47, -75, -86, -50, 78, -84, 91, 35, -100, 60, -79, 28, 26, 42, -118, 73, -22, -5, 10, -62, 106, -12, -85, -38, -112, -72, -71, 43, 30, -73, 51, 84, -69, -41, 76, 68, -95, 79, -4, -99, 77, 80, -22, 89, -13, 51, 35, 89, -78, 125, -29, 4, -11, 29, -94, -117, -20, -117, -124, 58, 43, -107, -100, 27, -27, -9, 44, 38, -7, -109, -4, 3, -82, 114, -115, 85, 103, 67, 99, 39, -44, -127, -9, -97, 104, 16, 12, 35, -90, 83, 48, 90, 40, 9, 22, 17, 26, 102, 115, 75, 118, 89, 46, 85, 30, 18, -2, -80, -77, -70, -30, -83, -109, -45, -103, 96, 80, 7, -89, -45, -61, 21, -101, 98, 35};
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
    msg.setTimeStamp(0.903270340188);
    msg.setSource(42274U);
    msg.setSourceEntity(118U);
    msg.setDestination(37947U);
    msg.setDestinationEntity(53U);
    msg.id = 41U;
    msg.range = 0.707417002556;

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
    msg.setTimeStamp(0.154452463612);
    msg.setSource(19029U);
    msg.setSourceEntity(40U);
    msg.setDestination(15346U);
    msg.setDestinationEntity(43U);
    msg.id = 193U;
    msg.range = 0.362192223328;

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
    msg.setTimeStamp(0.438620698396);
    msg.setSource(38512U);
    msg.setSourceEntity(187U);
    msg.setDestination(10149U);
    msg.setDestinationEntity(215U);
    msg.id = 163U;
    msg.range = 0.0737028464968;

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
    msg.setTimeStamp(0.601322734231);
    msg.setSource(20863U);
    msg.setSourceEntity(239U);
    msg.setDestination(5779U);
    msg.setDestinationEntity(131U);
    msg.beacon.assign("SNLJIEXQTOQKBHDKHDWIZSZ");
    msg.lat = 0.975216888807;
    msg.lon = 0.955448429035;
    msg.depth = 0.729205142181;
    msg.query_channel = 226U;
    msg.reply_channel = 199U;
    msg.transponder_delay = 193U;

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
    msg.setTimeStamp(0.255922773962);
    msg.setSource(56582U);
    msg.setSourceEntity(76U);
    msg.setDestination(42178U);
    msg.setDestinationEntity(192U);
    msg.beacon.assign("URMAWXZVRSHFVIKYVOACWBLEPMTIYTFZLJMGLOCBLLZQNAZHBAIJZPRMRKBEQBTGCQMJNULNPWSHXSCSZXDEEPWHOXRPZPTVVRJYGMXXPOQABSJNYIYAAATVQYGSEJSWKZURGCLEBJJQRFNSLUDMADQBIXCUNOUUWFQHICENOHGWPYKFFSJWMYTKXDEHTKNVCTBWFWFOOIDINVFUDITZGDRIFPSAYGQJKTU");
    msg.lat = 0.485751541373;
    msg.lon = 0.249518768297;
    msg.depth = 0.0230909705613;
    msg.query_channel = 242U;
    msg.reply_channel = 246U;
    msg.transponder_delay = 41U;

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
    msg.setTimeStamp(0.811261515661);
    msg.setSource(57081U);
    msg.setSourceEntity(108U);
    msg.setDestination(58938U);
    msg.setDestinationEntity(207U);
    msg.beacon.assign("UXNEHIQKOCVWLKYYASEKJWRPFMJFUVGPGTVUNNGYFMPXHSZUJMIHMMQCRFDPBVDXIVWBPQHSQLVCOKQQGWZZDQPLTWUFFAITUEKHOPNCTYTYCZDVRFCBWAAUOCEWBKEIELOHRPYRXALGTKOSZEKBBBMCHRDJZKVHXRNJOYQDLASLIXTJRZMNLSGNOIHFRFACAEJYWTGUDAVZBPUDYLMHTKXJAYIXINZFSGMONZNLQPSBOTDJWMC");
    msg.lat = 0.507332255989;
    msg.lon = 0.331735423687;
    msg.depth = 0.811067836045;
    msg.query_channel = 220U;
    msg.reply_channel = 127U;
    msg.transponder_delay = 159U;

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
    msg.setTimeStamp(0.489470902993);
    msg.setSource(1432U);
    msg.setSourceEntity(24U);
    msg.setDestination(45273U);
    msg.setDestinationEntity(151U);
    msg.op = 133U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("AKERVZSZZTVJYLTBYFOSDUUQAQPDSUXPGXSKGTEFDCCTAAOXXZQIWUNOWGFKXJJDQAHMSBDWRQLMEKKHGSVKPCINNPORZYLZDUVMFIDRMBFCLZRRIBNKOGMGWONTFPWXFIKHZLONWSDIJXRMHTHQPBSYJRJBGHCCLEDVJTCRLIAEUWNBMUQCWBFXOVWBTGHVCBYRMNQEJYSKPPMOLMFTNHYPTLIUEWDKJAOYZHXEVILIYACX");
    tmp_msg_0.lat = 0.842558585002;
    tmp_msg_0.lon = 0.560579934176;
    tmp_msg_0.depth = 0.429898549361;
    tmp_msg_0.query_channel = 0U;
    tmp_msg_0.reply_channel = 153U;
    tmp_msg_0.transponder_delay = 126U;
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
    msg.setTimeStamp(0.800687491515);
    msg.setSource(22175U);
    msg.setSourceEntity(72U);
    msg.setDestination(20059U);
    msg.setDestinationEntity(152U);
    msg.op = 207U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PIYIMEZFMCPGVHKQYTLPVWIMLLGDLJMZUBNPEWFFDNCQDVYCFNILYQMHTBBDQZOJEBIO");
    tmp_msg_0.lat = 0.610598543597;
    tmp_msg_0.lon = 0.959921247405;
    tmp_msg_0.depth = 0.579678171997;
    tmp_msg_0.query_channel = 72U;
    tmp_msg_0.reply_channel = 176U;
    tmp_msg_0.transponder_delay = 218U;
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
    msg.setTimeStamp(0.363783176326);
    msg.setSource(52412U);
    msg.setSourceEntity(30U);
    msg.setDestination(44684U);
    msg.setDestinationEntity(232U);
    msg.op = 247U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LCAIEJOCTFASWGYZHQCNHOUTXUFPIYTWFIHDSHVSXEXSOLWIDEXVAZHGAOUBTGQQLDTFNXRZYKPFEBMJUSDZGTHKQHRMXBRQKJECBVOQIHWLXKDVSCWTZPNIKJQGOEJAYPLKSFYAKJDVFNPPDMBUNYVOCNSPTREZXMFMWQE");
    tmp_msg_0.lat = 0.779814682245;
    tmp_msg_0.lon = 0.873525488403;
    tmp_msg_0.depth = 0.534158684597;
    tmp_msg_0.query_channel = 53U;
    tmp_msg_0.reply_channel = 75U;
    tmp_msg_0.transponder_delay = 92U;
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
    msg.setTimeStamp(0.235547024286);
    msg.setSource(34227U);
    msg.setSourceEntity(62U);
    msg.setDestination(4676U);
    msg.setDestinationEntity(91U);
    IMC::HistoricDataQuery tmp_msg_0;
    tmp_msg_0.req_id = 1905U;
    tmp_msg_0.type = 224U;
    tmp_msg_0.max_size = 16622U;
    IMC::HistoricData tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.base_lat = 0.234977707301;
    tmp_tmp_msg_0_0.base_lon = 0.944661190023;
    tmp_tmp_msg_0_0.base_time = 0.603828083209;
    IMC::RemoteCommand tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.original_source = 49204U;
    tmp_tmp_tmp_msg_0_0_0.destination = 29000U;
    tmp_tmp_tmp_msg_0_0_0.timeout = 0.474342973556;
    IMC::Takeoff tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lat = 0.43128206942;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lon = 0.48790750126;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z = 0.767920989801;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z_units = 140U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed = 0.0182010128083;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed_units = 246U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.takeoff_pitch = 0.155880431467;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.custom.assign("UADKYZOVVIPXBRQIDGNYOUTTWDGJNFWISNTYLNUZFRERZVKLQUDCPSFXIEVMGZLATJFODFTBVHMCLHHWYVKFPMHRSAJXWHIZMBEWDAPJZLMSSUCHBUPSGASGXEZKVJNKUTYNRXQCCKWEDQSYXECBMEQJHDBAOIPQGRLWLRHZMRXCWVNHOPBSRTUJOVCEEV");
    tmp_tmp_tmp_msg_0_0_0.cmd.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_msg_0_0.data.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.250861852821);
    msg.setSource(4412U);
    msg.setSourceEntity(169U);
    msg.setDestination(62980U);
    msg.setDestinationEntity(136U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1234895877U;
    tmp_msg_0.start_lat = 0.178372431213;
    tmp_msg_0.start_lon = 0.856090295023;
    tmp_msg_0.start_z = 0.707735154729;
    tmp_msg_0.start_z_units = 137U;
    tmp_msg_0.end_lat = 0.101939271598;
    tmp_msg_0.end_lon = 0.52909445643;
    tmp_msg_0.end_z = 0.723264406465;
    tmp_msg_0.end_z_units = 234U;
    tmp_msg_0.speed = 0.253913834961;
    tmp_msg_0.speed_units = 144U;
    tmp_msg_0.lradius = 0.880247669856;
    tmp_msg_0.flags = 243U;
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
    msg.setTimeStamp(0.209228406851);
    msg.setSource(28650U);
    msg.setSourceEntity(79U);
    msg.setDestination(9644U);
    msg.setDestinationEntity(244U);
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 41933U;
    tmp_msg_0.lat = 0.282498269939;
    tmp_msg_0.lon = 0.205174145209;
    tmp_msg_0.speed = 0.944377988949;
    tmp_msg_0.speed_units = 107U;
    tmp_msg_0.custom.assign("UHDVRZSHGLSCSIBGRWXGQTRNYTUVDKGHMTZALONMMWHWTOMHFUYLAPYBNOVWTIGPXUNJASPRKSABCPLZASYQZKHOJIQDZGICZVJXPXCAFDMHGPIGUIICSEBIOVAJIZPMOPRRQNGSKWEJBYVDTHTUMLBZNKOBDRCNR");
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
    msg.setTimeStamp(0.909929513766);
    msg.setSource(41214U);
    msg.setSourceEntity(49U);
    msg.setDestination(56823U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.777756815096;
    msg.lon = 0.641265349533;
    msg.depth = 0.657845037953;
    msg.sentence.assign("YBRHEVEWOYZWB");
    msg.txtime = 0.152940249795;
    msg.modem_type.assign("ARWWYJUCCFIOQFFVZCKACHPFOYWGGNKXMEUYGMBGHUSIJZOIAZAMJNTVX");
    msg.sys_src.assign("XRVKFRJFPQYFHCWBFIZQWGUBNKTENQORPSZISFEZEVLAQYBDDGPYLSJKRYUUWMQMMBJUCWDLIJIZV");
    msg.seq = 2735U;
    msg.sys_dst.assign("DALNRVBIDBOAXBGACBELKZTQIZBFEOIEVNMXAJDEUGSRRJNCMVISIEGZOMJXTLFUVJNQH");
    msg.flags = 127U;
    const char tmp_msg_0[] = {1, -3, -19, 9, 36, 111, 72, -5, 119, -7, -75, 57, -57, -23, 102, 112, -52, 122, -41, -69, -27, -59, 100, 57, -101, -11, -25, -13, 71, 80, -12, -3, -100, -111, 63, 39, 108, 113, -11, 50, -60, 18, -32, -43, 94, 21, 87, 13, -33, 91, -47, 80, 120, -85, 24, 72, -72, -103, -69, -37, 96, -64, -114, -28, -93, 42, 74, -11, -112, 122, -36, -30, -16, 124, -19, -63, -30, -53, 83, -93, -52, -119, -56, 110, -8, 15, 27, -39, 94, -60, -44, 44, 65, 2, 29, -78, 81, -14, 57, 7, -98, -102, 91, -36, 104, -12, 91, -79, -39, -33, 87, 119, 91, -17, 33, 51, -75, -11, -75, 64, -99, -104, -41, -87, -51, -78, -104, -75, 82, -80, -46, 52, 27, 89, 17, -46, -15, -74, -90, -57, 42, 110, 59, 2, -57, -100, -116, -4, -115, -109, -103, 46, -72, 25, -81, 124, -15, -88, 66, -128};
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
    msg.setTimeStamp(0.689150360783);
    msg.setSource(62050U);
    msg.setSourceEntity(106U);
    msg.setDestination(40719U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.759232303863;
    msg.lon = 0.469640484939;
    msg.depth = 0.496694828608;
    msg.sentence.assign("WONWRCEZPSBFXNICJFTJHQXYGATLBUKEXFQPSSKRYCJIAOCNMRTVDWQLCFP");
    msg.txtime = 0.849457517765;
    msg.modem_type.assign("QELMDSMPGBCGSWILRAXNNSYJIBPJKVNYWQROGWXRDMWK");
    msg.sys_src.assign("TJZEGTWKVRLGUDQNXBLBZCPJVWLQPVHODAVBFSZWYQRTQTLDMSKRIGVHSMNKJILJEQPIFECDPYHCTUNZBFZHETSAYOOYEHFHWCABRCWUDILXAFKRBGPYVGMYXANRKEGOFOUBDZKMCXYBJXLTMIJAECDOAQGZPUKNUAJSCWSNEWOCPXIPNDKHZSIQYUWMFYSCUFLRMIAXNRGUGMOLVMNRYHXIEVRP");
    msg.seq = 64129U;
    msg.sys_dst.assign("YPFVLXHEFQNXKLCTAUTIKNYJZSADWZWWMZJDRONOVDVRXAXFQISYFTQZZASHGMNOA");
    msg.flags = 41U;
    const char tmp_msg_0[] = {116, -72, 45, 44, -59, 55, -45, -37, -118, -66, -50, 31, 30, 68, -2, 16, -11, 116, 38, -25, -11, 58, 115, 94, 110, -107, -18, 62};
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
    msg.setTimeStamp(0.349210442855);
    msg.setSource(49539U);
    msg.setSourceEntity(186U);
    msg.setDestination(48635U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.224386452782;
    msg.lon = 0.41675788256;
    msg.depth = 0.905666605287;
    msg.sentence.assign("ZCLXJZNSCNMSUJTGMSHVSRBYPSDTFAICLYQUVEAURMNHNMQJAROCWYFAKQEVBKGZDTEFYOPIODQODTOYMIQBWLBTHRYZDRKKHOFQRUENOJXXIYJGGZPCUEJCCJPIYXCZVXOIWTLTNLEEBLFNKCM");
    msg.txtime = 0.0436108068918;
    msg.modem_type.assign("QKZGDJZKNXGEFGKRJPPHORDIYYRQNCLLXGDQJKVMLKIQTLBGERAGOVNMUXFSYIHZWVTCZUCGDUXAHQUXOKLFYVSXOTNQCSOPFNTAJSJXCRTICMDAVJPOMKCHEWFGEBVOBZSLEHIYYAWMEKUADSBDYMUGTWYNPTARWPEVLDBDVBIJBRBOJPNCMXWUIPIRHQZLWSMS");
    msg.sys_src.assign("IBWQXBKDDXMOYZVTJMGYVVDUKVOTWEYN");
    msg.seq = 3982U;
    msg.sys_dst.assign("VRWOTVZXAOEYLSAUJRQNBOPQROCQLPSILMYTITBLFPFYXHBNIHONBZCAUSSJSTZGVNAZZBHWLJJZCIPEEJGNDDEPRGROVCCUFAALGLPJXUFNXDGUJESNVHFDQLVCUMKMEYEWWMTITGDHHFIBGYPLAHNSVZYFOGCQHOWCMKFBXIFOQUKRUKIMMTDXKMVWZLKSBKISBDFRVABTWTDQZPJRXCKHXUQRMPGKNNCGWUAAISTQHEY");
    msg.flags = 122U;
    const char tmp_msg_0[] = {77, 114, -40, -5, 69, 28, 43, -4, 24, 87, -110, -126, -56, 76, -109, -3, -45, 26, 62, 119, 9, -94, 49, -17, -35, -67, 121, -45, 64, 9, 54, -8, -86, -83, -104, 36, 33, 2, 100, -112, -107, 124, 60, -72, 106, 11, 63, -66, 27, -37, 102, 61};
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
    msg.setTimeStamp(0.6604831228);
    msg.setSource(65020U);
    msg.setSourceEntity(99U);
    msg.setDestination(27378U);
    msg.setDestinationEntity(56U);
    msg.op = 141U;
    msg.system.assign("WVZKKTTDRXTAZGZJSUVUWEVAFIPDYPURMTHRCMQLDOBXEOJSHFHWZLCCANXRNDIXPTJAXDFQPNQAVHGFZKGGUTKMJUDFBLBKHOYTYIJEEKIRQKU");
    msg.range = 0.518886871494;
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("AVCSNKNSBMSXINAYKWNHYEPHRVFFOBAPZJXXANFRTGSSIIIYFMLPIOINNOUJJZHNKWOIHDBZR");
    tmp_msg_0.visibility.assign("BPIHZRIITRJFYSNYNVUVIJVIANDZHUBJJXLWVIUQBIDHKXRURRNOCLLBQZTTSDKYTGGFDFAPWCMQPXSFYIJEALDTOMNPZGACVKWHPOZWOQHXUQUVMZDBDFFOOSOZJBTMAKNPUGYNSIHXOQTWHSXXCLKBWPGETAVEBHLYWKGMCLGZSLSAEDSOCMRWGUJWMFKPQKOZDEYGGTWYLVLAC");
    tmp_msg_0.scope.assign("WMYJJQNFBUNLMFWSZOAUJHBKJPMDNBCTHQRHOWRHPGLVOEQMXPHRWJYTSZNDAGPWIEKRFQNMZRWBVLRCQWDPACPFWJZAOTHBXSGLMCCBVDKQFTMUVEGTCALZURYDGSPQUIYEELTNJVEPJEXQRXGKOQIYTVHCNTHFKUXZGUJZPTOASCVRYAFGDX");
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
    msg.setTimeStamp(0.241236711487);
    msg.setSource(35654U);
    msg.setSourceEntity(34U);
    msg.setDestination(38247U);
    msg.setDestinationEntity(207U);
    msg.op = 14U;
    msg.system.assign("GAMOXHXEKDOYWTRZQT");
    msg.range = 0.755787717978;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.60428166625;
    tmp_msg_0.base_lon = 0.617534748692;
    tmp_msg_0.base_time = 0.761974546782;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 46038U;
    tmp_tmp_msg_0_0.priority = 51;
    tmp_tmp_msg_0_0.x = -2320;
    tmp_tmp_msg_0_0.y = -21836;
    tmp_tmp_msg_0_0.z = -25384;
    tmp_tmp_msg_0_0.t = -24446;
    IMC::SmsState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.seq = 1843118038U;
    tmp_tmp_tmp_msg_0_0_0.state = 210U;
    tmp_tmp_tmp_msg_0_0_0.error.assign("ACLCJGTNYSPSSIVJOFEHPYACMIYRBVSFEKDDFMVAAPWKHOLDMTEOYLXOKWHQJNVWKIZRXACPYJQRPRHSSREXMGGXTVTUXNDHKQNLJPWQBZDBN");
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.19830994034);
    msg.setSource(38891U);
    msg.setSourceEntity(106U);
    msg.setDestination(61471U);
    msg.setDestinationEntity(247U);
    msg.op = 149U;
    msg.system.assign("RWNYYVZWMWHDWOQXXRMCVTLDXZRBLHSHFCM");
    msg.range = 0.931553660194;
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 134U;
    tmp_msg_0.quality = 66U;
    tmp_msg_0.reps = 159U;
    tmp_msg_0.tsize = 234U;
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
    msg.setTimeStamp(0.210826893716);
    msg.setSource(40587U);
    msg.setSourceEntity(184U);
    msg.setDestination(24957U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.960889744718);
    msg.setSource(53438U);
    msg.setSourceEntity(22U);
    msg.setDestination(47931U);
    msg.setDestinationEntity(54U);

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
    msg.setTimeStamp(0.111707092568);
    msg.setSource(22569U);
    msg.setSourceEntity(127U);
    msg.setDestination(35580U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.617545596071);
    msg.setSource(11914U);
    msg.setSourceEntity(41U);
    msg.setDestination(2105U);
    msg.setDestinationEntity(195U);
    msg.list.assign("NQJKQZZKMSCLGUFCYKAWUAEPMGQOLJUHZXQKJLJUHIDAUSNSBSBFDGHFXWQHVAUPYCVTCWJYJVHWEPBMYRTIARYZODIQKEVXQPXPLTFLLDOJ");

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
    msg.setTimeStamp(0.0289439242209);
    msg.setSource(39528U);
    msg.setSourceEntity(79U);
    msg.setDestination(63248U);
    msg.setDestinationEntity(15U);
    msg.list.assign("HLKUYCMQRREJOZMAVSAJUZFBMADQWSDAIPABLKSVYFLUFRPWGTOPWOCNXVYUJRRWFDNFUFWQPYXADGYPOPJPRKXITBQEIVSWENN");

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
    msg.setTimeStamp(0.753494880725);
    msg.setSource(19279U);
    msg.setSourceEntity(32U);
    msg.setDestination(23980U);
    msg.setDestinationEntity(61U);
    msg.list.assign("LOWMWJQQUIMPFFOWDWTEJBHQNNPPMRWGYHSYUUENUZZACOBAYTYYAAJQVIKMCZDTKAVWSFCHXTEBKDFVRXVRZBAJEC");

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
    msg.setTimeStamp(0.231255054762);
    msg.setSource(7834U);
    msg.setSourceEntity(53U);
    msg.setDestination(42869U);
    msg.setDestinationEntity(35U);
    msg.peer.assign("FVSWZCTCXLLKZNKRKSYMXRLOKVTMVZLTIFLVZOGYEMPGBABZGSNZNPHUCWCWLJAYHPLMHMIQFNRCYNTESDCEHSWEAWJQBDRHXBSWHAYOUGNJFTDDBAOZPXPTRWWJXCSICHGTBDYGPAPUWBXFFUOFZUDKFKECRXYTMNQKDVLVNUGFSBRCWMEKJUYIIQJ");
    msg.rssi = 0.435972968171;
    msg.integrity = 36722U;

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
    msg.setTimeStamp(0.824391897428);
    msg.setSource(11328U);
    msg.setSourceEntity(137U);
    msg.setDestination(9052U);
    msg.setDestinationEntity(169U);
    msg.peer.assign("JSVKLVKNEATPCCGYWEMYXVIHQVBQKIRWUANSOLYSDATZCUTKOSGJDHFLRRTCZRUTATWNTFDEDDDLBIMFXGJLOVPSBDALWPNUFYCMSWM");
    msg.rssi = 0.637374946139;
    msg.integrity = 51361U;

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
    msg.setTimeStamp(0.0673261067836);
    msg.setSource(16015U);
    msg.setSourceEntity(25U);
    msg.setDestination(62635U);
    msg.setDestinationEntity(121U);
    msg.peer.assign("TNSLYWELAKNSNXTMXRJBRQSAPCFPDJIFEPJUGODDGKYKVSENCPRIHCQBUCZXHLVMCAHBYGZZUTIXMQSHFUAYVTCGIKKBGEQAINYLIZHIRLCAMXLTLAWSGHGXTANJWZQUZJJVHMOTPIQCWVJRUJONBHJAKVQUGDFSNFZBXOWBSEFYYV");
    msg.rssi = 0.601316007099;
    msg.integrity = 26636U;

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
    msg.setTimeStamp(0.965558223961);
    msg.setSource(30616U);
    msg.setSourceEntity(113U);
    msg.setDestination(20758U);
    msg.setDestinationEntity(32U);
    msg.req_id = 25988U;
    msg.destination.assign("USAIYEOESPNAKRLZNZNSPGOFSDIWSHDRJLVTTTTMFDVXCNDDJEAPIYLQUUSBVGKLRQBRJJWMJPYMEXNWBQPRWBHSBDYEFXTNLZIIJMACBMKYUBZEHXCOTHDTYYJGKKPROWQIW");
    msg.timeout = 0.0989073242008;
    msg.range = 0.432757259051;
    msg.type = 234U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 54693U;
    tmp_msg_0.custom.assign("DLMIPKLWYVDREJAWGVJYYZURXGBCMTGVCYOXXYVBSVJNQCZROHAOFSRAQWIWEHVOZBTRNZNBGPECRYU");
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
    msg.setTimeStamp(0.679339791798);
    msg.setSource(64217U);
    msg.setSourceEntity(24U);
    msg.setDestination(33625U);
    msg.setDestinationEntity(39U);
    msg.req_id = 28287U;
    msg.destination.assign("UNHCWGJAEDHETPDYVSRGZPLIVHVKBQYMIJEJNXQANCBXSEPCRYADXVLZEPUSQAPOKBZFLZQOFTRTTLDHYITOZCLIBHDYMIFGEIPDLUGTXASJBCVJNWPVHBEONCNHMZUXWIAZXIRYBTDYRNKMONUOJM");
    msg.timeout = 0.358037812389;
    msg.range = 0.245491840484;
    msg.type = 49U;
    IMC::VehicleOperationalLimits tmp_msg_0;
    tmp_msg_0.op = 225U;
    tmp_msg_0.speed_min = 0.569890214562;
    tmp_msg_0.speed_max = 0.738290461327;
    tmp_msg_0.long_accel = 0.241390074297;
    tmp_msg_0.alt_max_msl = 0.00768583628134;
    tmp_msg_0.dive_fraction_max = 0.969498016268;
    tmp_msg_0.climb_fraction_max = 0.0456009496763;
    tmp_msg_0.bank_max = 0.519393233919;
    tmp_msg_0.p_max = 0.900589707428;
    tmp_msg_0.pitch_min = 0.262959613254;
    tmp_msg_0.pitch_max = 0.80412161698;
    tmp_msg_0.q_max = 0.2087550464;
    tmp_msg_0.g_min = 0.0992335912226;
    tmp_msg_0.g_max = 0.399084353754;
    tmp_msg_0.g_lat_max = 0.117920801723;
    tmp_msg_0.rpm_min = 0.383477543987;
    tmp_msg_0.rpm_max = 0.970293268716;
    tmp_msg_0.rpm_rate_max = 0.489632973387;
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
    msg.setTimeStamp(0.0635244118434);
    msg.setSource(6299U);
    msg.setSourceEntity(57U);
    msg.setDestination(43351U);
    msg.setDestinationEntity(138U);
    msg.req_id = 20596U;
    msg.destination.assign("BFRODAHJGZJZMHNVBJMSUVFFNLAVQBZOKJQSMRKEEWLNDEQGSAIOUEKGBHPFMSCQVQORGTWONZZLNFDUAOODPQTSPDIHYBWCCOKHYXSCHEIRCUTPQXPUWEEXZRSTMUBDYZAXMTBIGDUYADQPIILTVGWAXWXNDKJITIDVLLKBOPHSZMRHCWLQUBXKEJRKOFJWTJUNAVKLH");
    msg.timeout = 0.427625781049;
    msg.range = 0.15828834007;
    msg.type = 39U;
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 44383U;
    tmp_msg_0.lat = 0.520730986663;
    tmp_msg_0.lon = 0.139338609488;
    tmp_msg_0.z = 0.297580384027;
    tmp_msg_0.z_units = 236U;
    tmp_msg_0.speed = 0.12155691798;
    tmp_msg_0.speed_units = 7U;
    tmp_msg_0.bearing = 0.0622552776713;
    tmp_msg_0.width = 0.411511893588;
    tmp_msg_0.direction = 151U;
    tmp_msg_0.custom.assign("EROIYSNBVTP");
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
    msg.setTimeStamp(0.232630444932);
    msg.setSource(28213U);
    msg.setSourceEntity(119U);
    msg.setDestination(22044U);
    msg.setDestinationEntity(156U);
    msg.req_id = 46147U;
    msg.type = 49U;
    msg.status = 188U;
    msg.info.assign("RUPYVALSNGGQYREBCAXSSCWPHEFFJYTUMONTLUZDTQDDLZWHAMBVREALVFMSOZRHNJYKQKBLSIJVMOGWHYEZCTZXWPZSPJMYGAGDINTVIIYKVGJYSZMJPQIQHOUBCNZNPDIFULUOYMUEWRNOBZGRFMQHLFKUXK");
    msg.range = 0.516527902494;

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
    msg.setTimeStamp(0.818007037837);
    msg.setSource(23302U);
    msg.setSourceEntity(166U);
    msg.setDestination(28763U);
    msg.setDestinationEntity(133U);
    msg.req_id = 7086U;
    msg.type = 217U;
    msg.status = 135U;
    msg.info.assign("GYXJBRKEFGWWSRFYBZWTIKFFKIBCYOVRVVYIKCMONXXZWQVKJTZGDLEFPJUQUJFQMFDPOCTBSEIDLMPZDTQFJIOHPPQSDASRPHSXSEVZQYABHHUWHRVOEGTGMIMTZKAJGNQRKDXMNGAQGXMCPANNWILNVPMDEYHTLNWUZVANPOILOVLAOOAEHKQXDBN");
    msg.range = 0.700426601373;

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
    msg.setTimeStamp(0.647654327104);
    msg.setSource(40296U);
    msg.setSourceEntity(4U);
    msg.setDestination(64380U);
    msg.setDestinationEntity(86U);
    msg.req_id = 12929U;
    msg.type = 213U;
    msg.status = 214U;
    msg.info.assign("SLZWSZBGTFVWKITSJVMAJQWNOYAJOCPECITGVBZTTEWIDSHKSPWYGVKDORXSSALCGOTECYDEPGUKPMYRORPJTWGGHQTHDDOCOQBDIJBXZVKISWULCFPRRQYFFZXDENVNVRFXXPLTHJSYEVYNCJRMUNYFBHRMVZINOLKYLDAVUPLUCZFDCUBPAFNQJBRNBXCUGTFLIMQGHAYUXKAXNKBHGIAZIULFEMQLRNXKEOHPHKQOAMWQDHJWWAMUZMEEZ");
    msg.range = 0.33225968231;

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
    msg.setTimeStamp(0.132046055477);
    msg.setSource(9931U);
    msg.setSourceEntity(216U);
    msg.setDestination(13172U);
    msg.setDestinationEntity(17U);
    msg.value = -20788;

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
    msg.setTimeStamp(0.288506997998);
    msg.setSource(1714U);
    msg.setSourceEntity(104U);
    msg.setDestination(47693U);
    msg.setDestinationEntity(103U);
    msg.value = 30270;

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
    msg.setTimeStamp(0.852162983647);
    msg.setSource(54416U);
    msg.setSourceEntity(245U);
    msg.setDestination(59428U);
    msg.setDestinationEntity(228U);
    msg.value = 8801;

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
    msg.setTimeStamp(0.943907744366);
    msg.setSource(23786U);
    msg.setSourceEntity(53U);
    msg.setDestination(3190U);
    msg.setDestinationEntity(218U);
    msg.value = 0.332747601726;

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
    msg.setTimeStamp(0.451319001966);
    msg.setSource(2345U);
    msg.setSourceEntity(250U);
    msg.setDestination(63432U);
    msg.setDestinationEntity(235U);
    msg.value = 0.280394164461;

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
    msg.setTimeStamp(0.774092805087);
    msg.setSource(34170U);
    msg.setSourceEntity(211U);
    msg.setDestination(36640U);
    msg.setDestinationEntity(178U);
    msg.value = 0.763907872294;

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
    msg.setTimeStamp(0.926995360283);
    msg.setSource(38288U);
    msg.setSourceEntity(196U);
    msg.setDestination(35238U);
    msg.setDestinationEntity(94U);
    msg.value = 0.320388307199;

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
    msg.setTimeStamp(0.0409694532953);
    msg.setSource(27907U);
    msg.setSourceEntity(110U);
    msg.setDestination(62685U);
    msg.setDestinationEntity(3U);
    msg.value = 0.541025329874;

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
    msg.setTimeStamp(0.269219828452);
    msg.setSource(42371U);
    msg.setSourceEntity(186U);
    msg.setDestination(455U);
    msg.setDestinationEntity(127U);
    msg.value = 0.333359817063;

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
    msg.setTimeStamp(0.228751457925);
    msg.setSource(47279U);
    msg.setSourceEntity(197U);
    msg.setDestination(12765U);
    msg.setDestinationEntity(99U);
    msg.validity = 32905U;
    msg.type = 54U;
    msg.utc_year = 36751U;
    msg.utc_month = 180U;
    msg.utc_day = 160U;
    msg.utc_time = 0.977207707877;
    msg.lat = 0.585165864492;
    msg.lon = 0.911888668642;
    msg.height = 0.909186172887;
    msg.satellites = 209U;
    msg.cog = 0.795340127493;
    msg.sog = 0.688005185624;
    msg.hdop = 0.584688342686;
    msg.vdop = 0.395995976126;
    msg.hacc = 0.528994846426;
    msg.vacc = 0.76194945929;

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
    msg.setTimeStamp(0.29317929317);
    msg.setSource(30304U);
    msg.setSourceEntity(7U);
    msg.setDestination(26355U);
    msg.setDestinationEntity(2U);
    msg.validity = 9547U;
    msg.type = 3U;
    msg.utc_year = 34298U;
    msg.utc_month = 100U;
    msg.utc_day = 141U;
    msg.utc_time = 0.397421392136;
    msg.lat = 0.755887954294;
    msg.lon = 0.113935302433;
    msg.height = 0.219866152422;
    msg.satellites = 17U;
    msg.cog = 0.88226402509;
    msg.sog = 0.84981308504;
    msg.hdop = 0.110124343709;
    msg.vdop = 0.0783784298628;
    msg.hacc = 0.0145170019278;
    msg.vacc = 0.299092135046;

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
    msg.setTimeStamp(0.675042588984);
    msg.setSource(36121U);
    msg.setSourceEntity(241U);
    msg.setDestination(52153U);
    msg.setDestinationEntity(73U);
    msg.validity = 42706U;
    msg.type = 158U;
    msg.utc_year = 32993U;
    msg.utc_month = 60U;
    msg.utc_day = 141U;
    msg.utc_time = 0.0252346137376;
    msg.lat = 0.465104316277;
    msg.lon = 0.349493344818;
    msg.height = 0.0827349143659;
    msg.satellites = 196U;
    msg.cog = 0.207927807164;
    msg.sog = 0.194275007203;
    msg.hdop = 0.807656172797;
    msg.vdop = 0.459405217622;
    msg.hacc = 0.854927696802;
    msg.vacc = 0.59957625553;

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
    msg.setTimeStamp(0.540362831051);
    msg.setSource(14325U);
    msg.setSourceEntity(180U);
    msg.setDestination(32955U);
    msg.setDestinationEntity(47U);
    msg.time = 0.693132864677;
    msg.phi = 0.901279481454;
    msg.theta = 0.378799624064;
    msg.psi = 0.589702261307;
    msg.psi_magnetic = 0.618508740825;

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
    msg.setTimeStamp(0.385263094881);
    msg.setSource(38989U);
    msg.setSourceEntity(139U);
    msg.setDestination(10561U);
    msg.setDestinationEntity(114U);
    msg.time = 0.804860087506;
    msg.phi = 0.776681643727;
    msg.theta = 0.573084209702;
    msg.psi = 0.0221688810656;
    msg.psi_magnetic = 0.395808536611;

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
    msg.setTimeStamp(0.677742690324);
    msg.setSource(41484U);
    msg.setSourceEntity(144U);
    msg.setDestination(62608U);
    msg.setDestinationEntity(201U);
    msg.time = 0.966409962254;
    msg.phi = 0.198469197531;
    msg.theta = 0.722379454167;
    msg.psi = 0.707139881555;
    msg.psi_magnetic = 0.921856054143;

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
    msg.setTimeStamp(0.356681939397);
    msg.setSource(10602U);
    msg.setSourceEntity(241U);
    msg.setDestination(28615U);
    msg.setDestinationEntity(100U);
    msg.time = 0.05433363675;
    msg.x = 0.966604454253;
    msg.y = 0.43449351897;
    msg.z = 0.326290253668;
    msg.timestep = 0.737473831425;

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
    msg.setTimeStamp(0.412847412769);
    msg.setSource(12431U);
    msg.setSourceEntity(30U);
    msg.setDestination(8379U);
    msg.setDestinationEntity(114U);
    msg.time = 0.395168427575;
    msg.x = 0.100136988875;
    msg.y = 0.263675818538;
    msg.z = 0.80183710913;
    msg.timestep = 0.737968520411;

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
    msg.setTimeStamp(0.630764980678);
    msg.setSource(37926U);
    msg.setSourceEntity(188U);
    msg.setDestination(1465U);
    msg.setDestinationEntity(159U);
    msg.time = 0.0759300737022;
    msg.x = 0.59934761476;
    msg.y = 0.557294247707;
    msg.z = 0.224126779169;
    msg.timestep = 0.728114687939;

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
    msg.setTimeStamp(0.946402477152);
    msg.setSource(1730U);
    msg.setSourceEntity(105U);
    msg.setDestination(36998U);
    msg.setDestinationEntity(108U);
    msg.time = 0.954929525147;
    msg.x = 0.0571159134272;
    msg.y = 0.863484964537;
    msg.z = 0.881876644675;

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
    msg.setTimeStamp(0.276298222705);
    msg.setSource(1689U);
    msg.setSourceEntity(200U);
    msg.setDestination(25271U);
    msg.setDestinationEntity(57U);
    msg.time = 0.375290635981;
    msg.x = 0.76335892239;
    msg.y = 0.369350252979;
    msg.z = 0.341682092029;

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
    msg.setTimeStamp(0.973126097121);
    msg.setSource(64927U);
    msg.setSourceEntity(53U);
    msg.setDestination(6317U);
    msg.setDestinationEntity(123U);
    msg.time = 0.0427755381337;
    msg.x = 0.980223499724;
    msg.y = 0.47439881667;
    msg.z = 0.20311825412;

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
    msg.setTimeStamp(0.261016171202);
    msg.setSource(31417U);
    msg.setSourceEntity(117U);
    msg.setDestination(3864U);
    msg.setDestinationEntity(71U);
    msg.time = 0.40130587499;
    msg.x = 0.434681486438;
    msg.y = 0.962981787265;
    msg.z = 0.570288701765;

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
    msg.setTimeStamp(0.887851832566);
    msg.setSource(63343U);
    msg.setSourceEntity(87U);
    msg.setDestination(14601U);
    msg.setDestinationEntity(162U);
    msg.time = 0.336234613487;
    msg.x = 0.877419273018;
    msg.y = 0.772783780182;
    msg.z = 0.736735796094;

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
    msg.setTimeStamp(0.775884112543);
    msg.setSource(8213U);
    msg.setSourceEntity(254U);
    msg.setDestination(59284U);
    msg.setDestinationEntity(107U);
    msg.time = 0.796143235303;
    msg.x = 0.81391351314;
    msg.y = 0.243100911083;
    msg.z = 0.80673360232;

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
    msg.setTimeStamp(0.0809574783641);
    msg.setSource(45663U);
    msg.setSourceEntity(229U);
    msg.setDestination(54307U);
    msg.setDestinationEntity(129U);
    msg.time = 0.630293003226;
    msg.x = 0.419149029156;
    msg.y = 0.695070626056;
    msg.z = 0.509678599689;

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
    msg.setTimeStamp(0.297628521217);
    msg.setSource(10100U);
    msg.setSourceEntity(117U);
    msg.setDestination(11475U);
    msg.setDestinationEntity(64U);
    msg.time = 0.312075461697;
    msg.x = 0.417274450481;
    msg.y = 0.18242217223;
    msg.z = 0.304008157867;

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
    msg.setTimeStamp(0.820587836852);
    msg.setSource(31387U);
    msg.setSourceEntity(236U);
    msg.setDestination(29082U);
    msg.setDestinationEntity(46U);
    msg.time = 0.091456642536;
    msg.x = 0.188331316739;
    msg.y = 0.395087406112;
    msg.z = 0.741702543264;

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
    msg.setTimeStamp(0.944031964992);
    msg.setSource(4662U);
    msg.setSourceEntity(125U);
    msg.setDestination(9271U);
    msg.setDestinationEntity(225U);
    msg.validity = 213U;
    msg.x = 0.634807067767;
    msg.y = 0.318889099102;
    msg.z = 0.572482861826;

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
    msg.setTimeStamp(0.350896838606);
    msg.setSource(16184U);
    msg.setSourceEntity(197U);
    msg.setDestination(38244U);
    msg.setDestinationEntity(146U);
    msg.validity = 134U;
    msg.x = 0.549921807837;
    msg.y = 0.732334222826;
    msg.z = 0.26110681775;

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
    msg.setTimeStamp(0.415343831257);
    msg.setSource(31830U);
    msg.setSourceEntity(48U);
    msg.setDestination(36571U);
    msg.setDestinationEntity(207U);
    msg.validity = 43U;
    msg.x = 0.00269340462446;
    msg.y = 0.0536535593697;
    msg.z = 0.447073830294;

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
    msg.setTimeStamp(0.889193050648);
    msg.setSource(18649U);
    msg.setSourceEntity(147U);
    msg.setDestination(17341U);
    msg.setDestinationEntity(182U);
    msg.validity = 230U;
    msg.x = 0.150554477969;
    msg.y = 0.128217057871;
    msg.z = 0.861139566978;

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
    msg.setTimeStamp(0.0706691603044);
    msg.setSource(13078U);
    msg.setSourceEntity(104U);
    msg.setDestination(46239U);
    msg.setDestinationEntity(59U);
    msg.validity = 182U;
    msg.x = 0.186908196075;
    msg.y = 0.447143512247;
    msg.z = 0.811188965299;

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
    msg.setTimeStamp(0.25001947162);
    msg.setSource(17128U);
    msg.setSourceEntity(199U);
    msg.setDestination(23929U);
    msg.setDestinationEntity(41U);
    msg.validity = 6U;
    msg.x = 0.031153234476;
    msg.y = 0.832592341296;
    msg.z = 0.974202093456;

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
    msg.setTimeStamp(0.566115906904);
    msg.setSource(51671U);
    msg.setSourceEntity(0U);
    msg.setDestination(9398U);
    msg.setDestinationEntity(4U);
    msg.time = 0.133327331491;
    msg.x = 0.135321902257;
    msg.y = 0.133448804889;
    msg.z = 0.797346001182;

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
    msg.setTimeStamp(0.635873778999);
    msg.setSource(51581U);
    msg.setSourceEntity(89U);
    msg.setDestination(55087U);
    msg.setDestinationEntity(13U);
    msg.time = 0.325424963507;
    msg.x = 0.0561827952796;
    msg.y = 0.480982629814;
    msg.z = 0.957588463322;

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
    msg.setTimeStamp(0.515457085716);
    msg.setSource(37812U);
    msg.setSourceEntity(151U);
    msg.setDestination(31749U);
    msg.setDestinationEntity(66U);
    msg.time = 0.271914361801;
    msg.x = 0.615612798017;
    msg.y = 0.493558819702;
    msg.z = 0.577264931656;

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
    msg.setTimeStamp(0.479767394524);
    msg.setSource(29793U);
    msg.setSourceEntity(95U);
    msg.setDestination(4037U);
    msg.setDestinationEntity(145U);
    msg.validity = 169U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.937135417507;
    tmp_msg_0.beam_height = 0.0653514796243;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.571859000135;

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
    msg.setTimeStamp(0.690969856559);
    msg.setSource(27783U);
    msg.setSourceEntity(121U);
    msg.setDestination(57348U);
    msg.setDestinationEntity(113U);
    msg.validity = 178U;
    msg.value = 0.0263999298134;

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
    msg.setTimeStamp(0.757384693507);
    msg.setSource(56422U);
    msg.setSourceEntity(135U);
    msg.setDestination(22774U);
    msg.setDestinationEntity(158U);
    msg.validity = 42U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.211596147228;
    tmp_msg_0.y = 0.424689043056;
    tmp_msg_0.z = 0.184239945976;
    tmp_msg_0.phi = 0.434856909683;
    tmp_msg_0.theta = 0.872262960518;
    tmp_msg_0.psi = 0.976415791657;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.146233023625;

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
    msg.setTimeStamp(0.877528520717);
    msg.setSource(51130U);
    msg.setSourceEntity(237U);
    msg.setDestination(21925U);
    msg.setDestinationEntity(222U);
    msg.value = 0.864082967012;

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
    msg.setTimeStamp(0.169162569945);
    msg.setSource(30075U);
    msg.setSourceEntity(211U);
    msg.setDestination(60900U);
    msg.setDestinationEntity(33U);
    msg.value = 0.768834350912;

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
    msg.setTimeStamp(0.9087435954);
    msg.setSource(17269U);
    msg.setSourceEntity(96U);
    msg.setDestination(49301U);
    msg.setDestinationEntity(92U);
    msg.value = 0.493263027016;

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
    msg.setTimeStamp(0.643750251612);
    msg.setSource(31150U);
    msg.setSourceEntity(208U);
    msg.setDestination(31947U);
    msg.setDestinationEntity(60U);
    msg.value = 0.339922067072;

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
    msg.setTimeStamp(0.93605241723);
    msg.setSource(18981U);
    msg.setSourceEntity(47U);
    msg.setDestination(10513U);
    msg.setDestinationEntity(140U);
    msg.value = 0.601131399877;

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
    msg.setTimeStamp(0.61494747435);
    msg.setSource(59144U);
    msg.setSourceEntity(163U);
    msg.setDestination(42573U);
    msg.setDestinationEntity(33U);
    msg.value = 0.138234151685;

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
    msg.setTimeStamp(0.378720045559);
    msg.setSource(36934U);
    msg.setSourceEntity(108U);
    msg.setDestination(31499U);
    msg.setDestinationEntity(190U);
    msg.value = 0.567276806591;

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
    msg.setTimeStamp(0.0188453011825);
    msg.setSource(6500U);
    msg.setSourceEntity(5U);
    msg.setDestination(48112U);
    msg.setDestinationEntity(204U);
    msg.value = 0.956093985573;

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
    msg.setTimeStamp(0.340870229143);
    msg.setSource(29295U);
    msg.setSourceEntity(216U);
    msg.setDestination(52212U);
    msg.setDestinationEntity(241U);
    msg.value = 0.209647427563;

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
    msg.setTimeStamp(0.141209874998);
    msg.setSource(54851U);
    msg.setSourceEntity(14U);
    msg.setDestination(46985U);
    msg.setDestinationEntity(201U);
    msg.value = 0.698385397351;

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
    msg.setTimeStamp(0.292851941362);
    msg.setSource(54685U);
    msg.setSourceEntity(166U);
    msg.setDestination(37758U);
    msg.setDestinationEntity(95U);
    msg.value = 0.724815021868;

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
    msg.setTimeStamp(0.892401229903);
    msg.setSource(54538U);
    msg.setSourceEntity(150U);
    msg.setDestination(40934U);
    msg.setDestinationEntity(98U);
    msg.value = 0.620527905131;

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
    msg.setTimeStamp(0.43418489754);
    msg.setSource(15811U);
    msg.setSourceEntity(13U);
    msg.setDestination(28082U);
    msg.setDestinationEntity(23U);
    msg.value = 0.0613758262245;

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
    msg.setTimeStamp(0.689139537869);
    msg.setSource(22313U);
    msg.setSourceEntity(16U);
    msg.setDestination(31487U);
    msg.setDestinationEntity(133U);
    msg.value = 0.548271903601;

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
    msg.setTimeStamp(0.678991850806);
    msg.setSource(36880U);
    msg.setSourceEntity(118U);
    msg.setDestination(55265U);
    msg.setDestinationEntity(227U);
    msg.value = 0.37732665571;

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
    msg.setTimeStamp(0.412153928697);
    msg.setSource(10814U);
    msg.setSourceEntity(141U);
    msg.setDestination(61602U);
    msg.setDestinationEntity(140U);
    msg.value = 0.344198492526;

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
    msg.setTimeStamp(0.924737959847);
    msg.setSource(15233U);
    msg.setSourceEntity(109U);
    msg.setDestination(19794U);
    msg.setDestinationEntity(127U);
    msg.value = 0.695572265085;

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
    msg.setTimeStamp(0.257351138116);
    msg.setSource(735U);
    msg.setSourceEntity(60U);
    msg.setDestination(28983U);
    msg.setDestinationEntity(89U);
    msg.value = 0.0519940762213;

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
    msg.setTimeStamp(0.0642299460919);
    msg.setSource(39048U);
    msg.setSourceEntity(92U);
    msg.setDestination(27559U);
    msg.setDestinationEntity(2U);
    msg.value = 0.260101243337;

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
    msg.setTimeStamp(0.0401242548947);
    msg.setSource(48842U);
    msg.setSourceEntity(208U);
    msg.setDestination(34070U);
    msg.setDestinationEntity(67U);
    msg.value = 0.411950875391;

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
    msg.setTimeStamp(0.194342218217);
    msg.setSource(44290U);
    msg.setSourceEntity(247U);
    msg.setDestination(43634U);
    msg.setDestinationEntity(156U);
    msg.value = 0.7753865623;

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
    msg.setTimeStamp(0.511581485791);
    msg.setSource(63449U);
    msg.setSourceEntity(29U);
    msg.setDestination(63657U);
    msg.setDestinationEntity(208U);
    msg.value = 0.356922228656;

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
    msg.setTimeStamp(0.591012195795);
    msg.setSource(11462U);
    msg.setSourceEntity(184U);
    msg.setDestination(31083U);
    msg.setDestinationEntity(116U);
    msg.value = 0.467887252062;

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
    msg.setTimeStamp(0.465479889766);
    msg.setSource(61556U);
    msg.setSourceEntity(82U);
    msg.setDestination(35634U);
    msg.setDestinationEntity(129U);
    msg.value = 0.357792503964;

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
    msg.setTimeStamp(0.24169760813);
    msg.setSource(11743U);
    msg.setSourceEntity(183U);
    msg.setDestination(55932U);
    msg.setDestinationEntity(13U);
    msg.direction = 0.230443046973;
    msg.speed = 0.0706485719149;
    msg.turbulence = 0.774800927018;

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
    msg.setTimeStamp(0.182589292428);
    msg.setSource(28933U);
    msg.setSourceEntity(119U);
    msg.setDestination(19386U);
    msg.setDestinationEntity(72U);
    msg.direction = 0.0346930355081;
    msg.speed = 0.456548176643;
    msg.turbulence = 0.91685768715;

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
    msg.setTimeStamp(0.33937430539);
    msg.setSource(51548U);
    msg.setSourceEntity(91U);
    msg.setDestination(48958U);
    msg.setDestinationEntity(66U);
    msg.direction = 0.488188893914;
    msg.speed = 0.908912134877;
    msg.turbulence = 0.687251555323;

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
    msg.setTimeStamp(0.677872022074);
    msg.setSource(9288U);
    msg.setSourceEntity(162U);
    msg.setDestination(35940U);
    msg.setDestinationEntity(2U);
    msg.value = 0.359553632961;

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
    msg.setTimeStamp(0.562806432703);
    msg.setSource(20391U);
    msg.setSourceEntity(47U);
    msg.setDestination(1308U);
    msg.setDestinationEntity(228U);
    msg.value = 0.433912307157;

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
    msg.setTimeStamp(0.940311983375);
    msg.setSource(3870U);
    msg.setSourceEntity(206U);
    msg.setDestination(48313U);
    msg.setDestinationEntity(22U);
    msg.value = 0.157193265762;

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
    msg.setTimeStamp(0.979635035569);
    msg.setSource(18955U);
    msg.setSourceEntity(85U);
    msg.setDestination(44063U);
    msg.setDestinationEntity(31U);
    msg.value.assign("MTXREXQMZIPYORMBZVSAOFUXAXTUXFIRVO");

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
    msg.setTimeStamp(0.394777370224);
    msg.setSource(14534U);
    msg.setSourceEntity(133U);
    msg.setDestination(37601U);
    msg.setDestinationEntity(149U);
    msg.value.assign("VPXGFDPYXXSTBTODZMXZIIAAQOODTUMWFNJMBIV");

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
    msg.setTimeStamp(0.806450620821);
    msg.setSource(60725U);
    msg.setSourceEntity(70U);
    msg.setDestination(9048U);
    msg.setDestinationEntity(3U);
    msg.value.assign("BPUCIXVBIBOJWLYRHQTNYTUKPWONUFCLMKPTROKCECMTXPESKIHEJNBWTYGXRLMWDSATYQFPPT");

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
    msg.setTimeStamp(0.223157963127);
    msg.setSource(62493U);
    msg.setSourceEntity(136U);
    msg.setDestination(5645U);
    msg.setDestinationEntity(23U);
    const char tmp_msg_0[] = {77, 86, -45, 16, -33, 90, -83, 45, 45, 121, -121, -112, 65, 32, -19, 94, -11, 10, 96};
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
    msg.setTimeStamp(0.701687941557);
    msg.setSource(52797U);
    msg.setSourceEntity(180U);
    msg.setDestination(40021U);
    msg.setDestinationEntity(138U);
    const char tmp_msg_0[] = {62, -13, 111, -3, 44, 5, -111, -87, -5, 64, 72, 52, 10, -6, -72, -127, 43, 54, 109, 61, 8, -44, 114, -29, -54, 101, -27, -51, -71, -29, -25, -121, -104, 104, 91, -72, -5, -85, -89, 95, -99, 111, -17, 86, 16, -101, 25, -123, -72, 93, 85, -109, 40, -67, -77, 71, -57, -12, -64, -70, -82, -80, 107, 69, 0, -128, -116, -11, 63, 48, 81, -55, 29, 93, -35, 77, 42, -128, -118, -2, 97, 35, 114, -38, 112, -81};
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
    msg.setTimeStamp(0.470442856491);
    msg.setSource(52191U);
    msg.setSourceEntity(233U);
    msg.setDestination(19713U);
    msg.setDestinationEntity(148U);
    const char tmp_msg_0[] = {-21, -20, 40, 104, -121, 20, -95, 29, -101, -51, 115, -66, 60, -30, 69, -53, -9, 12, 104, -93, -112, 109, 123, 32, 44, -8, 38, -65, -4, 97, -128, -9, 118, 43, 126, -66, -73, 28, -108, 15, 49, -70, -48, 63, 110, -108, -93, -114, -77, -74, 69, -97, 84, -16, 2, 108, -7, 63, -98, -60, -22, 91, -33, 18, 9, 83, -13, -114, -88, -103, 17, -27, 74, 15, 39, 12, 37, -15, 2, 104, -18, -110, -21, -29, -68, 92, -109, -63, -1, -73, 4, -120, -107, -78, 21, 90, 49, -59, -92, 126, -101, -19, 14, 6, 112, -2, -18, -123, -36, 85, -38, 104, 82, -1, 31, -70, 5, -123, 41, 67, 4, 1, 126, -121, 103, -58, 43, -70, -113, 99, -41, -33, -42, -102, 32, -7, 84, -22, 14, 62, 48, -99, 106, 56, -30, 121, -91, 16, 110, 71, 124, 105, -77, 106, -34, -16, -31, -113, -10, 79, -38, -19, 26, 44, 71, -106, -42, 97, 118, 9, 32, -19, 98, 97};
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
    msg.setTimeStamp(0.886173342262);
    msg.setSource(57031U);
    msg.setSourceEntity(38U);
    msg.setDestination(65491U);
    msg.setDestinationEntity(82U);
    msg.value = 0.110463782046;

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
    msg.setTimeStamp(0.980312845531);
    msg.setSource(56747U);
    msg.setSourceEntity(177U);
    msg.setDestination(598U);
    msg.setDestinationEntity(136U);
    msg.value = 0.485839780686;

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
    msg.setTimeStamp(0.00199331706353);
    msg.setSource(40372U);
    msg.setSourceEntity(251U);
    msg.setDestination(31167U);
    msg.setDestinationEntity(92U);
    msg.value = 0.705430094416;

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
    msg.setTimeStamp(0.00410349084832);
    msg.setSource(12771U);
    msg.setSourceEntity(96U);
    msg.setDestination(56361U);
    msg.setDestinationEntity(32U);
    msg.type = 3U;
    msg.frequency = 375260254U;
    msg.min_range = 13965U;
    msg.max_range = 27711U;
    msg.bits_per_point = 130U;
    msg.scale_factor = 0.97572705147;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.694634075616;
    tmp_msg_0.beam_height = 0.12596944568;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-11, 31, -59, 82, -58, -51, -60, -124, -29, -112, -26, 15, -14, 54, 124, 86, -114, -105, 14, -122, 36, 44, 37, 64, -99, -106, 120, -54, 114, -45, -39, 22, -40, 55, 28, 86, 87, -59, 18, 9, -17, -63, -62, 103, 10, -123, 117, 55, 100, -9, -110, 123, 14, -67, 118, 43, 50, -58, -104, 44, -47, -54, -76, 9, -59, 68, 4, 13, 101, -69, 17, -41, -112, 13, -54, 82, -121, -19, 118, 72, -123, 104, 65, -27, 91, 111, -74, -44, -34, -102, 106, -2, 95, 58, 116, 41, 31, -17, 13, 77, 88, -38, 60, 126, -42, -25, -24, 63, -44, 90, 81, -128, 61, 0, -39, 57, -94, -28, 1, 74, -18, 110, -46, 58, 48, 54, 105, -70, -50};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

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
    msg.setTimeStamp(0.316443524861);
    msg.setSource(12869U);
    msg.setSourceEntity(2U);
    msg.setDestination(32698U);
    msg.setDestinationEntity(46U);
    msg.type = 164U;
    msg.frequency = 2384350161U;
    msg.min_range = 54578U;
    msg.max_range = 47549U;
    msg.bits_per_point = 130U;
    msg.scale_factor = 0.113485650014;
    const char tmp_msg_0[] = {-74, 53, -50, 46, 69, 62, -28, 118, -102, -13, 120, 111, 76, 50, -101, -75, 102, -42, 28, 17, -60, 122, 69, -90, -83, 46, 84, -110, -108, 40, -125, 109, -42, 31, -57, 27, 102, -79, 53, -36, 23, 87, 39, -4, -99, 27, -82, -1, -13, -24, -89, 60, 112, 84, 29, 68, 103, 80, 87, -9, 77, -128, 75, -91, -116, -74, 113, -65, 92, 18, 89, 87, -96, 65, 92, -15, 55, -108, -109, -94, 119, 10, 24, 84, -112, 27, -112};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.18326433344);
    msg.setSource(8053U);
    msg.setSourceEntity(147U);
    msg.setDestination(6451U);
    msg.setDestinationEntity(24U);
    msg.type = 85U;
    msg.frequency = 1816035446U;
    msg.min_range = 23988U;
    msg.max_range = 61664U;
    msg.bits_per_point = 217U;
    msg.scale_factor = 0.232957589971;
    const char tmp_msg_0[] = {-17, 90, -20, -49, 109, -19, 122, -104, -93, 31, 2, 125, -112, 51, 72, -37, -119, -26, -6, 51, -5, 114, 63, -92, -38, -56, -65, -93, -128, -69, -34, 15, 56, -24, -78, -1, 115, -27, -42, 56, -65, 5, -19, 62, 86, 85, 101, 19, 68, 89, 75, -94, -28, 67, 0, 1, -37, 5, -74, 110, 76, -27, -81, -51, -125, -14, -9, -110, 73, -34};
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
    msg.setTimeStamp(0.68805605095);
    msg.setSource(24091U);
    msg.setSourceEntity(55U);
    msg.setDestination(3800U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.332350123654);
    msg.setSource(14318U);
    msg.setSourceEntity(77U);
    msg.setDestination(13155U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.844195489872);
    msg.setSource(28152U);
    msg.setSourceEntity(92U);
    msg.setDestination(29331U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.89648257277);
    msg.setSource(30346U);
    msg.setSourceEntity(81U);
    msg.setDestination(42422U);
    msg.setDestinationEntity(169U);
    msg.op = 159U;

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
    msg.setTimeStamp(0.824314405683);
    msg.setSource(45493U);
    msg.setSourceEntity(232U);
    msg.setDestination(57826U);
    msg.setDestinationEntity(84U);
    msg.op = 122U;

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
    msg.setTimeStamp(0.840001013212);
    msg.setSource(60835U);
    msg.setSourceEntity(13U);
    msg.setDestination(22155U);
    msg.setDestinationEntity(62U);
    msg.op = 45U;

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
    msg.setTimeStamp(0.0760948858183);
    msg.setSource(28053U);
    msg.setSourceEntity(244U);
    msg.setDestination(52087U);
    msg.setDestinationEntity(121U);
    msg.value = 0.0987013414527;
    msg.confidence = 0.200632551226;
    msg.opmodes.assign("GEDVMXJWJYTHRAUPIGPRENXVBSZXIHTYCAPHIDNREUYIJLZCLMUTYIXNKTLOQFWJAXYUHNOTJRMHSUGWLODQKEJVKDVBTNHCMZVDRWIBZAGBQFIBPKKGMQCMSWDPZEPKJSZDIDYMAUCMBNE");

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
    msg.setTimeStamp(0.0244337810307);
    msg.setSource(11750U);
    msg.setSourceEntity(56U);
    msg.setDestination(43258U);
    msg.setDestinationEntity(228U);
    msg.value = 0.487774930965;
    msg.confidence = 0.397479091598;
    msg.opmodes.assign("MMQYWNNJRFNQCNPZLKSIGMPRKAQPVLXOUNIRFLYEMSCVGAODTHTGZISAGRCEBTJCKIXXCKMUVZNHSSMOMJRNDQJPAIJYTUQDFFVKWXCJZTGWNBEBJYMWPOOXTHARRSQPTKVIYQWTFWWDHOCRHEZUUYHPQKHZWRCXMUDXACOYGDIWPSBFBOVTLVRMGJBQKAASSVDVGSJDEUOFYLICHXLLLZPHJUBDAKEE");

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
    msg.setTimeStamp(0.801782045752);
    msg.setSource(19981U);
    msg.setSourceEntity(74U);
    msg.setDestination(29316U);
    msg.setDestinationEntity(182U);
    msg.value = 0.808594456163;
    msg.confidence = 0.0407595970652;
    msg.opmodes.assign("SCPXRNZGZUTYCTJGLSOPZZMHFQWNHHSHRQZTIHLIWGAGRZVVXPEAEIQDSUZRYBGOEOKEDZUEB");

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
    msg.setTimeStamp(0.254580803822);
    msg.setSource(54056U);
    msg.setSourceEntity(158U);
    msg.setDestination(39835U);
    msg.setDestinationEntity(69U);
    msg.itow = 1907586625U;
    msg.lat = 0.774720481565;
    msg.lon = 0.240222738093;
    msg.height_ell = 0.524104807597;
    msg.height_sea = 0.94488502744;
    msg.hacc = 0.328222094039;
    msg.vacc = 0.82253501638;
    msg.vel_n = 0.650766154195;
    msg.vel_e = 0.0134481669;
    msg.vel_d = 0.798965750133;
    msg.speed = 0.384431229389;
    msg.gspeed = 0.936443382382;
    msg.heading = 0.875805415138;
    msg.sacc = 0.709219039988;
    msg.cacc = 0.2106036366;

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
    msg.setTimeStamp(0.0605881865218);
    msg.setSource(32553U);
    msg.setSourceEntity(130U);
    msg.setDestination(62107U);
    msg.setDestinationEntity(108U);
    msg.itow = 275870264U;
    msg.lat = 0.0900665320162;
    msg.lon = 0.425879541956;
    msg.height_ell = 0.316303647687;
    msg.height_sea = 0.617727467286;
    msg.hacc = 0.691595228451;
    msg.vacc = 0.276097275794;
    msg.vel_n = 0.70088298309;
    msg.vel_e = 0.417540209777;
    msg.vel_d = 0.450884651526;
    msg.speed = 0.603514555563;
    msg.gspeed = 0.106437215548;
    msg.heading = 0.248367560476;
    msg.sacc = 0.352947380247;
    msg.cacc = 0.290558023816;

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
    msg.setTimeStamp(0.53501049212);
    msg.setSource(7908U);
    msg.setSourceEntity(43U);
    msg.setDestination(27901U);
    msg.setDestinationEntity(197U);
    msg.itow = 786358165U;
    msg.lat = 0.641214829604;
    msg.lon = 0.220669156529;
    msg.height_ell = 0.738549618129;
    msg.height_sea = 0.0404200098916;
    msg.hacc = 0.154756919806;
    msg.vacc = 0.106502128186;
    msg.vel_n = 0.061034147331;
    msg.vel_e = 0.606458828248;
    msg.vel_d = 0.1023492553;
    msg.speed = 0.0582674467263;
    msg.gspeed = 0.572746213534;
    msg.heading = 0.160333792121;
    msg.sacc = 0.60733063749;
    msg.cacc = 0.160422241199;

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
    msg.setTimeStamp(0.44466625312);
    msg.setSource(15527U);
    msg.setSourceEntity(244U);
    msg.setDestination(26672U);
    msg.setDestinationEntity(41U);
    msg.id = 72U;
    msg.value = 0.271075246517;

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
    msg.setTimeStamp(0.589389581374);
    msg.setSource(40485U);
    msg.setSourceEntity(175U);
    msg.setDestination(17403U);
    msg.setDestinationEntity(151U);
    msg.id = 189U;
    msg.value = 0.281248941394;

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
    msg.setTimeStamp(0.0593717458878);
    msg.setSource(34401U);
    msg.setSourceEntity(124U);
    msg.setDestination(43770U);
    msg.setDestinationEntity(179U);
    msg.id = 228U;
    msg.value = 0.805867931019;

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
    msg.setTimeStamp(0.437081407285);
    msg.setSource(20462U);
    msg.setSourceEntity(178U);
    msg.setDestination(56721U);
    msg.setDestinationEntity(212U);
    msg.x = 0.430661749075;
    msg.y = 0.126472721453;
    msg.z = 0.290710071641;
    msg.phi = 0.510973366327;
    msg.theta = 0.141679744011;
    msg.psi = 0.710715816631;

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
    msg.setTimeStamp(0.607134051284);
    msg.setSource(29396U);
    msg.setSourceEntity(57U);
    msg.setDestination(42139U);
    msg.setDestinationEntity(96U);
    msg.x = 0.894676992381;
    msg.y = 0.230105061886;
    msg.z = 0.653644906701;
    msg.phi = 0.738185910519;
    msg.theta = 0.0705466721765;
    msg.psi = 0.24767823734;

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
    msg.setTimeStamp(0.429796964073);
    msg.setSource(11662U);
    msg.setSourceEntity(27U);
    msg.setDestination(47121U);
    msg.setDestinationEntity(27U);
    msg.x = 0.937366344587;
    msg.y = 0.608817763147;
    msg.z = 0.17183566429;
    msg.phi = 0.981954763342;
    msg.theta = 0.797204483529;
    msg.psi = 0.761340208393;

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
    msg.setTimeStamp(0.236839314844);
    msg.setSource(3929U);
    msg.setSourceEntity(12U);
    msg.setDestination(34968U);
    msg.setDestinationEntity(233U);
    msg.beam_width = 0.238702611932;
    msg.beam_height = 0.718366914304;

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
    msg.setTimeStamp(0.0819841615686);
    msg.setSource(13795U);
    msg.setSourceEntity(193U);
    msg.setDestination(23286U);
    msg.setDestinationEntity(152U);
    msg.beam_width = 0.277805648921;
    msg.beam_height = 0.118453975015;

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
    msg.setTimeStamp(0.260860628226);
    msg.setSource(4121U);
    msg.setSourceEntity(146U);
    msg.setDestination(20744U);
    msg.setDestinationEntity(234U);
    msg.beam_width = 0.46585029073;
    msg.beam_height = 0.960823663738;

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
    msg.setTimeStamp(0.667593565529);
    msg.setSource(18166U);
    msg.setSourceEntity(213U);
    msg.setDestination(11458U);
    msg.setDestinationEntity(26U);
    msg.sane = 35U;

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
    msg.setTimeStamp(0.281883413286);
    msg.setSource(24343U);
    msg.setSourceEntity(145U);
    msg.setDestination(19737U);
    msg.setDestinationEntity(122U);
    msg.sane = 195U;

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
    msg.setTimeStamp(0.482433987156);
    msg.setSource(36643U);
    msg.setSourceEntity(163U);
    msg.setDestination(55469U);
    msg.setDestinationEntity(45U);
    msg.sane = 170U;

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
    msg.setTimeStamp(0.54307348218);
    msg.setSource(20504U);
    msg.setSourceEntity(71U);
    msg.setDestination(34378U);
    msg.setDestinationEntity(175U);
    msg.value = 0.0506573673648;

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
    msg.setTimeStamp(0.434095681427);
    msg.setSource(18508U);
    msg.setSourceEntity(3U);
    msg.setDestination(7901U);
    msg.setDestinationEntity(4U);
    msg.value = 0.640823201935;

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
    msg.setTimeStamp(0.233942146976);
    msg.setSource(30733U);
    msg.setSourceEntity(3U);
    msg.setDestination(27672U);
    msg.setDestinationEntity(223U);
    msg.value = 0.854781268757;

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
    msg.setTimeStamp(0.582743703554);
    msg.setSource(61129U);
    msg.setSourceEntity(90U);
    msg.setDestination(59961U);
    msg.setDestinationEntity(58U);
    msg.value = 0.950925715944;

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
    msg.setTimeStamp(0.596201807818);
    msg.setSource(49216U);
    msg.setSourceEntity(24U);
    msg.setDestination(18326U);
    msg.setDestinationEntity(188U);
    msg.value = 0.253395786206;

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
    msg.setTimeStamp(0.938951667206);
    msg.setSource(35245U);
    msg.setSourceEntity(65U);
    msg.setDestination(61177U);
    msg.setDestinationEntity(244U);
    msg.value = 0.592764378386;

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
    msg.setTimeStamp(0.205015621881);
    msg.setSource(47864U);
    msg.setSourceEntity(142U);
    msg.setDestination(790U);
    msg.setDestinationEntity(87U);
    msg.value = 0.00331849824706;

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
    msg.setTimeStamp(0.232331395494);
    msg.setSource(29587U);
    msg.setSourceEntity(55U);
    msg.setDestination(43156U);
    msg.setDestinationEntity(130U);
    msg.value = 0.800486716541;

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
    msg.setTimeStamp(0.101530422335);
    msg.setSource(59911U);
    msg.setSourceEntity(39U);
    msg.setDestination(20022U);
    msg.setDestinationEntity(247U);
    msg.value = 0.587781952985;

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
    msg.setTimeStamp(0.786932285387);
    msg.setSource(57539U);
    msg.setSourceEntity(210U);
    msg.setDestination(17673U);
    msg.setDestinationEntity(173U);
    msg.value = 0.530033467814;

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
    msg.setTimeStamp(0.329274413769);
    msg.setSource(3138U);
    msg.setSourceEntity(98U);
    msg.setDestination(26995U);
    msg.setDestinationEntity(126U);
    msg.value = 0.448025197794;

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
    msg.setTimeStamp(0.999354586179);
    msg.setSource(23071U);
    msg.setSourceEntity(47U);
    msg.setDestination(16439U);
    msg.setDestinationEntity(149U);
    msg.value = 0.659834129177;

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
    msg.setTimeStamp(0.469710704417);
    msg.setSource(8258U);
    msg.setSourceEntity(140U);
    msg.setDestination(8280U);
    msg.setDestinationEntity(204U);
    msg.value = 0.416753601048;

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
    msg.setTimeStamp(0.402003771486);
    msg.setSource(5543U);
    msg.setSourceEntity(3U);
    msg.setDestination(56338U);
    msg.setDestinationEntity(175U);
    msg.value = 0.453544897202;

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
    msg.setTimeStamp(0.539114783303);
    msg.setSource(61706U);
    msg.setSourceEntity(175U);
    msg.setDestination(17194U);
    msg.setDestinationEntity(122U);
    msg.value = 0.256041156332;

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
    msg.setTimeStamp(0.40865151419);
    msg.setSource(59980U);
    msg.setSourceEntity(239U);
    msg.setDestination(51060U);
    msg.setDestinationEntity(207U);
    msg.value = 0.125029013109;

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
    msg.setTimeStamp(0.289938558486);
    msg.setSource(59874U);
    msg.setSourceEntity(197U);
    msg.setDestination(10073U);
    msg.setDestinationEntity(170U);
    msg.value = 0.419339827404;

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
    msg.setTimeStamp(0.496398773762);
    msg.setSource(42908U);
    msg.setSourceEntity(183U);
    msg.setDestination(12107U);
    msg.setDestinationEntity(146U);
    msg.value = 0.613980003113;

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
    msg.setTimeStamp(0.986651300136);
    msg.setSource(29414U);
    msg.setSourceEntity(106U);
    msg.setDestination(57552U);
    msg.setDestinationEntity(69U);
    msg.value = 0.371139151383;

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
    msg.setTimeStamp(0.42769509322);
    msg.setSource(34999U);
    msg.setSourceEntity(228U);
    msg.setDestination(47427U);
    msg.setDestinationEntity(195U);
    msg.value = 0.677294940838;

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
    msg.setTimeStamp(0.993763838811);
    msg.setSource(12446U);
    msg.setSourceEntity(76U);
    msg.setDestination(60419U);
    msg.setDestinationEntity(240U);
    msg.value = 0.939707625255;

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
    msg.setTimeStamp(0.0626012229226);
    msg.setSource(6529U);
    msg.setSourceEntity(101U);
    msg.setDestination(2764U);
    msg.setDestinationEntity(24U);
    msg.value = 0.693602286609;

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
    msg.setTimeStamp(0.226090572815);
    msg.setSource(59149U);
    msg.setSourceEntity(59U);
    msg.setDestination(24150U);
    msg.setDestinationEntity(210U);
    msg.value = 0.619308061564;

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
    msg.setTimeStamp(0.135622362235);
    msg.setSource(48674U);
    msg.setSourceEntity(127U);
    msg.setDestination(3029U);
    msg.setDestinationEntity(103U);
    msg.value = 0.811447780698;

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
    msg.setTimeStamp(0.730322472283);
    msg.setSource(30305U);
    msg.setSourceEntity(77U);
    msg.setDestination(64023U);
    msg.setDestinationEntity(164U);
    msg.validity = 62746U;
    msg.type = 201U;
    msg.tow = 760084751U;
    msg.base_lat = 0.250049503797;
    msg.base_lon = 0.123975406672;
    msg.base_height = 0.654772791724;
    msg.n = 0.706392951869;
    msg.e = 0.903160953957;
    msg.d = 0.682235984845;
    msg.v_n = 0.599319182992;
    msg.v_e = 0.28622095001;
    msg.v_d = 0.459906868835;
    msg.satellites = 126U;
    msg.iar_hyp = 40728U;
    msg.iar_ratio = 0.870769131755;

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
    msg.setTimeStamp(0.281493107593);
    msg.setSource(48414U);
    msg.setSourceEntity(197U);
    msg.setDestination(17664U);
    msg.setDestinationEntity(237U);
    msg.validity = 47823U;
    msg.type = 117U;
    msg.tow = 2586880529U;
    msg.base_lat = 0.644977372833;
    msg.base_lon = 0.199624289794;
    msg.base_height = 0.39818455631;
    msg.n = 0.420159361456;
    msg.e = 0.44874928637;
    msg.d = 0.395243652461;
    msg.v_n = 0.516250432271;
    msg.v_e = 0.40991853482;
    msg.v_d = 0.748297420271;
    msg.satellites = 245U;
    msg.iar_hyp = 12214U;
    msg.iar_ratio = 0.326713231827;

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
    msg.setTimeStamp(0.535145555341);
    msg.setSource(20052U);
    msg.setSourceEntity(195U);
    msg.setDestination(8480U);
    msg.setDestinationEntity(145U);
    msg.validity = 32414U;
    msg.type = 196U;
    msg.tow = 1610325432U;
    msg.base_lat = 0.443186467074;
    msg.base_lon = 0.980498186229;
    msg.base_height = 0.114864060034;
    msg.n = 0.630400263073;
    msg.e = 0.490284199091;
    msg.d = 0.896293314215;
    msg.v_n = 0.476314454502;
    msg.v_e = 0.480009230925;
    msg.v_d = 0.0441785958994;
    msg.satellites = 12U;
    msg.iar_hyp = 22414U;
    msg.iar_ratio = 0.806102549521;

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
    msg.setTimeStamp(0.920710780942);
    msg.setSource(28202U);
    msg.setSourceEntity(117U);
    msg.setDestination(13953U);
    msg.setDestinationEntity(160U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.414983226523;
    tmp_msg_0.lon = 0.767938162714;
    tmp_msg_0.height = 0.604346884786;
    tmp_msg_0.x = 0.744263177875;
    tmp_msg_0.y = 0.296297995558;
    tmp_msg_0.z = 0.511278450541;
    tmp_msg_0.phi = 0.848473742439;
    tmp_msg_0.theta = 0.0142159692665;
    tmp_msg_0.psi = 0.522633982921;
    tmp_msg_0.u = 0.936051724569;
    tmp_msg_0.v = 0.483124528746;
    tmp_msg_0.w = 0.282300774493;
    tmp_msg_0.vx = 0.800316186135;
    tmp_msg_0.vy = 0.93310922431;
    tmp_msg_0.vz = 0.327878929915;
    tmp_msg_0.p = 0.874336258359;
    tmp_msg_0.q = 0.609994187161;
    tmp_msg_0.r = 0.944558870921;
    tmp_msg_0.depth = 0.528831101122;
    tmp_msg_0.alt = 0.156455354335;
    msg.state.set(tmp_msg_0);
    msg.type = 102U;

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
    msg.setTimeStamp(0.942373068328);
    msg.setSource(21997U);
    msg.setSourceEntity(205U);
    msg.setDestination(14905U);
    msg.setDestinationEntity(233U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.490055526622;
    tmp_msg_0.lon = 0.956691150626;
    tmp_msg_0.height = 0.537653305858;
    tmp_msg_0.x = 0.387238749141;
    tmp_msg_0.y = 0.55153013871;
    tmp_msg_0.z = 0.34894029646;
    tmp_msg_0.phi = 0.0881962533077;
    tmp_msg_0.theta = 0.762926977085;
    tmp_msg_0.psi = 0.537380857524;
    tmp_msg_0.u = 0.574584460352;
    tmp_msg_0.v = 0.649562779145;
    tmp_msg_0.w = 0.51127569339;
    tmp_msg_0.vx = 0.779061118007;
    tmp_msg_0.vy = 0.728324053853;
    tmp_msg_0.vz = 0.0812439370112;
    tmp_msg_0.p = 0.646470185792;
    tmp_msg_0.q = 0.210478815768;
    tmp_msg_0.r = 0.180197464733;
    tmp_msg_0.depth = 0.743050576565;
    tmp_msg_0.alt = 0.28726378153;
    msg.state.set(tmp_msg_0);
    msg.type = 94U;

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
    msg.setTimeStamp(0.853034744488);
    msg.setSource(58355U);
    msg.setSourceEntity(245U);
    msg.setDestination(14071U);
    msg.setDestinationEntity(210U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.777990279613;
    tmp_msg_0.lon = 0.525957726954;
    tmp_msg_0.height = 0.233389677889;
    tmp_msg_0.x = 0.70594165726;
    tmp_msg_0.y = 0.468501543365;
    tmp_msg_0.z = 0.922263177992;
    tmp_msg_0.phi = 0.823074211247;
    tmp_msg_0.theta = 0.99895876947;
    tmp_msg_0.psi = 0.965557346321;
    tmp_msg_0.u = 0.601657071545;
    tmp_msg_0.v = 0.0447043582847;
    tmp_msg_0.w = 0.435160065061;
    tmp_msg_0.vx = 0.456907753284;
    tmp_msg_0.vy = 0.722456564512;
    tmp_msg_0.vz = 0.373789453671;
    tmp_msg_0.p = 0.955393775582;
    tmp_msg_0.q = 0.0858198109423;
    tmp_msg_0.r = 0.104082733521;
    tmp_msg_0.depth = 0.571920960715;
    tmp_msg_0.alt = 0.0637017926225;
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
    msg.setTimeStamp(0.528141307958);
    msg.setSource(56246U);
    msg.setSourceEntity(53U);
    msg.setDestination(2533U);
    msg.setDestinationEntity(61U);
    msg.value = 0.859380074729;

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
    msg.setTimeStamp(0.471647390614);
    msg.setSource(35398U);
    msg.setSourceEntity(84U);
    msg.setDestination(34873U);
    msg.setDestinationEntity(111U);
    msg.value = 0.811150293201;

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
    msg.setTimeStamp(0.221019164661);
    msg.setSource(14405U);
    msg.setSourceEntity(104U);
    msg.setDestination(41743U);
    msg.setDestinationEntity(149U);
    msg.value = 0.431260229972;

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
    msg.setTimeStamp(0.712285446337);
    msg.setSource(56651U);
    msg.setSourceEntity(230U);
    msg.setDestination(34996U);
    msg.setDestinationEntity(3U);
    msg.value = 0.614865203597;

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
    msg.setTimeStamp(0.91444914394);
    msg.setSource(10699U);
    msg.setSourceEntity(106U);
    msg.setDestination(47264U);
    msg.setDestinationEntity(16U);
    msg.value = 0.669654567293;

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
    msg.setTimeStamp(0.514948297785);
    msg.setSource(37603U);
    msg.setSourceEntity(83U);
    msg.setDestination(65304U);
    msg.setDestinationEntity(208U);
    msg.value = 0.564959004075;

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
    msg.setTimeStamp(0.61387023734);
    msg.setSource(20448U);
    msg.setSourceEntity(10U);
    msg.setDestination(61518U);
    msg.setDestinationEntity(168U);
    msg.value = 0.569806829156;

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
    msg.setTimeStamp(0.607103140552);
    msg.setSource(58645U);
    msg.setSourceEntity(159U);
    msg.setDestination(43707U);
    msg.setDestinationEntity(165U);
    msg.value = 0.0658340237544;

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
    msg.setTimeStamp(0.225364159686);
    msg.setSource(61086U);
    msg.setSourceEntity(214U);
    msg.setDestination(64144U);
    msg.setDestinationEntity(120U);
    msg.value = 0.685282834726;

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
    msg.setTimeStamp(0.940608663453);
    msg.setSource(9170U);
    msg.setSourceEntity(238U);
    msg.setDestination(53949U);
    msg.setDestinationEntity(2U);
    msg.value = 0.437731904679;

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
    msg.setTimeStamp(0.43154557078);
    msg.setSource(61227U);
    msg.setSourceEntity(127U);
    msg.setDestination(57933U);
    msg.setDestinationEntity(251U);
    msg.value = 0.999055208555;

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
    msg.setTimeStamp(0.737027196844);
    msg.setSource(25359U);
    msg.setSourceEntity(253U);
    msg.setDestination(1550U);
    msg.setDestinationEntity(223U);
    msg.value = 0.267037372913;

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
    msg.setTimeStamp(0.0509062344836);
    msg.setSource(33100U);
    msg.setSourceEntity(203U);
    msg.setDestination(43168U);
    msg.setDestinationEntity(181U);
    msg.value = 0.484553767351;

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
    msg.setTimeStamp(0.777309878014);
    msg.setSource(52918U);
    msg.setSourceEntity(34U);
    msg.setDestination(42984U);
    msg.setDestinationEntity(99U);
    msg.value = 0.458704761866;

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
    msg.setTimeStamp(0.401099928099);
    msg.setSource(34904U);
    msg.setSourceEntity(45U);
    msg.setDestination(45172U);
    msg.setDestinationEntity(204U);
    msg.value = 0.136228337376;

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
    msg.setTimeStamp(0.0699510563983);
    msg.setSource(6982U);
    msg.setSourceEntity(24U);
    msg.setDestination(5136U);
    msg.setDestinationEntity(51U);
    msg.id = 72U;
    msg.zoom = 100U;
    msg.action = 253U;

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
    msg.setTimeStamp(0.0657108018973);
    msg.setSource(52389U);
    msg.setSourceEntity(217U);
    msg.setDestination(38806U);
    msg.setDestinationEntity(16U);
    msg.id = 47U;
    msg.zoom = 146U;
    msg.action = 149U;

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
    msg.setTimeStamp(0.796537459307);
    msg.setSource(17810U);
    msg.setSourceEntity(229U);
    msg.setDestination(37381U);
    msg.setDestinationEntity(221U);
    msg.id = 144U;
    msg.zoom = 179U;
    msg.action = 80U;

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
    msg.setTimeStamp(0.1821647689);
    msg.setSource(48326U);
    msg.setSourceEntity(178U);
    msg.setDestination(44798U);
    msg.setDestinationEntity(107U);
    msg.id = 105U;
    msg.value = 0.434099209916;

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
    msg.setTimeStamp(0.68191852245);
    msg.setSource(26110U);
    msg.setSourceEntity(215U);
    msg.setDestination(18088U);
    msg.setDestinationEntity(133U);
    msg.id = 119U;
    msg.value = 0.757096732865;

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
    msg.setTimeStamp(0.117165433834);
    msg.setSource(11760U);
    msg.setSourceEntity(52U);
    msg.setDestination(24956U);
    msg.setDestinationEntity(229U);
    msg.id = 108U;
    msg.value = 0.793203371172;

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
    msg.setTimeStamp(0.14833783167);
    msg.setSource(13482U);
    msg.setSourceEntity(137U);
    msg.setDestination(35542U);
    msg.setDestinationEntity(240U);
    msg.id = 188U;
    msg.value = 0.197867250961;

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
    msg.setTimeStamp(0.86903121445);
    msg.setSource(18191U);
    msg.setSourceEntity(61U);
    msg.setDestination(2282U);
    msg.setDestinationEntity(89U);
    msg.id = 90U;
    msg.value = 0.22830832238;

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
    msg.setTimeStamp(0.105094193676);
    msg.setSource(24468U);
    msg.setSourceEntity(180U);
    msg.setDestination(23857U);
    msg.setDestinationEntity(249U);
    msg.id = 7U;
    msg.value = 0.992283139899;

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
    msg.setTimeStamp(0.66371464558);
    msg.setSource(44685U);
    msg.setSourceEntity(59U);
    msg.setDestination(6214U);
    msg.setDestinationEntity(9U);
    msg.id = 98U;
    msg.angle = 0.558269845855;

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
    msg.setTimeStamp(0.459090457321);
    msg.setSource(34519U);
    msg.setSourceEntity(14U);
    msg.setDestination(46848U);
    msg.setDestinationEntity(217U);
    msg.id = 205U;
    msg.angle = 0.169069671444;

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
    msg.setTimeStamp(0.603011666884);
    msg.setSource(46498U);
    msg.setSourceEntity(90U);
    msg.setDestination(8947U);
    msg.setDestinationEntity(35U);
    msg.id = 72U;
    msg.angle = 0.208414931822;

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
    msg.setTimeStamp(0.418209758158);
    msg.setSource(42521U);
    msg.setSourceEntity(153U);
    msg.setDestination(45266U);
    msg.setDestinationEntity(9U);
    msg.op = 147U;
    msg.actions.assign("OGMENQTTCEKQSRIFFZPBBNSFFYQYJPIDCCDRVFXBIRAVLJWTUNPLMAXRGWHVFEYBWQIKXLVFGHATVEHWUXTCLASDEZNGCDJVEDNGHEWUWYJNSGPAIOBHYDGRSUMKFBZSYLO");

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
    msg.setTimeStamp(0.19805104954);
    msg.setSource(25489U);
    msg.setSourceEntity(167U);
    msg.setDestination(28606U);
    msg.setDestinationEntity(4U);
    msg.op = 129U;
    msg.actions.assign("EKDLTEWOPEMBZCCTFBKDGWANSRHALMJYOEJWMQKPTFDBTCASHNPOTZLCRPNCFVQXVVFKKLXLBAZEERCQXLUJGSIJAUNEENGFPXACRUOUDFWOYGXPYZBV");

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
    msg.setTimeStamp(0.599663859397);
    msg.setSource(12822U);
    msg.setSourceEntity(70U);
    msg.setDestination(17919U);
    msg.setDestinationEntity(179U);
    msg.op = 112U;
    msg.actions.assign("QIODTOZYKPEHRHXDRBQQLSBYWFKVNOCIJFXWOSYSXQPCTUUXATMHYPNQMWFLD");

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
    msg.setTimeStamp(0.501070009429);
    msg.setSource(49033U);
    msg.setSourceEntity(45U);
    msg.setDestination(44249U);
    msg.setDestinationEntity(102U);
    msg.actions.assign("DEBLLKXRBQSYVBZBKOYYIXVQDKRCHJMPSCQXZMCKWISWKVAMTMYWBGDXQEVCEKZNZFHREPEENNXXRPKAZPIHPWUYJOTRSLJLFOQXFN");

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
    msg.setTimeStamp(0.00778368519027);
    msg.setSource(51432U);
    msg.setSourceEntity(7U);
    msg.setDestination(1378U);
    msg.setDestinationEntity(0U);
    msg.actions.assign("SFSNOXOJVBEFVTORJTLBRNVGBMYRASFOKYSMWZQKYYUHATMTHSKAFHXKUBGCAJDIYXDMACLUJAPSFVZIRQXWCBAD");

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
    msg.setTimeStamp(0.816154464259);
    msg.setSource(59753U);
    msg.setSourceEntity(54U);
    msg.setDestination(50631U);
    msg.setDestinationEntity(33U);
    msg.actions.assign("HDUTQKQONTOUERJDCOEKMIOBUQWHANHPSONTWKIZLHBQKRSYHUWSPURCOXVKQFJWHZNJUVTHZLJEBMCPXTZGZPXXXOLWG");

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
    msg.setTimeStamp(0.239193994766);
    msg.setSource(3562U);
    msg.setSourceEntity(137U);
    msg.setDestination(21220U);
    msg.setDestinationEntity(125U);
    msg.button = 0U;
    msg.value = 73U;

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
    msg.setTimeStamp(0.382147568115);
    msg.setSource(34556U);
    msg.setSourceEntity(109U);
    msg.setDestination(39122U);
    msg.setDestinationEntity(22U);
    msg.button = 15U;
    msg.value = 254U;

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
    msg.setTimeStamp(0.534263793813);
    msg.setSource(33801U);
    msg.setSourceEntity(25U);
    msg.setDestination(26927U);
    msg.setDestinationEntity(131U);
    msg.button = 35U;
    msg.value = 44U;

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
    msg.setTimeStamp(0.771143485643);
    msg.setSource(28795U);
    msg.setSourceEntity(129U);
    msg.setDestination(15035U);
    msg.setDestinationEntity(54U);
    msg.op = 59U;
    msg.text.assign("ZNMXZNVFHEIXKHBTMISPMCWALWJRAKJBUWNPYAIOOXQUEWHZNXKQXSXKNVERQOMOSAKQPUODIFYBLBZDGWIKVPTZEWMCFNTLDSCGYVKVFLESPVLQJCCJFKZRRNGUTXFTDHFZPHAEABVYUHYSLTDTFGEVYNQCYKZZQKRJLUACWJCHDEAGRYOBIWHLGWCTDSIBJNASJPIAEVMCMPQYJEFMBRJGSILIXNUHGPSUOOGT");

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
    msg.setTimeStamp(0.928070412925);
    msg.setSource(44404U);
    msg.setSourceEntity(212U);
    msg.setDestination(12145U);
    msg.setDestinationEntity(210U);
    msg.op = 240U;
    msg.text.assign("KSQXBWYGPDGPTOSXRYTFGTIBPLPYVBWUGVPLOQRZLXTDKMWSWLEWJYAOGSVYMQTSJHJDWBPUKJYELRGOLOFNFNQDXWALURAWEJVAHADJXRUEVZIHXASKVEKEIIFDIBKMCCRANB");

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
    msg.setTimeStamp(0.791978608566);
    msg.setSource(29315U);
    msg.setSourceEntity(106U);
    msg.setDestination(29204U);
    msg.setDestinationEntity(0U);
    msg.op = 223U;
    msg.text.assign("TRDLUZFSASMTFHLXKUQWTVDLNKUNXJNVGBWCTAWHZMOSDRPBYFYIMMJYAUFVOYEHLLHBCSITQAYLXKCISPZPXNHWEAJVKJYYOQQBHNELGBWVDTWVYKK");

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
    msg.setTimeStamp(0.81230402068);
    msg.setSource(147U);
    msg.setSourceEntity(115U);
    msg.setDestination(61144U);
    msg.setDestinationEntity(204U);
    msg.op = 37U;
    msg.time_remain = 0.344522502986;
    msg.sched_time = 0.940075409805;

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
    msg.setTimeStamp(0.495861817692);
    msg.setSource(8620U);
    msg.setSourceEntity(5U);
    msg.setDestination(48533U);
    msg.setDestinationEntity(118U);
    msg.op = 60U;
    msg.time_remain = 0.247712910883;
    msg.sched_time = 0.532867400939;

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
    msg.setTimeStamp(0.184750970694);
    msg.setSource(23803U);
    msg.setSourceEntity(234U);
    msg.setDestination(23666U);
    msg.setDestinationEntity(91U);
    msg.op = 219U;
    msg.time_remain = 0.522504021914;
    msg.sched_time = 0.573074138308;

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
    msg.setTimeStamp(0.754206618626);
    msg.setSource(7092U);
    msg.setSourceEntity(236U);
    msg.setDestination(3878U);
    msg.setDestinationEntity(21U);
    msg.name.assign("GIEXCLDMWHPMGOORXTYNZLLZDSTLHMQWAVQQSUBGOHCYYAFXRJGXRGFKUXFUNWKWVOSRINDYHEHWKTVHXBOWAZTIIIMCEZFLNDRJONITSZHDJUIPBLUBSXBAOWGOHVQZHWIYEEUDLAKWAZSRGKQENKAFVYYGFPFCCZTMJWENKQACBRQRRMYJXPCJLIXKQJCYNFRSVUDYKSLPHBVUPEPDMXTTABIJOBJDLCENVPTSJPFMZVZDMMB");
    msg.op = 22U;
    msg.sched_time = 0.231592108043;

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
    msg.setTimeStamp(0.269004128114);
    msg.setSource(5229U);
    msg.setSourceEntity(134U);
    msg.setDestination(20494U);
    msg.setDestinationEntity(212U);
    msg.name.assign("QKZZVILFRCCOLFMYWBUDKIHTNYYDJVLFKMGCOULPYXXGEYWQISMGJDYECPNSGTJSUVKEKZTBBVVKSHMPWUQPGZMHGKIPPADDIAKZMDQHJUTUBBQCOQHGHIUJHTIESNJRUSINXDNYVRWAAEBZZASOQEPSKHMCXOFAHGFQOLMWAOFAGODCFVSZKRRWHZLIPPFXERUDQAEOXILTBWLSRTYALYRXNPCBFVJDECTLFWN");
    msg.op = 112U;
    msg.sched_time = 0.271419480653;

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
    msg.setTimeStamp(0.727738574548);
    msg.setSource(36312U);
    msg.setSourceEntity(250U);
    msg.setDestination(33405U);
    msg.setDestinationEntity(247U);
    msg.name.assign("JTOGIPWHFBMOOSBYYECUMFLDIAHPXKRDYTFDEIBFFWGZNQXIFKNJTXFDUVZJRQIQBQLWTRJWSLFUIOSHKUPERAIAJDHDARGPJCBBMGXNKPBNZYYKCUCHSGCZRTTBDHYMODJEENMEKKUGRCNOHLIVBZMUNEVWXTXPGN");
    msg.op = 219U;
    msg.sched_time = 0.0339805476648;

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
    msg.setTimeStamp(0.797666136285);
    msg.setSource(21506U);
    msg.setSourceEntity(233U);
    msg.setDestination(36522U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.390517649007);
    msg.setSource(49961U);
    msg.setSourceEntity(190U);
    msg.setDestination(6390U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.500371394252);
    msg.setSource(26148U);
    msg.setSourceEntity(225U);
    msg.setDestination(42335U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.646296901131);
    msg.setSource(38488U);
    msg.setSourceEntity(165U);
    msg.setDestination(6776U);
    msg.setDestinationEntity(72U);
    msg.name.assign("GNEFMAANHYWQORRPRPVSGKDXZPIGILSJHKVZVUQWWLMULBFSIAFLTXVLGNAWZVYBXWJRORCEICWKBCRXPEJJJOTPIUCDBXOMRMELSNMHOHNWZUAGURHFWXUHKNFZYAYKJOYLKIHSGOPWBYDFTDMZCJHYNOARXIUOXCIQXEYBFRFPUEHGAKYQ");
    msg.state = 215U;

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
    msg.setTimeStamp(0.834311870492);
    msg.setSource(53526U);
    msg.setSourceEntity(80U);
    msg.setDestination(29090U);
    msg.setDestinationEntity(149U);
    msg.name.assign("CNIGQFZRQBNEWTZLKTNZGBSZLLKDLMSMNXTOVNZGHWNCWFKELQRDFJCOVZSHUTVRPOSOSGDIYRKNFUCNZCSOIQAHFHOPPVURCOLBYZEFCDQEHIUMIVAZKOLQKMGQJBWTYLTEOTHGNHQVZSFXAMUMPSICVPHUCTXHKXYUBRULEARDVMWYIXEDRDYBKVEEOYGJXJJWBPPRDNYLIACUQDIYBWWATSHPMXRAGKDXUPFMJXQWJMJGBBJWXJTFEKAGSI");
    msg.state = 110U;

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
    msg.setTimeStamp(0.605834010356);
    msg.setSource(6323U);
    msg.setSourceEntity(172U);
    msg.setDestination(38435U);
    msg.setDestinationEntity(205U);
    msg.name.assign("EXHBHHKCLOVUVBMJOCWWDDAYQLPLASWZKVIIDFPLGQ");
    msg.state = 216U;

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
    msg.setTimeStamp(0.581844874414);
    msg.setSource(16737U);
    msg.setSourceEntity(244U);
    msg.setDestination(28224U);
    msg.setDestinationEntity(179U);
    msg.name.assign("BPWSQQWMSXDUAMGZPZNJDZRFPULRKGAEMYJDAEUZPGOYZWLPXHIOLBVEIVTKNBZXIWWVDRCRWVLFBSYMUFTRHAOQGATCXNVYLDFJNIHJTJUSOQREYCHAYXJCKZOKFGOMPFKLBDFZESNAETHUELQVQRKDMQPKXZOLSSHFFWEDWOSTAV");
    msg.value = 155U;

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
    msg.setTimeStamp(0.825811241879);
    msg.setSource(27807U);
    msg.setSourceEntity(128U);
    msg.setDestination(65192U);
    msg.setDestinationEntity(137U);
    msg.name.assign("FGZHNSVUFVVGQYJPABPKDBVWDZTWFKNPUXRCSVEBNDSAPRQCCTWYSNEBMILGUCDFSYLZTUXBENNLQITTUKMAOJVBSDCNCTCXSHAZT");
    msg.value = 173U;

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
    msg.setTimeStamp(0.177638647767);
    msg.setSource(40680U);
    msg.setSourceEntity(164U);
    msg.setDestination(35128U);
    msg.setDestinationEntity(19U);
    msg.name.assign("MBNKNGQKCOBFWGUWCXSZGYRMDZCVZ");
    msg.value = 226U;

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
    msg.setTimeStamp(0.729885736653);
    msg.setSource(36976U);
    msg.setSourceEntity(26U);
    msg.setDestination(57686U);
    msg.setDestinationEntity(39U);
    msg.name.assign("BPMPMOIIXNSQWJZJDYSWTDSWDXAKOCZANTMVFGETHHPTUPXDIHUCZAHOFYMJFQKLCNVRYXGWUDRVGOEGBJWEFUIYRMJTQNONJUKORZBVPGRVFAVPBIBKGTLOUFUWLXLHRGXTNDPZQXSYEYUJMGYYIEXIUBELDDCFUMTTZSAZSCFMKOTLYRIFEBBONHNKAAPVZHDHRFNCOCLHRKAAPQLLHJSSZQKRJBJCQBGEGVEYIWNEWPACSXQMZXMID");

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
    msg.setTimeStamp(0.711484098787);
    msg.setSource(49622U);
    msg.setSourceEntity(6U);
    msg.setDestination(52001U);
    msg.setDestinationEntity(226U);
    msg.name.assign("GOEJIVUQYUCINNOXQADMSOYJXGMLPFWFTODHVIHENZFFIHYLSRMEUENJRILFJZHSQBIMTWCGNVZRZGWDAAQNFUHJBOGWSEDGYBMFJCXSBDWMAXUURVRKHULEACDYPKNSFOEWFT");

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
    msg.setTimeStamp(0.663085524548);
    msg.setSource(15773U);
    msg.setSourceEntity(195U);
    msg.setDestination(16001U);
    msg.setDestinationEntity(133U);
    msg.name.assign("UOEZLBLGFDASNJYPOHITCQVARXVMIAICUMJBOFRNZZUQLFLHSQKFEKRJLBPEUIPRSTMQWGEJTHFWRCIKTTDBWJAKMNQIJHLPEGSPYZUFDTBNKPTXASFBCQYSBOAAZDGWWYRRZNHBMJJMIPAHQNDDMYCKZHDUCHKOISMTSEMVTUFGSWGFEWYKSGQNDRVAXDXLMGZOOLCVZCYCVELNWXRRVWJIBYQPPPUQYTXKHNVUZUOEWAXODVVCKYJXFXE");

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
    msg.setTimeStamp(0.921159694414);
    msg.setSource(6815U);
    msg.setSourceEntity(151U);
    msg.setDestination(31673U);
    msg.setDestinationEntity(224U);
    msg.name.assign("IAGFEEJGDLYCSJCEISNFQJSEHPSBRMBD");
    msg.value = 12U;

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
    msg.setTimeStamp(0.652650850527);
    msg.setSource(60613U);
    msg.setSourceEntity(85U);
    msg.setDestination(38243U);
    msg.setDestinationEntity(34U);
    msg.name.assign("TKQXOQVSAISPVQDROLPDEZMCJJBNHWVA");
    msg.value = 49U;

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
    msg.setTimeStamp(0.972815827743);
    msg.setSource(2284U);
    msg.setSourceEntity(64U);
    msg.setDestination(27130U);
    msg.setDestinationEntity(102U);
    msg.name.assign("CVSRNERGNXKMKMTRVWSICNKEJOLIYYAYYFNGAZMQUWIBMTCJNATXTRMZUHWJOQIZBHLDILKBBZDDXTQIXPYGJEXZUHSCUYBXLJPJFQMEHHEMDNQUPXBCNSEFTXTAOQCVCYZTAKSMSKBOAVOHGIPERBJUD");
    msg.value = 200U;

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
    msg.setTimeStamp(0.0199989535773);
    msg.setSource(3446U);
    msg.setSourceEntity(119U);
    msg.setDestination(31864U);
    msg.setDestinationEntity(181U);
    msg.id = 64U;
    msg.period = 3153886576U;
    msg.duty_cycle = 4022572741U;

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
    msg.setTimeStamp(0.0775586857338);
    msg.setSource(42328U);
    msg.setSourceEntity(112U);
    msg.setDestination(3986U);
    msg.setDestinationEntity(129U);
    msg.id = 116U;
    msg.period = 1719736317U;
    msg.duty_cycle = 515795470U;

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
    msg.setTimeStamp(0.88925876777);
    msg.setSource(42218U);
    msg.setSourceEntity(40U);
    msg.setDestination(39687U);
    msg.setDestinationEntity(176U);
    msg.id = 36U;
    msg.period = 3901892892U;
    msg.duty_cycle = 3551226302U;

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
    msg.setTimeStamp(0.624692106464);
    msg.setSource(31362U);
    msg.setSourceEntity(218U);
    msg.setDestination(53463U);
    msg.setDestinationEntity(235U);
    msg.id = 120U;
    msg.period = 1830985527U;
    msg.duty_cycle = 1637487224U;

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
    msg.setTimeStamp(0.422684068943);
    msg.setSource(29094U);
    msg.setSourceEntity(213U);
    msg.setDestination(25343U);
    msg.setDestinationEntity(124U);
    msg.id = 235U;
    msg.period = 3863887383U;
    msg.duty_cycle = 2949075355U;

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
    msg.setTimeStamp(0.670944969969);
    msg.setSource(30192U);
    msg.setSourceEntity(237U);
    msg.setDestination(12145U);
    msg.setDestinationEntity(174U);
    msg.id = 252U;
    msg.period = 1669776340U;
    msg.duty_cycle = 3536174461U;

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
    msg.setTimeStamp(0.362324889854);
    msg.setSource(36441U);
    msg.setSourceEntity(230U);
    msg.setDestination(10892U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.104274573351;
    msg.lon = 0.0807337602002;
    msg.height = 0.183421789443;
    msg.x = 0.381666188021;
    msg.y = 0.0424091547954;
    msg.z = 0.28840297558;
    msg.phi = 0.182466786605;
    msg.theta = 0.217154681736;
    msg.psi = 0.167931358897;
    msg.u = 0.724343786454;
    msg.v = 0.559060498117;
    msg.w = 0.831002574992;
    msg.vx = 0.858099874976;
    msg.vy = 0.290032556359;
    msg.vz = 0.653100994431;
    msg.p = 0.590311884551;
    msg.q = 0.425955749994;
    msg.r = 0.791107607521;
    msg.depth = 0.761483168857;
    msg.alt = 0.459114400293;

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
    msg.setTimeStamp(0.450539754327);
    msg.setSource(33981U);
    msg.setSourceEntity(175U);
    msg.setDestination(31338U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.0424329057139;
    msg.lon = 0.943980646968;
    msg.height = 0.379123683176;
    msg.x = 0.412619527714;
    msg.y = 0.454953888129;
    msg.z = 0.578346440476;
    msg.phi = 0.39406670714;
    msg.theta = 0.493063385471;
    msg.psi = 0.900212827314;
    msg.u = 0.306181047184;
    msg.v = 0.995931175994;
    msg.w = 0.433915948487;
    msg.vx = 0.303880126452;
    msg.vy = 0.448097086548;
    msg.vz = 0.826488257975;
    msg.p = 0.371262862092;
    msg.q = 0.586742382582;
    msg.r = 0.576400716878;
    msg.depth = 0.956190491792;
    msg.alt = 0.439860509689;

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
    msg.setTimeStamp(0.571676125718);
    msg.setSource(58645U);
    msg.setSourceEntity(6U);
    msg.setDestination(13192U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.0490501521533;
    msg.lon = 0.384164261756;
    msg.height = 0.287725912127;
    msg.x = 0.404830900765;
    msg.y = 0.883261502162;
    msg.z = 0.67655393372;
    msg.phi = 0.979994531006;
    msg.theta = 0.661929700886;
    msg.psi = 0.466637894478;
    msg.u = 0.7454158677;
    msg.v = 0.665471851144;
    msg.w = 0.74235606939;
    msg.vx = 0.741075934881;
    msg.vy = 0.735624651928;
    msg.vz = 0.781326268073;
    msg.p = 0.107758546805;
    msg.q = 0.83232623468;
    msg.r = 0.138547424672;
    msg.depth = 0.388170664322;
    msg.alt = 0.645536374865;

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
    msg.setTimeStamp(0.792617104442);
    msg.setSource(65350U);
    msg.setSourceEntity(145U);
    msg.setDestination(51114U);
    msg.setDestinationEntity(180U);
    msg.x = 0.00658168598088;
    msg.y = 0.448478836883;
    msg.z = 0.216734611587;

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
    msg.setTimeStamp(0.160640420699);
    msg.setSource(34243U);
    msg.setSourceEntity(107U);
    msg.setDestination(62476U);
    msg.setDestinationEntity(79U);
    msg.x = 0.630330794024;
    msg.y = 0.0692429138321;
    msg.z = 0.640902369183;

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
    msg.setTimeStamp(0.717283120676);
    msg.setSource(23042U);
    msg.setSourceEntity(108U);
    msg.setDestination(15148U);
    msg.setDestinationEntity(36U);
    msg.x = 0.265022881673;
    msg.y = 0.603492681621;
    msg.z = 0.905184839423;

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
    msg.setTimeStamp(0.106578978102);
    msg.setSource(25044U);
    msg.setSourceEntity(190U);
    msg.setDestination(26828U);
    msg.setDestinationEntity(166U);
    msg.value = 0.771536743808;

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
    msg.setTimeStamp(0.776225422463);
    msg.setSource(63746U);
    msg.setSourceEntity(153U);
    msg.setDestination(55192U);
    msg.setDestinationEntity(152U);
    msg.value = 0.0324440148247;

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
    msg.setTimeStamp(0.444232247389);
    msg.setSource(32024U);
    msg.setSourceEntity(131U);
    msg.setDestination(45714U);
    msg.setDestinationEntity(151U);
    msg.value = 0.434886375305;

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
    msg.setTimeStamp(0.630247790892);
    msg.setSource(50037U);
    msg.setSourceEntity(3U);
    msg.setDestination(38759U);
    msg.setDestinationEntity(158U);
    msg.value = 0.336698803075;

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
    msg.setTimeStamp(0.316523687988);
    msg.setSource(22586U);
    msg.setSourceEntity(63U);
    msg.setDestination(2202U);
    msg.setDestinationEntity(138U);
    msg.value = 0.615451594527;

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
    msg.setTimeStamp(0.732012555848);
    msg.setSource(10551U);
    msg.setSourceEntity(33U);
    msg.setDestination(59929U);
    msg.setDestinationEntity(0U);
    msg.value = 0.830742240253;

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
    msg.setTimeStamp(0.446391105939);
    msg.setSource(4697U);
    msg.setSourceEntity(155U);
    msg.setDestination(27272U);
    msg.setDestinationEntity(245U);
    msg.x = 0.109679566028;
    msg.y = 0.673227009232;
    msg.z = 0.204528466102;
    msg.phi = 0.74200600361;
    msg.theta = 0.30027470507;
    msg.psi = 0.500922259992;
    msg.p = 0.989489022877;
    msg.q = 0.83214344148;
    msg.r = 0.681576173113;
    msg.u = 0.508845401421;
    msg.v = 0.174182955986;
    msg.w = 0.0081870068829;
    msg.bias_psi = 0.314976077746;
    msg.bias_r = 0.938584286531;

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
    msg.setTimeStamp(0.665976012068);
    msg.setSource(3621U);
    msg.setSourceEntity(94U);
    msg.setDestination(50772U);
    msg.setDestinationEntity(36U);
    msg.x = 0.30928620655;
    msg.y = 0.592442214228;
    msg.z = 0.843036393197;
    msg.phi = 0.428257474749;
    msg.theta = 0.500440941865;
    msg.psi = 0.0621610133327;
    msg.p = 0.200774241201;
    msg.q = 0.358392886796;
    msg.r = 0.775074369672;
    msg.u = 0.922789788778;
    msg.v = 0.107482366641;
    msg.w = 0.507929465528;
    msg.bias_psi = 0.817467506308;
    msg.bias_r = 0.262834292386;

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
    msg.setTimeStamp(0.722480497565);
    msg.setSource(1762U);
    msg.setSourceEntity(160U);
    msg.setDestination(61138U);
    msg.setDestinationEntity(229U);
    msg.x = 0.251648709363;
    msg.y = 0.165114812089;
    msg.z = 0.178553598414;
    msg.phi = 0.246682047558;
    msg.theta = 0.906111253063;
    msg.psi = 0.380034493533;
    msg.p = 0.40512222887;
    msg.q = 0.547381625487;
    msg.r = 0.698952576507;
    msg.u = 0.901387830643;
    msg.v = 0.241661009155;
    msg.w = 0.439492304877;
    msg.bias_psi = 0.0107803706048;
    msg.bias_r = 0.957341934558;

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
    msg.setTimeStamp(0.0438100475504);
    msg.setSource(28267U);
    msg.setSourceEntity(185U);
    msg.setDestination(45205U);
    msg.setDestinationEntity(0U);
    msg.bias_psi = 0.675450737659;
    msg.bias_r = 0.148043935088;
    msg.cog = 0.553478471653;
    msg.cyaw = 0.882834201063;
    msg.lbl_rej_level = 0.296910896096;
    msg.gps_rej_level = 0.958930599858;
    msg.custom_x = 0.420167281143;
    msg.custom_y = 0.683401152242;
    msg.custom_z = 0.975660059199;

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
    msg.setTimeStamp(0.938661415461);
    msg.setSource(60664U);
    msg.setSourceEntity(120U);
    msg.setDestination(35769U);
    msg.setDestinationEntity(76U);
    msg.bias_psi = 0.72575127561;
    msg.bias_r = 0.263061143164;
    msg.cog = 0.566429621766;
    msg.cyaw = 0.297058464362;
    msg.lbl_rej_level = 0.282133934038;
    msg.gps_rej_level = 0.695820857374;
    msg.custom_x = 0.218303646671;
    msg.custom_y = 0.632989557321;
    msg.custom_z = 0.242444243458;

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
    msg.setTimeStamp(0.805255090978);
    msg.setSource(18784U);
    msg.setSourceEntity(133U);
    msg.setDestination(41256U);
    msg.setDestinationEntity(20U);
    msg.bias_psi = 0.784218411463;
    msg.bias_r = 0.609371491453;
    msg.cog = 0.308210749542;
    msg.cyaw = 0.73455198114;
    msg.lbl_rej_level = 0.026211198635;
    msg.gps_rej_level = 0.304778581685;
    msg.custom_x = 0.922801421404;
    msg.custom_y = 0.601415227015;
    msg.custom_z = 0.285704885571;

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
    msg.setTimeStamp(0.372459942983);
    msg.setSource(46434U);
    msg.setSourceEntity(197U);
    msg.setDestination(60250U);
    msg.setDestinationEntity(140U);
    msg.utc_time = 0.30033085937;
    msg.reason = 104U;

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
    msg.setTimeStamp(0.111024909398);
    msg.setSource(25030U);
    msg.setSourceEntity(204U);
    msg.setDestination(15981U);
    msg.setDestinationEntity(208U);
    msg.utc_time = 0.226142365781;
    msg.reason = 238U;

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
    msg.setTimeStamp(0.582457687054);
    msg.setSource(50252U);
    msg.setSourceEntity(160U);
    msg.setDestination(61137U);
    msg.setDestinationEntity(223U);
    msg.utc_time = 0.223804413567;
    msg.reason = 90U;

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
    msg.setTimeStamp(0.181457349557);
    msg.setSource(13782U);
    msg.setSourceEntity(13U);
    msg.setDestination(34684U);
    msg.setDestinationEntity(105U);
    msg.id = 185U;
    msg.range = 0.908738262533;
    msg.acceptance = 14U;

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
    msg.setTimeStamp(0.423327866333);
    msg.setSource(14377U);
    msg.setSourceEntity(7U);
    msg.setDestination(55967U);
    msg.setDestinationEntity(39U);
    msg.id = 107U;
    msg.range = 0.174389419629;
    msg.acceptance = 113U;

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
    msg.setTimeStamp(0.913170763243);
    msg.setSource(47582U);
    msg.setSourceEntity(236U);
    msg.setDestination(6277U);
    msg.setDestinationEntity(249U);
    msg.id = 124U;
    msg.range = 0.379915354533;
    msg.acceptance = 86U;

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
    msg.setTimeStamp(0.341847126795);
    msg.setSource(31465U);
    msg.setSourceEntity(150U);
    msg.setDestination(20073U);
    msg.setDestinationEntity(32U);
    msg.type = 253U;
    msg.reason = 173U;
    msg.value = 0.161174853584;
    msg.timestep = 0.394204296582;

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
    msg.setTimeStamp(0.933729174012);
    msg.setSource(28757U);
    msg.setSourceEntity(236U);
    msg.setDestination(23627U);
    msg.setDestinationEntity(229U);
    msg.type = 149U;
    msg.reason = 0U;
    msg.value = 0.335793459326;
    msg.timestep = 0.696033252438;

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
    msg.setTimeStamp(0.399854689785);
    msg.setSource(53444U);
    msg.setSourceEntity(164U);
    msg.setDestination(56765U);
    msg.setDestinationEntity(243U);
    msg.type = 6U;
    msg.reason = 213U;
    msg.value = 0.87635513708;
    msg.timestep = 0.135203867053;

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
    msg.setTimeStamp(0.651980382567);
    msg.setSource(1692U);
    msg.setSourceEntity(247U);
    msg.setDestination(53461U);
    msg.setDestinationEntity(226U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NGWEHXIUVUAARNWMIQULKWGVMFFZJXJHSWNMGYUJKBQZCDPAKCCNJPKQCDMICPGCOEXTCOYZBAIRUCRAVKQMECJIPMGGQZLWVIDEYDTOTTLQLFWUHNZOKDIIYQQASEODGHTPBUFZLMHWWCODWLYVAXQYODSESRABBU");
    tmp_msg_0.lat = 0.909194463184;
    tmp_msg_0.lon = 0.382232653247;
    tmp_msg_0.depth = 0.00194958635875;
    tmp_msg_0.query_channel = 216U;
    tmp_msg_0.reply_channel = 72U;
    tmp_msg_0.transponder_delay = 45U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.151710665831;
    msg.y = 0.172975902347;
    msg.var_x = 0.618227815274;
    msg.var_y = 0.233681714045;
    msg.distance = 0.141341070927;

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
    msg.setTimeStamp(0.448218701164);
    msg.setSource(62987U);
    msg.setSourceEntity(241U);
    msg.setDestination(12839U);
    msg.setDestinationEntity(90U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UXCJZPKGDXZWMYUVZOMQQDNYMDIIRBMFNJIAXLNRKDBPOFTOPFKFIKOJCYFHGUUPTJRGTLBXLLQRCEHERABCYHDKJMQOGXVGKWYQGTKWEATEURGUDLVCSNSFKANTNYIZWTNBJIWHDOIQEJVSPOOPTHVZOGHTAMRUSQYVHSWCMIQLXDZCHABPWDWYHKGFCZMKSEVUVFSNUAZJVREPUEERW");
    tmp_msg_0.lat = 0.374830389023;
    tmp_msg_0.lon = 0.881843273804;
    tmp_msg_0.depth = 0.746435508047;
    tmp_msg_0.query_channel = 35U;
    tmp_msg_0.reply_channel = 164U;
    tmp_msg_0.transponder_delay = 94U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.212502016179;
    msg.y = 0.865018731933;
    msg.var_x = 0.509689140181;
    msg.var_y = 0.991713941339;
    msg.distance = 0.0775986265035;

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
    msg.setTimeStamp(0.34279149479);
    msg.setSource(9961U);
    msg.setSourceEntity(188U);
    msg.setDestination(19328U);
    msg.setDestinationEntity(228U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EMYCIHEPBWDXQFLEVETZYLCYEDKHCUUJDIHVWGLSDZWPZIMUPNFJWZQUDLOBPBIOKOKPXAHMGXKVJTKAYUGQHTBHNCQNUBTVSJLRASYISGREVFLQYQGURLDBMORAAKNSSJFLSTSHIWHZCXXMOGJXRCOTWRAVOFDRQNWGVNNPXAJDRIZGTIKYPCKUPQRVNEXALFLFXG");
    tmp_msg_0.lat = 0.0858759659944;
    tmp_msg_0.lon = 0.169938447447;
    tmp_msg_0.depth = 0.0474186401389;
    tmp_msg_0.query_channel = 116U;
    tmp_msg_0.reply_channel = 148U;
    tmp_msg_0.transponder_delay = 174U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.962917613066;
    msg.y = 0.659690950636;
    msg.var_x = 0.0887728410506;
    msg.var_y = 0.286797232897;
    msg.distance = 0.40300579936;

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
    msg.setTimeStamp(0.434806284414);
    msg.setSource(52003U);
    msg.setSourceEntity(38U);
    msg.setDestination(6865U);
    msg.setDestinationEntity(163U);
    msg.state = 81U;

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
    msg.setTimeStamp(0.055215291125);
    msg.setSource(19785U);
    msg.setSourceEntity(160U);
    msg.setDestination(38327U);
    msg.setDestinationEntity(14U);
    msg.state = 237U;

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
    msg.setTimeStamp(0.802678308747);
    msg.setSource(63537U);
    msg.setSourceEntity(234U);
    msg.setDestination(35613U);
    msg.setDestinationEntity(34U);
    msg.state = 199U;

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
    msg.setTimeStamp(0.322614600038);
    msg.setSource(6832U);
    msg.setSourceEntity(178U);
    msg.setDestination(60440U);
    msg.setDestinationEntity(169U);
    msg.x = 0.343673702153;
    msg.y = 0.0588031996542;
    msg.z = 0.284131313483;

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
    msg.setTimeStamp(0.88048833085);
    msg.setSource(34367U);
    msg.setSourceEntity(192U);
    msg.setDestination(45812U);
    msg.setDestinationEntity(8U);
    msg.x = 0.577473446553;
    msg.y = 0.517702427776;
    msg.z = 0.182773004375;

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
    msg.setTimeStamp(0.194643231666);
    msg.setSource(39862U);
    msg.setSourceEntity(29U);
    msg.setDestination(63707U);
    msg.setDestinationEntity(188U);
    msg.x = 0.0477886795601;
    msg.y = 0.546571620341;
    msg.z = 0.00594511049678;

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
    msg.setTimeStamp(0.564983456696);
    msg.setSource(58152U);
    msg.setSourceEntity(79U);
    msg.setDestination(22455U);
    msg.setDestinationEntity(228U);
    msg.va = 0.234606849509;
    msg.aoa = 0.684722267943;
    msg.ssa = 0.189123856084;

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
    msg.setTimeStamp(0.409198523308);
    msg.setSource(41298U);
    msg.setSourceEntity(202U);
    msg.setDestination(36375U);
    msg.setDestinationEntity(252U);
    msg.va = 0.967085175825;
    msg.aoa = 0.856235459879;
    msg.ssa = 0.551973431995;

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
    msg.setTimeStamp(0.222608882432);
    msg.setSource(30918U);
    msg.setSourceEntity(76U);
    msg.setDestination(48104U);
    msg.setDestinationEntity(251U);
    msg.va = 0.225689124113;
    msg.aoa = 0.436172860618;
    msg.ssa = 0.179139809006;

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
    msg.setTimeStamp(0.500399248354);
    msg.setSource(12169U);
    msg.setSourceEntity(254U);
    msg.setDestination(2871U);
    msg.setDestinationEntity(22U);
    msg.value = 0.42383338533;

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
    msg.setTimeStamp(0.216510745244);
    msg.setSource(53540U);
    msg.setSourceEntity(83U);
    msg.setDestination(22914U);
    msg.setDestinationEntity(206U);
    msg.value = 0.135150865424;

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
    msg.setTimeStamp(0.568214931796);
    msg.setSource(24788U);
    msg.setSourceEntity(235U);
    msg.setDestination(18268U);
    msg.setDestinationEntity(75U);
    msg.value = 0.891876761825;

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
    msg.setTimeStamp(0.839070572949);
    msg.setSource(56056U);
    msg.setSourceEntity(127U);
    msg.setDestination(34383U);
    msg.setDestinationEntity(191U);
    msg.value = 0.744743748768;
    msg.z_units = 188U;

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
    msg.setTimeStamp(0.207832887712);
    msg.setSource(63520U);
    msg.setSourceEntity(33U);
    msg.setDestination(28884U);
    msg.setDestinationEntity(106U);
    msg.value = 0.858869370758;
    msg.z_units = 232U;

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
    msg.setTimeStamp(0.419701227875);
    msg.setSource(14971U);
    msg.setSourceEntity(124U);
    msg.setDestination(25862U);
    msg.setDestinationEntity(216U);
    msg.value = 0.276786788227;
    msg.z_units = 156U;

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
    msg.setTimeStamp(0.0308319964866);
    msg.setSource(27383U);
    msg.setSourceEntity(204U);
    msg.setDestination(13032U);
    msg.setDestinationEntity(96U);
    msg.value = 0.853105077206;
    msg.speed_units = 244U;

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
    msg.setTimeStamp(0.0663882070561);
    msg.setSource(62631U);
    msg.setSourceEntity(242U);
    msg.setDestination(64289U);
    msg.setDestinationEntity(246U);
    msg.value = 0.890592209692;
    msg.speed_units = 79U;

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
    msg.setTimeStamp(0.657591485008);
    msg.setSource(45774U);
    msg.setSourceEntity(137U);
    msg.setDestination(956U);
    msg.setDestinationEntity(108U);
    msg.value = 0.276464290034;
    msg.speed_units = 34U;

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
    msg.setTimeStamp(0.23948227081);
    msg.setSource(30258U);
    msg.setSourceEntity(95U);
    msg.setDestination(46485U);
    msg.setDestinationEntity(79U);
    msg.value = 0.379305968501;

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
    msg.setTimeStamp(0.45589935604);
    msg.setSource(313U);
    msg.setSourceEntity(239U);
    msg.setDestination(16506U);
    msg.setDestinationEntity(226U);
    msg.value = 0.928331158407;

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
    msg.setTimeStamp(0.657852510927);
    msg.setSource(40635U);
    msg.setSourceEntity(41U);
    msg.setDestination(56631U);
    msg.setDestinationEntity(120U);
    msg.value = 0.844727251853;

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
    msg.setTimeStamp(0.852709114135);
    msg.setSource(28289U);
    msg.setSourceEntity(153U);
    msg.setDestination(13697U);
    msg.setDestinationEntity(32U);
    msg.value = 0.246273456969;

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
    msg.setTimeStamp(0.852232291585);
    msg.setSource(803U);
    msg.setSourceEntity(16U);
    msg.setDestination(30954U);
    msg.setDestinationEntity(187U);
    msg.value = 0.622453329613;

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
    msg.setTimeStamp(0.496251161088);
    msg.setSource(22726U);
    msg.setSourceEntity(182U);
    msg.setDestination(33829U);
    msg.setDestinationEntity(248U);
    msg.value = 0.645277805201;

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
    msg.setTimeStamp(0.165602016496);
    msg.setSource(8720U);
    msg.setSourceEntity(111U);
    msg.setDestination(27164U);
    msg.setDestinationEntity(226U);
    msg.value = 0.540292832629;

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
    msg.setTimeStamp(0.27677246667);
    msg.setSource(47462U);
    msg.setSourceEntity(146U);
    msg.setDestination(55703U);
    msg.setDestinationEntity(130U);
    msg.value = 0.515809955792;

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
    msg.setTimeStamp(0.0294601024377);
    msg.setSource(24443U);
    msg.setSourceEntity(172U);
    msg.setDestination(24130U);
    msg.setDestinationEntity(27U);
    msg.value = 0.213617627822;

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
    msg.setTimeStamp(0.278067534703);
    msg.setSource(53331U);
    msg.setSourceEntity(165U);
    msg.setDestination(17507U);
    msg.setDestinationEntity(180U);
    msg.path_ref = 3755051880U;
    msg.start_lat = 0.958615172056;
    msg.start_lon = 0.725639192365;
    msg.start_z = 0.638702403256;
    msg.start_z_units = 21U;
    msg.end_lat = 0.577031471671;
    msg.end_lon = 0.243789566307;
    msg.end_z = 0.940875175682;
    msg.end_z_units = 148U;
    msg.speed = 0.0943037229539;
    msg.speed_units = 141U;
    msg.lradius = 0.808457465006;
    msg.flags = 71U;

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
    msg.setTimeStamp(0.111705709059);
    msg.setSource(7084U);
    msg.setSourceEntity(6U);
    msg.setDestination(34456U);
    msg.setDestinationEntity(12U);
    msg.path_ref = 2733633532U;
    msg.start_lat = 0.415956180325;
    msg.start_lon = 0.96794786742;
    msg.start_z = 0.332959933099;
    msg.start_z_units = 252U;
    msg.end_lat = 0.408756377964;
    msg.end_lon = 0.131637106343;
    msg.end_z = 0.854428723481;
    msg.end_z_units = 201U;
    msg.speed = 0.416575927202;
    msg.speed_units = 96U;
    msg.lradius = 0.606822785536;
    msg.flags = 245U;

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
    msg.setTimeStamp(0.825896699223);
    msg.setSource(63884U);
    msg.setSourceEntity(177U);
    msg.setDestination(6022U);
    msg.setDestinationEntity(20U);
    msg.path_ref = 696671910U;
    msg.start_lat = 0.220021756207;
    msg.start_lon = 0.179796242376;
    msg.start_z = 0.974798860289;
    msg.start_z_units = 50U;
    msg.end_lat = 0.110359234952;
    msg.end_lon = 0.315610759615;
    msg.end_z = 0.604197704739;
    msg.end_z_units = 108U;
    msg.speed = 0.908305188785;
    msg.speed_units = 127U;
    msg.lradius = 0.40479225038;
    msg.flags = 205U;

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
    msg.setTimeStamp(0.56241445039);
    msg.setSource(16134U);
    msg.setSourceEntity(165U);
    msg.setDestination(23714U);
    msg.setDestinationEntity(61U);
    msg.x = 0.0880376626784;
    msg.y = 0.978313897864;
    msg.z = 0.228010988646;
    msg.k = 0.942681700787;
    msg.m = 0.777505552318;
    msg.n = 0.183077749398;
    msg.flags = 64U;

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
    msg.setTimeStamp(0.671357065064);
    msg.setSource(49632U);
    msg.setSourceEntity(245U);
    msg.setDestination(15167U);
    msg.setDestinationEntity(232U);
    msg.x = 0.381361461116;
    msg.y = 0.164095220445;
    msg.z = 0.512921753924;
    msg.k = 0.873120924961;
    msg.m = 0.232669667262;
    msg.n = 0.968457859515;
    msg.flags = 126U;

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
    msg.setTimeStamp(0.728176518399);
    msg.setSource(18614U);
    msg.setSourceEntity(143U);
    msg.setDestination(1347U);
    msg.setDestinationEntity(209U);
    msg.x = 0.315464404138;
    msg.y = 0.320969051394;
    msg.z = 0.295048812233;
    msg.k = 0.644925661852;
    msg.m = 0.950276437644;
    msg.n = 0.260052108334;
    msg.flags = 165U;

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
    msg.setTimeStamp(0.999503315238);
    msg.setSource(52595U);
    msg.setSourceEntity(45U);
    msg.setDestination(38787U);
    msg.setDestinationEntity(184U);
    msg.value = 0.122152704984;

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
    msg.setTimeStamp(0.46510383353);
    msg.setSource(50089U);
    msg.setSourceEntity(144U);
    msg.setDestination(58685U);
    msg.setDestinationEntity(198U);
    msg.value = 0.661362783447;

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
    msg.setTimeStamp(0.0993466243169);
    msg.setSource(38245U);
    msg.setSourceEntity(99U);
    msg.setDestination(41081U);
    msg.setDestinationEntity(48U);
    msg.value = 0.569689897707;

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
    msg.setTimeStamp(0.390503113716);
    msg.setSource(1921U);
    msg.setSourceEntity(177U);
    msg.setDestination(32874U);
    msg.setDestinationEntity(75U);
    msg.u = 0.353349026076;
    msg.v = 0.713397909542;
    msg.w = 0.352280688988;
    msg.p = 0.311263901496;
    msg.q = 0.324772728606;
    msg.r = 0.0443257118309;
    msg.flags = 236U;

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
    msg.setTimeStamp(0.395211744048);
    msg.setSource(61293U);
    msg.setSourceEntity(201U);
    msg.setDestination(45050U);
    msg.setDestinationEntity(80U);
    msg.u = 0.295359851357;
    msg.v = 0.775802032037;
    msg.w = 0.208229930143;
    msg.p = 0.994751758865;
    msg.q = 0.229984025854;
    msg.r = 0.179409494626;
    msg.flags = 137U;

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
    msg.setTimeStamp(0.198640441785);
    msg.setSource(22293U);
    msg.setSourceEntity(29U);
    msg.setDestination(10171U);
    msg.setDestinationEntity(111U);
    msg.u = 0.558101941032;
    msg.v = 0.0102057186154;
    msg.w = 0.441871197633;
    msg.p = 0.263102732884;
    msg.q = 0.304735939727;
    msg.r = 0.532480045945;
    msg.flags = 49U;

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
    msg.setTimeStamp(0.520247026867);
    msg.setSource(53300U);
    msg.setSourceEntity(31U);
    msg.setDestination(40387U);
    msg.setDestinationEntity(44U);
    msg.path_ref = 3141371762U;
    msg.start_lat = 0.382498861525;
    msg.start_lon = 0.219079201529;
    msg.start_z = 0.885552241455;
    msg.start_z_units = 229U;
    msg.end_lat = 0.505814483069;
    msg.end_lon = 0.497748454645;
    msg.end_z = 0.017000708115;
    msg.end_z_units = 232U;
    msg.lradius = 0.0973798722402;
    msg.flags = 78U;
    msg.x = 0.619055355128;
    msg.y = 0.450894493799;
    msg.z = 0.92411002988;
    msg.vx = 0.365007466528;
    msg.vy = 0.969564368935;
    msg.vz = 0.125022240722;
    msg.course_error = 0.823561499401;
    msg.eta = 63359U;

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
    msg.setTimeStamp(0.399782963336);
    msg.setSource(12047U);
    msg.setSourceEntity(149U);
    msg.setDestination(30834U);
    msg.setDestinationEntity(241U);
    msg.path_ref = 4056348806U;
    msg.start_lat = 0.474541912765;
    msg.start_lon = 0.211953361692;
    msg.start_z = 0.429804320263;
    msg.start_z_units = 68U;
    msg.end_lat = 0.577950084273;
    msg.end_lon = 0.0973845975575;
    msg.end_z = 0.440585649819;
    msg.end_z_units = 232U;
    msg.lradius = 0.986381445741;
    msg.flags = 98U;
    msg.x = 0.0764633800271;
    msg.y = 0.373546495081;
    msg.z = 0.596094347802;
    msg.vx = 0.472513455946;
    msg.vy = 0.797494834854;
    msg.vz = 0.277938770507;
    msg.course_error = 0.894068036999;
    msg.eta = 26252U;

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
    msg.setTimeStamp(0.120852211969);
    msg.setSource(54023U);
    msg.setSourceEntity(253U);
    msg.setDestination(35078U);
    msg.setDestinationEntity(140U);
    msg.path_ref = 1990775611U;
    msg.start_lat = 0.296379766946;
    msg.start_lon = 0.141540506164;
    msg.start_z = 0.699428457867;
    msg.start_z_units = 134U;
    msg.end_lat = 0.185229034545;
    msg.end_lon = 0.129681717297;
    msg.end_z = 0.39229446958;
    msg.end_z_units = 98U;
    msg.lradius = 0.0503867702602;
    msg.flags = 196U;
    msg.x = 0.727720817607;
    msg.y = 0.379890023029;
    msg.z = 0.476094723925;
    msg.vx = 0.482170523988;
    msg.vy = 0.821506761693;
    msg.vz = 0.780619320499;
    msg.course_error = 0.289199004145;
    msg.eta = 23685U;

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
    msg.setTimeStamp(0.095898648136);
    msg.setSource(39202U);
    msg.setSourceEntity(177U);
    msg.setDestination(17357U);
    msg.setDestinationEntity(88U);
    msg.k = 0.704196647144;
    msg.m = 0.83837637797;
    msg.n = 0.564193083625;

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
    msg.setTimeStamp(0.742196082825);
    msg.setSource(2162U);
    msg.setSourceEntity(24U);
    msg.setDestination(57354U);
    msg.setDestinationEntity(218U);
    msg.k = 0.175550187342;
    msg.m = 0.947799873708;
    msg.n = 0.858372151265;

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
    msg.setTimeStamp(0.194129647636);
    msg.setSource(35099U);
    msg.setSourceEntity(29U);
    msg.setDestination(52063U);
    msg.setDestinationEntity(239U);
    msg.k = 0.820914965039;
    msg.m = 0.503042530141;
    msg.n = 0.913072076159;

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
    msg.setTimeStamp(0.855700618204);
    msg.setSource(53344U);
    msg.setSourceEntity(207U);
    msg.setDestination(14154U);
    msg.setDestinationEntity(29U);
    msg.p = 0.616228352601;
    msg.i = 0.700302320761;
    msg.d = 0.758377273508;
    msg.a = 0.68865864549;

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
    msg.setTimeStamp(0.540357801773);
    msg.setSource(10881U);
    msg.setSourceEntity(160U);
    msg.setDestination(12180U);
    msg.setDestinationEntity(114U);
    msg.p = 0.31117339559;
    msg.i = 0.603101124951;
    msg.d = 0.885362761226;
    msg.a = 0.387688490105;

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
    msg.setTimeStamp(0.715503207086);
    msg.setSource(60428U);
    msg.setSourceEntity(36U);
    msg.setDestination(16131U);
    msg.setDestinationEntity(46U);
    msg.p = 0.102068395745;
    msg.i = 0.336439318626;
    msg.d = 0.384639930698;
    msg.a = 0.0681890547454;

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
    msg.setTimeStamp(0.063534314105);
    msg.setSource(42408U);
    msg.setSourceEntity(248U);
    msg.setDestination(17797U);
    msg.setDestinationEntity(133U);
    msg.op = 72U;

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
    msg.setTimeStamp(0.838877348197);
    msg.setSource(26659U);
    msg.setSourceEntity(44U);
    msg.setDestination(9967U);
    msg.setDestinationEntity(196U);
    msg.op = 33U;

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
    msg.setTimeStamp(0.700730948957);
    msg.setSource(27497U);
    msg.setSourceEntity(20U);
    msg.setDestination(18744U);
    msg.setDestinationEntity(91U);
    msg.op = 109U;

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
    msg.setTimeStamp(0.258773762419);
    msg.setSource(55038U);
    msg.setSourceEntity(10U);
    msg.setDestination(59657U);
    msg.setDestinationEntity(103U);
    msg.x = 0.246830206041;
    msg.y = 0.239200218615;
    msg.z = 0.0931204265593;
    msg.vx = 0.00348856776139;
    msg.vy = 0.31638913585;
    msg.vz = 0.0428305883644;
    msg.ax = 0.465264007115;
    msg.ay = 0.16772464286;
    msg.az = 0.563139176614;
    msg.flags = 16946U;

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
    msg.setTimeStamp(0.623265573016);
    msg.setSource(62344U);
    msg.setSourceEntity(69U);
    msg.setDestination(100U);
    msg.setDestinationEntity(94U);
    msg.x = 0.22110478226;
    msg.y = 0.0456456082965;
    msg.z = 0.00896434489306;
    msg.vx = 0.662134557258;
    msg.vy = 0.851656680157;
    msg.vz = 0.788331269814;
    msg.ax = 0.0936984853521;
    msg.ay = 0.908714706301;
    msg.az = 0.0650243771893;
    msg.flags = 49348U;

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
    msg.setTimeStamp(0.516864404673);
    msg.setSource(23338U);
    msg.setSourceEntity(237U);
    msg.setDestination(56091U);
    msg.setDestinationEntity(123U);
    msg.x = 0.984990168476;
    msg.y = 0.118933578779;
    msg.z = 0.454106358657;
    msg.vx = 0.624643718329;
    msg.vy = 0.472405807822;
    msg.vz = 0.505564900369;
    msg.ax = 0.556520367624;
    msg.ay = 0.208994968254;
    msg.az = 0.925081650469;
    msg.flags = 22755U;

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
    msg.setTimeStamp(0.756349368188);
    msg.setSource(15066U);
    msg.setSourceEntity(139U);
    msg.setDestination(10455U);
    msg.setDestinationEntity(62U);
    msg.value = 0.985459286427;

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
    msg.setTimeStamp(0.188231029472);
    msg.setSource(51152U);
    msg.setSourceEntity(225U);
    msg.setDestination(17230U);
    msg.setDestinationEntity(128U);
    msg.value = 0.596298891429;

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
    msg.setTimeStamp(0.790242386243);
    msg.setSource(29996U);
    msg.setSourceEntity(92U);
    msg.setDestination(13849U);
    msg.setDestinationEntity(82U);
    msg.value = 0.681326929587;

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
    msg.setTimeStamp(0.618533794357);
    msg.setSource(38927U);
    msg.setSourceEntity(250U);
    msg.setDestination(33375U);
    msg.setDestinationEntity(141U);
    msg.timeout = 62689U;
    msg.lat = 0.495367043139;
    msg.lon = 0.4662001705;
    msg.z = 0.345782777765;
    msg.z_units = 245U;
    msg.speed = 0.00239537502779;
    msg.speed_units = 213U;
    msg.roll = 0.043981102982;
    msg.pitch = 0.177971339317;
    msg.yaw = 0.878382740819;
    msg.custom.assign("XXRFURIDRNWXEWYZSTKEDHQELMRDQIQJVOMLXSFJCZWYRQNPQHSPSDCSCYWDYZEPYGSBZLBSIZYSAAWAIXFYWTXZUYOUNIQDLRGDHVIMJVELZSEMTNZBJUKJQNQHTTOEOBGVLIXKVBASWFCPCOPJKGLMJPLHFDJKKBOMTACFANGLGQKXGGWVXROUUMHFIRJCDLBNAEVWKDFENXTKHTHIVHAATUYNVCOCBEJPZRHRPZQMFGCIBGOUMPKMV");

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
    msg.setTimeStamp(0.644869578498);
    msg.setSource(15065U);
    msg.setSourceEntity(196U);
    msg.setDestination(13240U);
    msg.setDestinationEntity(125U);
    msg.timeout = 51288U;
    msg.lat = 0.648843671514;
    msg.lon = 0.698871194604;
    msg.z = 0.242195587973;
    msg.z_units = 122U;
    msg.speed = 0.561359460331;
    msg.speed_units = 41U;
    msg.roll = 0.29948104582;
    msg.pitch = 0.913539674816;
    msg.yaw = 0.181524084348;
    msg.custom.assign("KTILLSVMMGUENHVWZHTYAMSDBOKIORPEEZJGKOVGTHXAPABGHSWVXPJDFXSCGVIJBRDNWPYTEMQMANCUCRFLCNFOITVBHROBQSNXDNZYLQBFRFJPGMIZNQPWLJLYUUKXYYTFIPJQDWDZLYJJDZNGKXAHWAFHEAIKQMQZNRHXOJEYGLGDCMVIBPZARWMEXHWFSCGROUECYEXCTOUDMOZRYWTXWIFK");

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
    msg.setTimeStamp(0.272325611411);
    msg.setSource(63565U);
    msg.setSourceEntity(190U);
    msg.setDestination(45600U);
    msg.setDestinationEntity(134U);
    msg.timeout = 21577U;
    msg.lat = 0.317164291073;
    msg.lon = 0.760040665027;
    msg.z = 0.723976209514;
    msg.z_units = 136U;
    msg.speed = 0.145872160162;
    msg.speed_units = 81U;
    msg.roll = 0.704716769127;
    msg.pitch = 0.428860325289;
    msg.yaw = 0.455181471507;
    msg.custom.assign("WTCHCVMECZTMMDWSHCHLQVPVQIBXIIYXCUYNAVHFWEDZVSEZMTTRQREKYMWGCGXPCIQTJJWQOGNLLCABJBFXPHXBSOUUYNKQLOXNFUGISSHMAPTAMKSXRJSFBHKLQYLOGZQHRXUXJSRWWK");

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
    msg.setTimeStamp(0.0394629875488);
    msg.setSource(36070U);
    msg.setSourceEntity(73U);
    msg.setDestination(47117U);
    msg.setDestinationEntity(53U);
    msg.timeout = 26422U;
    msg.lat = 0.431650707464;
    msg.lon = 0.248781662428;
    msg.z = 0.425769530263;
    msg.z_units = 74U;
    msg.speed = 0.980887464672;
    msg.speed_units = 219U;
    msg.duration = 44863U;
    msg.radius = 0.937534388201;
    msg.flags = 73U;
    msg.custom.assign("MFALYBREROWMTZPSPRHBFBKTYXCPYVNNVMOELEKCTCSGPMGHWPYSDCFQCSGUKWOZELHVWRESJXIRHTNVMHRGXVBJQZQOWLADMHYLEDUOELVKBTCGCCSBSYQFXMZHFCULQFZJNWONSWZLURIFVUCPKEIEDQDWXJIPYJHEFTXTJADQWIZJFKUMZIZKNGXPYRZGNQJRIGDYNAQIBGLQ");

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
    msg.setTimeStamp(0.603084651289);
    msg.setSource(63610U);
    msg.setSourceEntity(42U);
    msg.setDestination(11858U);
    msg.setDestinationEntity(28U);
    msg.timeout = 19470U;
    msg.lat = 0.0536241411922;
    msg.lon = 0.846080709653;
    msg.z = 0.592330046391;
    msg.z_units = 178U;
    msg.speed = 0.515822924107;
    msg.speed_units = 21U;
    msg.duration = 55960U;
    msg.radius = 0.35658918182;
    msg.flags = 246U;
    msg.custom.assign("PHWVIKGBGTWUONICQTQWGWGZ");

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
    msg.setTimeStamp(0.404563190116);
    msg.setSource(2834U);
    msg.setSourceEntity(232U);
    msg.setDestination(55905U);
    msg.setDestinationEntity(142U);
    msg.timeout = 43031U;
    msg.lat = 0.632384328169;
    msg.lon = 0.491227082079;
    msg.z = 0.159124362884;
    msg.z_units = 82U;
    msg.speed = 0.422676317653;
    msg.speed_units = 110U;
    msg.duration = 62875U;
    msg.radius = 0.889943844637;
    msg.flags = 238U;
    msg.custom.assign("KQOXMWSINUJKTJWBHYOHTXYEEOIRCPACMRWIMEUAWDWQPWJJUJBZQJCRYVRTBDBQXIXVNYPUGPHHELOLDVZIHKYMMNEULLZZRDUKHBBQYGSEOONOESHDWXJCTFPWIZZRRSDKEVVIGXVKAZNQPMHEGMHNKKLTFVCB");

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
    msg.setTimeStamp(0.554475694104);
    msg.setSource(36658U);
    msg.setSourceEntity(103U);
    msg.setDestination(33066U);
    msg.setDestinationEntity(24U);
    msg.custom.assign("OAFAZEEMDOFPVLRZKWMXGTSLHRDXPFGFOVIIIWGKDRXCQVDJPHSKKUCYJDNOEHRQTVNGLPCOZWNSEZGPNBRYQUINXIQGFJZPNALGESSXDGYAGAEXCOQAHRBWMATMDTSQMLFVQWOBHRETPBBQNCEBPNWQSVLYXCSIJOTKB");

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
    msg.setTimeStamp(0.164566709949);
    msg.setSource(16359U);
    msg.setSourceEntity(238U);
    msg.setDestination(5542U);
    msg.setDestinationEntity(155U);
    msg.custom.assign("QYAZHLQSESHGYQKMRYWVNQFCPUVWKJRSCLNFCIYXXKODIECKRWSXMPCMKUAJAWCIWGLVZBJNEKALBXOPAZQGBCVRUPPEHSJLEUTJXHSNTUWVBTHMPMAVAHUXRIDGNQTVZEYDRLDOGFPUJLFHZRBDNPQTGKISUGDOJUXZFXCJNUNFDGKMLOHHRTBISMDAVYERTQAIVNCODWNETA");

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
    msg.setTimeStamp(0.927266177361);
    msg.setSource(13170U);
    msg.setSourceEntity(114U);
    msg.setDestination(11943U);
    msg.setDestinationEntity(100U);
    msg.custom.assign("MNOQUIBGNAMYELKYPHCZDKRUVHLWEXAJWITMBHZIYWITDELGFPGELZZENROGCVLJBZIJUBRBRVMEZUEKDNLFLSHRHJWOXICJW");

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
    msg.setTimeStamp(0.121155731764);
    msg.setSource(43877U);
    msg.setSourceEntity(220U);
    msg.setDestination(14175U);
    msg.setDestinationEntity(236U);
    msg.timeout = 387U;
    msg.lat = 0.0426387074042;
    msg.lon = 0.518827393978;
    msg.z = 0.312741380398;
    msg.z_units = 246U;
    msg.duration = 14673U;
    msg.speed = 0.157109913429;
    msg.speed_units = 66U;
    msg.type = 135U;
    msg.radius = 0.235151402139;
    msg.length = 0.594837628947;
    msg.bearing = 0.925166222766;
    msg.direction = 62U;
    msg.custom.assign("IMSXDZWVTPIHSBIWIJYUSMZLRNZOFYIVETYMAOCDOPCANSJXHDXLQJQENGKPSLGNOPDZAHIXFVLRBAMTRFDZFHVQHXVZKZFUOWKG");

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
    msg.setTimeStamp(0.724298214403);
    msg.setSource(31174U);
    msg.setSourceEntity(88U);
    msg.setDestination(34573U);
    msg.setDestinationEntity(221U);
    msg.timeout = 4102U;
    msg.lat = 0.6591766181;
    msg.lon = 0.100841630413;
    msg.z = 0.0354313497399;
    msg.z_units = 210U;
    msg.duration = 32681U;
    msg.speed = 0.908205040057;
    msg.speed_units = 184U;
    msg.type = 254U;
    msg.radius = 0.731865626258;
    msg.length = 0.00577005229985;
    msg.bearing = 0.0460310303742;
    msg.direction = 3U;
    msg.custom.assign("SBCZIJKMQYSUGVKWOHRANWPTVOXONKGGXTLTSYOYFEVAKBELZCQDBWHNFFMHOJSLEFLWZCABPDUYOESGRSUYWSDTVJIIKUENKNJJIMZGUCXACPDRAVINWMCPVDPAGDKPWBNERTBBIBTQOEERRLHFJYAHCVHSILQKHLQQVJIWFMAUCGYGYZJTRKZUDZRWPQMXBNUJZTUYZNQGPBSGFLOMV");

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
    msg.setTimeStamp(0.662559792949);
    msg.setSource(11283U);
    msg.setSourceEntity(74U);
    msg.setDestination(126U);
    msg.setDestinationEntity(223U);
    msg.timeout = 64255U;
    msg.lat = 0.271229988682;
    msg.lon = 0.693201188642;
    msg.z = 0.294302262255;
    msg.z_units = 210U;
    msg.duration = 45619U;
    msg.speed = 0.389572878595;
    msg.speed_units = 138U;
    msg.type = 239U;
    msg.radius = 0.189573675087;
    msg.length = 0.255714376851;
    msg.bearing = 0.00102706399516;
    msg.direction = 119U;
    msg.custom.assign("RDDTCNSUNCQOHPYGMCBAPAIUWYSVHOUJKEJWJFAVCXXORZWKCXXRELAXVBLYLFEMYYRIHBTPRRLOYPZEJQLWLGYZYHSRVBQLGQHGIZAMVUICMVVEODAYAOUEBNHQLWJBDPZBQFSZOTFKNPWTPDGTEJMGOQSFLWUNXESAEVVKMIFDJYTMBZHU");

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
    msg.setTimeStamp(0.554561685923);
    msg.setSource(57454U);
    msg.setSourceEntity(6U);
    msg.setDestination(57274U);
    msg.setDestinationEntity(129U);
    msg.duration = 60538U;
    msg.custom.assign("NRADWPZJAEDWOORKMEWIIQYNGFHIJVOYPKTNBQZQIOANZLDXHUJYP");

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
    msg.setTimeStamp(0.790369538805);
    msg.setSource(49839U);
    msg.setSourceEntity(47U);
    msg.setDestination(23959U);
    msg.setDestinationEntity(72U);
    msg.duration = 48893U;
    msg.custom.assign("NNYJZWZLRJWIKTEGRPXUUYXBTCGWOZBTKMSUXVOKAXHQSAICTQYQVHXWHLTIXEQLPFMMOGSCEHAZUFJMRHKKOZQGBUSDJKEOUDGYOPKDIONYPDEXPHYDTNWQWYYCWSOJZSCXEGQSYWZGOUBPVWRNVVITNACTLNNJDHRMEMKCNWDJBIXRRGEVLLPNSAHAKZIDUCJFVDJFCBHQRP");

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
    msg.setTimeStamp(0.116880592614);
    msg.setSource(9606U);
    msg.setSourceEntity(44U);
    msg.setDestination(37271U);
    msg.setDestinationEntity(29U);
    msg.duration = 14943U;
    msg.custom.assign("PJOOMCXKKPFBVTIEOLDIEPXULSSUYYOSMTAIOKKYFPMHTLDSQOYROCZSFSBELQJFHUVJQATXVWSXVKZYJGLZRNWEMDDWWIBCTMMWAFLMBYSFEFNEKHVLRIKGFNYXGHRJHZWDBYTAUZLTUKRDHVPQPCG");

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
    msg.setTimeStamp(0.0900036640955);
    msg.setSource(26454U);
    msg.setSourceEntity(11U);
    msg.setDestination(30808U);
    msg.setDestinationEntity(226U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.944266115086;
    msg.control.set(tmp_msg_0);
    msg.duration = 54386U;
    msg.custom.assign("CTTIVPBDESDYKHCSOCVBXJZCINFAJPOMTHYGCBRNPQEQJUNGVHQKVIIXBRJYKPAWDZIEUHRYRLIXLGZFTUXVFELDQSXLEWNIWZUOYGOGSPMKRYJTTHJM");

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
    msg.setTimeStamp(0.0574647730281);
    msg.setSource(7991U);
    msg.setSourceEntity(130U);
    msg.setDestination(29421U);
    msg.setDestinationEntity(113U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.663757251682;
    tmp_msg_0.speed_units = 143U;
    msg.control.set(tmp_msg_0);
    msg.duration = 65272U;
    msg.custom.assign("RYAJVUCMEJCHCAATIFGZGOOGSTJWAFOFIHSIKBSVXTJADYPRVLHMKWXKEWUMRZMGFGJVFWNBWGAKOCKNMKIRGDXNUMOH");

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
    msg.setTimeStamp(0.361885161517);
    msg.setSource(1609U);
    msg.setSourceEntity(83U);
    msg.setDestination(26087U);
    msg.setDestinationEntity(174U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.261455398371;
    msg.control.set(tmp_msg_0);
    msg.duration = 10866U;
    msg.custom.assign("TZSSAWQFSJNKPLQDBAKWIXGPBLP");

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
    msg.setTimeStamp(0.526056881321);
    msg.setSource(54824U);
    msg.setSourceEntity(15U);
    msg.setDestination(40317U);
    msg.setDestinationEntity(97U);
    msg.timeout = 19503U;
    msg.lat = 0.583215906788;
    msg.lon = 0.783460601551;
    msg.z = 0.299424118903;
    msg.z_units = 68U;
    msg.speed = 0.713111582579;
    msg.speed_units = 181U;
    msg.bearing = 0.652828789738;
    msg.cross_angle = 0.862430975354;
    msg.width = 0.358643809679;
    msg.length = 0.272335738798;
    msg.hstep = 0.906816589817;
    msg.coff = 3U;
    msg.alternation = 15U;
    msg.flags = 174U;
    msg.custom.assign("FTLRWHEEWTBYOCDKOSSPTUNHGBZOWEYIBNIUAXTJQBSDGLHKQVXGWFOAYKKYUMTSVFRQCSVPDDZZHKHYVGEXXCQZCLAYEVYFOAAIBRDRBHYAPNVNQUIWKPPJLWFZYEKWJCOXRZFTOJLGHJJDDLQMPXUI");

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
    msg.setTimeStamp(0.832851985393);
    msg.setSource(34184U);
    msg.setSourceEntity(197U);
    msg.setDestination(48412U);
    msg.setDestinationEntity(124U);
    msg.timeout = 60630U;
    msg.lat = 0.724617727948;
    msg.lon = 0.920385282576;
    msg.z = 0.254288143723;
    msg.z_units = 5U;
    msg.speed = 0.687236425078;
    msg.speed_units = 164U;
    msg.bearing = 0.808843473309;
    msg.cross_angle = 0.418880154546;
    msg.width = 0.0376841993196;
    msg.length = 0.699769607281;
    msg.hstep = 0.223036364031;
    msg.coff = 220U;
    msg.alternation = 119U;
    msg.flags = 17U;
    msg.custom.assign("EBAWLZYFLSIUOJCEUQOHVQOURRLHAJIPNQABCAEMHDKJOCTJKPLHWTSAIEFUADGVKUMXKGQSNNWTEFPBGQNCPSRDZQWTZJSKHBFKUCXYGATXNAWQTMOIX");

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
    msg.setTimeStamp(0.560055567033);
    msg.setSource(44205U);
    msg.setSourceEntity(50U);
    msg.setDestination(3999U);
    msg.setDestinationEntity(87U);
    msg.timeout = 50134U;
    msg.lat = 0.724243542426;
    msg.lon = 0.72250805589;
    msg.z = 0.176380381779;
    msg.z_units = 224U;
    msg.speed = 0.798298851706;
    msg.speed_units = 52U;
    msg.bearing = 0.245563487246;
    msg.cross_angle = 0.882625414521;
    msg.width = 0.0563687324974;
    msg.length = 0.354632556209;
    msg.hstep = 0.414156557261;
    msg.coff = 207U;
    msg.alternation = 243U;
    msg.flags = 175U;
    msg.custom.assign("CCSSKIUYDJUACMPXXQJOHMKMTPGIJEMJNHHMIBXTZVRQCBXFVCZZJDNMTKO");

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
    msg.setTimeStamp(0.920588805489);
    msg.setSource(59074U);
    msg.setSourceEntity(107U);
    msg.setDestination(36466U);
    msg.setDestinationEntity(41U);
    msg.timeout = 30538U;
    msg.lat = 0.438500844928;
    msg.lon = 0.633408754438;
    msg.z = 0.104382485447;
    msg.z_units = 210U;
    msg.speed = 0.0823604041705;
    msg.speed_units = 8U;
    msg.custom.assign("NPBSIEZAKBVJUZRAPVAMSUKOTZERMVRMMHFVXMOIVBDXYDKJNSJTIEIHMSUDCPUZWMNQYALBHLLKAFOQFEVCNFEYHOU");

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
    msg.setTimeStamp(0.0227773921099);
    msg.setSource(22330U);
    msg.setSourceEntity(185U);
    msg.setDestination(31664U);
    msg.setDestinationEntity(94U);
    msg.timeout = 50621U;
    msg.lat = 0.648323614043;
    msg.lon = 0.403678201857;
    msg.z = 0.00706571387346;
    msg.z_units = 230U;
    msg.speed = 0.565007537904;
    msg.speed_units = 42U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.496824415237;
    tmp_msg_0.y = 0.313068691864;
    tmp_msg_0.z = 0.515835218248;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LSVJVATRPLFXXBSWBSTTHDBJKKCIJGFFBMQEULHPZXRTO");

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
    msg.setTimeStamp(0.63162620755);
    msg.setSource(51167U);
    msg.setSourceEntity(143U);
    msg.setDestination(56815U);
    msg.setDestinationEntity(187U);
    msg.timeout = 13050U;
    msg.lat = 0.626969116274;
    msg.lon = 0.627288902146;
    msg.z = 0.465163794978;
    msg.z_units = 161U;
    msg.speed = 0.85533307192;
    msg.speed_units = 193U;
    msg.custom.assign("HAWBMJHVIYSCKTOCDDROTJWCYHGESVUYMQWVTNQGSFCQBTQFTUJBSNXLNMCXMNUFHLMNFZMFYNZDERBSAZEMVEZDROSOLULUTJSRQYHEVXIGYQUTWVTIQDGMXWVZPZAADDGNYUBWCQGRGTOMIHIPRPHELUMJKJLQIZCPDPGRNHXAGOIHCBJNAEXXJYBOFEKSYPBKVE");

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
    msg.setTimeStamp(0.842811555074);
    msg.setSource(2603U);
    msg.setSourceEntity(104U);
    msg.setDestination(6903U);
    msg.setDestinationEntity(94U);
    msg.x = 0.434670299304;
    msg.y = 0.598132312579;
    msg.z = 0.938114250754;

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
    msg.setTimeStamp(0.637798764295);
    msg.setSource(21997U);
    msg.setSourceEntity(216U);
    msg.setDestination(37098U);
    msg.setDestinationEntity(84U);
    msg.x = 0.679971576272;
    msg.y = 0.757162860677;
    msg.z = 0.757490946458;

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
    msg.setTimeStamp(0.336503695077);
    msg.setSource(53204U);
    msg.setSourceEntity(31U);
    msg.setDestination(7888U);
    msg.setDestinationEntity(152U);
    msg.x = 0.10769099031;
    msg.y = 0.00584354835882;
    msg.z = 0.987201421002;

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
    msg.setTimeStamp(0.0784192612456);
    msg.setSource(44735U);
    msg.setSourceEntity(206U);
    msg.setDestination(19971U);
    msg.setDestinationEntity(76U);
    msg.timeout = 61294U;
    msg.lat = 0.94306958279;
    msg.lon = 0.825230449951;
    msg.z = 0.515407787324;
    msg.z_units = 133U;
    msg.amplitude = 0.899674051194;
    msg.pitch = 0.77007079117;
    msg.speed = 0.95425413764;
    msg.speed_units = 156U;
    msg.custom.assign("GETVKYZALYUVKMORNUBGUITEEYRCYMEUABSWHVDWEOXDBSABMPAQOKQIGTSPEXWNQIHFBRBZTCLUFTXOWEAYIJUJKPXXFATIBMVOOPJCVMDLSEZHPMRXTDXWSLONGVGFZVLGLFWAELIZELUUKACPGQRDRKCNJSLMLKXQDTCWDBNCZPSVUKVJDZWCNNAYZHGRHJFHPODTXPHTIIFORCVIYMQJPNBFHA");

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
    msg.setTimeStamp(0.0350951268024);
    msg.setSource(47492U);
    msg.setSourceEntity(32U);
    msg.setDestination(33581U);
    msg.setDestinationEntity(51U);
    msg.timeout = 56571U;
    msg.lat = 0.747530368905;
    msg.lon = 0.834988372826;
    msg.z = 0.280101237848;
    msg.z_units = 148U;
    msg.amplitude = 0.428149129785;
    msg.pitch = 0.880607669539;
    msg.speed = 0.297693138606;
    msg.speed_units = 153U;
    msg.custom.assign("BDWIUIETTVFVGDESAWZKLUUMINJEXUQQZHPJLXBPSFTFRBLYUJIXCABGFQHIEVDOURLKRWOGYDRZPCZTSIWCGLFTCGNMCVVDHIZQHMCFTEZYWWYBGVMIGQMJCNHVNMNRZDRRABSPGYNLPTNBOHYJCLYDKXVXFOZNHOJJFEAHWLEUHMYVQGWIANKKREBXUOQDTWXKSDJOLSYHCRJXFKQEXIASZPOBRAZGKQXNPPOWLBUTUSQAOPEY");

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
    msg.setTimeStamp(0.100418801301);
    msg.setSource(28344U);
    msg.setSourceEntity(101U);
    msg.setDestination(48040U);
    msg.setDestinationEntity(131U);
    msg.timeout = 20686U;
    msg.lat = 0.215620791695;
    msg.lon = 0.187430900716;
    msg.z = 0.797999306779;
    msg.z_units = 137U;
    msg.amplitude = 0.281320869943;
    msg.pitch = 0.890928785922;
    msg.speed = 0.265182282335;
    msg.speed_units = 71U;
    msg.custom.assign("XQUVNUYBLRBUGKYTOGDVAOYVTGTMAVLAVUKDTHMKHHYDXNHAZXJPXQWHNCELTSFJFFJEMPIBPECRSUSOHYEBVWRIBILPEWZZOWZQPQKY");

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
    msg.setTimeStamp(0.416079262073);
    msg.setSource(61540U);
    msg.setSourceEntity(18U);
    msg.setDestination(47061U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.970963788215);
    msg.setSource(28957U);
    msg.setSourceEntity(98U);
    msg.setDestination(20785U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.321700969864);
    msg.setSource(50159U);
    msg.setSourceEntity(81U);
    msg.setDestination(43074U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.537214574639);
    msg.setSource(58501U);
    msg.setSourceEntity(70U);
    msg.setDestination(38100U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.581497227064;
    msg.lon = 0.119931682772;
    msg.z = 0.667537627161;
    msg.z_units = 124U;
    msg.radius = 0.237123467559;
    msg.duration = 22819U;
    msg.speed = 0.671720166015;
    msg.speed_units = 170U;
    msg.custom.assign("FEAGIMCQXOEYPUZXWQISUMELGTVYDRDYTUFOZLBEMIFXQPBOLTHLHNXUVKRYJFBIVAONUOZEVRQNKOEJDBBPRKFSNSSKZCNCBCHOQKLDYWLMKX");

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
    msg.setTimeStamp(0.550253103794);
    msg.setSource(53114U);
    msg.setSourceEntity(5U);
    msg.setDestination(3910U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.70061487705;
    msg.lon = 0.33052987366;
    msg.z = 0.544108796212;
    msg.z_units = 137U;
    msg.radius = 0.631643844837;
    msg.duration = 30787U;
    msg.speed = 0.48181806429;
    msg.speed_units = 170U;
    msg.custom.assign("GAQPUVRESARBBABOMNMYIDVCSYLGRSUJTCUWDDHZPHRSBFOJTLDJNDZPVLPXIZUAHOKTUQFLMLIBAKZPHVQNNOBUNJAJFSYTYKJEWBAUAEZXTZOGOHPHWCVQYZ");

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
    msg.setTimeStamp(0.947534067568);
    msg.setSource(7329U);
    msg.setSourceEntity(154U);
    msg.setDestination(65276U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.879337892275;
    msg.lon = 0.0093652902766;
    msg.z = 0.036063705092;
    msg.z_units = 113U;
    msg.radius = 0.639553225995;
    msg.duration = 3622U;
    msg.speed = 0.940416265289;
    msg.speed_units = 202U;
    msg.custom.assign("VGLKJNHMSORWHPIZDRMJHMAHGJIXRPASOLWFEGDNZCDNUY");

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
    msg.setTimeStamp(0.609576680108);
    msg.setSource(46191U);
    msg.setSourceEntity(25U);
    msg.setDestination(19060U);
    msg.setDestinationEntity(41U);
    msg.timeout = 61279U;
    msg.flags = 85U;
    msg.lat = 0.64794346204;
    msg.lon = 0.0294652725005;
    msg.start_z = 0.274304731802;
    msg.start_z_units = 82U;
    msg.end_z = 0.55442921786;
    msg.end_z_units = 173U;
    msg.radius = 0.0374777741884;
    msg.speed = 0.871277085478;
    msg.speed_units = 200U;
    msg.custom.assign("JWUUPHZGOKBBTUMFVTYQBALZLEMJNNEGRFNIZCAWAMLXIGDITDNXXDPZBIKXGPLDASHBFRFERWRLYOCACQJNIBVQJYTQXEXVCIMNXCSUGGGIKYRGSJNECFSSKVNTEKKSTBJMEMBLOOUFAZFGXSVRJQMHWVIZPPNOYPOMDKHHLCHAJDLYVPZWETAWHXRQBPYYXDTJUKZQHFNLDATUSWORVUZQSLEKRBMYTSFWIZPJRCGM");

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
    msg.setTimeStamp(0.136274734369);
    msg.setSource(46126U);
    msg.setSourceEntity(87U);
    msg.setDestination(49876U);
    msg.setDestinationEntity(207U);
    msg.timeout = 10765U;
    msg.flags = 50U;
    msg.lat = 0.0833611057129;
    msg.lon = 0.41121544662;
    msg.start_z = 0.786836398118;
    msg.start_z_units = 23U;
    msg.end_z = 0.461984463634;
    msg.end_z_units = 152U;
    msg.radius = 0.982431104869;
    msg.speed = 0.0324493195815;
    msg.speed_units = 70U;
    msg.custom.assign("BSEXSANQWVPIWGUAAKCMWSOZFZTGLRHZMKXQTNXMRYGIFYJJTNSFDEUTLHXEGFOEFZRHJHNGAWOTCYZUWBTBV");

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
    msg.setTimeStamp(0.80253858671);
    msg.setSource(52242U);
    msg.setSourceEntity(160U);
    msg.setDestination(46593U);
    msg.setDestinationEntity(29U);
    msg.timeout = 62787U;
    msg.flags = 162U;
    msg.lat = 0.330803765797;
    msg.lon = 0.313016994044;
    msg.start_z = 0.975155545597;
    msg.start_z_units = 92U;
    msg.end_z = 0.208667318575;
    msg.end_z_units = 135U;
    msg.radius = 0.425941880823;
    msg.speed = 0.734930807537;
    msg.speed_units = 214U;
    msg.custom.assign("MNAHZEBPEJFUIXTLJLXSCJVZOCJFTORPTMTDWJWENOHNHAMSSVRNQPREFUKZZVCWYPMWUWAYGOVNXLRZVHGTRKJYRTIODFOELTBUGERBYXBKYXQMFBLFFIBBZGWPYPVVINQXUJENGSWNMFPOLQHLICVGCLURAEXKUCKXWKGLPKYCUTDDQNQIVAMHZQKBDFHSSSIUDIADCXGMIPRISPTCBJDXMUJQVBASZYZAOTFMADKZQH");

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
    msg.setTimeStamp(0.0969457849502);
    msg.setSource(34544U);
    msg.setSourceEntity(241U);
    msg.setDestination(50195U);
    msg.setDestinationEntity(28U);
    msg.timeout = 16553U;
    msg.lat = 0.111350828179;
    msg.lon = 0.194008506964;
    msg.z = 0.0566350733755;
    msg.z_units = 13U;
    msg.speed = 0.830849000011;
    msg.speed_units = 0U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.59749974614;
    tmp_msg_0.y = 0.460897549041;
    tmp_msg_0.z = 0.852873169802;
    tmp_msg_0.t = 0.265183882977;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KASLACHGRBWAPVRSPRKKXWLWGUKVOYFDYYHCNSVEXNT");

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
    msg.setTimeStamp(0.545212169387);
    msg.setSource(9484U);
    msg.setSourceEntity(163U);
    msg.setDestination(54132U);
    msg.setDestinationEntity(75U);
    msg.timeout = 4717U;
    msg.lat = 0.491414198955;
    msg.lon = 0.419310031191;
    msg.z = 0.641084810974;
    msg.z_units = 192U;
    msg.speed = 0.46626978623;
    msg.speed_units = 98U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.806581639175;
    tmp_msg_0.y = 0.313658024999;
    tmp_msg_0.z = 0.817393886008;
    tmp_msg_0.t = 0.935204514733;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UYHYMFOHWMEPJVSJAUAKJCBZOJYFNUNXULDAMLQTMEPBVCMVZFTTQBKVQWXB");

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
    msg.setTimeStamp(0.551583954614);
    msg.setSource(13110U);
    msg.setSourceEntity(116U);
    msg.setDestination(6814U);
    msg.setDestinationEntity(19U);
    msg.timeout = 33728U;
    msg.lat = 0.506443276037;
    msg.lon = 0.52587183586;
    msg.z = 0.612364850577;
    msg.z_units = 204U;
    msg.speed = 0.26421343399;
    msg.speed_units = 34U;
    msg.custom.assign("WCHNUGZPAISSFFLXREDHMAAMYJGIZGWSNADPXNACWUHFXHICCUZCAPCKLNWLNDYMQVVVKNYELZUTYYGHZPOSRMBJCTHPOQJAQDVDVSMJGKULKIWTHROYQBXPBEELGUPIWANJCYRPJYUGWTFJRSNQOQKTRDEJU");

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
    msg.setTimeStamp(0.671228023912);
    msg.setSource(59322U);
    msg.setSourceEntity(2U);
    msg.setDestination(50826U);
    msg.setDestinationEntity(5U);
    msg.x = 0.0774857409726;
    msg.y = 0.825349781746;
    msg.z = 0.283407774474;
    msg.t = 0.193156562085;

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
    msg.setTimeStamp(0.731137823147);
    msg.setSource(38049U);
    msg.setSourceEntity(83U);
    msg.setDestination(19351U);
    msg.setDestinationEntity(242U);
    msg.x = 0.459346632127;
    msg.y = 0.636417878835;
    msg.z = 0.978250443346;
    msg.t = 0.777247326493;

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
    msg.setTimeStamp(0.580326031573);
    msg.setSource(59472U);
    msg.setSourceEntity(246U);
    msg.setDestination(50727U);
    msg.setDestinationEntity(38U);
    msg.x = 0.402976446748;
    msg.y = 0.67336991225;
    msg.z = 0.49865453705;
    msg.t = 0.889325463923;

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
    msg.setTimeStamp(0.731860397385);
    msg.setSource(4802U);
    msg.setSourceEntity(50U);
    msg.setDestination(10043U);
    msg.setDestinationEntity(112U);
    msg.timeout = 2438U;
    msg.name.assign("LAJZTFWHVXJOZZPZHPQLRXSBEKABBQKMTSRBMPIBGHDRFXXSXFYHJCVVJZOWOXEPGBCHLCXRGUYMHGYCQZFQCWEUYGFAFTSOVGALNTCGAJCMODQSMUJUDD");
    msg.custom.assign("WAQMYKIQPHIABDYIKRSHJCLRTBUBFIWSMLHPNGDTRPVWBGMBIDBDRJWPERUVZDPIUTAOHFJNKTOOAFMBINJCXXUPCMCNEQCWCMLCSXZLPZYAZOOCZDVHOVUQWATEDWMYOEREKUYSATUARLUWMZXCGEWPQSJSPR");

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
    msg.setTimeStamp(0.219664151055);
    msg.setSource(41094U);
    msg.setSourceEntity(5U);
    msg.setDestination(36907U);
    msg.setDestinationEntity(191U);
    msg.timeout = 46317U;
    msg.name.assign("JOMRTIQEMOXUSUFGDOSZYGWIGUUQGTUXPHHQXDWKOAASOASKBZKCDDZKBVCTRJJQNLPHICADCBEWGBEPWMYRZYHLESVFZGRLDMVPZNINNJYQGKYIRAKHJOBPXKETDXUQQECOJXWOIKVFSCESAMZRDVNROVCOHTHGZHCSVYZHUWAXKBLULLFRWGIWAUPXDLJIJ");
    msg.custom.assign("PIKVRAMJPVDWTSAPBZHAGFQGZYNSRUZAAQHEVRFBDADKXDSHELEFRGBDTNRBREVKVCIIBOFKKKPCGLBLQCYOWICBOHJLHTKTTZCQNVTCEYHGWOQYARODUPKJOBDOBOXHXYTYENPUNTWWYMIHASMFLQCCGWIWZUY");

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
    msg.setTimeStamp(0.630587814986);
    msg.setSource(3870U);
    msg.setSourceEntity(176U);
    msg.setDestination(63341U);
    msg.setDestinationEntity(35U);
    msg.timeout = 65524U;
    msg.name.assign("XKCNZKQVOPNCZFOLPAHHXEHQESNGPBYIOWVPWUSWOSQCQEMSGBGICWMSBJTTXFCYACHPVUBFVKGVFIONVVJRCLYYGBAFPWAMWLDYRRXGZUMOHFWPZKIENPIHUSIFUXZIIKMDVDQKUJTQYKMBPQNTMZEHZISFDLXVEDDUJNCOREKORLDGULANTAATOETZAKHRL");
    msg.custom.assign("MAUCNFWHYYMXGKKZHTVZUOBGRRAHEGWPAXDBYGECVJGZJLLJXLLHIEPQKFMDPBXZTZCEEUIKRCMJKUPSZMIWZHQAHTQNVQWJATNBOODSSBWUUNUFOCZLSSTRMNHMXSTDDFOWWTQOVPLXNIAOFQBKBQPTIFAYDHAIYOIOVYKUFPGJKHVLYCRGXQLXXGLRFGQSFVHRYPBUXKDVRERTRNDWPSDNOBJZIJCCSTLEEPMIGMWSEACVYYJDB");

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
    msg.setTimeStamp(0.573348320524);
    msg.setSource(9151U);
    msg.setSourceEntity(249U);
    msg.setDestination(15200U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.502059901038;
    msg.lon = 0.641356267448;
    msg.z = 0.724577548728;
    msg.z_units = 166U;
    msg.speed = 0.5934819841;
    msg.speed_units = 89U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 7439U;
    tmp_msg_0.off_x = 0.390295029328;
    tmp_msg_0.off_y = 0.750830102276;
    tmp_msg_0.off_z = 0.0678760667382;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.775093227529;
    msg.custom.assign("IVMZQKAJZGRWOIAWRGHXCEVPSPYTPLHTDWWFSIYTXMCCQHCNOXHTBVIXHUHUHFYXABGRNJPNRRHPUATKDVOBNAJQIJCDPEDJQOGJXMCKVYSHOGOKMRABNSWUQQLEQZEDCCQMUTNKMOZEUSNBIADUBGLFPKEWKUZDMVHQZYUWTFVRDBTWDLFGLGZYJDRAMILJYFZZSVSQPFLXVISWELJCNSRJFWTVZFBSYBXXM");

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
    msg.setTimeStamp(0.22629873009);
    msg.setSource(25370U);
    msg.setSourceEntity(130U);
    msg.setDestination(32915U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.041174576661;
    msg.lon = 0.0809827741115;
    msg.z = 0.119114505474;
    msg.z_units = 55U;
    msg.speed = 0.919410323716;
    msg.speed_units = 54U;
    msg.start_time = 0.419851554327;
    msg.custom.assign("UXIJIQVBSGCRWJCFECEPOAGZFAHHLB");

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
    msg.setTimeStamp(0.34900822938);
    msg.setSource(23180U);
    msg.setSourceEntity(227U);
    msg.setDestination(16113U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.599452030524;
    msg.lon = 0.522710838105;
    msg.z = 0.743266748834;
    msg.z_units = 156U;
    msg.speed = 0.935640144056;
    msg.speed_units = 164U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 43840U;
    tmp_msg_0.off_x = 0.825807235461;
    tmp_msg_0.off_y = 0.333655908981;
    tmp_msg_0.off_z = 0.325517828961;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.0447112990177;
    msg.custom.assign("JXDGCRAKILFDIMUGVEXYFEYSJMLLZDATQZRRJIPRHIIPZTHNUCES");

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
    msg.setTimeStamp(0.882270635005);
    msg.setSource(25017U);
    msg.setSourceEntity(187U);
    msg.setDestination(23701U);
    msg.setDestinationEntity(16U);
    msg.vid = 10584U;
    msg.off_x = 0.193284237005;
    msg.off_y = 0.0631195631864;
    msg.off_z = 0.376202136826;

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
    msg.setTimeStamp(0.899407868271);
    msg.setSource(54106U);
    msg.setSourceEntity(104U);
    msg.setDestination(8942U);
    msg.setDestinationEntity(82U);
    msg.vid = 54129U;
    msg.off_x = 0.292794475044;
    msg.off_y = 0.184348854597;
    msg.off_z = 0.729851590952;

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
    msg.setTimeStamp(0.323212937078);
    msg.setSource(42843U);
    msg.setSourceEntity(165U);
    msg.setDestination(36420U);
    msg.setDestinationEntity(52U);
    msg.vid = 61006U;
    msg.off_x = 0.825688292513;
    msg.off_y = 0.538558891984;
    msg.off_z = 0.838391779568;

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
    msg.setTimeStamp(0.758176893478);
    msg.setSource(8838U);
    msg.setSourceEntity(190U);
    msg.setDestination(2452U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.0869133570419);
    msg.setSource(9011U);
    msg.setSourceEntity(214U);
    msg.setDestination(3513U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.274801355236);
    msg.setSource(1580U);
    msg.setSourceEntity(185U);
    msg.setDestination(42400U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.688877818508);
    msg.setSource(9519U);
    msg.setSourceEntity(133U);
    msg.setDestination(49062U);
    msg.setDestinationEntity(122U);
    msg.mid = 3846U;

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
    msg.setTimeStamp(0.919857237365);
    msg.setSource(63841U);
    msg.setSourceEntity(128U);
    msg.setDestination(22045U);
    msg.setDestinationEntity(90U);
    msg.mid = 48864U;

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
    msg.setTimeStamp(0.772535531727);
    msg.setSource(31171U);
    msg.setSourceEntity(236U);
    msg.setDestination(22111U);
    msg.setDestinationEntity(229U);
    msg.mid = 38122U;

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
    msg.setTimeStamp(0.754920848625);
    msg.setSource(61107U);
    msg.setSourceEntity(55U);
    msg.setDestination(53002U);
    msg.setDestinationEntity(107U);
    msg.state = 100U;
    msg.eta = 53895U;
    msg.info.assign("OAGPKDSLVVNIRMNYDBSAKXQRWMWVCXSGSHCNXHOQHTDIHXBTNDHPIZWLIOJOSNF");

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
    msg.setTimeStamp(0.270606238863);
    msg.setSource(22183U);
    msg.setSourceEntity(88U);
    msg.setDestination(8305U);
    msg.setDestinationEntity(186U);
    msg.state = 171U;
    msg.eta = 9662U;
    msg.info.assign("AHIXGLZVPXMVFUDJQSSFJIFICMCSDMXKXGNDJWRTBBWIMAPERCQDIANUZEVKAIKPSSQYQWNRRVDVNTWKTSMJHXOGXWSMCYKJFNCRODTJIKLUDH");

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
    msg.setTimeStamp(0.654435169225);
    msg.setSource(6967U);
    msg.setSourceEntity(251U);
    msg.setDestination(26527U);
    msg.setDestinationEntity(223U);
    msg.state = 191U;
    msg.eta = 3170U;
    msg.info.assign("AHUFVOWZYRBRXVEFITRGVGTCZLEWASSOMCQYCXQLISNGTGDHKMNDGKQEKVYXZNSOVHKANUKJLDBUAGGDXZBEPORUIDPMYSJPHXJOISSHFXLRWDUEPNPRNMCTKMHBFDFVVUTXYPJYANAAKEZHNVXPRIZGBCALWUYCVDICUDQMETXLLLOKQNFBJQ");

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
    msg.setTimeStamp(0.318608283532);
    msg.setSource(52657U);
    msg.setSourceEntity(179U);
    msg.setDestination(9923U);
    msg.setDestinationEntity(249U);
    msg.system = 59107U;
    msg.duration = 18790U;
    msg.speed = 0.0560184917193;
    msg.speed_units = 104U;
    msg.x = 0.767848308568;
    msg.y = 0.730578977129;
    msg.z = 0.156683291094;
    msg.z_units = 234U;

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
    msg.setTimeStamp(0.513519555107);
    msg.setSource(63977U);
    msg.setSourceEntity(102U);
    msg.setDestination(64242U);
    msg.setDestinationEntity(122U);
    msg.system = 34612U;
    msg.duration = 2308U;
    msg.speed = 0.292661441471;
    msg.speed_units = 53U;
    msg.x = 0.0295000879695;
    msg.y = 0.632478992567;
    msg.z = 0.761509636454;
    msg.z_units = 48U;

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
    msg.setTimeStamp(0.377828516715);
    msg.setSource(39952U);
    msg.setSourceEntity(167U);
    msg.setDestination(56697U);
    msg.setDestinationEntity(157U);
    msg.system = 46421U;
    msg.duration = 54732U;
    msg.speed = 0.244664831777;
    msg.speed_units = 116U;
    msg.x = 0.603942664173;
    msg.y = 0.545546871532;
    msg.z = 0.492189542884;
    msg.z_units = 140U;

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
    msg.setTimeStamp(0.638565208942);
    msg.setSource(48173U);
    msg.setSourceEntity(38U);
    msg.setDestination(22113U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.469748881265;
    msg.lon = 0.338980355909;
    msg.speed = 0.65512169908;
    msg.speed_units = 237U;
    msg.duration = 52796U;
    msg.sys_a = 13358U;
    msg.sys_b = 53772U;
    msg.move_threshold = 0.102797982482;

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
    msg.setTimeStamp(0.892239587873);
    msg.setSource(23628U);
    msg.setSourceEntity(33U);
    msg.setDestination(9150U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.945916549665;
    msg.lon = 0.723373140646;
    msg.speed = 0.604524670098;
    msg.speed_units = 175U;
    msg.duration = 61897U;
    msg.sys_a = 51086U;
    msg.sys_b = 34223U;
    msg.move_threshold = 0.101347082247;

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
    msg.setTimeStamp(0.313196716728);
    msg.setSource(37725U);
    msg.setSourceEntity(85U);
    msg.setDestination(13767U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.254079959521;
    msg.lon = 0.771967393924;
    msg.speed = 0.567932471508;
    msg.speed_units = 94U;
    msg.duration = 17033U;
    msg.sys_a = 27579U;
    msg.sys_b = 33972U;
    msg.move_threshold = 0.0511614527639;

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
    msg.setTimeStamp(0.957213702011);
    msg.setSource(16442U);
    msg.setSourceEntity(144U);
    msg.setDestination(47865U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.263971747489;
    msg.lon = 0.693006511506;
    msg.z = 0.174791161117;
    msg.z_units = 116U;
    msg.speed = 0.721218410519;
    msg.speed_units = 14U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.852600456882;
    tmp_msg_0.lon = 0.043878473434;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("PWAINRPVYHOCOOCGHQIGOPSFFEGRZYQLWBUUMVBPFKTATGTMYXNMUBSNBJNXESYWQZLIANKKLTTSVWTDQCQTRDBIPXIVNRPNPQDFHWIRUBJHPXHKXCJZQOLYSMVZNWWHAYWHXVLJEJJESGEHCZFPWTMQDUX");

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
    msg.setTimeStamp(0.281483092756);
    msg.setSource(59373U);
    msg.setSourceEntity(47U);
    msg.setDestination(63312U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.160511952678;
    msg.lon = 0.45801065423;
    msg.z = 0.96563222083;
    msg.z_units = 249U;
    msg.speed = 0.431927517033;
    msg.speed_units = 20U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.915401036166;
    tmp_msg_0.lon = 0.60925958408;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("TCQSKFSNZXNVZVOWQWUROQPIGWDCNNVELTIOUMCDUQSYTVZJHQLPPTGNJRMNZOIVUJKOLYSXIAXZSZYRRTDBDLIJOVEABHXXJMZUSYPFALRUEXSBMLAKFWOLJEKAYPGHUWGQMEEPDIRDWLMHDHJFHPKFMOBBYASWZVEFLTRVFRTBQZCNZIMDPYTXAHAJJWGFOKXRCLXVTCHKKHRI");

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
    msg.setTimeStamp(0.749948798503);
    msg.setSource(11242U);
    msg.setSourceEntity(211U);
    msg.setDestination(22068U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.548387324025;
    msg.lon = 0.384315264853;
    msg.z = 0.926946992144;
    msg.z_units = 240U;
    msg.speed = 0.642918628282;
    msg.speed_units = 141U;
    msg.custom.assign("DEHGMYDCFQ");

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
    msg.setTimeStamp(0.426365631601);
    msg.setSource(32939U);
    msg.setSourceEntity(58U);
    msg.setDestination(16372U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.42659121378;
    msg.lon = 0.57706462216;

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
    msg.setTimeStamp(0.37019215415);
    msg.setSource(24938U);
    msg.setSourceEntity(20U);
    msg.setDestination(8426U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.00607540758727;
    msg.lon = 0.863042601032;

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
    msg.setTimeStamp(0.345243704511);
    msg.setSource(47766U);
    msg.setSourceEntity(31U);
    msg.setDestination(13123U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.654154673102;
    msg.lon = 0.729475475722;

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
    msg.setTimeStamp(0.840436763735);
    msg.setSource(37000U);
    msg.setSourceEntity(233U);
    msg.setDestination(47689U);
    msg.setDestinationEntity(77U);
    msg.timeout = 34868U;
    msg.lat = 0.934711374971;
    msg.lon = 0.0496577918418;
    msg.z = 0.248968759838;
    msg.z_units = 107U;
    msg.pitch = 0.90489850683;
    msg.amplitude = 0.241106088911;
    msg.duration = 9048U;
    msg.speed = 0.0504803472629;
    msg.speed_units = 87U;
    msg.radius = 0.00234570196952;
    msg.direction = 173U;
    msg.custom.assign("KOKPWMPBSZHXTQXGBJISCOYLYDJHFETUROMVLFLGJFHNWJANXOXYUITOMKYMBASMLHRGCSVZZFPUUPQHLTFIIVMDDQWHLTVNDCJCTDWNCBYRQMZWTUQZGQAOEUICMATWOWHYAGJHGNSSBTHZWVOASMRCPAFRBENNXBKWEBBKPDLEIUEBRRQFLCS");

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
    msg.setTimeStamp(0.739016589495);
    msg.setSource(52935U);
    msg.setSourceEntity(204U);
    msg.setDestination(53363U);
    msg.setDestinationEntity(54U);
    msg.timeout = 5319U;
    msg.lat = 0.139972368458;
    msg.lon = 0.406413285318;
    msg.z = 0.236101486572;
    msg.z_units = 57U;
    msg.pitch = 0.863926483661;
    msg.amplitude = 0.0316754161143;
    msg.duration = 22534U;
    msg.speed = 0.804647201217;
    msg.speed_units = 157U;
    msg.radius = 0.103854042716;
    msg.direction = 14U;
    msg.custom.assign("XGSMLOGKONWYUFUYHKXTBGCKTFQTKTWJMDKDUSNLQFBTWNLQCLIWAZENXRUKDIBXTHGRJPZXCAQCNIZTUAPAJTQHIZVKTOIAKSWZPPOSYYHWYXEBVZOSCNGVNJDPPFADKGJAGFSYDJMIZJVIEFYFSRVMMEQURBJVTRPLRDCSCEIUYBPRCGWSYAWHRNEBIXHJOHWVXLAZHHMDREOPGSNZLIYEQRUCVNKDQPXOAXVFDB");

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
    msg.setTimeStamp(0.864458347126);
    msg.setSource(47793U);
    msg.setSourceEntity(56U);
    msg.setDestination(27158U);
    msg.setDestinationEntity(237U);
    msg.timeout = 21930U;
    msg.lat = 0.915362862274;
    msg.lon = 0.595148098229;
    msg.z = 0.598821243754;
    msg.z_units = 88U;
    msg.pitch = 0.623007918457;
    msg.amplitude = 0.86767829202;
    msg.duration = 14509U;
    msg.speed = 0.913433219489;
    msg.speed_units = 173U;
    msg.radius = 0.942544526798;
    msg.direction = 93U;
    msg.custom.assign("WZFCJHVHTRSOFCLDVNKGUIWAJWGYMPGJEFIEEGIOVWHSFDPKJYLQOZRVNAQTBNMZPYARBQDJDZHCYCSIQWALZXJSRKOMVEXNHONFQLCRQYRDJVPRTZKABIRFMPGJWELCZHBDYSQLNKTEYEKLHXVTATZAFUBXZNTWXOYJGABNPBMMBOUNOMOXUAXYXW");

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
    msg.setTimeStamp(0.888978720211);
    msg.setSource(4503U);
    msg.setSourceEntity(224U);
    msg.setDestination(62834U);
    msg.setDestinationEntity(12U);
    msg.formation_name.assign("SADYITJLSPLEBRRYXJCVXADSLGVWKHORASUXKYMCPFROSURDLQLIHMDYTJYWCCAKGOUFEEZUKDEQCGKMHUELGZVNTAYIFYKZIVJMAUNTCNPQFREOSENMOQCJBDNTUZMBDBBXWPGRTLBRMKJRLNFVQDNXYUOWLAXOBZRWMIGFHAXXGFHQIUTZPWPQNGK");
    msg.reference_frame = 142U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 12587U;
    tmp_msg_0.off_x = 0.782992061168;
    tmp_msg_0.off_y = 0.963034067076;
    tmp_msg_0.off_z = 0.889523071837;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("YDCEQNOZYSALEIPSWUKFVLCPKXXSYMIUYUZPGTQYSPWWLESZBPGDSMBMNKVRWJVNOHWMCKTOMLVWHEIQXZGJTNRPALBNLHGOIQUYHMGZXEJBAJXAITRFFREXIKXVUQYJCJGFCVRROFXMWSQC");

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
    msg.setTimeStamp(0.291164285545);
    msg.setSource(51061U);
    msg.setSourceEntity(191U);
    msg.setDestination(47813U);
    msg.setDestinationEntity(29U);
    msg.formation_name.assign("OWUIVONMQUVFBEDYTZQYDTKVNSCQFPHKUODUONMZNFHJYKGRXAAKTSIUVOJJBQJHGPCZHBWFBEFPPMGXPDLWLBPCXWISDWTU");
    msg.reference_frame = 254U;
    msg.custom.assign("UAFTDQGACUADFAFYKODUZHOJUDJPEKKNGHWJVVAIMDHISMPBOSEJFDKGJNVDSJJIGMTOYBEIQFSPLLRTGLWYOIBVLOZNXMBUEAFEHYEYHOZQQXYOYICGGRECHTICXGULVCHVZUSWNBQROVMPMYLQTRZCJSYSLDSFNTRFDELXMQZQERKFQXNZTDKNPWPLHKMNCSXICAJXRMKR");

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
    msg.setTimeStamp(0.666660455829);
    msg.setSource(63830U);
    msg.setSourceEntity(39U);
    msg.setDestination(36597U);
    msg.setDestinationEntity(218U);
    msg.formation_name.assign("PVXRAADOTIGAPRNNKLBMLPFGFCQUTMSWJNOXACDSGFEMKYHPKAUHZXYUVBYEGMCUXMPGQILIEXJTEBFKFKXAVXAQZTCHNTZIBZVKCMCSYHPWOYDHCNDHKQYWYIJREKDNMJQFU");
    msg.reference_frame = 92U;
    msg.custom.assign("TUXZPMMLDIMFSCEQRINPMMYFVEWOTZUHAHJKVKCVLHCXBPRKLRBSXYMXXAYZQJLZFYQVHIWOHEWWQUDPOGTMOSWMJJHBFUGVVYJLMULGMYKNKKHQZNSOBNUBRLCAWFPHRPSITDTKDVBZEYTDOFKIJOTABEFNJTBGIUSHQGIAQAPVRYGEZSBJIZSOCF");

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
    msg.setTimeStamp(0.716853725424);
    msg.setSource(51471U);
    msg.setSourceEntity(201U);
    msg.setDestination(19586U);
    msg.setDestinationEntity(155U);
    msg.group_name.assign("GQHEMDZMZOTYPTIIRLSFOOHSLBSVYQLZBFPZRRALIYWGFWIMNVQGRXBWCRDTUPLPADGAURB");
    msg.formation_name.assign("VMKFNSYWVNPWEZIDRIGECNKGLMDDXNLFOXYOIWJLWZGXUDUGKDZFASXPHHJEXYPEMYLTNLPWZARUEICYLYCYSXVKJHFPFSWIEQRFEXHLOCQAHHCUFKJZOQVEPE");
    msg.plan_id.assign("UYIGIWTFWMDLCPDCGECSXUCUKNSFKNMBRZEKYYEQVBQXIDTRQPVABNCWISPKCFBSZYHJXWJPWGPYWFUEXLHGUMAQMQXRTNZUJONOYEPJVEENTFAKHCLAHGTGTJVZGRKOSBUXWUYLSNTDSMABAVKXAJLSMFRAILCHWEDPHDGQBTKZQJSTLQKXWROOXJVFRIFZJHTLROWHPDIIDOOOOMLNPZVVLEHVIRFQAEMUQBCDFIBG");
    msg.description.assign("RTFASGWSOSEBNNNLIAHUMSMAADPLGOCTIQVEAIQSSYCJBFZQIUJZXTVUXHIRBHHGUYOTYATDPOQRTWEZDUVJFMWKHRLCDISQBCMHWNWSRJLYUAGQGJUVVFLIQLMNJQEJRZNPMBEZZDXPXVYNFPGEBYWTK");
    msg.leader_speed = 0.961067909341;
    msg.leader_bank_lim = 0.767702410109;
    msg.pos_sim_err_lim = 0.122069907062;
    msg.pos_sim_err_wrn = 0.0797596320831;
    msg.pos_sim_err_timeout = 20199U;
    msg.converg_max = 0.349873177023;
    msg.converg_timeout = 37086U;
    msg.comms_timeout = 15091U;
    msg.turb_lim = 0.839445547569;
    msg.custom.assign("HLOUOTINNXVOYNOKIAELUUFCJTJPATROMXYPPZSBTCGYZCOIXXDPSRKUGAKQVECRJIKRWQYTDEHBEDPEGGHANEGHWGTRRSFCDUJRZKPVXMAWTOEMSKDYBQQZQDNBZSLNWMWFHUJRLCQBCKILGTYIZDEBMMTFISQTWJFNAMBCDSKVWBBHLECRGQWKXVSMUVOKMNZJIVFYVXQQYU");

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
    msg.setTimeStamp(0.383270456085);
    msg.setSource(46241U);
    msg.setSourceEntity(177U);
    msg.setDestination(16748U);
    msg.setDestinationEntity(134U);
    msg.group_name.assign("JBGVUTUKLJOFJOTSEEWBSJWKELPACKNYKIYRINOZNIYUMJZSWPJRPEAOYWRZHYOFLXKGZCITAFGYXV");
    msg.formation_name.assign("FWOUGPPNDBHFOEMWEVWZRFJA");
    msg.plan_id.assign("JCRKMQXVLEQOGVWQHMIYROTOAZFLSGQPUJKHCMNZRGFLPYLFNXBUJDBCWROCNVSATGFKZUZCPGJFLWNKNQXSPWNRLMEBLVVUODAXWBNICMROIEYUAJYYHKPIBYHUJLBNWUUMTCD");
    msg.description.assign("WDQHDXXOBGPCEZMBSRSJNVMPISSGVDWYPYTUAPBFLLTIFRIKWTVLKCPEXRVYRKZPLGBKJXINQFDCWBEXMNBNFBYZNLTXUWMYUKABZWIYSJZKXAJDSMLKZUZBVDQHPTIHRMCPMFWDREXVQZUJJQVBOQTAOREELODAONDDQCQRMMSQJTE");
    msg.leader_speed = 0.234501140972;
    msg.leader_bank_lim = 0.980373722222;
    msg.pos_sim_err_lim = 0.709989848401;
    msg.pos_sim_err_wrn = 0.409590930354;
    msg.pos_sim_err_timeout = 44141U;
    msg.converg_max = 0.60247333438;
    msg.converg_timeout = 46368U;
    msg.comms_timeout = 15399U;
    msg.turb_lim = 0.705872389188;
    msg.custom.assign("RINOTUSHKIGKIYHANNCVREWWXJZRDJDXXMMCVQZEXLTTAHVKRGPAOSGWZGBIHBWDSQXCBDPRQYXECSZGSCXFVPQRMUTKUBDDROWVNJUKTEKORXSASYYIDNKHUFVQLOHSQFUPLMDUHGSUACIYXZGPGNLEVCUQOEWAFSOEL");

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
    msg.setTimeStamp(0.862273987586);
    msg.setSource(57096U);
    msg.setSourceEntity(246U);
    msg.setDestination(46509U);
    msg.setDestinationEntity(173U);
    msg.group_name.assign("RFXYONGHOLWIXXXBWQWOUUWQSSXDOGHBYHKGBRCHOKBIMFVJSBVEQWRWUSBEUTJNFPGRBRMNQGZRPVMCRJJNQZVBHTIZQQKAPKUGAWOAMTFKUXZKPPPKBJOYKLDONGIFJDLSJLCPCZVICECSMSIWRJYNLFCJCAAPAIZGLYKRDHHQFDTUAUPQYDODQETIEZEKUNMEEIBDHVZFVYTWYDXSGEMY");
    msg.formation_name.assign("ORGHMUEOBMNKCLNWLPOLFMIDESUEQGFKTVUDXHCXKEVGGRRIBTBWSYBHHQQIDOPCTUAMLUPNOIIBIPKRCQZYQFHBPTZWXQJNLABEUDOYJCLHZDRJEHMSCFKFBBXVUVEPKDRWPPVXADGKZFTNVJINNT");
    msg.plan_id.assign("CWKLLAIXRTEOFRSDOMBXVUY");
    msg.description.assign("VPQNOOZWKSUCXCAKVTDMNXJZNJLEEIZNZWCIVNWPHJLLQIASWDBKXSHVPBGTWJEPJJPSXPBHLRORAVFKDYFCIUGKEARWDLTQOKBLFIMKRGKMJRMUEEQVBVABIRMPZJOTSPXBCZYIUXDHHFCHXLABXORAFDOSNTZZQBTOYMWSJAYUCXIUMZTHFYPYVGMLAHCRCTGLYWUFVDQFYIGLWFNGGRDKZQFUEUDDVES");
    msg.leader_speed = 0.0236140587553;
    msg.leader_bank_lim = 0.53998407781;
    msg.pos_sim_err_lim = 0.215605601527;
    msg.pos_sim_err_wrn = 0.0345284243717;
    msg.pos_sim_err_timeout = 57565U;
    msg.converg_max = 0.386485476738;
    msg.converg_timeout = 46621U;
    msg.comms_timeout = 30382U;
    msg.turb_lim = 0.889810555845;
    msg.custom.assign("WJSGQAMDDVYJZUSPEDCGYMWUENOTXCHAHXEPPTSWGAGGOKFFNQTXSVQIBCUGZIMMYTLRLMRTPRNDXARVQYNKLJXTRMUZHBRNUGIKICOOLZYLLEPIQHBNGTHBKFWFILEIBBLVDWSCRJCTPXAHPEJIBSAVLDFVDEVJOANRXKWGPNMKWJNYGXACZDJYXUYAARKMFTSBYLDBFEQNOPTOHSOJZKQZZQVKUHCV");

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
    msg.setTimeStamp(0.0538561724696);
    msg.setSource(32977U);
    msg.setSourceEntity(232U);
    msg.setDestination(41085U);
    msg.setDestinationEntity(230U);
    msg.control_src = 10434U;
    msg.control_ent = 84U;
    msg.timeout = 0.16381747362;
    msg.loiter_radius = 0.308623468441;
    msg.altitude_interval = 0.283546292294;

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
    msg.setTimeStamp(0.175063050769);
    msg.setSource(15932U);
    msg.setSourceEntity(157U);
    msg.setDestination(24027U);
    msg.setDestinationEntity(210U);
    msg.control_src = 47166U;
    msg.control_ent = 174U;
    msg.timeout = 0.53844041337;
    msg.loiter_radius = 0.438961646662;
    msg.altitude_interval = 0.966599193836;

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
    msg.setTimeStamp(0.468252973803);
    msg.setSource(4234U);
    msg.setSourceEntity(44U);
    msg.setDestination(46181U);
    msg.setDestinationEntity(67U);
    msg.control_src = 35505U;
    msg.control_ent = 147U;
    msg.timeout = 0.632066240615;
    msg.loiter_radius = 0.0350937632738;
    msg.altitude_interval = 0.768500950007;

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
    msg.setTimeStamp(0.779864008702);
    msg.setSource(50875U);
    msg.setSourceEntity(110U);
    msg.setDestination(3269U);
    msg.setDestinationEntity(17U);
    msg.flags = 85U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.127588408685;
    tmp_msg_0.speed_units = 234U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.157014325914;
    tmp_msg_1.z_units = 77U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.457928064334;
    msg.lon = 0.689331033324;
    msg.radius = 0.208059674519;

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
    msg.setTimeStamp(0.11310738871);
    msg.setSource(63533U);
    msg.setSourceEntity(174U);
    msg.setDestination(8824U);
    msg.setDestinationEntity(102U);
    msg.flags = 159U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0326205556003;
    tmp_msg_0.speed_units = 95U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.416969087229;
    tmp_msg_1.z_units = 215U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.845261746805;
    msg.lon = 0.350703410439;
    msg.radius = 0.635145956356;

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
    msg.setTimeStamp(0.606036360936);
    msg.setSource(4012U);
    msg.setSourceEntity(182U);
    msg.setDestination(62444U);
    msg.setDestinationEntity(85U);
    msg.flags = 211U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.929651685077;
    tmp_msg_0.speed_units = 129U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.790093619069;
    tmp_msg_1.z_units = 203U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.510853328045;
    msg.lon = 0.278558735468;
    msg.radius = 0.0193321398311;

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
    msg.setTimeStamp(0.129370190583);
    msg.setSource(47666U);
    msg.setSourceEntity(240U);
    msg.setDestination(46055U);
    msg.setDestinationEntity(8U);
    msg.control_src = 26492U;
    msg.control_ent = 37U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 230U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.510013416992;
    tmp_tmp_msg_0_0.speed_units = 133U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.948502057329;
    tmp_tmp_msg_0_1.z_units = 251U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.562402973208;
    tmp_msg_0.lon = 0.858470045971;
    tmp_msg_0.radius = 0.548609596028;
    msg.reference.set(tmp_msg_0);
    msg.state = 109U;
    msg.proximity = 151U;

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
    msg.setTimeStamp(0.624458539799);
    msg.setSource(6115U);
    msg.setSourceEntity(160U);
    msg.setDestination(60624U);
    msg.setDestinationEntity(85U);
    msg.control_src = 45620U;
    msg.control_ent = 8U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 130U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.816242463897;
    tmp_tmp_msg_0_0.speed_units = 211U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.843464579213;
    tmp_tmp_msg_0_1.z_units = 106U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.823852523625;
    tmp_msg_0.lon = 0.813407113949;
    tmp_msg_0.radius = 0.108000905031;
    msg.reference.set(tmp_msg_0);
    msg.state = 27U;
    msg.proximity = 126U;

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
    msg.setTimeStamp(0.251015390409);
    msg.setSource(25375U);
    msg.setSourceEntity(16U);
    msg.setDestination(59561U);
    msg.setDestinationEntity(197U);
    msg.control_src = 19361U;
    msg.control_ent = 8U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 234U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.370477549387;
    tmp_tmp_msg_0_0.speed_units = 49U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.759669128572;
    tmp_tmp_msg_0_1.z_units = 213U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.877626721282;
    tmp_msg_0.lon = 0.553728373139;
    tmp_msg_0.radius = 0.641074234546;
    msg.reference.set(tmp_msg_0);
    msg.state = 24U;
    msg.proximity = 133U;

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
    msg.setTimeStamp(0.0219701050168);
    msg.setSource(29167U);
    msg.setSourceEntity(34U);
    msg.setDestination(54588U);
    msg.setDestinationEntity(183U);
    msg.ax_cmd = 0.644734507501;
    msg.ay_cmd = 0.786478903959;
    msg.az_cmd = 0.201788674925;
    msg.ax_des = 0.457656418998;
    msg.ay_des = 0.595716640286;
    msg.az_des = 0.0935829069144;
    msg.virt_err_x = 0.192082808646;
    msg.virt_err_y = 0.998030949062;
    msg.virt_err_z = 0.409288552736;
    msg.surf_fdbk_x = 0.303221355669;
    msg.surf_fdbk_y = 0.654734814881;
    msg.surf_fdbk_z = 0.821165547212;
    msg.surf_unkn_x = 0.5700388111;
    msg.surf_unkn_y = 0.841587333826;
    msg.surf_unkn_z = 0.606569110058;
    msg.ss_x = 0.808141787407;
    msg.ss_y = 0.964062313391;
    msg.ss_z = 0.237323097705;

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
    msg.setTimeStamp(0.163644987559);
    msg.setSource(61285U);
    msg.setSourceEntity(46U);
    msg.setDestination(3862U);
    msg.setDestinationEntity(195U);
    msg.ax_cmd = 0.205744136776;
    msg.ay_cmd = 0.0830296587933;
    msg.az_cmd = 0.611716335651;
    msg.ax_des = 0.270668464901;
    msg.ay_des = 0.38824024831;
    msg.az_des = 0.661047157171;
    msg.virt_err_x = 0.445802017144;
    msg.virt_err_y = 0.757178273002;
    msg.virt_err_z = 0.652980231694;
    msg.surf_fdbk_x = 0.00568279169931;
    msg.surf_fdbk_y = 0.116889817091;
    msg.surf_fdbk_z = 0.157976756291;
    msg.surf_unkn_x = 0.22957327118;
    msg.surf_unkn_y = 0.220021950239;
    msg.surf_unkn_z = 0.624397990029;
    msg.ss_x = 0.761691936971;
    msg.ss_y = 0.690296612959;
    msg.ss_z = 0.960911946801;

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
    msg.setTimeStamp(0.146861021339);
    msg.setSource(12271U);
    msg.setSourceEntity(209U);
    msg.setDestination(51709U);
    msg.setDestinationEntity(128U);
    msg.ax_cmd = 0.631342035664;
    msg.ay_cmd = 0.11803762949;
    msg.az_cmd = 0.216010929448;
    msg.ax_des = 0.189350911907;
    msg.ay_des = 0.592095879442;
    msg.az_des = 0.0519175968046;
    msg.virt_err_x = 0.528865071421;
    msg.virt_err_y = 0.550338919329;
    msg.virt_err_z = 0.717786067234;
    msg.surf_fdbk_x = 0.608676563286;
    msg.surf_fdbk_y = 0.251365129642;
    msg.surf_fdbk_z = 0.812164322321;
    msg.surf_unkn_x = 0.955918500988;
    msg.surf_unkn_y = 0.324879987125;
    msg.surf_unkn_z = 0.652001924637;
    msg.ss_x = 0.987708843554;
    msg.ss_y = 0.884351594178;
    msg.ss_z = 0.889882096851;

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
    msg.setTimeStamp(0.551018049172);
    msg.setSource(65434U);
    msg.setSourceEntity(22U);
    msg.setDestination(34306U);
    msg.setDestinationEntity(31U);
    msg.s_id.assign("FICKTUABPFLIIDBXRGETKQRXOOUZMSCFAJEYFYSVBOIHYBBOXWGFLFAQRVEPCRAGVACWYLKDXDWKGFFXFNBUROLKIQCDYHONJSNMPXSYZICVSKTJJEZHPNWGKZTNOTZBFAVGNWDUPH");
    msg.dist = 0.47970858286;
    msg.err = 0.297793306401;
    msg.ctrl_imp = 0.483501449239;
    msg.rel_dir_x = 0.441507504902;
    msg.rel_dir_y = 0.547586819659;
    msg.rel_dir_z = 0.71949516477;
    msg.err_x = 0.421394504095;
    msg.err_y = 0.635388346917;
    msg.err_z = 0.900498349539;
    msg.rf_err_x = 0.0504726464785;
    msg.rf_err_y = 0.878592070389;
    msg.rf_err_z = 0.631804092911;
    msg.rf_err_vx = 0.471523347365;
    msg.rf_err_vy = 0.688033835288;
    msg.rf_err_vz = 0.346824427329;
    msg.ss_x = 0.247687222766;
    msg.ss_y = 0.694769579535;
    msg.ss_z = 0.982846133692;
    msg.virt_err_x = 0.795564104892;
    msg.virt_err_y = 0.489465608211;
    msg.virt_err_z = 0.631470616612;

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
    msg.setTimeStamp(0.137093834658);
    msg.setSource(47424U);
    msg.setSourceEntity(164U);
    msg.setDestination(18064U);
    msg.setDestinationEntity(103U);
    msg.s_id.assign("FZKZYJAEIYMXNNJSBVRYPOVOWNMYSNMUWGBYCNZXAHGMLCBJJEFHLTDUCQWMOGLXVIUZKHXWQFDJSYNQSCKEC");
    msg.dist = 0.596064985767;
    msg.err = 0.797484712169;
    msg.ctrl_imp = 0.758658840143;
    msg.rel_dir_x = 0.513918226595;
    msg.rel_dir_y = 0.706591248499;
    msg.rel_dir_z = 0.17274070205;
    msg.err_x = 0.728251529909;
    msg.err_y = 0.505117302555;
    msg.err_z = 0.107336937396;
    msg.rf_err_x = 0.257652162516;
    msg.rf_err_y = 0.508548861236;
    msg.rf_err_z = 0.232292151405;
    msg.rf_err_vx = 0.688905452734;
    msg.rf_err_vy = 0.338423868791;
    msg.rf_err_vz = 0.00824736686556;
    msg.ss_x = 0.142672214128;
    msg.ss_y = 0.169970369918;
    msg.ss_z = 0.521489231714;
    msg.virt_err_x = 0.942601624647;
    msg.virt_err_y = 0.760275431234;
    msg.virt_err_z = 0.179506237546;

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
    msg.setTimeStamp(0.737486857479);
    msg.setSource(44008U);
    msg.setSourceEntity(176U);
    msg.setDestination(2413U);
    msg.setDestinationEntity(220U);
    msg.s_id.assign("TYNERKWZKEFHSWXUUIRFNKGYJLISMBDDAVVDDCVNASCHAXPJPAO");
    msg.dist = 0.394393370527;
    msg.err = 0.57889815984;
    msg.ctrl_imp = 0.54104953539;
    msg.rel_dir_x = 0.517190704606;
    msg.rel_dir_y = 0.728285332194;
    msg.rel_dir_z = 0.657112307806;
    msg.err_x = 0.353219447853;
    msg.err_y = 0.344044984708;
    msg.err_z = 0.537954817688;
    msg.rf_err_x = 0.703330199923;
    msg.rf_err_y = 0.608756036308;
    msg.rf_err_z = 0.204112196956;
    msg.rf_err_vx = 0.660382881534;
    msg.rf_err_vy = 0.91871130431;
    msg.rf_err_vz = 0.904769159963;
    msg.ss_x = 0.545418912471;
    msg.ss_y = 0.915899566888;
    msg.ss_z = 0.428800825132;
    msg.virt_err_x = 0.0905892610469;
    msg.virt_err_y = 0.584559910143;
    msg.virt_err_z = 0.641271036013;

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
    msg.setTimeStamp(0.437681045431);
    msg.setSource(53397U);
    msg.setSourceEntity(152U);
    msg.setDestination(3838U);
    msg.setDestinationEntity(226U);
    msg.timeout = 63513U;
    msg.rpm = 0.428289819356;
    msg.direction = 98U;
    msg.custom.assign("ZGCSREHAZO");

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
    msg.setTimeStamp(0.860913076567);
    msg.setSource(61576U);
    msg.setSourceEntity(217U);
    msg.setDestination(23491U);
    msg.setDestinationEntity(52U);
    msg.timeout = 40690U;
    msg.rpm = 0.233757553316;
    msg.direction = 5U;
    msg.custom.assign("JAEBDIPZMDKASRTDPJOCWQYXULMSLEZFHNLQZFTSAPAEUQLWTBPOHPUODUHNEGZDSDNBRXWGSQVYLJGYHVKGIFQBNYVLMEFKBQBUYEFCIJYFKBMMHU");

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
    msg.setTimeStamp(0.783121129466);
    msg.setSource(28522U);
    msg.setSourceEntity(131U);
    msg.setDestination(12491U);
    msg.setDestinationEntity(218U);
    msg.timeout = 14812U;
    msg.rpm = 0.817263929496;
    msg.direction = 53U;
    msg.custom.assign("FEMKUVXICSUKMJCSUGCZYIHPVRTVRHZUDASBC");

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
    msg.setTimeStamp(0.96263614365);
    msg.setSource(31883U);
    msg.setSourceEntity(239U);
    msg.setDestination(23784U);
    msg.setDestinationEntity(39U);
    msg.formation_name.assign("JBSGMYNKUSNPTEZGEXVOMTHAKAUKPSIZTOCEOHHHCIXEDDTAJQJBBHSRREEZQQUCNDIUGLEJBLVPJMJYUEDDFICPUPNUORSEXEZ");
    msg.type = 103U;
    msg.op = 228U;
    msg.group_name.assign("NTPRFOOTHXEPFYQBNOHZWBKAHRSOPMNFQKEFJDQEEMMHCCCYGBDCOHDZJACXIYMDBONAZYAZLANVGMRQYWIOBKFEWZDFSTXOUQJLKVVVFTTDCGDJGWSRARPWMUZIUJGKEATMXXLVSRRLPMJIIWYCATLWEFILPSXJIXVQVNLIQURYQKVXGYISBGVGNPFHDXETNPVZWHQDNELUKACJUEKGLDRUFUYBK");
    msg.plan_id.assign("UUMKDJCYXRGGJEGRHWGCAJOCIWPVFHIZKJWSDDMSOFBYWZDZNDWICRBBXKFYMKFXPU");
    msg.description.assign("PVRSCQSDYAYAYSQVUJRBHIXMKXMQPGYRJPIGJSXHRGJFVSZHDWQDMXSDBTKARVSPAWCENHUFERUGTMPUHEAQCULXBIYGBFIZZXTNFP");
    msg.reference_frame = 233U;
    msg.leader_bank_lim = 0.833708092837;
    msg.leader_speed_min = 0.119588565102;
    msg.leader_speed_max = 0.359385862946;
    msg.leader_alt_min = 0.938127204487;
    msg.leader_alt_max = 0.553078201253;
    msg.pos_sim_err_lim = 0.672712202089;
    msg.pos_sim_err_wrn = 0.867773602579;
    msg.pos_sim_err_timeout = 61013U;
    msg.converg_max = 0.340883037043;
    msg.converg_timeout = 16674U;
    msg.comms_timeout = 37383U;
    msg.turb_lim = 0.518805989813;
    msg.custom.assign("SCKTMREKVUUVYLYGIUKGBYHOFXKKDZZQRJWGAFLUNUWMNWDTEIJBMAQMHDGEFONGVGHNVBFIXHYFCDZHWCEQMLDQYAOVOQNMPLNYPDEVTVIYJZZIDGPKNLXYZBHUMIEAAWQPCDWDCKNAVRLEPIOSEUUGJBKNOSWVHTXBWLATXIKWJEGWXUBFJHCRSQJPJTBIXSZBMXMOUPCHJZCSGPSDVYIRSKRFBEZTAOLACRFXXFSRQSTRYOPROPATLLCQ");

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
    msg.setTimeStamp(0.0273792919427);
    msg.setSource(35351U);
    msg.setSourceEntity(28U);
    msg.setDestination(53165U);
    msg.setDestinationEntity(153U);
    msg.formation_name.assign("MAMOYQYGCVQDJPY");
    msg.type = 219U;
    msg.op = 203U;
    msg.group_name.assign("VTNQKTYITQDPTPQKCKQENEKUOVQXAXPXGFKUJDOSMWBBLLDTHZVGGLWOQUAVEGTOTBLUYNRJGPFLRFAZJYIAJFXZXCCOZTZKTYDGLHSBBVMXLKTABDURSCKZMXWQVMRRDPWIPKNFRWQCNSCIESNSOIRHAEFPQPPLJNUNVYOXJMIMSFRMNAHDRZHWIBEMBFLGGHVHOKOIFBACJXCY");
    msg.plan_id.assign("UEREYNKWQLSLTHVVQFEJTTHTWCSOFDPMLMPQJZJWXHAIGBYKCVSRSUMWXKYJIWIGLQUICYMACDQN");
    msg.description.assign("MDLFUHLYUWMFDQJCMIIFQJJNUWUKHAKNOIWZCIAZJAXGUEGMDZPLNHVEFTHJOEVAEAOMNVRPQDDFAUSBSLSCWOGZYDHXLSKPCXGPKEBGTOCSFKZYGLRKFNTTXRECQMYIMYJYXOLBSBJPROJXPQHICXZRMTVTQZWDPHWBQRPIQBHKHTNAKTDARPEAMLEXYEWWOXSEPZGOCZJVSYIWCBNKVJDHXCYTMINVVDWTYLLBFUQGBFUSN");
    msg.reference_frame = 254U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 10662U;
    tmp_msg_0.off_x = 0.964191862915;
    tmp_msg_0.off_y = 0.172332421466;
    tmp_msg_0.off_z = 0.736595181608;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.738791801157;
    msg.leader_speed_min = 0.900030264121;
    msg.leader_speed_max = 0.661837691523;
    msg.leader_alt_min = 0.0711433499241;
    msg.leader_alt_max = 0.0922845084014;
    msg.pos_sim_err_lim = 0.0350261612201;
    msg.pos_sim_err_wrn = 0.386232611652;
    msg.pos_sim_err_timeout = 34479U;
    msg.converg_max = 0.846544610523;
    msg.converg_timeout = 60288U;
    msg.comms_timeout = 48187U;
    msg.turb_lim = 0.463070108034;
    msg.custom.assign("XNGVTLWPOYYFWNWFFCGPCLOFPYLIEJXZFUTWMKIEDKYAJKDIMHKIYOACGKNCOUAPWIASWLLDBPITKEVCHRBFJLDMYCUDRPKEDQZEGJTNMXFBUVJIVYVMYGPBSWJCXSSSNH");

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
    msg.setTimeStamp(0.512682195664);
    msg.setSource(3279U);
    msg.setSourceEntity(40U);
    msg.setDestination(29618U);
    msg.setDestinationEntity(248U);
    msg.formation_name.assign("NBGWTZBEYUSMUYCPMK");
    msg.type = 111U;
    msg.op = 126U;
    msg.group_name.assign("XZIOWSFENIPFPVOBVMWCZVVLXUYUTRZBGAMDDHNXZ");
    msg.plan_id.assign("VBNXZUYFINYLXBGTCYKAEREGSKHATIXUUSBMAZCIPMITDDZUKOLDHJLHDXONCWNUQYQW");
    msg.description.assign("HHOYXIBZBDTWEWSQFTKEQNZHMCIKUEBWDTAPLTRAJYFRJWMIMHYAJMLELBEAYYTXTDWGMIIPRIJZNVGMYEUTZHIHXDGPPPHLQLSRQODYRAOWGLBSUUQJQHEINKOYHECDBDKTSXIBENRVVSVNXGCXUZRMJZABAKNRYWCKUCXGZJONVLGFUVPQAQPTSAJLWCKGBXAFQNVHKORGGJSQTOIVMKFCMPLWZOUXCZSCYRMFFJPFNPKZNXFUVLVSDODODS");
    msg.reference_frame = 115U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 56467U;
    tmp_msg_0.off_x = 0.271358102036;
    tmp_msg_0.off_y = 0.314713673697;
    tmp_msg_0.off_z = 0.751731566123;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.160463690337;
    msg.leader_speed_min = 0.825351655626;
    msg.leader_speed_max = 0.604271783981;
    msg.leader_alt_min = 0.300752603406;
    msg.leader_alt_max = 0.854688298082;
    msg.pos_sim_err_lim = 0.953800394146;
    msg.pos_sim_err_wrn = 0.882838283929;
    msg.pos_sim_err_timeout = 48840U;
    msg.converg_max = 0.225955457177;
    msg.converg_timeout = 58876U;
    msg.comms_timeout = 41694U;
    msg.turb_lim = 0.881412101011;
    msg.custom.assign("VSQFYOTJSLEQNWGEVKXPXRPFVQOJAPAOWTDGZFXPEZKGFUMRUPIJNTPXMDC");

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
    msg.setTimeStamp(0.0443853006835);
    msg.setSource(26837U);
    msg.setSourceEntity(43U);
    msg.setDestination(28489U);
    msg.setDestinationEntity(39U);
    msg.timeout = 58608U;
    msg.lat = 0.774378003091;
    msg.lon = 0.573470560548;
    msg.z = 0.368657632816;
    msg.z_units = 124U;
    msg.speed = 0.131464286242;
    msg.speed_units = 109U;
    msg.custom.assign("YWAPFPUTVHHAXYYAWDPLFYPWPYQHRUZTNERNZPQPXDKQMCURMMYJNRBLSLKSVSXWMCRVUJCOITTKZSCNMJBAJMWAXFBQJJIVKCQOQLEKFUNWTMNWXOTGAZKQUOAWNUTTEHEHFDVZZSDJGXHWFPBIBVYRRREGMEHQIZFUHMBZWXNNDQRSFENGOLKILICACTDSOCAJGTDV");

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
    msg.setTimeStamp(0.184735793011);
    msg.setSource(10581U);
    msg.setSourceEntity(149U);
    msg.setDestination(8812U);
    msg.setDestinationEntity(143U);
    msg.timeout = 57198U;
    msg.lat = 0.83100488907;
    msg.lon = 0.15102810413;
    msg.z = 0.221253208542;
    msg.z_units = 36U;
    msg.speed = 0.348510636003;
    msg.speed_units = 160U;
    msg.custom.assign("RTYJJCCNCDKGMVSOOGLKCIISXPMQOKLLJNBZQAZXTYMIJDHHEQRNRFVSZVYXUNIHZXOFAVFYMXVJDZLDLHDSWNSWGPUDTGBGGEMICBAGXBEZJNRBFAZPPBCMLQJQUJAZCYIMUQWMFDEGONFSWONKEAVPLBITNTXORPRHHLKVWCOAUKFPRSXQSRJEYPYVQBHWZKUMJUACMWXUELHPGEWRDWQCHTTKLAPFKFQXSTUVUVH");

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
    msg.setTimeStamp(0.833529991297);
    msg.setSource(61390U);
    msg.setSourceEntity(31U);
    msg.setDestination(32150U);
    msg.setDestinationEntity(117U);
    msg.timeout = 35876U;
    msg.lat = 0.640599152179;
    msg.lon = 0.117518616125;
    msg.z = 0.137768909944;
    msg.z_units = 62U;
    msg.speed = 0.326774074047;
    msg.speed_units = 20U;
    msg.custom.assign("VASCDMEKSKFDPPNVGDODPBKJOIBREUTKWNYYAAZQSYTWNOLJGFOHGGJUJAXTWCMXAVMDFIWPTFV");

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
    msg.setTimeStamp(0.356017775401);
    msg.setSource(9110U);
    msg.setSourceEntity(103U);
    msg.setDestination(27028U);
    msg.setDestinationEntity(81U);
    msg.timeout = 41689U;
    msg.lat = 0.00659523148264;
    msg.lon = 0.538025019669;
    msg.z = 0.997232703796;
    msg.z_units = 24U;
    msg.speed = 0.132157108099;
    msg.speed_units = 237U;
    msg.custom.assign("UVMTXKCYJWMFCRBEPTOBPZRPYXVSIXRSJITKDHPFKWOQWGXCPIWLAROFPAYMIWAIJSQGLNHWIBYBEEZQSTDKETVFPYHZGUYELOTCVRZUONXRUAZQALUMOFGLNBIVBKOZHN");

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
    msg.setTimeStamp(0.035405862406);
    msg.setSource(11208U);
    msg.setSourceEntity(181U);
    msg.setDestination(56157U);
    msg.setDestinationEntity(166U);
    msg.timeout = 22894U;
    msg.lat = 0.672487673418;
    msg.lon = 0.821666639106;
    msg.z = 0.00714029610485;
    msg.z_units = 32U;
    msg.speed = 0.0759917254241;
    msg.speed_units = 48U;
    msg.custom.assign("ROXZLKKXGMZHGBMNAGFQQRRBSURGDEGPTBSMQKVXIZCMABWVCUEIJNQPCZQYRJTTSUHCKFJPMEXPUFCEOAICVTKKHPHXLEYHEDIZNNGDTOQUHTLXQEGJHMYSBCAZUHGHVWXOYBLFVDCGNLWESLDXLFAPFAAVPUWMAZEFJITOFCYVQDDFYYNGQ");

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
    msg.setTimeStamp(0.443682797347);
    msg.setSource(63710U);
    msg.setSourceEntity(6U);
    msg.setDestination(39012U);
    msg.setDestinationEntity(246U);
    msg.timeout = 7109U;
    msg.lat = 0.977348961941;
    msg.lon = 0.243979137416;
    msg.z = 0.0774582654711;
    msg.z_units = 131U;
    msg.speed = 0.13351197598;
    msg.speed_units = 66U;
    msg.custom.assign("KJLALHNJJUPCTRQROMQOFXYTEDHHUIOVAKUKKESBKHTZOPUFTXGAGPZYQDCBXIZLTXZOJJYFVFRLYCTPRYSAJDBQGXECGNIYKZRCNTEHVVFMDGZNAXDCYHUDUSQDLVBMTVNEINOIO");

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
    msg.setTimeStamp(0.630969761726);
    msg.setSource(33971U);
    msg.setSourceEntity(65U);
    msg.setDestination(51227U);
    msg.setDestinationEntity(53U);
    msg.arrival_time = 0.101671662839;
    msg.lat = 0.984051157299;
    msg.lon = 0.351725878159;
    msg.z = 0.348357746235;
    msg.z_units = 168U;
    msg.travel_z = 0.45060696331;
    msg.travel_z_units = 95U;
    msg.delayed = 246U;

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
    msg.setTimeStamp(0.793202753468);
    msg.setSource(31051U);
    msg.setSourceEntity(88U);
    msg.setDestination(42742U);
    msg.setDestinationEntity(181U);
    msg.arrival_time = 0.51422332118;
    msg.lat = 0.194296654871;
    msg.lon = 0.678699072836;
    msg.z = 0.486504839289;
    msg.z_units = 123U;
    msg.travel_z = 0.167277278031;
    msg.travel_z_units = 12U;
    msg.delayed = 37U;

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
    msg.setTimeStamp(0.555312103438);
    msg.setSource(21902U);
    msg.setSourceEntity(150U);
    msg.setDestination(30446U);
    msg.setDestinationEntity(218U);
    msg.arrival_time = 0.394553302677;
    msg.lat = 0.814091790025;
    msg.lon = 0.433649313729;
    msg.z = 0.525555033219;
    msg.z_units = 13U;
    msg.travel_z = 0.837721946222;
    msg.travel_z_units = 136U;
    msg.delayed = 19U;

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
    msg.setTimeStamp(0.382998539145);
    msg.setSource(63106U);
    msg.setSourceEntity(246U);
    msg.setDestination(43898U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.588866325256;
    msg.lon = 0.592802091361;
    msg.z = 0.454014742289;
    msg.z_units = 247U;
    msg.speed = 0.432930687308;
    msg.speed_units = 3U;
    msg.bearing = 0.155324778916;
    msg.cross_angle = 0.295457277616;
    msg.width = 0.852323784558;
    msg.length = 0.941809885203;
    msg.coff = 161U;
    msg.angaperture = 0.299742961618;
    msg.range = 10340U;
    msg.overlap = 147U;
    msg.flags = 30U;
    msg.custom.assign("HTYBAWBCLQRSYKQKWZRNZSG");

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
    msg.setTimeStamp(0.791213401084);
    msg.setSource(37168U);
    msg.setSourceEntity(235U);
    msg.setDestination(4687U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.223031668001;
    msg.lon = 0.143692545592;
    msg.z = 0.665755894366;
    msg.z_units = 132U;
    msg.speed = 0.878602845887;
    msg.speed_units = 46U;
    msg.bearing = 0.262060113388;
    msg.cross_angle = 0.538491996539;
    msg.width = 0.0464711743177;
    msg.length = 0.384369495357;
    msg.coff = 212U;
    msg.angaperture = 0.226605635003;
    msg.range = 15477U;
    msg.overlap = 73U;
    msg.flags = 184U;
    msg.custom.assign("HDHFCMHTAHKZVGWZPJOLYPXFJODMFJPWRWQWYQRMFEEPUHZXJEAJUNTNQZGSWVBZGMBGLTGOYWMRCZRCFRGKOFKLVEBOTPFZNOQBWTDUPRRWVJEFHENUPNVIDCCRCNAIVVYXXDJJLFAHTNGUKCYSUSLUISCZKQJXAIVSEOAKKEGQPTD");

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
    msg.setTimeStamp(0.239595279463);
    msg.setSource(34347U);
    msg.setSourceEntity(42U);
    msg.setDestination(3634U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.370387433333;
    msg.lon = 0.323107851397;
    msg.z = 0.378352999333;
    msg.z_units = 45U;
    msg.speed = 0.145588222037;
    msg.speed_units = 197U;
    msg.bearing = 0.00036295506438;
    msg.cross_angle = 0.64493499221;
    msg.width = 0.203854761111;
    msg.length = 0.788833360026;
    msg.coff = 107U;
    msg.angaperture = 0.780108791403;
    msg.range = 41711U;
    msg.overlap = 201U;
    msg.flags = 95U;
    msg.custom.assign("LKMSNLUETRTRIPFLERBBXSUIVAPFOQIYIDBHJNRFLYLTQGYWNGGPXMZXKWOJUQMDSSCLMOOSFSPVJOZZGWVUPXQRHBTSWOZQSFHVAXOEXDFNEYOBUTFHFACIVQYSVLLYGYQORUMKDNXGT");

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
    msg.setTimeStamp(0.675061001733);
    msg.setSource(46509U);
    msg.setSourceEntity(168U);
    msg.setDestination(45829U);
    msg.setDestinationEntity(249U);
    msg.timeout = 30068U;
    msg.lat = 0.827318731722;
    msg.lon = 0.772125632509;
    msg.z = 0.0358241018605;
    msg.z_units = 19U;
    msg.speed = 0.80288921219;
    msg.speed_units = 92U;
    msg.syringe0 = 37U;
    msg.syringe1 = 56U;
    msg.syringe2 = 65U;
    msg.custom.assign("KWRAAWCNNXYFQOLFPPECFXIRJYAKKHICNRGYWNIRVVTUMKGDPZYLXVBGWSXSLKPOBEEQZLIOSNMUDNMDBUER");

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
    msg.setTimeStamp(0.742281872742);
    msg.setSource(13451U);
    msg.setSourceEntity(134U);
    msg.setDestination(43034U);
    msg.setDestinationEntity(127U);
    msg.timeout = 46801U;
    msg.lat = 0.337013982071;
    msg.lon = 0.543886310986;
    msg.z = 0.152212135453;
    msg.z_units = 119U;
    msg.speed = 0.00913442185534;
    msg.speed_units = 11U;
    msg.syringe0 = 231U;
    msg.syringe1 = 23U;
    msg.syringe2 = 213U;
    msg.custom.assign("DSIVZIPJRHZXSUQQYNALWTXIGPWXSUBHKJSRGYMJRZWEFGLPCJDHAHDCIFBUOAOKMOWLNZFHCZRNQTPNEDNXNBJOSQFTQVDXZWRVI");

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
    msg.setTimeStamp(0.81964292205);
    msg.setSource(48945U);
    msg.setSourceEntity(110U);
    msg.setDestination(12759U);
    msg.setDestinationEntity(171U);
    msg.timeout = 49946U;
    msg.lat = 0.584244920601;
    msg.lon = 0.88539259169;
    msg.z = 0.875673657864;
    msg.z_units = 40U;
    msg.speed = 0.687311698264;
    msg.speed_units = 143U;
    msg.syringe0 = 117U;
    msg.syringe1 = 166U;
    msg.syringe2 = 146U;
    msg.custom.assign("RIUGEBWQRXHDXLCCUKHSZZHTFSMLDZYZLONMYBDEANBSXUMHNUJWLXGHOPGDWQIDDNDPHAXLBVSYOPDJCUBZEPUPBDJAEYCCTRJYMGPSLQSAMXPZOAUKJHFQVXZVYOWCMBVWONYKGIXUWLBLOGQKFDIOHLKCQFZGITZTNFTBRPVVGYREFJRGFVQQP");

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
    msg.setTimeStamp(0.964679322338);
    msg.setSource(34004U);
    msg.setSourceEntity(119U);
    msg.setDestination(37649U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.932110905527);
    msg.setSource(53068U);
    msg.setSourceEntity(17U);
    msg.setDestination(44389U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.434381128978);
    msg.setSource(60581U);
    msg.setSourceEntity(206U);
    msg.setDestination(41640U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.706011517147);
    msg.setSource(39641U);
    msg.setSourceEntity(85U);
    msg.setDestination(1141U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.26865926404;
    msg.lon = 0.877746055117;
    msg.z = 0.802864366957;
    msg.z_units = 173U;
    msg.speed = 0.489868144893;
    msg.speed_units = 183U;
    msg.takeoff_pitch = 0.621951538286;
    msg.custom.assign("BCGPAAUMUPSCPFTKMWKLIPAVSGXXEFBQTRPIMZYENFXLFMHNBRIHVDZFYEHWNJZVMTKRSBCAS");

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
    msg.setTimeStamp(0.652546751979);
    msg.setSource(62004U);
    msg.setSourceEntity(211U);
    msg.setDestination(26130U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.366961972775;
    msg.lon = 0.893128332556;
    msg.z = 0.899579953922;
    msg.z_units = 161U;
    msg.speed = 0.306514665257;
    msg.speed_units = 184U;
    msg.takeoff_pitch = 0.716634413807;
    msg.custom.assign("TPOMIOIUOGKFVRAFEMQTMSFDLYWFPNYCCESJOBJHGQTDYHFVVNPRNBTEUAE");

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
    msg.setTimeStamp(0.807359374068);
    msg.setSource(408U);
    msg.setSourceEntity(88U);
    msg.setDestination(10490U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.294536883224;
    msg.lon = 0.942329870662;
    msg.z = 0.451715060237;
    msg.z_units = 105U;
    msg.speed = 0.488561061829;
    msg.speed_units = 146U;
    msg.takeoff_pitch = 0.390815228909;
    msg.custom.assign("XFLZDIWGYPZKCFWOIDV");

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
    msg.setTimeStamp(0.216266660133);
    msg.setSource(13749U);
    msg.setSourceEntity(48U);
    msg.setDestination(40470U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.682821542053;
    msg.lon = 0.989512744433;
    msg.z = 0.967674510719;
    msg.z_units = 179U;
    msg.speed = 0.863499538395;
    msg.speed_units = 138U;
    msg.abort_z = 0.0283285434495;
    msg.bearing = 0.925392843457;
    msg.glide_slope = 84U;
    msg.glide_slope_alt = 0.55503899943;
    msg.custom.assign("BTLRJIPXZGOPRSZATGNSMASNCXUCCHBAVXJMURSLABTGJPU");

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
    msg.setTimeStamp(0.873497895274);
    msg.setSource(56530U);
    msg.setSourceEntity(210U);
    msg.setDestination(14428U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.89747563782;
    msg.lon = 0.673204934876;
    msg.z = 0.201301034544;
    msg.z_units = 113U;
    msg.speed = 0.0397828942593;
    msg.speed_units = 124U;
    msg.abort_z = 0.589355106443;
    msg.bearing = 0.118491874157;
    msg.glide_slope = 82U;
    msg.glide_slope_alt = 0.0315776703241;
    msg.custom.assign("XDVNECSVXWGEASJACWRSNIMBLMSLGJIQEJVAVT");

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
    msg.setTimeStamp(0.150234898226);
    msg.setSource(10906U);
    msg.setSourceEntity(108U);
    msg.setDestination(63899U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.555021413196;
    msg.lon = 0.887295178853;
    msg.z = 0.0557684674247;
    msg.z_units = 35U;
    msg.speed = 0.916999970147;
    msg.speed_units = 242U;
    msg.abort_z = 0.705516144754;
    msg.bearing = 0.434587535635;
    msg.glide_slope = 236U;
    msg.glide_slope_alt = 0.764201595107;
    msg.custom.assign("SGLRBEFPULSGKYVUCWKBXYIZVHJVPWYXJJJHTPFCFNZBUNGTMBVZYLHGNRMVNDUMKNZQCOHASHBEHHREEHLESRARJYFLQDRMJOGKPWDMABIECCAAYDQFBMCWYAQUOEXKL");

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
    msg.setTimeStamp(0.425130522189);
    msg.setSource(45185U);
    msg.setSourceEntity(111U);
    msg.setDestination(23672U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.0134382482669;
    msg.lon = 0.121130453532;
    msg.speed = 0.214523436029;
    msg.speed_units = 63U;
    msg.limits = 83U;
    msg.max_depth = 0.928159960565;
    msg.min_alt = 0.0648820939104;
    msg.time_limit = 0.446106431649;
    msg.controller.assign("QTPRINNAVDRVDOMTLPSFJJIHIQVHXQQYLSNVGHRNGEAGICJTDUDXQPLUBYMPWAEFWJUTSBAZXBRYJYFDLHMXBEKWVTCHRODTIKONLCXMHBZULLSUOEFZFMCGFYKZNJDYZPFIMUZOJFAMKXXCOPNGWOHJSGCNATWSRYIKUKXDOPVTBWFOPWIGNWICEXYEQWVZPHRKMCA");
    msg.custom.assign("RJIFXVRRWWEFHZXUOZSXTBFOWMXANAQNQJBZEYNKXYHMATAQRFQMNZXJKNHNNWPNAEPMLBETGEMCTLDRXHBHCVYGOBVFRODCEGYJCWYDIAWLLSBUWCILKVPGTDMDAGYMKYDZOTQGOETIPHYDSUQARKLSCQIVRUHEUPSLRVLXXIOIISOGBFJCYIKSOCGMFZSUJSHRQFYUFLGFJUQOKEHDBCHKDPMVJQPIPDEWWUTMZBJUANZ");

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
    msg.setTimeStamp(0.228809198699);
    msg.setSource(56344U);
    msg.setSourceEntity(250U);
    msg.setDestination(47154U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.28438690328;
    msg.lon = 0.183861382028;
    msg.speed = 0.684529773248;
    msg.speed_units = 107U;
    msg.limits = 224U;
    msg.max_depth = 0.746532119144;
    msg.min_alt = 0.196123756967;
    msg.time_limit = 0.228320725623;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.749753318521;
    tmp_msg_0.lon = 0.993892409997;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("ROYXAIZQRLSPIGNSTZVFCCDEOGBYDKYEFJHZWQICVWQAKWOSTPNTBAFEMLVRPFBIPUFESRCZXYTLN");
    msg.custom.assign("ZNIIBKQUNMBHGBKOFDHNZYAGCWYSIELAXJZXLVKPLTGVUVSEONBULAQDTQWHDWNREQKNDKZTNGXYKVSLVVRGKSIIZODRJCNYMCQTOWMTCUXBNMFFP");

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
    msg.setTimeStamp(0.0879845903973);
    msg.setSource(47969U);
    msg.setSourceEntity(134U);
    msg.setDestination(45043U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.549643449976;
    msg.lon = 0.275875153644;
    msg.speed = 0.204183139907;
    msg.speed_units = 94U;
    msg.limits = 89U;
    msg.max_depth = 0.38771630675;
    msg.min_alt = 0.26939036768;
    msg.time_limit = 0.284042055511;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.848455968012;
    tmp_msg_0.lon = 0.483334333903;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("QTCYADGRVQQQLWBFRNRZKFOEKEYMZLDOYFXMDMLDMROCAVMOCEYMMHPUHBRGBNWSUXXXTYAPPOFLKPHXZJWPBDHKGUVIIRHAIQXTPWPGTZVZLSJACVXDJTJGSQBTJYTGULSVDVSMGY");
    msg.custom.assign("ISBVSFZAHYGIZFFUZOAKHDIMECTVVGYJJGBKDPEEXSBLJNHWDVJELRCOIIKMWFCQWQUJSFYMDSQBJIZFC");

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
    msg.setTimeStamp(0.890626990527);
    msg.setSource(18233U);
    msg.setSourceEntity(210U);
    msg.setDestination(32469U);
    msg.setDestinationEntity(6U);
    msg.target.assign("MQBAJSWVIFPEKPCLXGOJOENROBCOFTCSSPSRCOCXYFRATTZDGRNXGVMKTOYIYADILKQQBVYIHXFLNEQOUSVVZPMZAYUFDWMTEQHRHNU");
    msg.max_speed = 0.438503621166;
    msg.speed_units = 170U;
    msg.lat = 0.0442267415775;
    msg.lon = 0.515629999217;
    msg.z = 0.0503119038111;
    msg.z_units = 112U;
    msg.custom.assign("HKWKKANHYEBEDXXGZVB");

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
    msg.setTimeStamp(0.211563614104);
    msg.setSource(60938U);
    msg.setSourceEntity(145U);
    msg.setDestination(18434U);
    msg.setDestinationEntity(204U);
    msg.target.assign("YPHCPOYIFNNXCOJUWUYSBYCBTEMNOPVLWHTVUZTMCPYFAJHFGJEAQPLROFRWEPKCENZPFLHYFPXKRJMRVFIQNTLJETPSDBQUKMHGEKSXWWBQXJIIQXYBKYDMWOWVIZRCOMTWGEQSNXAHSVVUDATRQJANJELFBMINGLITAXVTUGXWALDASRHUSNH");
    msg.max_speed = 0.630826428309;
    msg.speed_units = 74U;
    msg.lat = 0.795370088646;
    msg.lon = 0.825777112557;
    msg.z = 0.206135699573;
    msg.z_units = 113U;
    msg.custom.assign("KSAUPBGMHQLXIFEFXSOHQGPWMXRONCTAVCBLXSCQSMJLJYTINLQIHMZBYSKCFLETSRLKRTBTUCFNRJWEPUKJGQOUAMOWUDKREWPLCYPRJFSMUGGZGXBOBIOWIJERWQZTDMP");

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
    msg.setTimeStamp(0.97492471552);
    msg.setSource(55684U);
    msg.setSourceEntity(96U);
    msg.setDestination(28139U);
    msg.setDestinationEntity(140U);
    msg.target.assign("RFGTKNJBQRBXNFBFSFDJBLYECWUJRHXVTAZYWGWCEINKOJEHYYABRDLRDQNYCGTDSKKCFHOXUWDSVPSXUUXTQPVONEBVCSFPUD");
    msg.max_speed = 0.934972460169;
    msg.speed_units = 238U;
    msg.lat = 0.117688509915;
    msg.lon = 0.153930628756;
    msg.z = 0.8695282029;
    msg.z_units = 32U;
    msg.custom.assign("AMAJCCFURKZDWEDEFWNNZBOLYSTBQBRPLPTSAREDWEPWFQQGHPNRLSZDXZJUJIQTGLUQIBDSZRVDFRYTTJVCHEVXMPKYHOMIMO");

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
    msg.setTimeStamp(0.0760407586686);
    msg.setSource(63992U);
    msg.setSourceEntity(120U);
    msg.setDestination(24711U);
    msg.setDestinationEntity(31U);
    msg.timeout = 42864U;
    msg.lat = 0.883912992214;
    msg.lon = 0.370144796545;
    msg.speed = 0.899011700227;
    msg.speed_units = 137U;
    msg.custom.assign("WUUBYPNQUESTADMKLBJMUPK");

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
    msg.setTimeStamp(0.912947537617);
    msg.setSource(13389U);
    msg.setSourceEntity(248U);
    msg.setDestination(2962U);
    msg.setDestinationEntity(184U);
    msg.timeout = 10886U;
    msg.lat = 0.0665430210993;
    msg.lon = 0.316582837895;
    msg.speed = 0.383699900272;
    msg.speed_units = 162U;
    msg.custom.assign("MJKQFJZOLLSKBLGGMEXTDPSXJSQQYGUKHUWDIYFQNTMZMHZPGBERKWSNHUEVIPVFCJWALQOMBAOTNPCPCTFWANUWPYLDCVHZMAJNJVOJYOHQHVFMGLUCZULSVAKPFXKCTRAQXRJVXWXLKQGWQBUZUGYCDZXOVWEPMBINECNDYKDJMBACIDUEFLTNGYAIIVQSBXWPIBJEYSERAFRKTERNTZIWSSZTYLZRPHNGXHOOVDTERXUDYARICD");

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
    msg.setTimeStamp(0.371881415587);
    msg.setSource(24319U);
    msg.setSourceEntity(17U);
    msg.setDestination(6248U);
    msg.setDestinationEntity(122U);
    msg.timeout = 35642U;
    msg.lat = 0.318233762133;
    msg.lon = 0.653294946259;
    msg.speed = 0.837345360189;
    msg.speed_units = 198U;
    msg.custom.assign("TKMZWBVAYSAZKJROGHRGBLAIQRWEIZOUQTMURHXZKSOBJKJQHSYFMCDHXFCPXPPJMSITQIGHILSNMSLDOYDWAYGELMXBYBGQFYKXGZSGLWUOPZRPNEFQCNTMUMRDHSTNDNNIBVTWDMJWJKPGZFVXHNRCNWPLUNEOYJVEZTXMUVZSABYIOEVCOFXIVEPHQHTQFDIXUYNFKYTDEKUAIV");

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
    msg.setTimeStamp(0.615686377714);
    msg.setSource(41720U);
    msg.setSourceEntity(113U);
    msg.setDestination(29288U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.990050212921;
    msg.lon = 0.869310784846;
    msg.z = 0.208905073028;
    msg.z_units = 133U;
    msg.radius = 0.981293427809;
    msg.duration = 8769U;
    msg.speed = 0.915182313805;
    msg.speed_units = 87U;
    msg.popup_period = 53187U;
    msg.popup_duration = 12131U;
    msg.flags = 84U;
    msg.custom.assign("IKNVIXMQURRLQZTEEYTXRISDJUSICKDHCAEJNHKCFKUBHXEALYSOKPWCFKBULKBYYVYUJXMDSRDWHCIKOXPGTADXONJPRZHCFAGSMKWVHVYVTJYMDDEEOLNOBKCRSZBOSFUOUYBLESHTDZFJMFQNWGNZSNPBTLWMTUAWGMISXHYGIEFQWGUNPFCLROGGABARZTIOJJXPBVXTLBQMHJYAFJHNOQWLQVNIFCWAMGREGZPVLQZ");

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
    msg.setTimeStamp(0.15723614973);
    msg.setSource(65204U);
    msg.setSourceEntity(205U);
    msg.setDestination(42617U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.966944235381;
    msg.lon = 0.642281924961;
    msg.z = 0.784448968478;
    msg.z_units = 6U;
    msg.radius = 0.973669236407;
    msg.duration = 50528U;
    msg.speed = 0.271750682685;
    msg.speed_units = 195U;
    msg.popup_period = 8199U;
    msg.popup_duration = 50518U;
    msg.flags = 73U;
    msg.custom.assign("VPMCESLNPCRVXFIESXNTHAGBOMBFCRDKGFOPLJTUJWGQBRRYHULSWBBUG");

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
    msg.setTimeStamp(0.203967265734);
    msg.setSource(30326U);
    msg.setSourceEntity(252U);
    msg.setDestination(26369U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.13666761343;
    msg.lon = 0.369541238426;
    msg.z = 0.665242110743;
    msg.z_units = 177U;
    msg.radius = 0.0660059483089;
    msg.duration = 10350U;
    msg.speed = 0.614991411527;
    msg.speed_units = 199U;
    msg.popup_period = 53357U;
    msg.popup_duration = 47617U;
    msg.flags = 198U;
    msg.custom.assign("DHNWACUPQQYQCVXEWLMODTEPJNAOYZANMTAKAYDRLVRNBUVMNALFQPYGLZRHDFLMWMGTKOKOYHYRCFNIBPKHOXCCZOCZWCFQXFZWBDCMWTZRCBGTJYHVXRSGPSHEXWDKGXWUPTQYICQKGBGXIPLDBBSSBPVFDVIDJFEAAIUJSPINEOZEUIOTTYLMDXT");

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
    msg.setTimeStamp(0.498130880689);
    msg.setSource(11577U);
    msg.setSourceEntity(249U);
    msg.setDestination(7285U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.059864689085);
    msg.setSource(44662U);
    msg.setSourceEntity(22U);
    msg.setDestination(56820U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.960401377616);
    msg.setSource(31364U);
    msg.setSourceEntity(96U);
    msg.setDestination(29949U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.0154441521331);
    msg.setSource(39969U);
    msg.setSourceEntity(192U);
    msg.setDestination(41531U);
    msg.setDestinationEntity(111U);
    msg.timeout = 64422U;
    msg.lat = 0.314351312206;
    msg.lon = 0.362678562771;
    msg.z = 0.0966881673631;
    msg.z_units = 129U;
    msg.speed = 0.394157993657;
    msg.speed_units = 173U;
    msg.bearing = 0.46178228955;
    msg.width = 0.275933572889;
    msg.direction = 202U;
    msg.custom.assign("ZSMCBUMKOMFFKCZEJFWYOJLIHHKWDHBTQWGGBMXYXPIRNETMDBAMLYQSVGAXWLUDVCLEROWIXOSEACHLCHRNRQFVSCRFNWAUZQEMRKNPWTYNGVPFPRLYGPZQEOUVSZQHYVIDQKTMRGXQRUUPVDSZUJGJFEDJITNHATBAXNYSBDIPJPGZFECLT");

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
    msg.setTimeStamp(0.437622792124);
    msg.setSource(59754U);
    msg.setSourceEntity(244U);
    msg.setDestination(55437U);
    msg.setDestinationEntity(196U);
    msg.timeout = 58131U;
    msg.lat = 0.385242383318;
    msg.lon = 0.410876407427;
    msg.z = 0.447612026099;
    msg.z_units = 39U;
    msg.speed = 0.839596261571;
    msg.speed_units = 243U;
    msg.bearing = 0.709201663698;
    msg.width = 0.0675935623348;
    msg.direction = 35U;
    msg.custom.assign("EKZRJJAEOOUSCHVTKNKTMCBXIRYNQRWKUYPQAIJRFOLHDNTAZQASRVYMAKNYZGVGTUVKLLJDCNSHWLLOVXBCYSIOZGWQHIZGECTAEEGMNAVRUTLWSEDLBG");

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
    msg.setTimeStamp(0.804029082382);
    msg.setSource(51754U);
    msg.setSourceEntity(164U);
    msg.setDestination(44437U);
    msg.setDestinationEntity(109U);
    msg.timeout = 17188U;
    msg.lat = 0.0737374483405;
    msg.lon = 0.193616279296;
    msg.z = 0.0739787803387;
    msg.z_units = 224U;
    msg.speed = 0.481371661963;
    msg.speed_units = 192U;
    msg.bearing = 0.159949818943;
    msg.width = 0.879491831743;
    msg.direction = 181U;
    msg.custom.assign("KMAEYTKZAGZBDRQYUINFCZFFLIDROJLRPZEYBODDHNZCSPFCRWQEWOZJPTXHHFHVLACJOZAXTPOMWNKFZLBGEXDJGHJDESWRUDMZQVINSRLMUSWVGLTUUAMBTSKBBWOLORXVQG");

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
    msg.setTimeStamp(0.296816172489);
    msg.setSource(17525U);
    msg.setSourceEntity(1U);
    msg.setDestination(51022U);
    msg.setDestinationEntity(149U);
    msg.op_mode = 108U;
    msg.error_count = 223U;
    msg.error_ents.assign("NOLDMBQNMPJUHYZVUPFSEQWLIPACUWRJUMDZQNHESLEYITGSOGLLTUVOFWGNPKOLJQKPBWKYBHYZKTMQTAEDCVNQKLVKRBHOCIGQVTIYIGWTJKVDGEZSUXWAOABFRGNEZLPJTIOHPZMTYBZHISWZPKCGNQNEKKWQMJGCEJWROFUARSBJIDCBJVMOXMRAAMTSYUHFMCXOGCCLDXNDXDRVCXPVFUA");
    msg.maneuver_type = 46313U;
    msg.maneuver_stime = 0.968078082242;
    msg.maneuver_eta = 15839U;
    msg.control_loops = 2509838395U;
    msg.flags = 203U;
    msg.last_error.assign("XHXFRXRQTGEKVSKVOBVYRSINGCAJUCABFZCBDYCAZJOVCV");
    msg.last_error_time = 0.355792561009;

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
    msg.setTimeStamp(0.817700574535);
    msg.setSource(20042U);
    msg.setSourceEntity(184U);
    msg.setDestination(6248U);
    msg.setDestinationEntity(246U);
    msg.op_mode = 127U;
    msg.error_count = 72U;
    msg.error_ents.assign("PSGUWFHGFGHAUYEYSJSBKNRAHOXLDKHIJPIERYFUCYAYSWMYCZCAIKMPTVRYORKTKBNJRVABKJCPALLOSITTBJJCQEPMUVAAXSNRVTRGXNMOZBCLHHDPQOQSMDZEBQHNBUEFIGUMZFBBXSPLQZWHCIFDUWFFLMETIZETZUKQCOJHLONFUJ");
    msg.maneuver_type = 316U;
    msg.maneuver_stime = 0.338469866956;
    msg.maneuver_eta = 33578U;
    msg.control_loops = 4238996871U;
    msg.flags = 227U;
    msg.last_error.assign("DDRMSWUQWQQVLORQHVBGKQPOEGWOYUTASQTCOWLIBEKVLLNDYGAZIQFJHXANPNNPZXCVCMXPTU");
    msg.last_error_time = 0.662808821954;

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
    msg.setTimeStamp(0.585829140311);
    msg.setSource(19515U);
    msg.setSourceEntity(20U);
    msg.setDestination(31289U);
    msg.setDestinationEntity(42U);
    msg.op_mode = 198U;
    msg.error_count = 4U;
    msg.error_ents.assign("DEYXQBCRASNGMIHEPANOTBQJYZNTDZZPQRPRNWFVQELUISSCJLCZTQMUUYUXWFOOXFGRWVWFKCGAXBGHRBYZFPJLSKJBDUHZUXYTGYEJIGHOJTVIZKJNPDARSNHTNKZMWDLJALLVIZXQHBIOEDXRQHBYIPKIUENFOBJTVMKNOCMGEWCLTGQVVSFLIWUWPOOPEKXXASVDXSPZUDRHCGLVSFAKCQJQCBYHMFATBSPYHEOLKMCRRVWMMNU");
    msg.maneuver_type = 18803U;
    msg.maneuver_stime = 0.973404467544;
    msg.maneuver_eta = 32336U;
    msg.control_loops = 457043424U;
    msg.flags = 69U;
    msg.last_error.assign("GRYSDBNDYHAXOGXPGTZEPXFLIFQMYQLOUVIASUAGBTLBJZVACKAMFSCMCYRYCKUIZEWSFUCGUDGXVEDNOWRDBDACEFIMUTSYKQLJWUJIJHEDWHOOMTAVGNIOQDFHSSZZSMHVXLNHTVFBPWQKQLWEZXHKXHGVJRUIWO");
    msg.last_error_time = 0.271064460458;

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
    msg.setTimeStamp(0.966767884468);
    msg.setSource(24474U);
    msg.setSourceEntity(175U);
    msg.setDestination(43284U);
    msg.setDestinationEntity(227U);
    msg.type = 22U;
    msg.request_id = 62274U;
    msg.command = 27U;
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.359609280833;
    tmp_msg_0.lon = 0.910390989673;
    tmp_msg_0.z = 0.445039036317;
    tmp_msg_0.z_units = 249U;
    tmp_msg_0.radius = 0.46045129287;
    tmp_msg_0.duration = 43548U;
    tmp_msg_0.speed = 0.291944320481;
    tmp_msg_0.speed_units = 133U;
    tmp_msg_0.popup_period = 33491U;
    tmp_msg_0.popup_duration = 5756U;
    tmp_msg_0.flags = 253U;
    tmp_msg_0.custom.assign("MAAEMQMIECOUVUGZRORPEJIPMDCUJDBPYWUDKQJSABGSXEVWFZQTCHFWWKSQXIHCBMWFICOIXMZDOSXBLEGTCPTENKSKCYHLEJYKTSDLRUDGFVDQBNZXRLHHODKHUAWTLIYEFAAHHTYGIEGZAUSKPFKXGPSLYY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 10841U;
    msg.info.assign("NRVVCMHHFVIJENOTDNOVOMSTAULJGOFRXDWEGSZTFYKYPRKMFOOVJZNLXVQQBDPEQFJTUNDAGIGLIFIWZIIBWPQJMTBNAACRWBSRAYUGAIQTGHSILYYAH");

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
    msg.setTimeStamp(0.0165066482664);
    msg.setSource(60487U);
    msg.setSourceEntity(157U);
    msg.setDestination(7989U);
    msg.setDestinationEntity(117U);
    msg.type = 155U;
    msg.request_id = 31995U;
    msg.command = 185U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 14835U;
    tmp_msg_0.rpm = 0.671690280221;
    tmp_msg_0.direction = 193U;
    tmp_msg_0.custom.assign("UNGHOUKWFLXBIZOPQGITWZETYKFSPZRKYTVLSUDKTWTEUWDSQHQFVNRWJYLJNCQUNFSBGYAOLJXUDOCNSVNSZIXJATJMJDFVLTOLCGFULDJEVQYIVTHAXZZEIPYFWWGACGLXPBLHQFPEJMAOPNMAHDIKCGCHPBYCBUSVVUXEGPQTBZMXFRMDRKAYNRBBLQZSKIHEBMMNYZWCDAMXGAHP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 8408U;
    msg.info.assign("ODOIIUHCNZKNTRJLRLUUHDWOSGRFTMZSIPXGZYRNUINFLPHHKCAWEDZLDJVAOUKIXXMNFRMROJSGMKFUBAEHWLYYTTELZCQCVBXOSLJYYTMXBGFHZZXDUBMEDPXZGAQQBQFBRAVGFQKFTGTHYIJVKWMKIHTEPDYCBWEVJXQLAGBPWIWUYUVQBJURPTIARHVOXYXKDOVGAZLDNEEM");

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
    msg.setTimeStamp(0.735964819076);
    msg.setSource(54386U);
    msg.setSourceEntity(14U);
    msg.setDestination(18130U);
    msg.setDestinationEntity(109U);
    msg.type = 93U;
    msg.request_id = 15682U;
    msg.command = 174U;
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 43751U;
    tmp_msg_0.lat = 0.565441912259;
    tmp_msg_0.lon = 0.29860490999;
    tmp_msg_0.z = 0.377493268737;
    tmp_msg_0.z_units = 241U;
    tmp_msg_0.speed = 0.522381905891;
    tmp_msg_0.speed_units = 107U;
    tmp_msg_0.syringe0 = 73U;
    tmp_msg_0.syringe1 = 192U;
    tmp_msg_0.syringe2 = 168U;
    tmp_msg_0.custom.assign("VMQSXHJUZLHUUYRBYJZFPBPYCTIFVOEKZGJECOWORICEQBGFXINZLXKDNCVIXEHKWLAQLUHALOTGACKWMB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 53750U;
    msg.info.assign("VQKPILCUXTYSJAODKULVQUOOBHBPKVZWYUSLETCHPOHVUZGYAWQYAYPRQTGFGLRCXFMUPCINXSDTAADDQKLBDINMUBIFTJVBTFNLAVZEKQSXCOSJMRZWSTQIGWEWPOPXBWRNVDVXRNHETKEDRFTICXQDILUJBMFGZKMBKZMCHHFGXNRMMTJZQGZPGFZPYFRIEYOGXEYOWSMDC");

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
    msg.setTimeStamp(0.443524053546);
    msg.setSource(5523U);
    msg.setSourceEntity(52U);
    msg.setDestination(44035U);
    msg.setDestinationEntity(202U);
    msg.command = 248U;
    msg.entities.assign("KHSCFTDRAQCRIMFZNBHFAEGKGGVTEDUGDJMORBQEAOOSDICLYRNGJNKRHFZYWUPLKAWWGMVXRBHAYJJLSHZZQFXWPWEQMZCLPH");

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
    msg.setTimeStamp(0.0865436387668);
    msg.setSource(58708U);
    msg.setSourceEntity(138U);
    msg.setDestination(35464U);
    msg.setDestinationEntity(114U);
    msg.command = 6U;
    msg.entities.assign("SHNAZGOKKXZERGIJLVDAMQKRQIGONQSNJURTRLFDYXTBFSXDGDMCHKQNYDSTWNQRCBUMDDTHZXJBVCNULYBMINWGRPWZISVKZJDFEIOHIQUPJBTCXPGPSLWMVVCLEINBLFFROVSRWZHJYSOZ");

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
    msg.setTimeStamp(0.450985437831);
    msg.setSource(2514U);
    msg.setSourceEntity(70U);
    msg.setDestination(31123U);
    msg.setDestinationEntity(211U);
    msg.command = 155U;
    msg.entities.assign("NYFDMXNLQCIFQHOUAFDNHWKFXGZKMGPFSEEXLPNVOPITADSKBCBAIETCKBVTMPZDDAJYDYILSBJMXNGVZKPITZWABSQFUMACDGSGVFVNJHRCULCBPNGJIHKHDTMLONCEQIOVTAMWPKYBYABOEEUKUNOIUTJPGRLZPULDUXT");

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
    msg.setTimeStamp(0.248049588018);
    msg.setSource(13224U);
    msg.setSourceEntity(17U);
    msg.setDestination(24017U);
    msg.setDestinationEntity(9U);
    msg.mcount = 97U;
    msg.mnames.assign("DPDAHTXYXAABCQVBUVMYXSTCJGNOZNISMGNSZVKKOHYXLWGQDROQYJWXAQLMFMRZOGVPISDBUNLWGJSRZCU");
    msg.ecount = 21U;
    msg.enames.assign("OHMBLISJARMWIDUVDAWLMCZQPZTZGNVZGDDKSINWTVCPDNOUHCBHACDSVIYFGYXANHKIEBBCRXQGJTJVKQO");
    msg.ccount = 142U;
    msg.cnames.assign("RRFOLPXDHRMUQJNZWGDHBPRATESBXDIXURQASYSKDCILZSCRDXYWTDPLUOBVAGYSBVLEZBGMJPLPQVGJYNNPSBKQWLDCIPDOBMIKFFATTKKIMVCAGAYRKLPKSSUWFYRFTVUOJQNJUMHKSXGRQLCCQNMZXMAGNIOSKRGWXYFHW");
    msg.last_error.assign("KBYFDZFGINOZBBNJRFHQHWJQHVUFSQVBEJEVFMEXUDGDRKZWTMRMOTATXOCISU");
    msg.last_error_time = 0.0838909282124;

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
    msg.setTimeStamp(0.70997449075);
    msg.setSource(18151U);
    msg.setSourceEntity(102U);
    msg.setDestination(55447U);
    msg.setDestinationEntity(143U);
    msg.mcount = 32U;
    msg.mnames.assign("GDNBJSALDFCLDXHOALHPTSTONMZKXDUXCISJTPTRZSIDSWNHYJCEYUNGIKWXPLCRPEYZQUKOXDGWWKVHHMUFTZEEZKJSXRWBNCFVBFMUUAGYLWQFIDLYJGTWFZRRXACBPOIJCPCTKBJSZOMRBNKGO");
    msg.ecount = 247U;
    msg.enames.assign("OXYTWZUIJWRHPGDPTOLKQLAIMYELLONFDFIRGITSYRUDPVPKGZXLBWQZAKGBUIFYAMWENNTCGMRVUZQBMEFPIPHLEXLEZJGJSQDBTVZJXFATYTGHWXUCECJXO");
    msg.ccount = 28U;
    msg.cnames.assign("HDUZXLROYNRUBBWVIAGMYTNAHVNEJZEJFPPRTGLXAWGLUPYXZRQQSMFLNFMIXMJCNKLTDVNLOQTHUKKU");
    msg.last_error.assign("IYSMGLHNOQSCYFSPIEJJHJJUGRYZYRNJVUBKIDBGMDQGQFNAFWPYBFEYGRKHRHOCVPCUITKAKOWHIOWODATMHDXRIK");
    msg.last_error_time = 0.588143370388;

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
    msg.setTimeStamp(0.304582351904);
    msg.setSource(44216U);
    msg.setSourceEntity(22U);
    msg.setDestination(161U);
    msg.setDestinationEntity(193U);
    msg.mcount = 113U;
    msg.mnames.assign("QYWRKMTMERSW");
    msg.ecount = 123U;
    msg.enames.assign("PLPDPUIGOOHXTZBOHASJCUXJWCVMOTXAJKR");
    msg.ccount = 16U;
    msg.cnames.assign("JKPBPOKYBBPDFMATZLCQFNGMVHBDGKSYKQTVJVZRDPJYPJSBENJCXXQLDMNPZZYHQGRYULUGHQYOSXNRGWHFTVAJQAESDEYPJWDRKWYCLXAFDBYLJTGVWYIVLHBGMENLMRCWQOUIKLOXUKFRCWTCGTHSNLSAZMXNMRQVJMIVEOVIPTXEDIIAMIXVBUOUSZREAZHNZDFUZEWUAICBTRQWECFOPHTRSWBU");
    msg.last_error.assign("KFDAKTFXSAGPUYAUGOKNQLZKBQUECTEPJYAEPLIRXHOXLIIUOLSSKBVPCPLMOIMOOVIDSRNDGMMYHFAXOVX");
    msg.last_error_time = 0.534459353435;

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
    msg.setTimeStamp(0.355360521572);
    msg.setSource(23213U);
    msg.setSourceEntity(102U);
    msg.setDestination(5279U);
    msg.setDestinationEntity(120U);
    msg.mask = 215U;
    msg.max_depth = 0.779956786484;
    msg.min_altitude = 0.328319291732;
    msg.max_altitude = 0.692578299781;
    msg.min_speed = 0.975358604094;
    msg.max_speed = 0.690614230721;
    msg.max_vrate = 0.117190963469;
    msg.lat = 0.744269632746;
    msg.lon = 0.888213827432;
    msg.orientation = 0.433507588941;
    msg.width = 0.710271245877;
    msg.length = 0.564840476452;

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
    msg.setTimeStamp(0.231144487736);
    msg.setSource(51773U);
    msg.setSourceEntity(88U);
    msg.setDestination(35545U);
    msg.setDestinationEntity(194U);
    msg.mask = 251U;
    msg.max_depth = 0.427821877952;
    msg.min_altitude = 0.106219564828;
    msg.max_altitude = 0.932908876347;
    msg.min_speed = 0.28999358229;
    msg.max_speed = 0.847989013773;
    msg.max_vrate = 0.400641204283;
    msg.lat = 0.330748162959;
    msg.lon = 0.107055435548;
    msg.orientation = 0.538785509815;
    msg.width = 0.0723793077247;
    msg.length = 0.111280634467;

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
    msg.setTimeStamp(0.180241754397);
    msg.setSource(41176U);
    msg.setSourceEntity(70U);
    msg.setDestination(42248U);
    msg.setDestinationEntity(227U);
    msg.mask = 147U;
    msg.max_depth = 0.980042005847;
    msg.min_altitude = 0.140412054611;
    msg.max_altitude = 0.956021975131;
    msg.min_speed = 0.746479823828;
    msg.max_speed = 0.476687709132;
    msg.max_vrate = 0.435171782644;
    msg.lat = 0.458222084947;
    msg.lon = 0.959725772652;
    msg.orientation = 0.736330656087;
    msg.width = 0.973367036642;
    msg.length = 0.19726058131;

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
    msg.setTimeStamp(0.432888150101);
    msg.setSource(30182U);
    msg.setSourceEntity(147U);
    msg.setDestination(11719U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.625077961982);
    msg.setSource(14680U);
    msg.setSourceEntity(113U);
    msg.setDestination(30359U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.57233241518);
    msg.setSource(6002U);
    msg.setSourceEntity(198U);
    msg.setDestination(197U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.609118336769);
    msg.setSource(18619U);
    msg.setSourceEntity(119U);
    msg.setDestination(65377U);
    msg.setDestinationEntity(171U);
    msg.duration = 56045U;

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
    msg.setTimeStamp(0.672523187449);
    msg.setSource(47428U);
    msg.setSourceEntity(226U);
    msg.setDestination(56238U);
    msg.setDestinationEntity(213U);
    msg.duration = 51861U;

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
    msg.setTimeStamp(0.41163932269);
    msg.setSource(20427U);
    msg.setSourceEntity(71U);
    msg.setDestination(33712U);
    msg.setDestinationEntity(5U);
    msg.duration = 58423U;

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
    msg.setTimeStamp(0.478363242569);
    msg.setSource(40488U);
    msg.setSourceEntity(122U);
    msg.setDestination(25445U);
    msg.setDestinationEntity(76U);
    msg.enable = 67U;
    msg.mask = 2198313891U;
    msg.scope_ref = 93312204U;

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
    msg.setTimeStamp(0.788269280508);
    msg.setSource(20056U);
    msg.setSourceEntity(27U);
    msg.setDestination(8459U);
    msg.setDestinationEntity(30U);
    msg.enable = 243U;
    msg.mask = 3153951289U;
    msg.scope_ref = 2423696851U;

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
    msg.setTimeStamp(0.142463576143);
    msg.setSource(26337U);
    msg.setSourceEntity(190U);
    msg.setDestination(56631U);
    msg.setDestinationEntity(124U);
    msg.enable = 231U;
    msg.mask = 2298129497U;
    msg.scope_ref = 305870051U;

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
    msg.setTimeStamp(0.652106126532);
    msg.setSource(25840U);
    msg.setSourceEntity(31U);
    msg.setDestination(50210U);
    msg.setDestinationEntity(234U);
    msg.medium = 205U;

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
    msg.setTimeStamp(0.336217608208);
    msg.setSource(525U);
    msg.setSourceEntity(252U);
    msg.setDestination(62963U);
    msg.setDestinationEntity(148U);
    msg.medium = 97U;

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
    msg.setTimeStamp(0.414379604884);
    msg.setSource(50036U);
    msg.setSourceEntity(33U);
    msg.setDestination(51353U);
    msg.setDestinationEntity(46U);
    msg.medium = 215U;

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
    msg.setTimeStamp(0.0415882341623);
    msg.setSource(13439U);
    msg.setSourceEntity(220U);
    msg.setDestination(28705U);
    msg.setDestinationEntity(200U);
    msg.value = 0.310963991226;
    msg.type = 74U;

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
    msg.setTimeStamp(0.408229489735);
    msg.setSource(27208U);
    msg.setSourceEntity(183U);
    msg.setDestination(17323U);
    msg.setDestinationEntity(89U);
    msg.value = 0.418010759704;
    msg.type = 223U;

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
    msg.setTimeStamp(0.120373904531);
    msg.setSource(39942U);
    msg.setSourceEntity(124U);
    msg.setDestination(53940U);
    msg.setDestinationEntity(71U);
    msg.value = 0.0505652788607;
    msg.type = 143U;

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
    msg.setTimeStamp(0.819768368189);
    msg.setSource(50247U);
    msg.setSourceEntity(226U);
    msg.setDestination(58818U);
    msg.setDestinationEntity(100U);
    msg.possimerr = 0.915375518222;
    msg.converg = 0.720643838466;
    msg.turbulence = 0.050707156755;
    msg.possimmon = 144U;
    msg.commmon = 183U;
    msg.convergmon = 154U;

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
    msg.setTimeStamp(0.295262199265);
    msg.setSource(60807U);
    msg.setSourceEntity(151U);
    msg.setDestination(39897U);
    msg.setDestinationEntity(246U);
    msg.possimerr = 0.63951171363;
    msg.converg = 0.81419222442;
    msg.turbulence = 0.557275807987;
    msg.possimmon = 32U;
    msg.commmon = 27U;
    msg.convergmon = 60U;

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
    msg.setTimeStamp(0.0745902043726);
    msg.setSource(13773U);
    msg.setSourceEntity(176U);
    msg.setDestination(7152U);
    msg.setDestinationEntity(129U);
    msg.possimerr = 0.400812795203;
    msg.converg = 0.580097496153;
    msg.turbulence = 0.309335024091;
    msg.possimmon = 71U;
    msg.commmon = 152U;
    msg.convergmon = 172U;

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
    msg.setTimeStamp(0.809113684434);
    msg.setSource(19850U);
    msg.setSourceEntity(20U);
    msg.setDestination(4469U);
    msg.setDestinationEntity(154U);
    msg.autonomy = 109U;
    msg.mode.assign("OMCMKGIBISXLQIQCUEADLNHTXIDZZKHXGHMXTTFIYIVVGPHCGBSWXZEQLQRZYEJPMMRLPDUWUUAYYWSOBTZFIPKLFZTHXPTJTWICMKECFAWAJYNMBQJKSWELFJOSHEDMIXGWCFGRVQJVSGNGKEOZABASXUCLRJZYPDEUNTNVVCRDOERDHLSOKTJABYOBALQDAURZVGGQYFRUHCXQRODYNBANWFRHONZNOWPJCTVQKLUFK");

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
    msg.setTimeStamp(0.757127516432);
    msg.setSource(44372U);
    msg.setSourceEntity(51U);
    msg.setDestination(41169U);
    msg.setDestinationEntity(198U);
    msg.autonomy = 110U;
    msg.mode.assign("SUORZSGUMQBJNCVNHOPUXKMOQKHRJMAWTGWZADJWDCXLZEWLQFQIEFCYFFUMAVHGGFIFMNNYYRBTHCENYGMLYSDKTZVITCXFQZBOBGDCZKFBZIREPYOTKBWXXPTKSBEAMUJPGQAPEVUHLACDSAPYOJLXEARKALKWXSVNLHBICWSRPLTNFROH");

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
    msg.setTimeStamp(0.63530165677);
    msg.setSource(60752U);
    msg.setSourceEntity(205U);
    msg.setDestination(15303U);
    msg.setDestinationEntity(236U);
    msg.autonomy = 141U;
    msg.mode.assign("YSNUJSLYJZWGTIJLFZPNFVXXHDISG");

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
    msg.setTimeStamp(0.0462208412232);
    msg.setSource(25356U);
    msg.setSourceEntity(88U);
    msg.setDestination(32985U);
    msg.setDestinationEntity(182U);
    msg.type = 134U;
    msg.op = 191U;
    msg.possimerr = 0.968966952224;
    msg.converg = 0.835293436202;
    msg.turbulence = 0.696044329894;
    msg.possimmon = 182U;
    msg.commmon = 164U;
    msg.convergmon = 243U;

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
    msg.setTimeStamp(0.497234034424);
    msg.setSource(20426U);
    msg.setSourceEntity(234U);
    msg.setDestination(56940U);
    msg.setDestinationEntity(200U);
    msg.type = 85U;
    msg.op = 116U;
    msg.possimerr = 0.478222352115;
    msg.converg = 0.788990840201;
    msg.turbulence = 0.413958552607;
    msg.possimmon = 234U;
    msg.commmon = 203U;
    msg.convergmon = 4U;

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
    msg.setTimeStamp(0.295951260891);
    msg.setSource(30402U);
    msg.setSourceEntity(253U);
    msg.setDestination(33735U);
    msg.setDestinationEntity(114U);
    msg.type = 29U;
    msg.op = 33U;
    msg.possimerr = 0.283967507952;
    msg.converg = 0.558238191507;
    msg.turbulence = 0.175033364112;
    msg.possimmon = 20U;
    msg.commmon = 41U;
    msg.convergmon = 226U;

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
    msg.setTimeStamp(0.497598526854);
    msg.setSource(23544U);
    msg.setSourceEntity(0U);
    msg.setDestination(1692U);
    msg.setDestinationEntity(230U);
    msg.op = 41U;
    msg.comm_interface = 101U;
    msg.period = 20154U;
    msg.sys_dst.assign("EMXOKGOXXWYEIGXYSNGXNCPTHESFFZPDVIEAUZZQEHESHLNHZVOLHGDOAGGTSUWALILVRRQNV");

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
    msg.setTimeStamp(0.628176375416);
    msg.setSource(20398U);
    msg.setSourceEntity(127U);
    msg.setDestination(31304U);
    msg.setDestinationEntity(116U);
    msg.op = 163U;
    msg.comm_interface = 95U;
    msg.period = 8068U;
    msg.sys_dst.assign("CJPLUHWXJMDSTEAVUMSOBEPGAEQNMKDZUHXFIUKJSZCASEVQOBPVMRSFNEOCSAYIJZLHASAQIMATRMJQXTNGZLKRDJFGYFSARXVTHUASLWZKHZWXRNGDTCOFOVKBNVNGJUMPVLXWPBTOCNGKZPKUGWUYXJENBZIIYQJWQDQLCHGHJCSORYWYCOIUQKFOIHFBYLHRNYBXUNVADTDFEVKGRRCZQTMVKMTPWXPYDEMPZRIIDFFLWBTLWEBEP");

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
    msg.setTimeStamp(0.603495348733);
    msg.setSource(12231U);
    msg.setSourceEntity(131U);
    msg.setDestination(17172U);
    msg.setDestinationEntity(140U);
    msg.op = 93U;
    msg.comm_interface = 245U;
    msg.period = 16353U;
    msg.sys_dst.assign("MMKOFKWLMVDOXOFHCOQJHZPMYUBPRKBPICKQIWJIZSZIHXLELEWDJZBCPPAMDSREFKRUIJGXFHNKLNEGPAAVARFNEQPUJVGUNQUGLMIQSTRPWXBTGDKDLTMWEQICJRWYCDISWBRRLPEWQHCEJYXKMXFWVZH");

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
    msg.setTimeStamp(0.827053233593);
    msg.setSource(14734U);
    msg.setSourceEntity(42U);
    msg.setDestination(1858U);
    msg.setDestinationEntity(81U);
    msg.stime = 2439213338U;
    msg.latitude = 0.641008924605;
    msg.longitude = 0.689469536189;
    msg.altitude = 51023U;
    msg.depth = 19842U;
    msg.heading = 29056U;
    msg.speed = 26826;
    msg.fuel = 83;
    msg.exec_state = 23;
    msg.plan_checksum = 803U;

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
    msg.setTimeStamp(0.700917783577);
    msg.setSource(49857U);
    msg.setSourceEntity(216U);
    msg.setDestination(58064U);
    msg.setDestinationEntity(201U);
    msg.stime = 2447029802U;
    msg.latitude = 0.977750940891;
    msg.longitude = 0.8466157308;
    msg.altitude = 24795U;
    msg.depth = 41196U;
    msg.heading = 4973U;
    msg.speed = 16449;
    msg.fuel = -76;
    msg.exec_state = 90;
    msg.plan_checksum = 42703U;

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
    msg.setTimeStamp(0.894387393224);
    msg.setSource(42692U);
    msg.setSourceEntity(181U);
    msg.setDestination(9862U);
    msg.setDestinationEntity(174U);
    msg.stime = 1827719046U;
    msg.latitude = 0.360499238234;
    msg.longitude = 0.584263150963;
    msg.altitude = 28007U;
    msg.depth = 4182U;
    msg.heading = 16409U;
    msg.speed = 23778;
    msg.fuel = -24;
    msg.exec_state = -44;
    msg.plan_checksum = 33659U;

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
    msg.setTimeStamp(0.598298769398);
    msg.setSource(59476U);
    msg.setSourceEntity(168U);
    msg.setDestination(64930U);
    msg.setDestinationEntity(53U);
    msg.req_id = 32196U;
    msg.comm_mean = 19U;
    msg.destination.assign("QYEJUMZTOAFVYPQGDHNNHRBODMHFKEELNS");
    msg.deadline = 0.195344395238;
    msg.range = 0.696155451251;
    msg.data_mode = 245U;
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("DZQTKQTLGKFFFLOSQQVNTHBLQJDHIWUFVZJPNKCOHXYIYUGEJRHBMNBDAZTHSLJMVXWQJUZQFPPBUGTOEUAXMNYKE");
    tmp_msg_0.value.assign("URNTWWABQKXJOZOVRWBWFKYMNCNWJZPYYGQYDQPTZTXCZHETQREMIHVTGXIIVONGLDWASPRQCDZFJGMWNCDNWHIFBDEDHGRAACIQGWLHORAUVZPMEPNPVSHBEKFQVTHZMLYCOUILHRKPBLVSJZMQOKCIXBGAXDZKEQXQLKVJOMIUYTFCXRLXLTUUMZNKYHJJMKBSTAROPNYSXCAFGOXGSVF");
    tmp_msg_0.type = 227U;
    tmp_msg_0.access = 178U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("RFIZYOJBSEXCOJICRXVBNWEKYWFNAUXMHBKFKYPUIIQSANWTILHTORIOYDMXPVGHJDHGZCYTLKTUUAWXMBGIKNNXEWQQEVWNUOFKASQMKJKCXVRGQTXSEMTNHCADQZITLDHMAQBRLBISEFCJZEPEPRSYFNLDDVHFQZSSUELPLHYZXLDYEJWNWRRLQPDGUY");
    const char tmp_msg_1[] = {60, 83, -14, -67, 89, 45, 58, -10, -23, 118, -10, 14, -116, -15, 32, -46, 31, 45, 95, -103, 89, 52, 87, 21, 83, 95, -14, 5, 110, 52, 50, -19, -108, 46};
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
    msg.setTimeStamp(0.697956417224);
    msg.setSource(21068U);
    msg.setSourceEntity(15U);
    msg.setDestination(16934U);
    msg.setDestinationEntity(112U);
    msg.req_id = 14131U;
    msg.comm_mean = 181U;
    msg.destination.assign("HZFZOKCRQSIBBVFRPHHCARSRRQBLWKTCJEFAOHLSBDVSWYEPPNVSPMJJQRIISNHPMNMUYFOFLQAEFTUNTAKJMZVLIUTNMTKEBCWAHRHCKCBDDWOOVTXGZDGPYJQXJWRHLDNWQIJEEAKFCSSAOEGQOYJHNQBINZVQRPYXFLUTTXGBZURQGXZYVUINPWDVMNUMOXPDZOIDKBKJMCG");
    msg.deadline = 0.49744370475;
    msg.range = 0.845116334022;
    msg.data_mode = 224U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 42879U;
    tmp_msg_0.control_ent = 107U;
    tmp_msg_0.timeout = 0.584291391503;
    tmp_msg_0.loiter_radius = 0.0618598832451;
    tmp_msg_0.altitude_interval = 0.762435983021;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("WKRKMINGQMDIOGMUOJCZRKPBDJRTHGTNZGAAVFOHUBURCHBHMLYTCCHKEOWLSELWVQOXXJBELQS");
    const char tmp_msg_1[] = {85, -59, -126, -51, -10, 2, -74, -78, 118, 122, 5, 83, 30, 74, -110, 113, 115, 21, 98, 43, -37, 53, -32, 97, -84, -119, -69, 26, -114, 84, -63, 44, 90, 97, -36, -89, 6, 95, 118, -41, 83, 70, 94, -44, -96, -108, -54, 51, -44, -108, 21, 113, -100, 22, -21, 63, -128, 63, 44, 7, 1, 99, 123, -58, -39, -127, 2, -5, -125, 122, 51, -122, -76, -28, 84, -16, 42, 63, 71, 63, 105, -56, 12, 89, -120, -37, -87, 72, 115, -63, 4, -55, -18, 36, -67, 98, -46, -48, -94, -86, -24, 25, 116, 62, 111, 59, 55, 17, 4, 4, -96, -104, 6, 90, -78, 18, -40, 65, -65, 18, 101, 113, -110, 34, 120, 107, -89, 120, -45, 92, -94, -43, -30, -95, 7, -70, -81, 104, 34, -100, 106, 72, 88, 113, -90, 83, 88, -47, 56, -92, -66, 64, -104, -81, -16, 109, -42, 78, 39, 97, 44, 56, -123, 116, -104, 33, -26, -40, -56, -76, 32, -72, 78, 67, 79, 99, 58, 39, -73, -37, 98, -124, 119, -14, -1, 44, 14, -22, 98, -40, 76, -62, 121, -33, -110, -82, -43, -57, -53, -11, 30, -60, 102};
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
    msg.setTimeStamp(0.178207333581);
    msg.setSource(35759U);
    msg.setSourceEntity(241U);
    msg.setDestination(42862U);
    msg.setDestinationEntity(78U);
    msg.req_id = 38938U;
    msg.comm_mean = 10U;
    msg.destination.assign("DDUSPWLNHPSLECHPIFBYTRZXAEALHBJQPNWWAULPCYBVCGJWRBJDBCHCZKVDOUKKWWZVZKEFZZYCCURYRYUFLLMQLQJONQOQNYVDQYMFQFGQWCRBBJXUCAXMEPFRWZXIWTGRPRJOEEMTUAQSSMYGNQNSMNIXDJOTKPUEYRMUKDIYSTDTFGOXVXX");
    msg.deadline = 0.91567127401;
    msg.range = 0.755483438536;
    msg.data_mode = 153U;
    IMC::GetParametersXml tmp_msg_0;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("BWSVUESJHODUTNDUJKLRRCUFVAQQXFOZKGUQKFMVAJSYYPEVNANEIDDQFPNQXMHKIYVQCKLKRTOXZUMTDEFZZNWZEEHIBDCBHZFHQWMNYTYRBVRAPBVYJTMGOTAHWCKMIOGGGEGLQLSIQLBWJSHEVKWXOCGTCMXNMAHISIZECWIWOOSINGJYYJMMBDLGPBYLZXROAABTFIRUEZTRPXRCAJFLXRHJDKUHNGDODKPZWY");
    const char tmp_msg_1[] = {-120, -46, -9, 42, 86, 0, 84, 39, 1, 38, -90, 82, -58, 11, 33, -80};
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
    msg.setTimeStamp(0.631501292211);
    msg.setSource(29659U);
    msg.setSourceEntity(71U);
    msg.setDestination(50982U);
    msg.setDestinationEntity(205U);
    msg.req_id = 25264U;
    msg.status = 11U;
    msg.range = 0.721650721593;
    msg.info.assign("FGRRVPBGKPAGBAWZVJCYAJNPUHMTZELUGCGNDRJXOLFGDPIRGHYXMRIXKNTYBAMTMBDOLCAWMTAIQFOVQDLEWTQDDQZTKAWXOJCBJRQWJZLOFUHNDQJZFATUPGREKUILEABMKCJOBKEY");

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
    msg.setTimeStamp(0.470185307708);
    msg.setSource(35823U);
    msg.setSourceEntity(194U);
    msg.setDestination(52620U);
    msg.setDestinationEntity(30U);
    msg.req_id = 51259U;
    msg.status = 156U;
    msg.range = 0.970213613549;
    msg.info.assign("BWFPRQKVDWXYNSIEUUEDTFJRIUBWMBGJXQRLRWELOZYSZWTLPIIILTXVEADYMZXTONMGSKMNHGBDPVQHSLYXMCOVCKNVKAGMCHFZQREGTARQSRFGEUFEHWSVEOIAADRRTGEPKBYDSOJLKCPBMVIAJWZUTFZKVWJCJZJNCOKQGEUFNAJRNXQWHDZJCNTBY");

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
    msg.setTimeStamp(0.187533063517);
    msg.setSource(50747U);
    msg.setSourceEntity(223U);
    msg.setDestination(3262U);
    msg.setDestinationEntity(181U);
    msg.req_id = 33892U;
    msg.status = 103U;
    msg.range = 0.112312691472;
    msg.info.assign("KWXMLWEBLQBEBEOPUFSWUNFMMGHZXDOQAXREBSPFKUFVXHSYTPYGCNLEDEJTGZRKHRBMVZZYVHQGZMLLKJQMWCHZFEIVPUNPSDPSPANTQYLFCIOAJNZOCJOZOJPTWLHMGCYYWC");

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
    msg.setTimeStamp(0.341582829357);
    msg.setSource(43504U);
    msg.setSourceEntity(119U);
    msg.setDestination(2376U);
    msg.setDestinationEntity(192U);
    msg.req_id = 41649U;
    msg.destination.assign("LIIOAIOYBBTUFJRJDQMAXTSCETYUAJIT");
    msg.timeout = 0.093888844939;
    msg.sms_text.assign("UMCTOZZARPNQQOAHLVFCONCAGJJXOWQLFFDPXYLBFLOQVUGMCCSPAHPHJHLMTIUQDTBXVJGZXVAFURNTOGQTHWMWWZKRBEOTSJIADEQFBVCWIAYATRKLVEBKXDWZCPZUSSCDEYFIJMWSPZGXYXOIDIPKHBMSCQVUJJURVAUDYEOQBMSYZLTGBKHWMLORVPHNDFQFAXCYKRBY");

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
    msg.setTimeStamp(0.691179950947);
    msg.setSource(14328U);
    msg.setSourceEntity(19U);
    msg.setDestination(7408U);
    msg.setDestinationEntity(213U);
    msg.req_id = 52240U;
    msg.destination.assign("RDPNUKAZZYOWDNHZMMVWZASNDSIEPTMGKOFHUNQIAUHXJURGBMSVWTFSXHPFQLGNKXENJENXTFYXCGIEWAVCIMVOLQOKFNJRPQZTFYUHFSFCTZDCJDLAJJJLVCHIKOYUQBXHLBQPAIGTZUCHQOPPDYUGOQFVRXQXJCYRWROBTVWBMSDKPLDRZZBMVGWKAUMKDLINSUIWVOYJVXJLXPRSDYEQEWGLLATECBFMCHZIREGO");
    msg.timeout = 0.507637158641;
    msg.sms_text.assign("RGXGUOYZQIBWQXJZONJACUQSITFXYBEKTLUJUNEYPJGIPBLFKEAOLDHYVPRLBDBAGSPGLHXUGWZS");

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
    msg.setTimeStamp(0.443554453484);
    msg.setSource(20971U);
    msg.setSourceEntity(62U);
    msg.setDestination(15181U);
    msg.setDestinationEntity(181U);
    msg.req_id = 63705U;
    msg.destination.assign("IMBBPLDUFWGPZBDRAMZCQFXNAUMTVKXODNWCYNPJGCBVKZTVUZGJHWOSAXAEQIOAAPTAQBNMKHGYRUXZPWHPTBWKW");
    msg.timeout = 0.708747997434;
    msg.sms_text.assign("KQBDJMMCYRTWAZCVXKSJJNNBIEDWFZUECXQXSUHUUYBVOBTGGRGUTOOXMIQZFOAWFAAHOINZCLYFPTULPNDRPRZMYODOYQJQAJCADEIJPAAUSPVZNHLLLHYYDIMDTSKJJKQBEIRXNCQKVPTVLNPXGGNLKEFBZTNHOWWFRDHSIGUMSALKGBCCNJKLYSDOVTSPWSHPUVQYEVRIHKEXDXVFGIWRUSG");

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
    msg.setTimeStamp(0.764687696247);
    msg.setSource(61651U);
    msg.setSourceEntity(233U);
    msg.setDestination(61716U);
    msg.setDestinationEntity(105U);
    msg.req_id = 52849U;
    msg.status = 53U;
    msg.info.assign("OQAOPUZPCEDJVPDOOHUBFKHOGLLZEPDZYYPUBKFYQGRXVSFCAVHTWXYUWAIAEFKWIOSQTIWGFJCNVRKXXDULUSLYREEUPNVRHBLFRXIQQOESXMKPTAMDDOQURYCDXLGYHWIJLGSTCQPFGNTTHJXC");

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
    msg.setTimeStamp(0.0338530270558);
    msg.setSource(51782U);
    msg.setSourceEntity(112U);
    msg.setDestination(57533U);
    msg.setDestinationEntity(5U);
    msg.req_id = 12014U;
    msg.status = 163U;
    msg.info.assign("AWDPYXHDEBNTJUJPROQEGSXOJIEFOUOEZSFUAAUTKJKGYLNVTDAZIZUOMASFWKQWSYIOFNZVQYFPRBNGKBEERX");

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
    msg.setTimeStamp(0.0240292647784);
    msg.setSource(44232U);
    msg.setSourceEntity(153U);
    msg.setDestination(39794U);
    msg.setDestinationEntity(85U);
    msg.req_id = 51738U;
    msg.status = 232U;
    msg.info.assign("PERYDZDQQRZFCLWGGIXNKIPBHUOYFHREYFIETGWTRAHIIKJSQTLCOFGGVETNEFLNKFDLKDWCEQOMEJRLADPWJVVCBISGZOPNYRBUBTUJKYXXBLPXSRVQLIGBISMXIJPSXLHUBJURWUQUEVAOZROAEQMHTLKMO");

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
    msg.setTimeStamp(0.0383720628269);
    msg.setSource(58122U);
    msg.setSourceEntity(235U);
    msg.setDestination(64014U);
    msg.setDestinationEntity(113U);
    msg.state = 213U;

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
    msg.setTimeStamp(0.514785300292);
    msg.setSource(65140U);
    msg.setSourceEntity(149U);
    msg.setDestination(50891U);
    msg.setDestinationEntity(2U);
    msg.state = 18U;

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
    msg.setTimeStamp(0.630245413869);
    msg.setSource(26977U);
    msg.setSourceEntity(210U);
    msg.setDestination(55713U);
    msg.setDestinationEntity(117U);
    msg.state = 67U;

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
    msg.setTimeStamp(0.782312931196);
    msg.setSource(53800U);
    msg.setSourceEntity(91U);
    msg.setDestination(55400U);
    msg.setDestinationEntity(164U);
    msg.state = 194U;

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
    msg.setTimeStamp(0.756957276229);
    msg.setSource(23359U);
    msg.setSourceEntity(227U);
    msg.setDestination(37700U);
    msg.setDestinationEntity(97U);
    msg.state = 229U;

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
    msg.setTimeStamp(0.126075204838);
    msg.setSource(32106U);
    msg.setSourceEntity(202U);
    msg.setDestination(38497U);
    msg.setDestinationEntity(222U);
    msg.state = 43U;

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
    msg.setTimeStamp(0.0550148046181);
    msg.setSource(49958U);
    msg.setSourceEntity(197U);
    msg.setDestination(71U);
    msg.setDestinationEntity(167U);
    msg.req_id = 11674U;
    msg.destination.assign("ZRMFRVZSGVNSETAADJHGEATKZSGQHOQMYFSHVUDGRRLDMHWDBSWTVGYWYCURUSFBNOUDFNANDQOIPIQQMNPLCZISEWJJINLKOXPXTGOBJVOLFBYXVGPZXLUBCKTLHFKQHMYHCDHUCMBJTIWYSNSQAEHRMVGHUKJUCLDIFICMQZBPETRIYJPKEOXGWFOXFJMODBXL");
    msg.timeout = 0.146002349602;
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.426409869983;
    tmp_msg_0.lon = 0.686375173665;
    tmp_msg_0.z = 0.961601052295;
    tmp_msg_0.z_units = 129U;
    tmp_msg_0.speed = 0.130235770622;
    tmp_msg_0.speed_units = 179U;
    tmp_msg_0.bearing = 0.964315532422;
    tmp_msg_0.cross_angle = 0.84011080087;
    tmp_msg_0.width = 0.835270106795;
    tmp_msg_0.length = 0.803373224999;
    tmp_msg_0.coff = 13U;
    tmp_msg_0.angaperture = 0.984313846046;
    tmp_msg_0.range = 49507U;
    tmp_msg_0.overlap = 129U;
    tmp_msg_0.flags = 140U;
    tmp_msg_0.custom.assign("KEBGFEMVKFIKSCSQUQO");
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
    msg.setTimeStamp(0.613974050015);
    msg.setSource(4576U);
    msg.setSourceEntity(220U);
    msg.setDestination(33466U);
    msg.setDestinationEntity(152U);
    msg.req_id = 39283U;
    msg.destination.assign("QJPFIDKBSTBSBFEXWECGPMZCYWFESFUNIOXKCHJASVJXZCFKVLPHUIBPWGEOTAWMIOQVHKYOWPROZCDLTNGFLSJOUHWKZPAIVKFCRZQFPOZTJQXJMBTKUEXYHPJNQGURADQHNKJCMYVRRIXV");
    msg.timeout = 0.469105316926;
    IMC::GroupMembershipState tmp_msg_0;
    tmp_msg_0.group_name.assign("LYVAEUMGKCGJBITLKZSYRHHZRIVPFXMOKCNIWHSSMHJYZAEVCZVNSDDRZODOILFWAZTSPCPGAJJLXZBKUVYOWPLUHJPDCTSKBFYPNXHIQEDIIQQJCTXHRPDQUGLYUMOFM");
    tmp_msg_0.links = 358051471U;
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
    msg.setTimeStamp(0.724126554198);
    msg.setSource(29644U);
    msg.setSourceEntity(227U);
    msg.setDestination(8462U);
    msg.setDestinationEntity(222U);
    msg.req_id = 43286U;
    msg.destination.assign("WGSFGWUXJFJEY");
    msg.timeout = 0.445830773052;
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.323175609676;
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
    msg.setTimeStamp(0.773286241556);
    msg.setSource(52277U);
    msg.setSourceEntity(82U);
    msg.setDestination(34500U);
    msg.setDestinationEntity(194U);
    msg.req_id = 28988U;
    msg.status = 201U;
    msg.info.assign("CCNEYKCSGJIHFOQQEBVUGXYNJSDLFZHLFVLQVAZXZVUEXOYIJFDGCILYWEOPFLLNAYREKHMBUHAVHFEWMICKTGPJPNRFBMVEDINJWTBDBZUGO");

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
    msg.setTimeStamp(0.650474440437);
    msg.setSource(48688U);
    msg.setSourceEntity(39U);
    msg.setDestination(37686U);
    msg.setDestinationEntity(137U);
    msg.req_id = 64095U;
    msg.status = 22U;
    msg.info.assign("ROSDDMGQPMSJDHPPTUBZNJMJBSAMNVTAVWMIHDYROGCKBTBYEPNHHQHKEZWWOWKXKUYEAJSMETXTUJHFDCYGF");

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
    msg.setTimeStamp(0.708817882677);
    msg.setSource(14507U);
    msg.setSourceEntity(181U);
    msg.setDestination(41821U);
    msg.setDestinationEntity(57U);
    msg.req_id = 45293U;
    msg.status = 75U;
    msg.info.assign("SBQAMIFGIFPEOQQBECYKJZPTJNTVEWBLSPRFZWHFRRQEOQKXUTECGABFNZIGSVOCMCWLSQPONNNMOAWMPNEKVPDYBRDEILDKYJVLTRGSXZHFNOGKGJG");

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
    msg.setTimeStamp(0.10141066533);
    msg.setSource(22286U);
    msg.setSourceEntity(56U);
    msg.setDestination(32014U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.44913444967);
    msg.setSource(52449U);
    msg.setSourceEntity(38U);
    msg.setDestination(57321U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.351816514351);
    msg.setSource(63905U);
    msg.setSourceEntity(243U);
    msg.setDestination(8340U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.029065241464);
    msg.setSource(16525U);
    msg.setSourceEntity(20U);
    msg.setDestination(10562U);
    msg.setDestinationEntity(245U);
    msg.plan_id.assign("OAWMESTFZGIACKQRILRXWKBHAMYKTHWJEFTCROYGNOQSWHVZFBZXARJBOYYUWQGYYMZVMJLNEVWKETRDQAUNLGAGXPKOLCJPX");
    msg.description.assign("BFTPUTVPZJXQSWDNDAQ");
    msg.vnamespace.assign("FSUXLVMTDK");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("FNBTKBJMXHDKUTFAPPOHWLADGPEVXQYYLHGBZVOOVTBZFCMUDBWCPZKWMEFRRKNEKAEZFGSHUYYAGIOZWTCGKVCTUUFRD");
    tmp_msg_0.value.assign("VBMTBBMANTKKQUGDGNBEYRIQYQSDFPDTAPIACSMRBCXXOHEVVCGOMOROTNDTERJFOPYCHNWSZXUAEBDFEMTFTKRSCMAMEOUDYXXRGXTFNOCIVLUGNJSTSQZKIWHFJZPWPYDESTEJKOGPUZUKQLYAVPVJSCSXNJWYINHVQXLSWDWJLRICZULUILZJUBGNWYMWGXKIJUKQZAFOMBLXZJFHPQQRL");
    tmp_msg_0.type = 170U;
    tmp_msg_0.access = 157U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("WKDEUIVKZSNNMFKIKILWDXJGELRKCDTSZHETEZFPSIZXTASDWOQBNZAUDLLPCQKSJRTUTQMBGCALWZTOIONBZPQBAJFHVQPJFZOVUNCULVSYGCVXLPCPMPNXQEVLUULMUYYRWPYXWTAWCFSOXQAGMJNBINSTOCVJFYHJGAGUYEWIFFDXMDHIRYMBZNWEHPQRUVWJOHYXMNMEQHKSBVGCFGJRIHAATROERRDGBVKHEOYSKOCRHDFLXGIJMK");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("PDENHDTVSGWGOKFWEZBAKMSOLYHTHNZFULBVSOWTSZRZYOHIPRQCXVLNCCSPHCXDOKWULXLZEVXJDRJJAMKUMAIUNJBQQAYQZAQJUVCXMAOMGIPMGDIFJOAMPEGRYHBASBCNJXIVKIEQFWJFPHGWFSQCPTUQVUHFDTBMIRLYWXIPZYLDZBYZVBFTIDEXVHGYMRPELLOXEEXADLR");
    tmp_msg_1.dest_man.assign("KGBZZMNPULZQCALADSBEHFSPTUCTQPIVBMVJYJDGISIZXMLYLQJHQLNBBLOKAXUMFSCPKLJVZMKKOTCFFEACTZEGNAHRRNZGUNEXGFICZYBTKGYFHPEEUXVHACZTWGYXOROXYSRVJUKFGUOSARKHIS");
    tmp_msg_1.conditions.assign("ASIQMOOONCYCJKQSOZTHDKMNDLJJDXQWB");
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
    msg.setTimeStamp(0.272115593987);
    msg.setSource(14901U);
    msg.setSourceEntity(150U);
    msg.setDestination(5314U);
    msg.setDestinationEntity(177U);
    msg.plan_id.assign("AYLWJQPXAITAKOHVHWBSOKXPXESCCGFJENBBLDOMXHACYWIOPKWUBRTYOSPNRDJTSZEQHERVHUUIBAQFPWZKZCQGFSYFPNYVZHTUVQDCDFELYTMLCNHCNNGGRNCZGOHWUPVBWXRWQMLPZFIFQTCMIUPGNKBKOSZRZZOW");
    msg.description.assign("BZNGVWSTWLJCGXQFQQJKQMFCWNGSJLTEZAOLFAIHNPYGYDLSFPOISEYIBURDMCMMJFFRGHNPELXGKMCGYYESQDWRZCUUKQCUCBNRBKXDEVVEGVXKZLUKINHLTPVFTBBLRZKNWKPYBVOTFNNZWOAXBOJPYUODPIPHPYHEAAOOVRCSAMIAETSJDQQKTBUJZRXQTFHEIGMHMUSAWVVZXZIHDTXZJILDENCTJIRSODRRDMYLSPJWAQWKGYFAVH");
    msg.vnamespace.assign("ZNOQSDYERFADEZTVHJOBGILNHSITTRUCJBHUJPBBABYYZPWGXPKLRPWTCGQHUCFKPJHIEDFTLICVIJWSUELSUCKONQBFKEXWQEOQQATOFWWYEROCBEQCYFXBNVNIYJFVDNIYUYVZPGEDSGNMUWFIKVBLXFTMKIAOUKJGZZZCTXJMFQXNEISGGTOSLXOWSVMNDSDARMXZADMMLPPAXNURVJHKRJALOQV");
    msg.start_man_id.assign("KEMOAQZCXAUGDAREANPDVQMZGGRZLZRJFYXHFIBEMMRFNVPDSUYCJQVBHQCIDCXRVEPOCCWNOUKHDQPPJFTXNHMISRFAIDOLNLQDZOXJVWNBLCIETHTWKDLXN");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("QOBPMPHOTBCGNDSVIEIVZHSMXFRFCXJAOGGQJCIXNYEXNGIDVKRZDLVRYSRWYAWHBAVEGLUNLADNKMZAFLLABUMBXOZMKEPRSBOLETZQPBUTUJZSEIRSDLKJWQBRFFEYVHKLGMBDRWZUYTXXLITPHXYWUFSNEHWYHVFSRIURQAHQJHPJDXATFIEDSMFCMGDNQCCTOVKAQEV");
    tmp_msg_0.dest_man.assign("FOALBYMMHUAIZJRFYSMRXZPIHCYHOKUXDGTBZLRJULKTFAWOCVNMTCJRVNEZPUZTDLOQHRNSHWLUYMZXBIWUJYTDGMFUHPDITWCJZDIRVSXCPQQPQZFWSLOXEKULXDVFCOXNPOHPKAYXDSJBAGTQJEEMKWVTKGFBMQLOQDIKZFRJOFCNNBIDGSSKDTKWNHXIUJNHGERACPAVIWEKVVQGTBRSBEBG");
    tmp_msg_0.conditions.assign("XQXQQZTHVSPYSLRIKVIYZTCUDYUUMEGQANDGBVCPBETCNJKDMKZCKJNADSNREQJXPUZMOHEIBVXUL");
    msg.transitions.push_back(tmp_msg_0);
    IMC::VehicleState tmp_msg_1;
    tmp_msg_1.op_mode = 217U;
    tmp_msg_1.error_count = 2U;
    tmp_msg_1.error_ents.assign("YJEDNDOFWWJPXMQIUELIJCXKLQEXCZGREGHXTCVKJRHNBPCMENQUFYPAQGHYNEBDSAKWMUFCGTQNVCFZZFIJUSAUIHZKYMUEOJSRLSTEGGLAWDJFSDZKBUYLADCZZXPJEPPBXTPXIVRHANKLWKRVTNBLCOOHRCJVWOAGWTSQGFUYQRIURLGBKZIHOMDJBMSQSSRHVINCMOVHFIQSTOOOWMEKBBAQZVTAXMYGWLVTDVPHFKXARTYUZYLNIPW");
    tmp_msg_1.maneuver_type = 39479U;
    tmp_msg_1.maneuver_stime = 0.33668925092;
    tmp_msg_1.maneuver_eta = 22496U;
    tmp_msg_1.control_loops = 2021894219U;
    tmp_msg_1.flags = 138U;
    tmp_msg_1.last_error.assign("EXQHIFRKPJPNGUSFTMDNEHUAXWHGILOGMWTVBSHRXVCLNLDLBTNNOKZKKZTFSRZAFBXJEBVEWIOMCBWWADOJDZPJFYHRHKRKMAUOUSGJYVVQNKYCUQCNHJLSXEIBQXIGMERRCAWYQCVVKDHPAYSYAMEGMMOTOQQJYWSIILZWGNERDVUHGLJRQCCFBZDUGGSOZNPPOOEHTMQAYZUITTBSFNZBYYCFZWVDFJIMAKPCUXLLVDLPJPTX");
    tmp_msg_1.last_error_time = 0.0723313295886;
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
    msg.setTimeStamp(0.433926369959);
    msg.setSource(51201U);
    msg.setSourceEntity(188U);
    msg.setDestination(10463U);
    msg.setDestinationEntity(120U);
    msg.plan_id.assign("VFRJUTGPDATPZRLVDBJDBEXQIQNNRZPMHRIKZFSUHOGYHMDTLYFZRFXBSIQWLNMUETPKAENFIPJIFGHYEVZPUGTUOWEPNFLUVQOOFWEDLYLJGYVWIQWOCNNSXAJVBJXKMQOKQBRKXBGKVWJOEIPRRDLXCVOOZURYAKOCAGHCNNILESIIJFHHQASYCJZZASMUSXCJZRY");
    msg.description.assign("TWXPQUPECHMUISCCDSZLYYHTMQZFQOHVFWSEFLUSBHTWUVHANKNZYLUAZDMTPKDBBOKUQBUNVFLHIJXLJYRMECCJRHFGWQGQTXLDJNGMZITFPJIVRZZOWCYASBIKEOAWVOSSPURXZDWGKIFEVMYKSVAANRSYNJIVH");
    msg.vnamespace.assign("OYYUEEUOJEWXHXTIUSUZBPCYGJWGKOKMMYADBAPYAYTIVCFARTLFVAMDXKDXFJLEXNEHGCJCRYOZHOFUSXGPJMPFWONEQXHOPZYRBGEIDKEOYTJNDATRKWCDNQMSISMZIOTUALNZVFHGUSQGLOVDDTVCZNXSCZHAMLNHTZMKIAWEKHTWSSWCVLPHCQK");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("CECWGHDJKWOILYGVQLRIMOBUBJJPHAOPCLYILSFTVMYRANOVCSIUQQHMXCRBUYBOZBGVA");
    tmp_msg_0.value.assign("RCTLZBMONVYOESAGQYBYWJIVUZAGMFPIXCIWQVNJRGHBCZIXUSMNPSLRABJAVUFIUJZDPGXREVPKXKZOLXIKZRZYTPKDVZWRMPAZGDUMCDFKFQFAMTRLGDYP");
    tmp_msg_0.type = 185U;
    tmp_msg_0.access = 241U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("OOIIUNCPALPQWIYBRKQYAXTZQUABGDYCTSJSWOGNUGBRCUFIQRPWNYNXAFLHYFSEAZMZRDPNHGOZVKIVPPXQWITC");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("FUIASHRWQJTYKPBJSQRODRMXPJDOXABPVYHMVELJCMWDFQHUTBYULZVTFUVGOAEBSZOTBVNGGDHMIABXKOLYOHYKWIPCLZTKUMMWYSDTHUULNPFIDLYQUQSGJQEIFXMRFJCMYZZGPZZNVRGTXCOQAPPNWMAEHSYAVQRWIHKRRLCWUDIAEOKKIONIDVLNVSJBRNLCHSGJFJOTZFFQ");
    tmp_msg_1.dest_man.assign("OEWIXZEMKJCXNJFEMOTDGFMROZVRFPQWVSSDUBZLVBPGSJPMCOAOVQSJXGQALWGVPZAMYEBLBVICSBJCLUDODTTWXHHNABPBDWZGFRW");
    tmp_msg_1.conditions.assign("NUYEBRVTGXGXFKPZUYXANZYZMCOAWFFSFKBHLWSJQWALQAGYZVDHWCCPFNYTJYGJRWTBSURRFDBTWQGSSPIGIDCWMPOMDPEBUYNXHPIZUHIRTAZQQMNFWEXDQQRGKVVQGDCCEDRPUYUDTJOYTOWLCAEOOXVMAJESBTBSOMVJCIEMIKSNELIHH");
    IMC::HistoricSample tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.sys_id = 27140U;
    tmp_tmp_msg_1_0.priority = 103;
    tmp_tmp_msg_1_0.x = 11659;
    tmp_tmp_msg_1_0.y = 13216;
    tmp_tmp_msg_1_0.z = -28423;
    tmp_tmp_msg_1_0.t = 19427;
    IMC::Teleoperation tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.custom.assign("FFUJMMJJUHVEVEOBCXCYWNWUGEKQFJOIJKAYJXYOPVUPLANGFYBZWVVRPECNIXFVTUQWAGRFJXRFQHLTIKUMYYVMBGZSBEPDADICERBFDRINOIHPIQPHVMMWNPAVCMBYQGSPOUIHZWLKOEZSCLHKWLTXMOFNHULTBTGNGQXHSLBUFDPNQACRWTXDTHJYGZMSAEOKDCTUOIDIWQRAJLQDKPSYSYOZEZVSGCBLR");
    tmp_tmp_msg_1_0.sample.set(tmp_tmp_tmp_msg_1_0_0);
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::GroundVelocity tmp_msg_2;
    tmp_msg_2.validity = 164U;
    tmp_msg_2.x = 0.0872359673333;
    tmp_msg_2.y = 0.504700718593;
    tmp_msg_2.z = 0.747688205467;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.220669365163);
    msg.setSource(40813U);
    msg.setSourceEntity(96U);
    msg.setDestination(28115U);
    msg.setDestinationEntity(166U);
    msg.maneuver_id.assign("RMWRXUOLCRTWK");
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.449021473667;
    tmp_msg_0.lon = 0.369630076025;
    tmp_msg_0.z = 0.0349568415056;
    tmp_msg_0.z_units = 98U;
    tmp_msg_0.speed = 0.0755731265549;
    tmp_msg_0.speed_units = 232U;
    tmp_msg_0.takeoff_pitch = 0.59042643428;
    tmp_msg_0.custom.assign("CYBKLJVNTAIJHKWMHXAFACCOEIILNHTLGRRRHPGSNZCBZCAEIXFEYIJRRESNLLEYKHYZGTOZRAV");
    msg.data.set(tmp_msg_0);
    IMC::SetEntityParameters tmp_msg_1;
    tmp_msg_1.name.assign("WONNVXYOQZSHPLCVUSDNFEDTLMBCTMYPTUXNKPSNRLGGOWATZJHSGIFXPMZJQQMLDYEWRUUKXVMOKQTVGDOJFAMTBKACEDEHNIBIFKXBHSFFKEGZSHPZSVIJAZUGLXJNYPVYBZGBRTTOYKAUCDYRRQWKBLFBFXMWEIQSJVDIXRINADISMQABWMAWZEPXJUCZHQJDOLGQRCUZLCRHKWVDETYLILMGGFXHUNRY");
    IMC::EntityParameter tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.name.assign("OKNFDIOJQHNECRKOTUPBSKELLZGAJHPCXSPSBWTLUDCQCKICDXGOZSKRAJROCDZIBQBIZRMUIIZYDXUHMSSZGYBVWSKVWVHPEVVXGKXILQVPPAWHATMBHTNLELHYKOYFRCACJUWFQHDUSAJUNTXWQBYTCUHQWIFJFFEBIEMNYMNHZJREXZJMKXRFYNEDGRAPTJLWTDVNDKFAGOV");
    tmp_tmp_msg_1_0.value.assign("WZXZDEOHXSNMUBIGUUYZWTHLTFTZIPNUAERXTXZ");
    tmp_msg_1.params.push_back(tmp_tmp_msg_1_0);
    msg.start_actions.push_back(tmp_msg_1);
    IMC::AngularVelocity tmp_msg_2;
    tmp_msg_2.time = 0.856548744603;
    tmp_msg_2.x = 0.352662293526;
    tmp_msg_2.y = 0.112257175162;
    tmp_msg_2.z = 0.356418288062;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.829644483015);
    msg.setSource(20089U);
    msg.setSourceEntity(178U);
    msg.setDestination(65273U);
    msg.setDestinationEntity(72U);
    msg.maneuver_id.assign("RCQCVIEQSJVUJRXVRWGAFXWGSPAWVLMCZWHITEUSKGWIXFJGPAWJDIQBKSDHNBVBILLVCQCNAQODJTMDSPHUQUMHHGMZOLYSXWROGYOSBIEUR");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 52007U;
    tmp_msg_0.lat = 0.312852795809;
    tmp_msg_0.lon = 0.4222958006;
    tmp_msg_0.z = 0.27812714864;
    tmp_msg_0.z_units = 159U;
    tmp_msg_0.speed = 0.499437793882;
    tmp_msg_0.speed_units = 138U;
    tmp_msg_0.roll = 0.980467096183;
    tmp_msg_0.pitch = 0.586556108447;
    tmp_msg_0.yaw = 0.441069823153;
    tmp_msg_0.custom.assign("WUYGMULBUYSTKRPWOEXREARJFVHSIQCMILSZRIMOEKDURDQMRVYNETPZWEAPFJRCCMJPBHLDAHPPJGWLAFQBONHTUOBASEUFAJDG");
    msg.data.set(tmp_msg_0);
    IMC::Dislodge tmp_msg_1;
    tmp_msg_1.timeout = 20377U;
    tmp_msg_1.rpm = 0.523070197332;
    tmp_msg_1.direction = 165U;
    tmp_msg_1.custom.assign("RXCIOOGATCPQNUMGQLRLJIVCEYNLSWFXWMOTWEKNSHOQCFBMNANXUHVHUXTEQPHCBHUAXBJSVDSEIXKW");
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.80818559637);
    msg.setSource(5095U);
    msg.setSourceEntity(49U);
    msg.setDestination(16268U);
    msg.setDestinationEntity(182U);
    msg.maneuver_id.assign("XFBKAVLXDWUPTUHLJNWSNZWKKEODWYWMZRRNVQUYFMCNIKTZEBDVTIRFYDPPJPNNVFUXYIHORGCLWMGCSTHGPUFABMZROASOSVQGXXNSTBGHLEEJKLZCVESQPYNTMODOYTPWSABJNQJPZLEURLJAFGBIWMFKAZEJCPQPECUCWDMXYQHSDIVUTIKTOYKERXFIVTYZKIR");
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("PDQJCNPQBISIYXAJXOLMGJTRPMMLYNTXYEHLRMGOFHUZQSGSMIKOYXUCLFONRBJFCWORWVNOEJEIRKXFMPDKVDKGVBYJVKSPJLWIEWDF");
    tmp_msg_0.max_speed = 0.9456148609;
    tmp_msg_0.speed_units = 248U;
    tmp_msg_0.lat = 0.905833297123;
    tmp_msg_0.lon = 0.255812585502;
    tmp_msg_0.z = 0.910174979952;
    tmp_msg_0.z_units = 234U;
    tmp_msg_0.custom.assign("UXCTLKZEDRDOTSIJSWRYJPUSCVCXTGGXFATIIBOJMIHYM");
    msg.data.set(tmp_msg_0);
    IMC::Collision tmp_msg_1;
    tmp_msg_1.value = 0.79922894148;
    tmp_msg_1.type = 71U;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.431176348493);
    msg.setSource(18571U);
    msg.setSourceEntity(216U);
    msg.setDestination(43483U);
    msg.setDestinationEntity(108U);
    msg.source_man.assign("UWDDHDKOFGUZAYV");
    msg.dest_man.assign("KNFZQJXEHUCKLMWLZUEQSLCJTVQXDGZMPHINQBDWNYFJOSLGLNRJXNDIOIWNEBGLPPCAGPDQFBTTMAWZEIGFBPOYGRGYJLXKQMMHATGUVGJUAATRNSIVIBIFKHHYFFZLCOMBSTXVCZWDJNUHEDPMDZHBOWZEYHAXDAWVCTPTDJKQMLRWOKKEOJFXMRCNIXCVYYUOPVB");
    msg.conditions.assign("MIGMXHZFSLEIWYXQSLYOLVVISAKKCSXSJCNEQEEDBQVGISYRFPPZR");

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
    msg.setTimeStamp(0.646265018895);
    msg.setSource(53286U);
    msg.setSourceEntity(80U);
    msg.setDestination(47493U);
    msg.setDestinationEntity(156U);
    msg.source_man.assign("JVIWOZYAVINHCFKUBNBOIXSSRQWXEDFUEEZTUAQFJEWDOMGSYGHXMRTIKUXJDQCPFGLONQPJSYMLGADTPZRFISUFYLYWOCLHYMBTRYQKJKPBCHEDUFDXRCWMVGONBCEIAGFVQDTAWZXRRHRPUYYUUQVBMMMZMXRLCCTLVKPJZWAVWPWEDALKKAJMLGNZSVHYHDPBXSOANIPKGBEFHTIWDHJUJNSAGBXGSJZZTQIIZVKFOXONKTPSQRVLCNE");
    msg.dest_man.assign("CSESAKBRDBLXYMDUYBZFXELCFZWNC");
    msg.conditions.assign("EZPDSPFTQQSELNCZOKLXQKGDNBTVUACDWGOYWFRCDDHNIZWVGASDYTBYCWUIUCDRYASQEJJFHZJNXGWLOMARFKILWMYEBITXXTZKVVXJYLSBVQYNOZUCFPQTALHEQXBKLNICFFMIIYRGHWXHBUNVNRBLMPZARVCXRSMVAAHAIPWDQEBMNXOBSEQUGLKLMTKZUCXFRTYSPMKWJOMIMHUOEUPOPUJBQJWGKJZHOROJRPVHSDTY");

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
    msg.setTimeStamp(0.641037502536);
    msg.setSource(10502U);
    msg.setSourceEntity(54U);
    msg.setDestination(41702U);
    msg.setDestinationEntity(249U);
    msg.source_man.assign("ZSEZAIUAEPUOBCCTXCYLZIKXUVYMKSHLNMRENVKXDYBNJIUWGFRLFPVCXJSAPOODHBNAQQFWJKDDIVJYEXGOSHPOAXQFVZHYZGLACZDTSPRDNOOBQTKYBGMCECRVYNJVRXWLBZZKZXXKMLKSACBMQGHLYSYSTVFEANWDQWOPUIDVPQMDEMKKFTG");
    msg.dest_man.assign("GWMAKYGIHNFDWMVZYCKJYNBXVPZQRRVDSJKTGJVUOYLAYGDEUNAJPNHXYEVYMCVIHIHSFJQKGKDTCLYAQGUOLISHAULWXFXRUEDAQOWHURTFLWKZSPDEFSBRTEVRLXVXITRAETIUWFGTCCJSNQZMSKZJDUBQHCBJGVRBPVOEFQOPIRYOKPQMWN");
    msg.conditions.assign("WFKVIRXRZSIIKUXPYBLXTYMTZTOHJHPGAXRLHOKAPYFLWEMTFQRUMCVGMKDHCYHZZYCBKUSLFNSJVWTCEKAJSLTUQJOAZCDDOHAKANYNFMLXFDBDVGIKXNGIBWLOSTHJ");
    IMC::AcousticSystems tmp_msg_0;
    tmp_msg_0.list.assign("ZJGULKCPQVKISAHEOFEWNOEQWYQNKTKMNTCSUXTWWANJGBPYJASJCQZODJUYEMFYMERQMLPSLBUVEKFELXLUGRGDHUDPVNYHFEBBTBILZYZVUIPBTCQEXKJERFPTWPJNZZCR");
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
    msg.setTimeStamp(0.0871850160633);
    msg.setSource(30385U);
    msg.setSourceEntity(232U);
    msg.setDestination(56596U);
    msg.setDestinationEntity(14U);
    msg.command = 231U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WWXVTKHPGIBTCTOMGUMY");
    tmp_msg_0.description.assign("KDCOCUEGIWXZVCNOIBPD");
    tmp_msg_0.vnamespace.assign("IIYNDHMMYXVHHTMJKWZSHYRTLWDNYXTJWIPEEDHIAAYFFANOCOSMLYTBTKMLCSSFRWFVZ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NMUWQLCBFVYIDADGNTBPLEXMBUFEKLFPSJMVGWSDSLUITRVOFAGTVZJGIACFLHEUZJRNGVXZPXIXJWYZKGMZJDSRYHIKYDFNTHQOTPECHCBMAXWQRDXDZXRFCJIBIFKGPTSWMSNWOCHCITYEMIQCSWYGBDVUPASOZTOZKEZQAYBDTGXKNDVTUWLBQFSHMMVUHHWPKCRYUFKQRXP");
    tmp_tmp_msg_0_0.value.assign("NDIRUDPDNZJMCNGYLQUVBIXEHBNWESSEEFPSWYKTRBPOJHPOGQTUDMXAESQCEJXOFKWRKBPPLFVTMOYWCQYEDQNWGBWTVRLUEDKSVTIAZFLVYRZDSCHQCMTBCXKPYIZIGZOPLGRVZOICAGRSTQHHZPZHILFKLQKNONEJNCRHTAZAYMMSWOBRLHIRMJCDAXXKMXJLOGVUNFEWQPXKJFDIJUHHOCUAWKJZTBS");
    tmp_tmp_msg_0_0.type = 12U;
    tmp_tmp_msg_0_0.access = 90U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("DSRIZTOOKCGUOIEHOYVYVFFHSRUYKMYVCMQPQEUXTMJQTWGWLAHYPIXBZUZGPWPMQZXODTMUEDUJESGDOMRNNNQAFABXZYSALNEBLZHVQVRKBYA");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("TUANQMYQGMITFBJUIYFRKWAGEKWMCDPCZQDBUJFHWOBFBDQNWTFSLBSUKSNTEOAPSRUINDJMZSXGJTLRNMLMBVLOJIKDPULKQEZZXFEKXWE");
    IMC::AutonomousSection tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.281287078419;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.377339444892;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.590472427807;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 251U;
    tmp_tmp_tmp_msg_0_1_0.limits = 53U;
    tmp_tmp_tmp_msg_0_1_0.max_depth = 0.121782658148;
    tmp_tmp_tmp_msg_0_1_0.min_alt = 0.220555567907;
    tmp_tmp_tmp_msg_0_1_0.time_limit = 0.896132448809;
    IMC::PolygonVertex tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.lat = 0.186116226362;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.lon = 0.400707497331;
    tmp_tmp_tmp_msg_0_1_0.area_limits.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_tmp_msg_0_1_0.controller.assign("FATPRMJQLXESZPVUDWQCAABFFWBWHDQLUNSXDOKZOOVVL");
    tmp_tmp_tmp_msg_0_1_0.custom.assign("XEVTCRGOUZFJFIMJBUGCXUOAZFQNOKWUGDIUMSMRQDQSZDBORWMLDRBOPHRRYOJMWDLJIBTGHAYWMPBZKNVKYMKYVFYGZHYXBNDAMISPCUXVLWNBNNBFPRJFXMREFIDNCTECGEXJ");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::EstimatedStreamVelocity tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.x = 0.772938879267;
    tmp_tmp_tmp_msg_0_1_1.y = 0.777982684408;
    tmp_tmp_tmp_msg_0_1_1.z = 0.313113675164;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("ZCLEDQNUGMQOUKFXQQDNLBOLQOHCMKNVCAUWBATSCGFMWVQOYVUFSCZFCRFNVUGHUXSZRFZIIGEDEGKMQFRHFDWONAXVMJSDIALWPFECQPAKTBEGPTYGKTPMBSAPEKWMEKYQNTTRIJSYLKEJDLSBTSVMLYOUXDCTUNRLPIBGWAZYYYPWJHNZVPVDDRKQPHOXJRGXJAHAHADLFRWZ");
    tmp_tmp_msg_0_2.dest_man.assign("CDXRTXSPWRTTALVQGSBPLOSNID");
    tmp_tmp_msg_0_2.conditions.assign("OQFRAUZDIQIAIBKSWKDPRTOZGVXIVQDFKPJWUFKNYANCJCRFBZVOIJZBWGZXYVVPSBTIDLNUKZQ");
    IMC::Heartbeat tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::UsblModem tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.name.assign("VRXBWWVUBCYMJMGACRXVTDYNTVPCFOUZOLNWEGCBRMDNPJSXIOVGUJQVCYWKRABYQJNKZHCJIWSFUFTTREIWFIVBBRMAHZLFGXKYQPIWDTEYAQDSOHVGBQLANRPAR");
    tmp_tmp_msg_0_3.lat = 0.483921371396;
    tmp_tmp_msg_0_3.lon = 0.194819186911;
    tmp_tmp_msg_0_3.z = 0.212699052399;
    tmp_tmp_msg_0_3.z_units = 163U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
    IMC::CommSystemsQuery tmp_tmp_msg_0_4;
    tmp_tmp_msg_0_4.type = 22U;
    tmp_tmp_msg_0_4.comm_interface = 16674U;
    tmp_tmp_msg_0_4.model = 8259U;
    tmp_tmp_msg_0_4.list.assign("SFVJNFEWXBVDPYYCUTNCMURTUHCUAXBKDXXORHWEHECGSKNNZMZTWOKHFJHROOZIRAGAYBQFSUYGASEELASMICXPAFIFFMJQIVOXAYRQPQZTKJODVDRXSVPNDGIZLCZGHVNULXNIBIBQYLWMEETJYXLHKFWGTZBVNJBUKGQDSOQDKWETLSZFEANPIVONKHDH");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_4);
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
    msg.setTimeStamp(0.293955820483);
    msg.setSource(48061U);
    msg.setSourceEntity(195U);
    msg.setDestination(2095U);
    msg.setDestinationEntity(246U);
    msg.command = 232U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XCFVOTNAQBIPQBOFINQCGVPECOHWPMIAPWWVKHHZIXIHVSAOCNZTGJGUOLMHQDJUJRIBHYYJKCUZLSPHLPHTNDJNULPFSKXQRXZFJOYYSSRBEKIAMMKYFFMDMFROWBWEEDCXLTQRWTXYAFAICSKBRMTGFEMEIBKZYSTNELJMDRZLUYSPCJWUHGVLSXGWQDQQCKGZABRHAJXMDVTAKUWNVNU");
    tmp_msg_0.description.assign("PEZTKZFSROWPZLJVHKCSQQMWDBIYCJPKWGYDUVFFXHIOOAHHWYBJSX");
    tmp_msg_0.vnamespace.assign("SKJZMBWVWKUUHOPMDZWVFGUZITOBSLYHJPLFPTLSTFRAYLXSJIFDVSMBZJFWZHHVYISNUTDDDCRKMAXOPNSUXRZELGUQREFKYRDIUNCNIUGPPUQZSIDYZMAKV");
    tmp_msg_0.start_man_id.assign("ZCQMSXBIXIGCYWIVNEWCKRPKQOTPNNFFBEEUIUHREAOQROJQNQWEZLLIRXSGWSKMMMMAOGOSGOHOQTIBFWVMSTPAYDPKYEZLTYLNAFYBJRKHONEBWHPIPINDFWMYXAZWRDURRLUVJWXYKGBZXITPCFIDHTSLVCXUUEEXCSCMCVKTLTALAOHDJJBGEUK");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("YZVSVFDCPVHHFIRPOZIKUAAUGGTUNLUFGYDDVHFDIENYRCTEYYLBMYMTUIJRVWMKXWZLXILSWSQQOYEDNAZETDLXATYNOSERXZVNNMQMI");
    tmp_tmp_msg_0_0.dest_man.assign("ZRPLIRNUVKTLJFHBMXWPLNZKWHYMUGKFHDOICRHDKOFNRFRTEJYGDPPCEZONZNQGVQMIJMDNQKQVAAXIOEOOZIMGLJCJHFRHLPQEXFAGRTARDBWXKAVXJKHMZPLNFTOQVESSOWXUQUOIRJYCBEHEWYBVGSSDUUWAMXCLDYSJFNHNXXUIOGYBJTNDMIVUBDTMYYYWTWIAFYAQALPGPVGCFSSZWKSVLUBCQTBEEMCLHCPKEAXQ");
    tmp_tmp_msg_0_0.conditions.assign("IGYKQVBHEVDNPFKRLYWAVBLBUWXSYKICOSDOBTFQZVIPEURKHQVMWASOFUTANHKZMGYXZJAADLCRVIKXPRHJVRICAMMQQAZPPXPGFZLGDEYXNNSJIJ");
    IMC::DataSanity tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.sane = 6U;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::UamTxStatus tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.seq = 47570U;
    tmp_tmp_msg_0_1.value = 61U;
    tmp_tmp_msg_0_1.error.assign("LOYHTMFWTLOERADYAJVPVTFBYAUIOEHYIKOGMYIWEDKLGMHFCVNEDJHCLBUTGJXPZJGXPDIZBUPZJZSVNSH");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.0936364485004);
    msg.setSource(19132U);
    msg.setSourceEntity(206U);
    msg.setDestination(49230U);
    msg.setDestinationEntity(93U);
    msg.command = 171U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XMJYUQGJIOMGOMLBUOMLNKZDFWBDALNXNEYTMTCRXQWRZSPVFSXPFQZWXTQAHEGPHOEHVYKVPCBOFBSFUFHHLYDNDWKJDIUVOJJPIISMAQRCTAZNLFUUCTKKTCXWEIENOPNCXERXJXUAVKSQDOLHJBVGNHQAZGSDXGNUVYTSKMBGHPHJJYVCPWSYRBIODFCQ");
    tmp_msg_0.description.assign("INUOELLUTRPQGFQHCVSPDMVAXBDNZMFFGKDAWCZSZIBEYHMQRAGOWMDUKCZPBECPHBMIWJBLJEXIHSOMKSVLFKCDTZMQTSTVARHBIBQ");
    tmp_msg_0.vnamespace.assign("PVPPHUEBZXASNRAZZJRLSCDVSCCWOXQWUZTFANYDOBYDHVLBHFHIHMQRQVPMQUXEJOVSDNVEHJXWUUNVZCTZJFUCNAJFRFWPKSAJYAUZEGPLXETKNOIASTEVPMDWZKFVMIYGMNNZIKBLTFUCFIGCUVGLEASRBHDWOCMITQLKYJQ");
    tmp_msg_0.start_man_id.assign("HFXNYXOKVLNZMTLAUIVIFPNHUPQEPNQWVOZKOIAZDXPIIQHRKRWGOLVWWFMYHILGYNUOD");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("TCZCQLVTICIFXZHRDDJPWEMAJKMGIXVXPDGHQJIGSTAFUKVUWDROMVTNVGEAJFFTOCRZLXZWEJBLGYIGVBIOSKMEXPHYBNCTNEF");
    IMC::Sample tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 60659U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.332057209029;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.0719849567711;
    tmp_tmp_tmp_msg_0_0_0.z = 0.468243322645;
    tmp_tmp_tmp_msg_0_0_0.z_units = 247U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.912712784555;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 84U;
    tmp_tmp_tmp_msg_0_0_0.syringe0 = 155U;
    tmp_tmp_tmp_msg_0_0_0.syringe1 = 20U;
    tmp_tmp_tmp_msg_0_0_0.syringe2 = 59U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("KHFCLQKXJSUQLPBKADEWPVRYAVDGYYQNNZYIXXGNRFTKUDXOKQPHICSCZZTWTPVROKDEFDAVZYBFZOMGPRZQAPYBJTGGXIIJZEJPWDWPKZLMSYTRLCJMGYHWAOQLIOAPITGXWEDWTHXERHROEIMMVZAYRDBSCBIFQEUWAUVCTMFHKXEDIO");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::HistoricSonarData tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.altitude = 0.588536867352;
    tmp_tmp_tmp_msg_0_0_1.width = 0.887159400245;
    tmp_tmp_tmp_msg_0_0_1.length = 0.148213070795;
    tmp_tmp_tmp_msg_0_0_1.bearing = 0.667170398708;
    tmp_tmp_tmp_msg_0_0_1.pxl = 32418;
    tmp_tmp_tmp_msg_0_0_1.encoding = 116U;
    const char tmp_tmp_tmp_tmp_msg_0_0_1_0[] = {45, -98, 121, -31, 51, 43, -54, 84, 46, -94, -97, 83, 30, 19, 40, 83, 59, 100, 72, -119, 107, -3, 123, -54, 99, -120, 96, 47, 94, -32, -85, -85, -8, -118, -45, -70, 13, -9, -107, -35, 26, -40, 74, 87, 70, -121, 77, 30, 10, 12, -62, -40, -57, 11, -77, -50, -124, -98, 51, -35, -71, 102, 17, 65, -26, -95, -117, -5, 71, 80, -63, 59, 68, 87, 42, 126, -117, -80, -57, 105, 48, 104, 42, 8, 25, 51, -77, -109, -14, -119, -67, 76, 89, 50, -45, 42, -24, -124, 89, -81, -65, -101, 66, 46, 107, 21, -94, 6, -21, -99, -110, -101, -45, 112, 72, 1, 87, 72, -89, 86, 72, 105, 19, 66, 32, -120, 105, 32, -30, 109, -40, -79, -63, -43, -94, 31, -90, -72, 22, -118, 36, -26, -62, 101, 44, 5, -89, 118, 65, -3, 12, 67, -101, -82, -102, -87, 11, 86, -18, -57, 22, -93, 9, -8, -1, -78, 61, 65, -71, -26, -83, 13, -127, 95, -55, 126, -33, -94, -49, 44, 67, 75, 64, 105, 53, 85, -83, -107, -77, -118, -20, 34, -41, -77, 58, 109, -28, 107, -101, 97, -62, 46, -106, 79, -112, -17, 57, 53, 4, -111, 119, -36, -94, 20, -6, -21, -22, 48, -72, 1, 22, -69, -104, -73, -85, 94, -77, -14, 0, -49, -70, 24, 104, 120, 6, -44, -11, 13, 119, 121};
    tmp_tmp_tmp_msg_0_0_1.sonar_data.assign(tmp_tmp_tmp_tmp_msg_0_0_1_0, tmp_tmp_tmp_tmp_msg_0_0_1_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_1_0));
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.37062086261);
    msg.setSource(9215U);
    msg.setSourceEntity(128U);
    msg.setDestination(26856U);
    msg.setDestinationEntity(142U);
    msg.state = 61U;
    msg.plan_id.assign("ZFZBQVNSNLMSXTLZDJYZUQMWHRUTIMRPGOEONCPKVFXBTTBJJMXCGSHYXYKZNDRYNHPWEJGPCZOYMRLGBVUYENHNTICDMOGPDHLVGVXJEASCIVAHJFUGRIQECRFKDTXXLDEYVPYQKMFAWOKAGANCCYSIFJKZRCFPHQTSZVACWXEJGLNFFWEMQHY");
    msg.comm_level = 101U;

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
    msg.setTimeStamp(0.742331010515);
    msg.setSource(55601U);
    msg.setSourceEntity(153U);
    msg.setDestination(19120U);
    msg.setDestinationEntity(16U);
    msg.state = 151U;
    msg.plan_id.assign("HLQWRPVNKOSFFHGGNXBLRQJYLSXMSOYEATLOSIIEYPPSZXGJDRECNKTCXBAUHECHAFLGSUPSLOPIZRJTUMWJLIKUDEIIENHORGFUMEWHVVHNMGMCZUURQQMKPNEYH");
    msg.comm_level = 106U;

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
    msg.setTimeStamp(0.579982480768);
    msg.setSource(21996U);
    msg.setSourceEntity(43U);
    msg.setDestination(1888U);
    msg.setDestinationEntity(17U);
    msg.state = 112U;
    msg.plan_id.assign("GHPQJPOWHUEDAWZEPWZKQBQPNLNZXFJLXFPFXRMNKJDAPANBIMAPNZRILEHBFALNXVRCRBEDCEWKLTXKHUILR");
    msg.comm_level = 151U;

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
    msg.setTimeStamp(0.509305149061);
    msg.setSource(3912U);
    msg.setSourceEntity(19U);
    msg.setDestination(63142U);
    msg.setDestinationEntity(34U);
    msg.type = 111U;
    msg.op = 99U;
    msg.request_id = 17601U;
    msg.plan_id.assign("ZYGKTQJMHQVTUYBFPITWWPIAPYEFSHYHOZHUIOXKSWHOPBFYTQNQDPIQOKHYOMDUXUGQJQRIZUWEGLTFVIMHBHAKNREDJCZJLKBBGZVLCHDGSOTLWEQAVGFMAEOPTASNNQVSIW");
    IMC::SetControlSurfaceDeflection tmp_msg_0;
    tmp_msg_0.id = 231U;
    tmp_msg_0.angle = 0.957335843324;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IOELXECIFDA");

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
    msg.setTimeStamp(0.256411464581);
    msg.setSource(38359U);
    msg.setSourceEntity(224U);
    msg.setDestination(61997U);
    msg.setDestinationEntity(198U);
    msg.type = 130U;
    msg.op = 253U;
    msg.request_id = 50169U;
    msg.plan_id.assign("JUTCVOEHGYNSWXRJVMPKVYXNUTMDBBYMJOCTOZMUUVKEXLIWMWTHOGGCBLGXAKESVAPLRWVNURLTQJHFTALJPKAKBFHRDWGJHHFQDUCRKQBZWQ");
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 54746U;
    tmp_msg_0.plan_size = 1627566432U;
    tmp_msg_0.change_time = 0.620699713586;
    tmp_msg_0.change_sid = 16551U;
    tmp_msg_0.change_sname.assign("EHXUXRBNXPEUZIEFYUQQORWMRCNDVLCBATAZKHDRDNIKLCKXMANMSAVFJKFFBIIWKQOTZQJQRBDLVMAMYCCVGZYPFPKMXXHAYSJLOSFZWSTPANXYTMUHMJAUHWANVYAXOGPJLIUHN");
    const char tmp_tmp_msg_0_0[] = {-3, 41, 69, 79, 109, -111, -10, -33, -96, 64, -92, 60, -14, 4, -45, -76, -73, 38, 25, -36, 20, -53, 74, -14, 103, 83, -50, 104, -69, 59, -28, -76, 89, 94, 46, 36, -43, 14, 125, 20, 109, -93, -19, 16, -50, -31, 24, -14, -2, -45, 5, -31, 50, -18, 99, 80, 85, -76, 83, 35, -17, -104, -127, 73, -98, -74, -28, -70, 41, -25, -113, -113, 48, -93, 80, 103, -49, -104, -11, -1, -84, -24, -99, -123, -46, 110, -68, -39, 46, -72, 93, -34, -9, -72, 33, -31, 51, -65, -64, -7, 63, 86, 119, -37, -114, -38, -52, 32, -110, -24, 119, 28, -13, 101, -76, 67, -117, -116, -73, 15, 45, -128, 25, -62, 20, -51, 113, 109, 25, -69, 44, -56, 110, 44, -68, -90, 19, -15, 54, 97, -91, -118, 80, -123, -38, 100, -25, 25, 100, 124, 0, 57, 112, 66, 72, -75, 52, 84, 16, -120, -15, -86, 77, -125, 32, -33, 84, 124, -114, 25, -122, -77};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IBUQEMVKDBNSPCHAPXRJUQXCISZPDNCHETNQHTHFHJEUMMKYGAMMRQBIWBEKICEWPHIWXOLBAL");

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
    msg.setTimeStamp(0.594214111486);
    msg.setSource(59186U);
    msg.setSourceEntity(42U);
    msg.setDestination(3420U);
    msg.setDestinationEntity(131U);
    msg.type = 177U;
    msg.op = 222U;
    msg.request_id = 22969U;
    msg.plan_id.assign("TYUTVDLWMJZPWBUATVKGHRRSMUCIEVHLCQRRNXSJKAGUTFW");
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 29266U;
    tmp_msg_0.control_ent = 123U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 144U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.841926793459;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 149U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.32798279687;
    tmp_tmp_tmp_msg_0_0_1.z_units = 43U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.170908024682;
    tmp_tmp_msg_0_0.lon = 0.106444628596;
    tmp_tmp_msg_0_0.radius = 0.619702338458;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 214U;
    tmp_msg_0.proximity = 36U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DLSLUOXOTABQSUKAFXZEFGVYPDOTRZUWOMNBHDDEWKXURPEQTIWUJBCIPVFEGZDQJYYKNCHGEWSHTASDVITIXGXSEHBASGUJJVODHQPNVTEQBGKLALGJZKWGNMPCLJWRZCOLOQCXQAXLICMZTCBWWYIUIPSTTEBVLDNQYFRBZLSXDOAMMUMRKINIRCNJXWAYPAJMDGLHBHYESKCFA");

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
    msg.setTimeStamp(0.757883137849);
    msg.setSource(61581U);
    msg.setSourceEntity(36U);
    msg.setDestination(8775U);
    msg.setDestinationEntity(98U);
    msg.plan_count = 1976U;
    msg.plan_size = 4066643384U;
    msg.change_time = 0.672582316646;
    msg.change_sid = 3252U;
    msg.change_sname.assign("SHNCNORVYZHDEVTKQTSZKSZCCVWOILMJTUTBFLTHJNVAYCURQAFTNEUHXGYIQBDWFKHIHCFAONEPUPJTUNEGIQMKLMAIALWBDMVWUDIEVYEYWQSVFYGVSYABSGQPSKUCHGTXMZIAFGMRBGRDPYCXHSIWEMX");
    const char tmp_msg_0[] = {-37, -95, -11, 79, -96, -102, -113, 11, -73, -83, -51, -72, -118, -42, 42, 13, -18, -27, 0, -112, 11, -45, -2, -18, -22, 100, 81, -75, -81, -122, -1, 93, 92, 80, -124, 55, -68, 23, -57, -30, 119, 115, -93, 121, -65, 6, 59, 102, -15, 117, 31, -11, -9, -76, -36, 51, -34, -42, 4, -17, 76};
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
    msg.setTimeStamp(0.891989084039);
    msg.setSource(21013U);
    msg.setSourceEntity(183U);
    msg.setDestination(4245U);
    msg.setDestinationEntity(116U);
    msg.plan_count = 38223U;
    msg.plan_size = 3837621514U;
    msg.change_time = 0.0171955777071;
    msg.change_sid = 55503U;
    msg.change_sname.assign("XMAVMBCIEGXRNJZAXOKVODZONWRCUKSPYGZHVJKFDJNVAIXYUHAGBXEAEJCMPWWIGEYVQHGEJTDDIJUBBJLSSPSTIAMSBRZNZQLUKFWO");
    const char tmp_msg_0[] = {121, -72, -102, -29, 103, -105, -107, -99, -57, 20, 16, -75, 107, -35, 76, -126, -42, -50, 69, -71, 97, 8, 3, 59, 111, 122, -65, 14, -73, 100, 119, -71, 64, -79, 102, -80, 62, -51, -60, -121, 46, -88, -56, -39, -97, -98, -43};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ESNLBATOTNERWYFLKHSSXLGKAGYZNMJZMJAXHEUAENFOSNNCMDHWICICUZXMPDHGUFNCQKSQVQAHPDTTRKEUSHRMHIEVIHVFKQBBURZLWVGOYJRAGVVLNPJZPAYJXXFGTIMBECBDVKGYQRNTPQMEUSUNPCOOXSOLJWJWMEAVOIDGR");
    tmp_msg_1.plan_size = 25898U;
    tmp_msg_1.change_time = 0.238031346501;
    tmp_msg_1.change_sid = 20708U;
    tmp_msg_1.change_sname.assign("WHXICEDVBNWJSTAJTZODPFWBENEHDBTYSWVMBOMBKUTHDWOTMPRPLLJATRCPIBEMTPNHFVRMQVUKUESQUUSTJXIIGFZMMSJOJLCDFXRMLBYQQXXWKWFDZNVIRRZYOYZUVRRHXVGEXSIMJAWRUHYPAVIPKBQQGDGLCKJYONXCZGWWTMJBVCYOLARGKYPKNDHGCAGFZCZSAJCOONFAUUEQQFQCKEDNPTVXB");
    const char tmp_tmp_msg_1_0[] = {121, -103, 73, -60, -118, -85, 47, -65, 60, -104, 22, -59, -60, -122, -89, 108, 64, -123, 43, 111, 66, -56, -76, -81, 19, -28, 4, -115, 85, 4, 105, 36, 99, -51, 61, 22, -13, 44, 34, 107, 15, -59, 36, -60, -3, 1, 68, 42, 101, 59, -41, -59, 119, 46, -36, 21, -98, 73, -64, 46, 113, 36, 113, -59, -22, -27, 35, 122, -58, 10, -46, -91, -37, -123, -28, 91, 92, -32, 45, -94, -7, -58, -34, 72, -40, -2, 12, 92, 97, -104, 11, 49, 80, -124, 3, 65, -33, -121, -116, 79, -93, 53, 101, -94, -63, -48, -87};
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
    msg.setTimeStamp(0.630417073371);
    msg.setSource(40834U);
    msg.setSourceEntity(33U);
    msg.setDestination(38344U);
    msg.setDestinationEntity(3U);
    msg.plan_count = 42827U;
    msg.plan_size = 2074897056U;
    msg.change_time = 0.655187533839;
    msg.change_sid = 31046U;
    msg.change_sname.assign("BYQLXEOCDHJQULKJMVYSUOSXPPHCPPCDLVWJLUJZISDZNLNKHU");
    const char tmp_msg_0[] = {86, 97, 84, -15, -31, 48, 67, 16, -93, 50, -52, -117, -55, 74, 34, -36, -55, -57, 105, -113, -75, -47, 90, -8, 61, 95, -26, 110, -64, 86, 8, -33, -127, 41, -60, 93, -36, 11, -118, 67, 5, -41, -27, 67, -37, 20, 30, -121, 76, -97, -69, 36, 102, -39, 23, 73, 107, -116, -3, 11, -37, 114, -81, -44, 92, -22, -66, -48, 42, -64, 17, -102, 26, 124, -66, 92, 85, 81, -115, -26, 57, 65, -39, 14, 24, 117, 82, 54, -102, 55, 35, -105, -8, 66, -101, 15, 7, 2, -93, -78, -26, 22, -35, -107, -35, 17, 10, 110, -118, 101, -40, 116, -49, 41, 56, 126, -86, -48, -53, 109, -65, 8, -119, -10, 55, 26, -88, -6, -36, -13, -62, -59, -112, -92, 53, 10, -30, 111, 26, 94, -125, 51, -127, -15, 87, 75, -47, -113, -90, 91, -68, 43, -110, -53, 114, -31, 75, 18, 86, -125, 30, 14, -99, -24, 29, -108, -89, 0, 102, 114, -127, -91, 124, -108, -67, -65, 17, -90, 64, -93, -98, -91, 70, 67, -62, 22, -117, 64, -75, 118, 114, 17, -79, 20, -56, -102, 74, 10, 11, 60, 103, -80, -126, -102, 45, -127, 124, -48, 108, -49, 86, -113, 40};
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
    msg.setTimeStamp(0.522390503688);
    msg.setSource(42207U);
    msg.setSourceEntity(37U);
    msg.setDestination(63298U);
    msg.setDestinationEntity(189U);
    msg.plan_id.assign("AZNFCUWGZQYLBRKMEUKIZMEXUNPBWOVBRDFHWTRSRNAXWNOTCQLNNYVDSXMIUHVFTSXRFIOFJLAAWJTMXFVNHZVEIDXCPIAKQHKTRCIFGHXOIGABGSDDPDJWCYYZJEBHUJXVYBPEFYLMIQBPGKDLSZMZSSCHLIOWKORDMRLJXCWILZSVM");
    msg.plan_size = 32488U;
    msg.change_time = 0.70871340609;
    msg.change_sid = 61485U;
    msg.change_sname.assign("XHYMUETBHALQXMFCTUCBBJKGAYTMKYIFKQLLGGQRMNLDWOLDMTEEPDVCGGXNNIWFHRZZVJILATUUTBPXAQSAIKFDEFULEHJBPFUAURSIGGOHSFPMHPYNDNCRSBCOZNVREVDTGMUZLTVHNORJBEPLVFWQMHKKWQIJPEGCMJFOAFSBIWPOZWVXTSYCCIWYZNRXGJKQAE");
    const char tmp_msg_0[] = {12, -61, 119, 53, 89, -48, 90, -81, 86, 123, -127, -49, 16, -76, -86, 77, -96, 112, -92, -76, 126, 69, 56, -41, 103, -2, -113, 46, -115, -101, -62, -17, -52, -85, -41, -109, 15, 79, -90, 91, -62, 40, 119, 77, -15, -96, 39, -14, -40, 120, -22, 57, 92, 114, -74, 60, -104, -72, 102, 14, 125, 84, 12, 0, 110, 126, 61, -56, -51, -19, 78, -104, -49, 94, 83, 125, 105, 35, -47, -2, -49, 62, -57, -56, -34, -55, -68, -28, -99, -43, -9, -49, 63, 88, 109, 74, -108, -15, -93};
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
    msg.setTimeStamp(0.946941437438);
    msg.setSource(26624U);
    msg.setSourceEntity(251U);
    msg.setDestination(13094U);
    msg.setDestinationEntity(250U);
    msg.plan_id.assign("HRBCWGULAOULNVRTYELHQPXQJKMDPSMGFUWKHPZQWPOAEKFFGBYCAWTIOROEKDV");
    msg.plan_size = 48694U;
    msg.change_time = 0.599265159633;
    msg.change_sid = 20621U;
    msg.change_sname.assign("KFYHSQMOAXJQQFUDTCJALGTPXXGSTLUHRMEZVVNXBIABPJWQEGPIVZRXUQNJDYSIXOAYYRHCWGVBMUCEWVHDLXWYNWOMTRSARTEJKNNZCFCUDSPKXPFVQSFAOCDRWXZAUMIIUKDBJTBHFPQZN");
    const char tmp_msg_0[] = {63, -81, 106, 42, 38, 67, -8, -95, 116, 73, -106, -97, 13, -104, -118, 18, 41, 123, 71, 74, -39, -36, -67, 89, 111, -118, 72, -40};
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
    msg.setTimeStamp(0.289861409276);
    msg.setSource(32198U);
    msg.setSourceEntity(132U);
    msg.setDestination(26135U);
    msg.setDestinationEntity(105U);
    msg.plan_id.assign("MILRHGGEEPHQTBLWFXVPXAKPSIBXJMOQIOXYLRYFCTXJJNPNKLSFMRPINSQD");
    msg.plan_size = 32270U;
    msg.change_time = 0.197017844315;
    msg.change_sid = 29967U;
    msg.change_sname.assign("SQSBQLMKAAGZUIDKYMISFLKQZHCNLXGDHZCXJXWYADNPVYHECPTWFKQWKKIXHCUVBDYHGTEFTIRHM");
    const char tmp_msg_0[] = {-44, 41, 62, -52, 74, 97, -19, 9, 77, -82, 125, -115, -108, 63, 10, -14, -52, -17, 96, 82, -9, 2, -14, -105, -95, 35, 73, 25, -125, -85, -104, -12, 66, -114, 25, 21, -84, -18, 12, -69, 34, 104, -84, -95};
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
    msg.setTimeStamp(0.0383640294195);
    msg.setSource(59111U);
    msg.setSourceEntity(103U);
    msg.setDestination(24924U);
    msg.setDestinationEntity(217U);
    msg.type = 172U;
    msg.op = 241U;
    msg.request_id = 23729U;
    msg.plan_id.assign("KILSKQAXRYFGFTNHOHBUMWKAILNBIHAUSCUVHRCTLVMRCTATPPGFKBKMQASDOWXACPHSATQDDRWRIEJAGPUBKYZVFRVFECWKMYTEMEMWWBDFURQZRDWQYISEQOYZRWSAXIVCXHHCWOFEXLGSZSSCVXUTGVFDZEJGYGETDDXPHJDMBLDOBVLJYVKUCXLOZNOYJNMRIQQZJLXU");
    msg.flags = 54508U;
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 211U;
    tmp_msg_0.eta = 27509U;
    tmp_msg_0.info.assign("PSELQVWWAAHGTNURCAKLEX");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UWNYWCWUZOTJMHUNHXZSLAVWKLZGXKWSZWVCEERXICZ");

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
    msg.setTimeStamp(0.886831599295);
    msg.setSource(10039U);
    msg.setSourceEntity(65U);
    msg.setDestination(25703U);
    msg.setDestinationEntity(197U);
    msg.type = 115U;
    msg.op = 111U;
    msg.request_id = 12969U;
    msg.plan_id.assign("GBJUWWEWZITPWKLKROTFJX");
    msg.flags = 3884U;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 62706U;
    tmp_msg_0.destination = 65184U;
    tmp_msg_0.timeout = 0.658358767097;
    IMC::GroupMembershipState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.group_name.assign("ECFFDCVBZQRIQUOQCTQDUVNMCWGIIKXNGMZWFKCWHZGYBRBONAMAZYHTNDPRLDRVXHSTTYIUPSBLUDNXDBAUXLJNHTVAYJTPAMZZLEVAVFLFCIUWBBOFJWEWVJHPABYNXSOQEECGKIQECHAYGSNZMVAQRKMVRIFUIRDCDQBMGOLPYSRKIGPBLFSKXWOWLYDJIXNYXQJHHEPMOZJLKXENUROTMOPD");
    tmp_tmp_msg_0_0.links = 1640855593U;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZVCSIUHGWTWXQDWRTDCJNUGWJJVDTELUIZ");

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
    msg.setTimeStamp(0.875304486462);
    msg.setSource(46174U);
    msg.setSourceEntity(190U);
    msg.setDestination(53349U);
    msg.setDestinationEntity(180U);
    msg.type = 49U;
    msg.op = 200U;
    msg.request_id = 33598U;
    msg.plan_id.assign("YNUGLRMRIJDBRKUCIMUECYAKEVNMSBUBAGISHVQTAIVYNZGDKYHLLTHI");
    msg.flags = 35510U;
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 65381U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HXKDPWYRBDUOVJBRFRPCEBLQBWWWTOEJSJLPVLNFBEJFCOVBHAMACZQOYPIPFKVCZIZBUKGGKTTPSDKMHEPIWLOBCUMNWXTDHACVQKNMSDQVEJEAT");

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
    msg.setTimeStamp(0.453202350021);
    msg.setSource(21471U);
    msg.setSourceEntity(248U);
    msg.setDestination(57837U);
    msg.setDestinationEntity(191U);
    msg.state = 176U;
    msg.plan_id.assign("WYOHGSOUVNTCIEMVDABORRUWDQFELMSSDXCIHPTQWQVXMCYYWDNSWCRUXVZVGBELOXNCANHBBMNTMOTVKRFKIIHKEPBMGPXWTYGJWLMXPZFNJYAVHPTDKKOMOUJRKEASEQWQZBHFQLWYSRQAPUTSSFUQDDJPAZKGGGBFRWZC");
    msg.plan_eta = -1222502821;
    msg.plan_progress = 0.392649013799;
    msg.man_id.assign("ADJQLWBXFNGNZEEKYPTERROTUKQWJMH");
    msg.man_type = 61280U;
    msg.man_eta = 756556727;
    msg.last_outcome = 9U;

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
    msg.setTimeStamp(0.444277747991);
    msg.setSource(27257U);
    msg.setSourceEntity(197U);
    msg.setDestination(19768U);
    msg.setDestinationEntity(11U);
    msg.state = 246U;
    msg.plan_id.assign("QQAQESSBQLMHBLCNXQDDALWEVVUZHNFGAYGTZTCGRWAMTFEOISJIMHRKYDIJOETBCOYJFOHGLSPLZCSNXEGPXTQKMSTJWSROUECFDGUIPLUFBFYOBXNFGRLHVOVGHMPYTTZQGJMRVBWXQHJQAMDENPLE");
    msg.plan_eta = -345143143;
    msg.plan_progress = 0.63839350351;
    msg.man_id.assign("JBLZSZPUSECJWYKYJHRSOKMXMWZCWLXFPCVGVSUZSKRTYNNTKCDKPIRXJSOMXXWBKAOGVAJGNQVJMSOYHPLIBHNMUIQRYGLKGFBDLATTVSZYNLDUYECLQPANSNMGQMUPXKGQZNHDVIONEAJTA");
    msg.man_type = 3542U;
    msg.man_eta = 610518233;
    msg.last_outcome = 245U;

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
    msg.setTimeStamp(0.412964246194);
    msg.setSource(7672U);
    msg.setSourceEntity(2U);
    msg.setDestination(54908U);
    msg.setDestinationEntity(157U);
    msg.state = 250U;
    msg.plan_id.assign("RSRMFJJGAABHHMYVNSLDNQUOTSFHQMVVXEKZNKFYSLVRPGMLACZZHCEDATYYPULZPFAVVYXSOXPKQEXEQ");
    msg.plan_eta = -929321895;
    msg.plan_progress = 0.959809054186;
    msg.man_id.assign("NDFZTOJLWXTXSOONEOBACSMPXGKDBIMHMLHVZVWFNITQNBUZASYRZSQYSGPWBXWJKVZMKSKKPUPJBERQREPKPAFHZTVNBATZOMBDRQCDXGQCDLSIDRFLIYBECDELMJFWPWGWULMTUHVRGBXJCWVDKPGGUHTZCIYOFTZKIIAUFCGOHKFNLQMDFONRAPEIUAGTJYIJJZIGQCRNULSVTX");
    msg.man_type = 13396U;
    msg.man_eta = 1224890106;
    msg.last_outcome = 186U;

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
    msg.setTimeStamp(0.86425503772);
    msg.setSource(63681U);
    msg.setSourceEntity(186U);
    msg.setDestination(12786U);
    msg.setDestinationEntity(145U);
    msg.name.assign("PCLAPNSKUFRWMZJQIHKCQWSFNCHPUEJPCOVPJWBBRPQRZ");
    msg.value.assign("MOQAPOWGSNPZOWNKRMTRDVGQMZUQNDOCGCWLT");
    msg.type = 89U;
    msg.access = 49U;

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
    msg.setTimeStamp(0.542116613766);
    msg.setSource(935U);
    msg.setSourceEntity(158U);
    msg.setDestination(43323U);
    msg.setDestinationEntity(139U);
    msg.name.assign("KFVFXMDEUIATVAAHWFAEFIUQNUJZEDDSOHYPPFQXZLEVPOLRNPRDZCTNYPNJIVWUHBDKEKUVPMXXQAGKFGPKINOWPZHGGQGPRDUCOYMKGTGMISCDRMSWFZJSZOXKRJQHVHMAXUNZAGIYVEHBLMGKEEZYFICTXMLFRMOLYCZIQNHSHTQAFBLORGCAISBLMSBRNYRTBUBBDBYJUCWTTCHCLTJPJXNEXTAJWQSOVYLWI");
    msg.value.assign("ZUYPTDPWVNXDTAKVKMRBOOFZADLYOISPESUVJBBLTFEXRBECYBQWTUVNSYEHTMPOLRQFMQTNZKOJGSHBKDHLHURGEZQWLYJIBHHDMSXOLTVMZDKKANKFYHULUXIQVVBZCGJRPCIRSKEJCYUJFGEEWXOANECSVNADYWGUKROIIUFC");
    msg.type = 183U;
    msg.access = 0U;

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
    msg.setTimeStamp(0.758488988894);
    msg.setSource(41985U);
    msg.setSourceEntity(166U);
    msg.setDestination(7343U);
    msg.setDestinationEntity(228U);
    msg.name.assign("PXEHNYHGZHVMIOYKUBPAQXZFTQAKDYGMLPJSLSWNAVARXEMLWBYJULAAWQDTEEJOUTIFAHHBQJORXIEHOCFZNGIRTXAOGWTNYZYDWMSOQCDZUXQPKIDVQENOKSUUKZRDJDRSXGMMXHVJYIIGBOWTFCGFQFVWNIZBRHCDFMVLSPHNQNPTBYYJEXVLSOC");
    msg.value.assign("KUQKZVRMMCIDKMSAZYXMPNORJSQZHDTHTJUABYTVYBFRTGZBQMMEWGXARECRUWGFTCQJTBFUXSGOCQIBPCFSISEZNGQLUZHWSOPREUKJATTGHORXVSNYALBTJHVNOVIHONHEJNBKYYALKVNSHLEWEZVMDICDWMSJFCOWYM");
    msg.type = 67U;
    msg.access = 11U;

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
    msg.setTimeStamp(0.168085286703);
    msg.setSource(54849U);
    msg.setSourceEntity(20U);
    msg.setDestination(6842U);
    msg.setDestinationEntity(111U);
    msg.cmd = 141U;
    msg.op = 158U;
    msg.plan_id.assign("EMIDBNZGUJBJZWCLPTMGONMHKIJGYQFEJUSPKBARCGDOYEDXGCSUTWFGEJWQVWJOZPCZLVUAYDVLJHMBRIRWGZOBQAFDBZMCQLZ");
    msg.params.assign("UUUNPPUYYDWTHWPQGLVOQVYXDMOHPPWQRFGZIXWCXUEJBWJWTSGQJVHJSRKSAPHFOZLINBJTYFHSFICIYDVONWWUSCEXJDXMLLONRZUII");

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
    msg.setTimeStamp(0.165202852257);
    msg.setSource(32407U);
    msg.setSourceEntity(181U);
    msg.setDestination(6833U);
    msg.setDestinationEntity(122U);
    msg.cmd = 60U;
    msg.op = 52U;
    msg.plan_id.assign("ZCWXYDPSBPECHPAHHMXLNDHJVPWCZRPXEZMFVTUERWBMXVZBLDVIYRAGOQUPCKTNEFOBCTIAOJVHFGXAEJNIQJVWFBRKTLNVBCZUTCWDNMWRRHLTMJYBYORRWOKAPINWVFNDGPQLOYSEETLLZSEWIYZJJSADSXGTDYIPFGNMXIYLFDYBKSSMLPQGZJASQIHVCUIKLKOOFJTUUDACQUBTAAXFYXGVGMGMCRK");
    msg.params.assign("ZASOFIUMTOEEHKJVNIWLVSRDCOMFNURHXDPCAMXSZNWPYRHDOSONCBKTXVACKISGLTCDHJLAMUGQVXTVTXEOGANRKXLBFHGGRHKPQYIPLWSXJVAEPUARGPVSEPKWVRZBIIRQDSQVEG");

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
    msg.setTimeStamp(0.29920034621);
    msg.setSource(33394U);
    msg.setSourceEntity(153U);
    msg.setDestination(22465U);
    msg.setDestinationEntity(49U);
    msg.cmd = 93U;
    msg.op = 20U;
    msg.plan_id.assign("MCSDPXRAAXQTOCUPLFLWACSTHPBEGDVCANQQFYTLCWRRSLNKXHYOPZGXJXJOMRNGJDXPSULNFLDIZOJMVNJHLIVUBPKEVAQEBJHKEUQYRZJAWBRJGIZACTHNFPRDZMZZSHWUTFNEDFCTSXEW");
    msg.params.assign("KQPKEPUKXTAOAZIGFDYXZLNSPOMPBXZKTLKUVMONOALAJRDFDEWSNWUGIKUSCDXRHWGGREFATSISYWMLGKFYVRYRPRHOLGRAFLFXMMXEFDRQKQNHCVBBZADCYVTCLRYMDTJJUGNJJRNFZCIPOHZQFOHEIWMHLAXIJBWJXSBZVGXOGDPLPSWITVQHVCZQOEUY");

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
    msg.setTimeStamp(0.0267326654494);
    msg.setSource(12648U);
    msg.setSourceEntity(78U);
    msg.setDestination(11816U);
    msg.setDestinationEntity(104U);
    msg.group_name.assign("KGETIRKMDHHYCQLXOQCNSOZMSQRLGKGCPAYYJRWKKZBGIJGBVXCNSWJ");
    msg.op = 103U;
    msg.lat = 0.933154414068;
    msg.lon = 0.0268353453413;
    msg.height = 0.914804315166;
    msg.x = 0.826871458117;
    msg.y = 0.911275884604;
    msg.z = 0.387137220241;
    msg.phi = 0.337413164638;
    msg.theta = 0.62789575776;
    msg.psi = 0.877171926957;
    msg.vx = 0.559505447115;
    msg.vy = 0.989955059655;
    msg.vz = 0.600588543806;
    msg.p = 0.863196275573;
    msg.q = 0.112639064608;
    msg.r = 0.742196543773;
    msg.svx = 0.539849133549;
    msg.svy = 0.888829461956;
    msg.svz = 0.0948945997543;

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
    msg.setTimeStamp(0.534525257024);
    msg.setSource(29375U);
    msg.setSourceEntity(11U);
    msg.setDestination(36737U);
    msg.setDestinationEntity(38U);
    msg.group_name.assign("JERHIOFQUVTBNWDZPKCASLZPGVOMMCQDPGJOQSMAXAROPDSLANEYXDCJEFFNEPJIBKYQNVSLBABMZIDUMDWSDOHWUKKIDSWJYMFRYFCCNNZKHYLCAMOPLYQBBTWFTWLVRNSXNWKHIPSXXYGT");
    msg.op = 114U;
    msg.lat = 0.708210303247;
    msg.lon = 0.614714233622;
    msg.height = 0.542521625466;
    msg.x = 0.629978324808;
    msg.y = 0.0261961183421;
    msg.z = 0.621321870641;
    msg.phi = 0.780499430189;
    msg.theta = 0.159753732641;
    msg.psi = 0.465340794825;
    msg.vx = 0.982226238561;
    msg.vy = 0.230297256937;
    msg.vz = 0.494148403846;
    msg.p = 0.251852294346;
    msg.q = 0.532029958748;
    msg.r = 0.323782511995;
    msg.svx = 0.1272510578;
    msg.svy = 0.795292430306;
    msg.svz = 0.36895348633;

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
    msg.setTimeStamp(0.702151503044);
    msg.setSource(33818U);
    msg.setSourceEntity(195U);
    msg.setDestination(36565U);
    msg.setDestinationEntity(64U);
    msg.group_name.assign("BQRSNXFEDGRXQEDMCMTHEZHZLLWGKLVUNSPLFHAJJOHUTCXWRGOCUTQYBVMDJESYWVAIQPIBPUTAITHQKFPLJJXCWKEORGHNUEWZRKJRYGOLAOAOUGSMKAVYNYJBQMZHVSAMVNYCSPBCVDFHZGCKRQFTCNLALBEJIZXVIXWZEPXDPBVLKXHRPIILWNJWDAUOKPXKKWSTDABWZRHQSUVFDZCRMFQTIMNEMFBSYOQJTUGDPGNY");
    msg.op = 134U;
    msg.lat = 0.645827834582;
    msg.lon = 0.0300522732403;
    msg.height = 0.359147927323;
    msg.x = 0.475797294906;
    msg.y = 0.0578799893181;
    msg.z = 0.0381956037477;
    msg.phi = 0.980380045593;
    msg.theta = 0.0255010056464;
    msg.psi = 0.215199638181;
    msg.vx = 0.747355772832;
    msg.vy = 0.216685240742;
    msg.vz = 0.805300113267;
    msg.p = 0.892846399658;
    msg.q = 0.866833424212;
    msg.r = 0.123745313711;
    msg.svx = 0.872147595195;
    msg.svy = 0.34378002081;
    msg.svz = 0.271679972602;

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
    msg.setTimeStamp(0.428615454072);
    msg.setSource(19042U);
    msg.setSourceEntity(121U);
    msg.setDestination(7125U);
    msg.setDestinationEntity(160U);
    msg.plan_id.assign("WIWSJWNYDGVITJGVCVBTPYFADCUXHXLQYRWDCSOTBYBSEWKUAOCHPQFJSGXYHQBMRKLTDIZDOKPBGZTIUQFPNCENOAXDTNEEKEGXSBSKPCYGZXRCQPYWQBPHUDAVRIPFLBLPYIOJMZGJIBFEACDZNFHXIIRPGNUODRLRQMQTEWYSWN");
    msg.type = 140U;
    msg.properties = 135U;
    msg.durations.assign("ALTBRSRRGXZLBYRRZKVLSQZNUNSYIVCAOKGAKWTFODBLJSMQNCZAGVEPAUXWQDGHYTTTCBHDXIQUCFFNYMOODBJRVEFGAODXACESMLYBFEAYZBZGEJDVQNKPVWOHSHQFEMNTZWCNWMJGLWJBDXOFX");
    msg.distances.assign("JEUPJGHRUSM");
    msg.actions.assign("DIVBYXOUEHQPSXFYSNALKXAVEVOGWJRURDCWQIZD");
    msg.fuel.assign("FMERGOFHKKUYTQQXSLLXZQNYYJHVNNZUMEFKYXIWQIZNDGTSXJGLSNENMTPWG");

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
    msg.setTimeStamp(0.151137008036);
    msg.setSource(53477U);
    msg.setSourceEntity(53U);
    msg.setDestination(22760U);
    msg.setDestinationEntity(108U);
    msg.plan_id.assign("OYVNILJUFNGPSMDAANYJXMIOJBTSHHCNCCIXWWWHVSXHLXZBGZNRUYYBBPPHVUYWJSGALTQHASRSUKBZMVPFTRZMZDLQJAJYVOFBPITBHCMXRDUZQVCESGKQKNSXUEBPFRDXNLPCQZTDKEKKDRDMEWMGOEVYKDTJOCIXDICYRANVWJVVLOSQ");
    msg.type = 47U;
    msg.properties = 148U;
    msg.durations.assign("ESKCDUQQUBLJSAEQQDXHFH");
    msg.distances.assign("RFWBKBKGGJIPYJTDAPWKSRCZYTSZWUCMXHJERNOFOVTIFXUZHZNIURQVDYYHTPBJQEPAWQWTOWKUIEODNQKCJDJKOKFSOCGNLSKACFVYMDQCLOGCBQTRCYUJFURZMSZPMNULHHSANASJRXLTQLUQGXXXMZXEYWCBBFPIGVVWVQLNHAOJYDXPWHIFZNMX");
    msg.actions.assign("QVVCSPRRCNSCGHSIPKHFJXLVCGUDRGTFMARZVMNACVWGATAXDQKYLZNRKPSMAPBWFXBCNXVMEAWQMODAXHWPFDIDMYPEIJUYYIKICKOHCHXYUCELTUBQJNEFZRLLQBVHZTOWOEQSBLKJTXJWXXVAITDBLEISKRQPMOEOVHQKJIHSBNUVHOUGONDNA");
    msg.fuel.assign("LNZMWFPJJFESXLSRRRJXAGINHLRDKGUFCJICATVDCDNFPLQAARBMNMEZCOVGQFFXWUGXXGLJSOCKTMVNRIXLZOHTKKSQFYCPGOBQMBWFUDHUGEEGPYKYXJYTFRPPVFWVZHHGWTZNTMAISBNAIYHZMPJQSCHPKCURSHRBXZQOBGMDDKAEDOSVCQNXYZDKNAZECEQOXEHNKUYAEIIDRYSLDKYPJWBLOSIPIATOWWTVTIYEVQJULOZT");

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
    msg.setTimeStamp(0.322769862207);
    msg.setSource(19030U);
    msg.setSourceEntity(23U);
    msg.setDestination(18245U);
    msg.setDestinationEntity(55U);
    msg.plan_id.assign("VVBECZIYVWSJWUMZCCRXJIIQSOHVOZRNQJHEYXXXEFHKCKERFXQQXBWSZGXJOUDWWHOAOWLFKLYKLQLRGPOSSEMNPKIFQBQZAOJUXTJAVOMXZIFBRCAPAZYANRWLUM");
    msg.type = 29U;
    msg.properties = 70U;
    msg.durations.assign("KBINEDJGERQAAMXXXBO");
    msg.distances.assign("HXWOSFGDVNIGWAHUQPIKYNUFNGRNKUZMXEELMUSVWXAREAXTIBSHGFQPILPYAJITRLSYUYJPMGLBXAWLTZRQVEDNKRHLRFCPEHOZRIDNJCGY");
    msg.actions.assign("VQZYBNQIDZTDSEHIXDYVECVNDJXNPUGHEKHHLEOQPNTZMCSXTXPHZXVSBJLDQPIINSWXSBMIBMBKFFFVOVLYOJHRRWHWJAKHTCJJUMZTFTTTRWWKNAWYUZWKYIWKLHTJQBASKUYILOCUXCRYFSUXBUBMPBAGYXLUUKNOGPJKSNSEGRGPJZECLLEEGQWMJMHCGO");
    msg.fuel.assign("GPKGRINMOCMJGALSJZFFHOXIPLPXGQHCMJRIRSUQVPAGNNLWIHWCLKZLWOGHDTIHIYDQFWAQFOSWUZPTUWMKTMBXXJ");

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
    msg.setTimeStamp(0.913980637652);
    msg.setSource(31151U);
    msg.setSourceEntity(176U);
    msg.setDestination(4470U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.866451672986;
    msg.lon = 0.767793467851;
    msg.depth = 0.0585536730472;
    msg.roll = 0.733872778247;
    msg.pitch = 0.267391970736;
    msg.yaw = 0.358850099812;
    msg.rcp_time = 0.112722363172;
    msg.sid.assign("BOMMVZVJWVBIEZDXUFQJSHRWXNOZHUVTQADHEABXLYJCIDWBUGDVEYUFXZCSVQFTTZCYAYUQUPPGCQXJJGINVGXEC");
    msg.s_type = 92U;

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
    msg.setTimeStamp(0.155841612315);
    msg.setSource(29836U);
    msg.setSourceEntity(27U);
    msg.setDestination(24799U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.202823160841;
    msg.lon = 0.235722630164;
    msg.depth = 0.653539801179;
    msg.roll = 0.883246268684;
    msg.pitch = 0.242475636431;
    msg.yaw = 0.662230275522;
    msg.rcp_time = 0.219749945376;
    msg.sid.assign("QFIEKHWAYBOAONGNXBDNBFSVXYVSCKTLNEDPMPZGJRCIQSKZIMQTKGCUHCTWUKEQBRLOJDEKLMUHPQHZDHIRGXCKLIYUVZJOYWSGUYBRMAXTLCIIAWVPPAZQCUJXJVBESAFVKGVGMHNTOFRODQIXQADQLYMGNXEOPMGVFTB");
    msg.s_type = 14U;

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
    msg.setTimeStamp(0.775596303993);
    msg.setSource(1305U);
    msg.setSourceEntity(91U);
    msg.setDestination(5683U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.807198603784;
    msg.lon = 0.116843702753;
    msg.depth = 0.935129739274;
    msg.roll = 0.19493786114;
    msg.pitch = 0.754501682333;
    msg.yaw = 0.220882505145;
    msg.rcp_time = 0.761090009355;
    msg.sid.assign("EUBLEWGZOJQDSGFBNYANMWTWAIRTPGULAXOTFKUINJVILGFGDKVTCJRASRLJYTUDBLTPSSMHEOYKSKNGYARBCFFEXPVSBKLUHDJXLPOZHSCANTEHCBDRIIMXVMZNKFCMDVXQLBIQVFCQUQBMHHRMEIYDNOUQYEZCFXYWWQKKJQULUAOYSZYGOEZZPRBRSQCAXNHXEWPVJCKIG");
    msg.s_type = 12U;

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
    msg.setTimeStamp(0.0498346877328);
    msg.setSource(19239U);
    msg.setSourceEntity(198U);
    msg.setDestination(47589U);
    msg.setDestinationEntity(123U);
    msg.id.assign("TUGZPPZMBXOWLFJQLOMGVKPLYJBUINQHCISECXPOZDQTTLXRYNCL");
    msg.sensor_class.assign("EVXZNGVVUYJWQHKFFAXDMGHYDFQAIDTUFNTLMGBKOPCECXEPXLRZCCSDSDLDCZVARYUJOIUPNGKQRTFOMHTEEEUESPSGZPYLKPJWKLZIAMTHOSQWRCQPNNPXIDUEYKDQGHFWUKJLSYZMHIFLNIIRHZUATTCMQCBJEPWXRNJXYMMVPQVWXZTYLOBJJBTSNMDBCVXGOCIOQLANVALEDBIVVAKFJSTHORYOKHBSWJUK");
    msg.lat = 0.0977863531616;
    msg.lon = 0.114919002007;
    msg.alt = 0.280273265962;
    msg.heading = 0.847792534748;
    msg.data.assign("CDSODHQYTYJJYHPATLKFPAZERLUCQPTOMLHGR");

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
    msg.setTimeStamp(0.132847747702);
    msg.setSource(4798U);
    msg.setSourceEntity(215U);
    msg.setDestination(19663U);
    msg.setDestinationEntity(148U);
    msg.id.assign("CDZLMXTKPAXCRHUDWHUHHDKUYBPANSNYINLJIYOURVQCJDTBPBYFWMLHNQCKNQCQHNEIRGFMDWTGJUSNGXFYTMONBCBWEZSJOCPSEHZGAWKLYRDLAIREEFZFAGWEDTMSZXUJVKUFZRSXVADFMKKBBYLZPRGZDFPKLMSRIJILCEQUULVFHPMJXABAOYSOSYOPCPQLPYGRMJVBTTMOAVWGOCQJTVKXXFEZIOXVT");
    msg.sensor_class.assign("ECDBOQOKLRLQMXWZEJOHRYXMYCERQXSSZDWNSSUDUELVLYRJGXIUOVXACHKKQLYNLIVAQUPBCNHKZLOEDSFRCPGDWNAUZLRTWEIAYUZMHPZJNFQZJFNJMUHBXXGPVXVBCCTYACWFVRVGGBJYTMDMYOK");
    msg.lat = 0.46099678187;
    msg.lon = 0.879618859694;
    msg.alt = 0.0212667732877;
    msg.heading = 0.336304496127;
    msg.data.assign("OJOYRVZMPNKTPBSZGWLGSXFVPLJCGABFR");

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
    msg.setTimeStamp(0.323924887761);
    msg.setSource(4164U);
    msg.setSourceEntity(42U);
    msg.setDestination(23991U);
    msg.setDestinationEntity(20U);
    msg.id.assign("JNKCDSGIWARUZMHCFJEOGBFWKVWYWJUPHKFDCRHKBPAREWDYLTZNSEWTTVOTZXTXGSGBOQUDNQPZVPYXAQMXVRKMNGITKDZFDDGMBAYQGYVSITQAPNIBAYUJMOBYSEVTZAVKCHLMSLKDHHKLOHOWCQTEUOZWPRRMZVAPNJ");
    msg.sensor_class.assign("UXSZOTVKHMBBAJUSBTLQTZLBYXYJDQAWWJIUMPWHBECNQFCMRWSERCCHPXHEAPEBDPLBNSZNUYAYVRIABIRVITQNVS");
    msg.lat = 0.241606264439;
    msg.lon = 0.142223174221;
    msg.alt = 0.1373349714;
    msg.heading = 0.82359238823;
    msg.data.assign("IDQZVEOTSCJHJELYVAHZAQHTYYEQYKBPKSBXPCLOKGOMTPRHVLHANGVMSNDDIPUFPBWVZQLZRWQHESYKMATCHCPWRVDGTHJQWUIYGVAFAXDPZAMCRNBHGPJXRIUFVUFT");

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
    msg.setTimeStamp(0.281791261175);
    msg.setSource(47134U);
    msg.setSourceEntity(90U);
    msg.setDestination(7299U);
    msg.setDestinationEntity(78U);
    msg.id.assign("CZTQRHDMKFQSDZLMGNOBUQULFMMTWRHVCCIOXFPCKMSKWQDZOHAARNAKXNJENQHPUKIHKJ");

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
    msg.setTimeStamp(0.91730445631);
    msg.setSource(11056U);
    msg.setSourceEntity(144U);
    msg.setDestination(12438U);
    msg.setDestinationEntity(185U);
    msg.id.assign("JEPPNEODUWXWJNSIKYMFQEMPKBAATUCGYWBEUCOGQYGNCBICZDXBSQDDOJUMOHFWOULUKIDZZHOHRPKGUVLIBOZFYWWCVSTTMHRJMQIHBKFGKJHVZGMXKLYEAVPNDYCIWAQOSXAZUVXRYJXPLNQIALQDVGUGELJORERXINNJTAWZIWVTDKBSNKYMRXRMLFTSCFFISDFQTHOXJNELCAWMTPCSPFYHQNPVYKTPJSSBDHRBZZLEVEXMG");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("WBFROVNUQCWEITANSDVEORYPLXRYLRYEMEKFZWAASGBSSEGOBURNZCKBXOVETJUKMVBUNLTHZWEZTDIYGJNIAQHETYOFLQFPYLLJRMVPIQHMFNXWGOJGMDLADIUHUDUODGENOTIDKYCZWCJISKPGKAOZMHAVTCMRFHQLQXNJOPPKCVVTSTNKFWPZCLDBMRIGSEUIRHABQZQHHKHYUXWAWRCZNYUZYDAG");
    tmp_msg_0.feature_type = 118U;
    tmp_msg_0.rgb_red = 84U;
    tmp_msg_0.rgb_green = 162U;
    tmp_msg_0.rgb_blue = 128U;
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
    msg.setTimeStamp(0.689726134473);
    msg.setSource(39318U);
    msg.setSourceEntity(18U);
    msg.setDestination(60035U);
    msg.setDestinationEntity(128U);
    msg.id.assign("XGJCZRITZZLFMYKEDSTMRVPHMUBZVMBBVPNDCGXTDDNEWBJUKRKDOVKABPUNDJGMQFXLYOQYEAFWJJGEZHYUVNFVOGRBFCYZSSTVPERAUMCBQQWRLHIBCZSXWFLNOAMKSFANXGIPTTHGSXEAWRPCUTSYQFUYIUTIOZDYCRBXQWUWOYGICGHVQQEEUQSKKAHJJQTSXFKHL");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("XQPYADYATLUEBJFKFGKOPHMQQYQNVODVITSTYXKDLUFHKGMIHSIWWXDDJCRNEXHJJPEQICHHEHIXQPYUBBVJAEMFKAFUUDCVSGUGQWNVBLMGAPEBPHFVGEXMXOANAUSQEOCBRFPYQMRECACDRWTVVRLTMTGBORZLTBGWZ");
    tmp_msg_0.feature_type = 64U;
    tmp_msg_0.rgb_red = 8U;
    tmp_msg_0.rgb_green = 180U;
    tmp_msg_0.rgb_blue = 101U;
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
    msg.setTimeStamp(0.704863315219);
    msg.setSource(58947U);
    msg.setSourceEntity(79U);
    msg.setDestination(49464U);
    msg.setDestinationEntity(39U);
    msg.id.assign("QADAHBZTMBSSEBDXABFAEZBMRJBVZXRCLKAYVVDTLUUAZQXMYYOLOHJUHPWSWCCUEIGTKKRHLQFGOMRMKEVSVANOYCQHPVIWLPPNJZKSLQKWFEDLTICYRKGOUIGEJTFXAJWPEGHICWCWHPJHTIBCMNAFJTNJFVLSLQYXZOXKYHQBNCGZXIQVNEZFRUDXONURVTJHPKFN");
    msg.feature_type = 150U;
    msg.rgb_red = 153U;
    msg.rgb_green = 30U;
    msg.rgb_blue = 163U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.467918623083;
    tmp_msg_0.lon = 0.0699769918226;
    tmp_msg_0.alt = 0.524312429458;
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
    msg.setTimeStamp(0.375695872983);
    msg.setSource(30127U);
    msg.setSourceEntity(16U);
    msg.setDestination(18978U);
    msg.setDestinationEntity(214U);
    msg.id.assign("NWBGCXFCFFKZPEGEPHRZBKXJAJPPSBAMDHTAGXOASIMIRKTR");
    msg.feature_type = 14U;
    msg.rgb_red = 110U;
    msg.rgb_green = 145U;
    msg.rgb_blue = 187U;

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
    msg.setTimeStamp(0.470353386976);
    msg.setSource(9247U);
    msg.setSourceEntity(28U);
    msg.setDestination(32600U);
    msg.setDestinationEntity(174U);
    msg.id.assign("APRJYVQJDZGFTHCGAKEVRSBNCYHRNUDJSQXPNEALXLHFUIJJGJZPANSHPVXPNGWSDLRKWARIQKDMKBZJHGIHWUQVJOEYDBUXTKBKEEMVCFQUSPGUDWMCTFZPYNVZDHQOLINATWKJSSGPDCLXVIBQRQWMFKVWDQTFXGIREYJTKAOIASLEBOXEOIXBUZMXZWFRWGMYYCZZLFFPOSMGLMODYCFQTMREUANNBOXCRTYOYHKMPNB");
    msg.feature_type = 2U;
    msg.rgb_red = 189U;
    msg.rgb_green = 103U;
    msg.rgb_blue = 114U;

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
    msg.setTimeStamp(0.0278713971716);
    msg.setSource(61577U);
    msg.setSourceEntity(46U);
    msg.setDestination(18646U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.216457186747;
    msg.lon = 0.65124606389;
    msg.alt = 0.669045008433;

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
    msg.setTimeStamp(0.132898279383);
    msg.setSource(61995U);
    msg.setSourceEntity(29U);
    msg.setDestination(20860U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.853486604674;
    msg.lon = 0.49528792372;
    msg.alt = 0.440745752342;

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
    msg.setTimeStamp(0.647195650022);
    msg.setSource(23465U);
    msg.setSourceEntity(188U);
    msg.setDestination(16514U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.633657600474;
    msg.lon = 0.404332760976;
    msg.alt = 0.609396919713;

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
    msg.setTimeStamp(0.302770036753);
    msg.setSource(23505U);
    msg.setSourceEntity(17U);
    msg.setDestination(1979U);
    msg.setDestinationEntity(221U);
    msg.type = 49U;
    msg.id.assign("NAQZGBZXPJDLHCJBWJSDPDNOKCLU");
    IMC::ReportControl tmp_msg_0;
    tmp_msg_0.op = 36U;
    tmp_msg_0.comm_interface = 61U;
    tmp_msg_0.period = 35944U;
    tmp_msg_0.sys_dst.assign("XGTQVLFXYXITHHOIZXYNANMDAWFHEAYIEFQKCGDZPKVLEKQLTWDRCVBQWWJEVZDLSTAJFKGYTXUGRQQIMBVULYWJJOSLXDRNKFZESSPSBUNOAMHKHRPFPAIVGNJHOZAEOLP");
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
    msg.setTimeStamp(0.123992766342);
    msg.setSource(46726U);
    msg.setSourceEntity(225U);
    msg.setDestination(52376U);
    msg.setDestinationEntity(179U);
    msg.type = 14U;
    msg.id.assign("DIQEHFCYXMUOITJRTVSJFOUUZGOSNUYDSWNEZSAXXZIKQBUEFJDABWKPLNKSNXKGRCOORFSTWYDHWHHHPIUYILKALVGJQTVMFZGBIBRDTKAPYCEAVHIIPSQEMHEEKBWTNXAUSUQLMLDTOPNWNDCFPXRTFYZLWFYML");
    IMC::SoiState tmp_msg_0;
    tmp_msg_0.state = 196U;
    tmp_msg_0.plan_id = 19515U;
    tmp_msg_0.wpt_id = 24U;
    tmp_msg_0.settings_chk = 28673U;
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
    msg.setTimeStamp(0.755990113182);
    msg.setSource(56302U);
    msg.setSourceEntity(194U);
    msg.setDestination(24034U);
    msg.setDestinationEntity(192U);
    msg.type = 3U;
    msg.id.assign("TDBPTWPDTWBAGLHJTPUYOVFCKRLNLEKEQANOOBJKMGSWFRCYRDJQPNCWCROTSGEQC");
    IMC::Formation tmp_msg_0;
    tmp_msg_0.formation_name.assign("LMUJPOYBUBGTNZPEPTBMRQQJHQDIVORRXKUWWGXTIMAYSFPMEFNJWNIVWCSHKYSYFVGGYEEDUAXASHNLPKRSVZGHIDMIHDUQFDMCOFVJESNBKQTQYXJRCZZLGYWSHCBRNMHHOK");
    tmp_msg_0.type = 2U;
    tmp_msg_0.op = 143U;
    tmp_msg_0.group_name.assign("CAUVPAGHMNAFSLJPVXWMLQILFNVTLFCIZRMICRZUPHCOINPROUUJBY");
    tmp_msg_0.plan_id.assign("BWBGBIFLOTTBAYGZZDDQRCKTCIJRVOAVBJLZIDILKEPRTIFHUBHPUCESVSVJZZYPFTNEWLNZUHONAOPXEKJYZMWWUNCMSVNAOQPGBLDAMOLIPQMYZLJCDCMVPDFQUHEUQKXLQXKMUBGJRPI");
    tmp_msg_0.description.assign("NVAEKCIIMPPAAYUKKPVSTLGAGDUWYHIVHTOCINSXFBDXHLZGFUTRZGFWZVQLDR");
    tmp_msg_0.reference_frame = 9U;
    tmp_msg_0.leader_bank_lim = 0.461511986268;
    tmp_msg_0.leader_speed_min = 0.976310039035;
    tmp_msg_0.leader_speed_max = 0.211178833106;
    tmp_msg_0.leader_alt_min = 0.564563209381;
    tmp_msg_0.leader_alt_max = 0.852914784748;
    tmp_msg_0.pos_sim_err_lim = 0.67882178645;
    tmp_msg_0.pos_sim_err_wrn = 0.315881657458;
    tmp_msg_0.pos_sim_err_timeout = 46495U;
    tmp_msg_0.converg_max = 0.474711157092;
    tmp_msg_0.converg_timeout = 7945U;
    tmp_msg_0.comms_timeout = 17135U;
    tmp_msg_0.turb_lim = 0.498340982837;
    tmp_msg_0.custom.assign("BKMFJERVQFKOCCWBHZNYDPEIWEJGBPNJMVLXBSAKNDWWEQYJCJJGWAPMTNVLIYAUNRUBETNCDDBZAKSMAKATKPKORXQBVWEIOUGNYXHIGJQZRYLGUMNIRWXHOOUXTCVQDAXGCVFUQYJOZTQKCVTLHDWZARTEUDMLXIOFSFM");
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
    msg.setTimeStamp(0.290678461841);
    msg.setSource(45488U);
    msg.setSourceEntity(149U);
    msg.setDestination(56985U);
    msg.setDestinationEntity(165U);
    msg.localname.assign("ZSVLQNRZVAIVHVNYXLQNDVKJPORPQQSVTYWKLMQIZIWNMMFJDATITXEORTMPYSLEJMKDNSHUFDKDHQUAQRCFJOGUXEFXZZEKOYPYMKMOVTGLOCEWTEXJCVGUJPYEMEAIHWSCFQDFKSARYBNXJTHPFBRLRUIMKGPUNWJCGQIAAGOSWYZFM");

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
    msg.setTimeStamp(0.530481866983);
    msg.setSource(19021U);
    msg.setSourceEntity(59U);
    msg.setDestination(28367U);
    msg.setDestinationEntity(144U);
    msg.localname.assign("NCELSRFECCVTSLZQWHCWSFYKXUBQZEWCXLBOOEJPDDDIXOSNRLHGTMVORZFGCOPGLCHXNDMAZJDMBXPFTNPRJIWKLLYUDUQITWIYBOEPURJUQBYEKAHWTDOPWNGVGRGUFNORPMBNPKAUIGTUBMUKXEZVVYZDTJMRAPIZQSCMQBAJIGGYQAWVYATXFBFKONLKYTXKQMKN");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("CDVYKANJSFKMBIJVUSRCPUDEXLNPXYNFABONYMWHRPDGZZPJSTXMBZLKARMVHLUNOXUPPTVIFXVJAEFKRCHLVHOJWAGMAOZYICVT");
    tmp_msg_0.sys_type = 113U;
    tmp_msg_0.owner = 59466U;
    tmp_msg_0.lat = 0.0854598640045;
    tmp_msg_0.lon = 0.518077102493;
    tmp_msg_0.height = 0.90411256601;
    tmp_msg_0.services.assign("XSYAEQZHGUBDXQCSOEWAMLCGLJWKYTETMTAOIHWUJZQJJCLSFXTDNZCBCQONKUNHMXGIKCXXQPMSUHTIKLOJMBIMHRSYBNOLGPVFKGFGDUFSYJIQQGVJZVNMCMUBIYBCFSA");
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
    msg.setTimeStamp(0.135401420793);
    msg.setSource(6809U);
    msg.setSourceEntity(21U);
    msg.setDestination(34579U);
    msg.setDestinationEntity(178U);
    msg.localname.assign("QPZGDZNJWPHBLQFUXOVASKTXOEHBROSVBAGLCZCIODNOIKLCUHEVPGTAETOSPDYNWWIDMKBZPWEQIKZGSSGRJCTUMYTHEZNWOMORNIOKIHJKQDZGRTBQYFRHEJCCJTLRXRXQVLFFDEP");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("DPAOGJJKDBHHPKWJWZZJMIMVXMNWYAJUEVFOWQVBLTBVACSYBITNYYYIGFWJGNZRPXRZRMUJSEJLGQDQGFRDDXWUYEFFABATFRUNSFDNPQOBRPKVXSIOZCEDLEJFPTAKIQLBKYVXCVCLJWSYKPWNRCUY");
    tmp_msg_0.sys_type = 212U;
    tmp_msg_0.owner = 26094U;
    tmp_msg_0.lat = 0.131820026032;
    tmp_msg_0.lon = 0.0323776740515;
    tmp_msg_0.height = 0.194022473633;
    tmp_msg_0.services.assign("QMDQZJWCCRJLQEKSGRBWPNZVMQGNEWDDLYLSJHVHSRHVWCXNGNXUTHWZBCQBOGMBIEBOIKSQTXITHZIVFTLJSDDTYHFUGONSFGFZWAKIKLCRKMDCPWFQAHXMPKMZFPLSJIFYFEUUCHEEHQOUTNNJVBCIDCVUYPIEGPZAXMXSYBSKJYPRRXTGLBRKNAFYWULRKWMJVELMAABOTAAOIVTOSH");
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
    msg.setTimeStamp(0.0199223594496);
    msg.setSource(15097U);
    msg.setSourceEntity(28U);
    msg.setDestination(62555U);
    msg.setDestinationEntity(240U);
    msg.timeline.assign("VIRLOWLTDYBHKUAOZHAGINAECMUZXQNZCOUOPUKZKHJLNERIIXAAPTHDGNGJGDXYMVZSEJYGEVDMORLPKSPQZRVQLLIWDWGCKBNVIBFOQUWNWCRMFCMFNJQEBSZTYFFIGWHWTJWGHBEJCUFOCGXVSAPQAEZQOIWPPPPOEOZSQABLTXJKRDFXP");
    msg.predicate.assign("ZWUXYDHZRQCCOXJDGLCWJDSLOUPUVRINQQHUVGBXHSRLAPNDCXBLZGOXEFUSXDTCFAJREWQJSPRVBGEYIIEMTDBYSMNWWNWUXKTFIBNKRFMNQBCCZEKQLQZSVJTBFAOKDYKIVYKUIGLMUWVPBZSMRDQWXETKTHEOBMZYLZVKXZJANJFFBYGNMINLLVPUTHEEGCGRXCAHFHRFZOFHNYMSAYSOJTGVWDHJAKPIAPIQPOTYDEI");
    msg.attributes.assign("TBZRASMXVKLHSMALRBUJO");

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
    msg.setTimeStamp(0.90505831534);
    msg.setSource(42655U);
    msg.setSourceEntity(20U);
    msg.setDestination(36820U);
    msg.setDestinationEntity(195U);
    msg.timeline.assign("KUJIGTOQYADDIXXEIMDTQYWAKHZCUMWP");
    msg.predicate.assign("HEJOGWEUGADAOKZPBFHRJMGIFXX");
    msg.attributes.assign("BXRPGBSZMQIBPEKISFJBUSWIDCJDQTNOMSLWFXHKPYKESOPRGWSFWLDOWXMOFC");

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
    msg.setTimeStamp(0.886107565051);
    msg.setSource(45448U);
    msg.setSourceEntity(190U);
    msg.setDestination(33412U);
    msg.setDestinationEntity(196U);
    msg.timeline.assign("FPWUQWSSGWZIEVQRYAPHMMQVOBNGTXKRHUTBOGZHFAIJRJM");
    msg.predicate.assign("DPWYFRJLJDGTTRXXCQPLCCYYISASVPLQMGBCFYBQUPVYVHHRNULOYFXDSNUVBULJJJMGSELWHOLDXKAETAITWAUSNWCBSBVZTIZCETYHARRQZCKO");
    msg.attributes.assign("NXPTOUTQJSTJMISJMLTKBOYNDCIEVASSZUBVRBGCFRNXPZRXILJFUQNHJWANSVUXXMUBKWEDPMZLURKYVNPOMCFUCHWLQCEWLCXFKCQOPOZQA");

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
    msg.setTimeStamp(0.848108183906);
    msg.setSource(16823U);
    msg.setSourceEntity(35U);
    msg.setDestination(56564U);
    msg.setDestinationEntity(25U);
    msg.command = 249U;
    msg.goal_id.assign("QCVQIHNVCWCNHHWSGNYJLAEJLYBEUUWXAVRCXFAMDUOWHZKTVZODUEPPBQ");
    msg.goal_xml.assign("GLMDBRCSLADGZHVDTCULIFVIPNSRLWBJQIQYFHGAQDOZPELXHRYKCATJTHIQEQPWNKEZFWLS");

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
    msg.setTimeStamp(0.0536400107665);
    msg.setSource(3073U);
    msg.setSourceEntity(86U);
    msg.setDestination(54169U);
    msg.setDestinationEntity(246U);
    msg.command = 82U;
    msg.goal_id.assign("JFQGUGVIDTZGEJPPMKQDVCUEOEJKVMUIOTFAIXIBFDLKRBPKMKHJKICJLVPLFGUHKOSYGVCMZCMUPSXTQBPOROCGTZZLSBRAQXYCECYHKOFLJRMUALRJQJLEZCOVBBFNYYZPVNBSLQDJSDSXYIXMRTHWAXAUHYTVSNIYIQIZWSWHZNDAFFDFYDNVBTEDNONQEQ");
    msg.goal_xml.assign("BWZETLXUPVVLQPKUDUNQGHMZNKBNUSBRCJZPKIGYXGWBMFKYXVVMLCEJNWEDTOGFYIBOYISFGOLEQWWADXONLCLYFQTZETBJPCOGIBNWHQHKTUPHSVGZDVTYMSUEDHDZLMQWMAABXRIFFINN");

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
    msg.setTimeStamp(0.996774706777);
    msg.setSource(10013U);
    msg.setSourceEntity(115U);
    msg.setDestination(17181U);
    msg.setDestinationEntity(14U);
    msg.command = 12U;
    msg.goal_id.assign("BJMMDEVATOIECHJCYQYTMLRC");
    msg.goal_xml.assign("JHQCBIIGJXMBVOFDWMZEYOLNJBDTRSKQFFQZKZUMBBKLMVZVHCXACERHXYTCKNFISUKBLCBHQPQKGETXYFFVLSWUQIDVROMGFXXVGOS");

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
    msg.setTimeStamp(0.0891800764429);
    msg.setSource(27680U);
    msg.setSourceEntity(243U);
    msg.setDestination(14148U);
    msg.setDestinationEntity(145U);
    msg.op = 232U;
    msg.goal_id.assign("QGRVUGCDEGNOVBTTRHLFUCXSJFXMGEAHDXJKQQMQQCFCOLDPICMNKHLIFRPINKJGWAWVOPLOYAPBJCALLYIVXIDCABJBBZKNCKGVWYLSZPCFKEHDALOYIFHKLABFIPUNJQTPMVHHXXAYVZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YJTOEWCRVQEQKJUXUJUISACVSLWPJWKBOCLINPAHSDAAHYFMFNZCGYTSVDJKCMZJVQPVCHYVNNWLODCBYOSSZRRUDTHQUTIHGZHLELJUMGIOIFFHEKFXKPKZBWSGQIMZQLXSXGPHMVZ");
    tmp_msg_0.predicate.assign("QHWPGWBFANRVGTMQQWHDLFCHNOCWSQNMRIWXTNBBOADLHFOKKWKLNCFZOEMTUJVUYFBJDSTIQJCZMXMSBEPOHSZCIHSIXASGS");
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
    msg.setTimeStamp(0.652737614622);
    msg.setSource(54714U);
    msg.setSourceEntity(253U);
    msg.setDestination(23071U);
    msg.setDestinationEntity(210U);
    msg.op = 179U;
    msg.goal_id.assign("BMKDWIEUGAMBPEBZZULMXJEVCHNVPTUJEYRKISKFNPQOVC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YCCPLTWFMYZHRXMDNEZMVPHVIBKIGRZMTSIGKADDBXSKGPOLFQNSGSJPGZMCUZUWILEEZJAFFAFAOLAUOSNFKOABFQHNAEXFSMWWPYHBUQCWYVEGCBGYPESHMDKRKQYJGEOZUGUOVBICMHLMXOGZSADXULXFRNYPRD");
    tmp_msg_0.predicate.assign("HVZBPDTDWASYARQYZXWBWGVVKQQFITXCEBCNSRKFEADOUJLCQZOZGWLQTHMECONAANZWCUNGOOONXPRJXMPXEJJIAWFIUETFIPJCONHZBSMWSOKBULHRGPESIASVENUWCNTZNRKYTHIJSXPEGKGFLEQMFYFYUDABMLZRIPGXQIKQTUBHSYMTGCXLGHKMQSVZOIMUVKXLJZEVNWODBBXWYUSJKVBMP");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JOWBLVDQVZVWZFZFAJCCOSLNZOFSSHEYNRMXGXVRUUKWTFLCXFAXGWFLDETQINUHXHDDBKKCKDASPSJYMBDDPMPBFUNIKEKDLYSCGJNITYAWWZTQGMERCUJFPZORECQSEIRMMIULNNTBRUBJJSPHMDACASBIYZHLEYTSVQWWTJALEEHUVFONQYIBPXYKGKDBXUIRFGYMQVCPOLHX");
    tmp_tmp_msg_0_0.attr_type = 55U;
    tmp_tmp_msg_0_0.min.assign("CKFQVVJDQYSOTHLJJAKXGZYLBMHRSPUCGIEMHNFUMPLGHKZALJBOUUHWOBNNHXWCQRUIDUQJQZKRYIGPGSTVNTDZECJSJBLGWIZMSKIKFCQDNDCOTQBZZQCHWSAHVWGKHPRBGXVTQX");
    tmp_tmp_msg_0_0.max.assign("HKZSBPAHDOPRCECJNPDWSTZMVOJPLJRNUYTBTAAVUYIXVSXKFCGUACJFPPAWZDBEBZGQEFAVGLUMECADRHLTSKONQYIOUROTZCHSLGMRTQVKFVJLHWEI");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.790745678106);
    msg.setSource(64763U);
    msg.setSourceEntity(202U);
    msg.setDestination(38285U);
    msg.setDestinationEntity(21U);
    msg.op = 236U;
    msg.goal_id.assign("HRMMTAAOOXSXFVOCNNCFEWJOWCTPITFARDCGCNJHQNEQGVAOGRJGGWZYMGBPHOVKUUPIAZEDTURAKGGOSVUKWBHFGLDSTLMXHMSQPBFRXT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OFXTWITCKVVVDFVGEXJTTYYRVFENSAYWQDKNYOHRXSZPKBRUAQVOEAGJGSCRKVPMWDXLNVHYCAAFIRLJFXTPIJILBHLBJEGPOMDUYXBNUCSNJUMHZQCGDSRXFPCDVPISESFMEVUMXRNNPQPHDGBCKJNALHOKDDHMXDGTIATKWZLZHBRPAZUBILQFMEKETGYYLCZMHECTOUSJYIQJZLXKZQEONMLWFOROWMZJSZPRQBWQGIFYA");
    tmp_msg_0.predicate.assign("FKDBSEEKEAZBEGZSEZNSRGYXIPKHXUUSJVSCXWTSHDIQWDVTEVOHLEWXMRUMCBFTKUPRNRXSGHXZZFUGJKDMOEGBDCYCMNSTACPOQJBIDWQWMJUABJVBGPKYALYVULWF");
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
    msg.setTimeStamp(0.799575391902);
    msg.setSource(54259U);
    msg.setSourceEntity(1U);
    msg.setDestination(37112U);
    msg.setDestinationEntity(230U);
    msg.name.assign("LSBGUOILLIXDVQCZLXFXVZRNGMAHOPYLTFFGOWQGFELIBCHWSBRCYMRZZMUGBUSHAVOQLFCUTJYTQMELBUQQTKUYEWDGACJBICEZRPJTYNDFILXJEHNZABRMAHMPWOBHNXHVJRKPOQQVYPDCPXGDPDJRNHNHKVYKTXFHAESZNWEWMYJKXMSWBPWOYIGDWRODNRSDKSVQSIOVFTWBAUTEOJMKEUUKPGXZMSTECAFYSVAIJKUKLGCXDTVPQJFA");
    msg.attr_type = 232U;
    msg.min.assign("CNAUJPMYYNWIXJGQSAHLTFZBVZDDCELYIRQSLSQRXGDRRNEWSQLPVOMNTGFHQKUPLJYBOGOKWUMBVCZRCBPTNWMUBPBVTCBSRVFIHHWDOXCNONQEDTHLDZEESUZUCXMTUIUHBOLWJKIJIKVFVGMCUKGJBXTMWZRCHRXKBHPIJMYAGFYPX");
    msg.max.assign("ZYNXXLGYYHMQMWFHTUJRYECWINRNCSVNUQMABYEDSOTZMIEAIPKQRGWPXBDIBNBMBKWOAUDVHLFEENZPFTGKKFMAWWJUPGDIKCWUGAGEQHVWFSQWYSBHQALPSRIMIMJGVTJDDCJYLMHVUPYYUERRVOCDNJDSESQUPFILVHNFGUTOPRLOHEBKNLOSC");

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
    msg.setTimeStamp(0.628768314481);
    msg.setSource(34566U);
    msg.setSourceEntity(153U);
    msg.setDestination(17357U);
    msg.setDestinationEntity(137U);
    msg.name.assign("TBQPWGOQAGIJVGBUXXSCFVWWKWRUXKCIFFNIGTRFOKQPFCGLUYDYUCNUSAORTC");
    msg.attr_type = 217U;
    msg.min.assign("OESENFXDGKZBRCCMEBLVZWHUGFAQTAWBUAWTPYRRDVFMTFIHDHOKMFHKEAOVLONYXZGZYJEJCTZSWNNXLDFNFGOZMTODUALRSBJSSOPHIWWPKQPBDIXMKSNXVZONLEYPUVDRHTD");
    msg.max.assign("YVZYTGGIJMHFGGAHVPUHCQXIGLOVUMYWNXJGTJVNEAOILLODFZCVFNLQBZSWCAFTUTOCIKPKMDKNYIHCEIYIKDUOFWOT");

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
    msg.setTimeStamp(0.669674816227);
    msg.setSource(14245U);
    msg.setSourceEntity(33U);
    msg.setDestination(25472U);
    msg.setDestinationEntity(98U);
    msg.name.assign("PMKTWATYLRZVGZSOLXIEJXRSHCLJYHYIOZNRFRHMLJWCFTTLJOUJQODHDIMQHCSGEFPTFKLCGWUIQDUBWRTDXSLBWRWPKIPVSCETIMYXEVIAEZNRY");
    msg.attr_type = 29U;
    msg.min.assign("XAEHTBNADUGEYRPKIOQWXRNHQOLWDZGXCVHNWYOPLDKYAQRTHMRVZXESWOCPBGFTWLKDSRQGRMP");
    msg.max.assign("QTYILEIALDRVCXUPDDANFFRBDZSWTUWKLOVDSUXEIQPHXWOVAUQSOZPZKCZYOWJHJTRICHTXKRUJPCSJPUADIOMHNAYIGQTESGUTFYBLXVXFETUYTGPDNSFMHVQSQQGNHEZVGQNMOCJLBZUWRYYMFEIOLENABZYVEXKGSLSJIZPCAHOQRBKBPCEBCMWBNRHJKLZPCNJHFIMCWKFNMAKKIOGAYTMLVSDJUBXEFDHQXT");

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
    msg.setTimeStamp(0.526813259305);
    msg.setSource(44290U);
    msg.setSourceEntity(107U);
    msg.setDestination(57506U);
    msg.setDestinationEntity(210U);
    msg.timeline.assign("WXHDZZNBEIWPKWRCPFDZHAJOKFNHGVLYOEFBOCKYFMLQOREGOXBBMMIYIDMJSZZVUZEUQPXUWBNCPNCBRKONYRWMKATMCXFVIYDVVGSMAVMIXOTHBLPZTJJXYETURQGVQVFKUIQJGHTWWGEOVQLXHQIRRTPDKDOTUUJLLHSUPQXZABMMKXDSPGODFCLXAGEPRCUCAFKIEUFJRNKGSWPDGZZHYELCSLTSYDNHILSWNBIRHA");
    msg.predicate.assign("RWOLRJJUSJCGTQNQCULOGWZWXGNCFPSVKHFNMCSBKQDZANCRTSPGKYMZKWMGFIZPTGBVQSLJVEOWXMDXSQTGEHJPBCBEXGRAVCRJGZXFMETQXFBVQNHOFIWUMZDOUTIFSVYDDEREBQZCFLWBPUSBNIYFNOVDLHYULYJKIIOWKJNXPEMKIVZDPOGYVAHLYCIUXQK");

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
    msg.setTimeStamp(0.464467506639);
    msg.setSource(59439U);
    msg.setSourceEntity(212U);
    msg.setDestination(28246U);
    msg.setDestinationEntity(191U);
    msg.timeline.assign("LTQLWKYOCVABLYJHMVIDVPMBKTNFQOQTATNYBESKHXDIJCUESQDRNPFNSUXQNXHNTOCVAZRFVLUVBACMZKDFWIZMQFIERSXZYGLGPXTRZCHEJPGFKVCBH");
    msg.predicate.assign("OUSYRFYUIDLZBOWXFSQNHVDIHFNUWPNONPKTKLLGOOLKASZABRLFTWMADHTHPRAJVMYWJXEUNO");

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
    msg.setTimeStamp(0.817354298202);
    msg.setSource(63043U);
    msg.setSourceEntity(203U);
    msg.setDestination(15244U);
    msg.setDestinationEntity(102U);
    msg.timeline.assign("INLQYCHPKBODXHGTUCYINJJDXGQQQSOQEROYANXEESLBHPKWXRYWXARNJTO");
    msg.predicate.assign("NXBKPSYCBTXIXEPPWTVZLJREOEHBWOMUDDASYRDSLVFPBRKXEGDPMCXJYOIWUACAFOCFVBUQVJPKPWKFMTJLAGUEYDEMBNNUWXSLHLNWQLGCQEHQZFHNNDPXATCRJGKIHSGOLJAGDNFEQDHRYUZKCISSBOQIARHAMWBVQZXYJMQTLIRYGWFLJRKKUTINVBZVDJDMOGGPFOYBYNTEAJHZETMFZVGOMSIXH");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("DJCLMAFFZDRPCPSTJZYKAWKLIJFKCXNNZIOJTVIXALJIPHNUUHWRTCQGSOSHXWCPFCVYYRQOPQYYUKLMVFTMVWDCNWYKRFIZSNNQDRHMQEEGTETJFUGBVWYSVOBRQKEAGPYBPAKDJPHRHVIDMIYUOMLG");
    tmp_msg_0.attr_type = 100U;
    tmp_msg_0.min.assign("XTKMRFOJOXNOSUVUDVZLQDCZBDEBGOLUFIIJSERPZJOIATCLCVUXNXYKLOSVAIEMKETHAFNPKAEPAXWWYGFGHMEGMIKNOJZGMKXKXYEQBJPBNNTHRDGDVFSGDQXWHREDANPQTHSTSRXLWSLHTYPPFJCGVUGMCQYUFQEISOWJFPFKQWDRZLVSTRR");
    tmp_msg_0.max.assign("VUSMCWUQKFDDBTHVLOZWSXEAZMJDVJGDIRSXCYQNZLMEKTCRJTKQSKUYXVTZEVDGTUQVXTABJDSGIHYXXKLGHNTOUWJOAPEDGOAUJHRUVKXYIWPQFCWAPIIEHPCWTSTRLNABHNIKJLHVNPFCAPGMUSBRZSMLPABBFQRXMHUHHYDFNVKBNNJ");
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
    msg.setTimeStamp(0.211913543995);
    msg.setSource(23018U);
    msg.setSourceEntity(44U);
    msg.setDestination(44872U);
    msg.setDestinationEntity(105U);
    msg.reactor.assign("MOLVDWNHAPZDGAUAEUWIBLSKJTIDNQJJOHXFUBCERKTEPHMLZJSIDLUOCSGVMPWZBCRVYDVBYQGXEMNJGAQZOBNVVIAXTFQTNCWHEDKZULLBWTSZEFBEFYRHFLXDZDFMWGPYCHQTWRJNRCWVGAMSUYQGI");

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
    msg.setTimeStamp(0.805112664138);
    msg.setSource(23361U);
    msg.setSourceEntity(6U);
    msg.setDestination(55777U);
    msg.setDestinationEntity(103U);
    msg.reactor.assign("TIWIJLVCRZHAEUCVKQCZBVGLFRHKWCZMSWHJLSMYIJQEPBTXDQFHWTJXNOJVEOWBSLINIDXGSFFQWAFIZAMPKEOUYTOHRRLNGZYEHKKDUGAHCMIMVSGUQQJOTPBNPFZLGQUCGBXFSKGAXVRIMVYJZBRZYZTTIPTBSHLXUDKNDMOYFDTWWAEXUODNTBEXSYARGAMYMDCOODQN");

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
    msg.setTimeStamp(0.30544335255);
    msg.setSource(39436U);
    msg.setSourceEntity(238U);
    msg.setDestination(12345U);
    msg.setDestinationEntity(220U);
    msg.reactor.assign("VXFHCSDDMNXOUKDPCFGGWRVVBDCZWVEASOQHCFAYKKKUNMVTNZNOBYIGYHTJUXSJJWVLWAWMMTGXWTIDIEZGOIBSIOUYLXKDPAJQEQJREYMXZHNF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SBTEYYBDZIZIFSXGOARBVFBUHAUOIKVNMXCFXAMAKCTQLSSOXSKZHADPKNXQMZGMONPUSLMFGVHNBGBFALAOOEIIRDPMJJXWVAKDUQNGHTPFNLMBQQODISKEPETICIGWFWPYYUPYGSVRNZZQJTLJCCWVOAZLTUWBXLHWGRHRMDCEEOCQSPKJVKUGXTQHTTCIUJOUPUEFRLVNWEBDKMRWHWCFNJLQEXYDIYYJDMGBAEDZRLPYKRQNFXHZ");
    tmp_msg_0.predicate.assign("ZSGFJUZSPWWQMRLBYAAWMYILSKADJEFOKYGIQOBAOEXWKRDEUXOEFQQUAWRHFPGRZPZMLFELYNIBUQFSRYIDVKRVWMVVHBLHQSNHICOKDMCXTARYSINHQNPXBSNUSGGJFTQOWKSHGMKDPVXTEIJNJTVMXLBOVLTCXPOHIGBEANABBUOTVACJTPMMW");
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
    msg.setTimeStamp(0.715679003739);
    msg.setSource(20502U);
    msg.setSourceEntity(103U);
    msg.setDestination(14252U);
    msg.setDestinationEntity(159U);
    msg.topic.assign("AQDJNJVRMJJWAFLQCOGSTDF");
    msg.data.assign("PTOENHNYUSBSNEORZBJPHVITKKCIIYXAGCYAMONNDBLKXJPZVUKRLKXWZPQPFBFJCAHJOFJTAKWWEUNYQRHKOGJDUQHNEDQAMFMGFXYZEUIXULXIUZHVMZDOJDFTNARGHZSLVNYISLWEYGOMICKQVXQCMPREXPWAMGDWVDJVPDHYALYWRBEURCLCARBPMGEWQCBGXQPKNJFSTWBIISTWTRLUDFSSVQQJZACTSKBZXVRMHCGFLYOVTGUBEF");

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
    msg.setTimeStamp(0.436913334983);
    msg.setSource(6793U);
    msg.setSourceEntity(221U);
    msg.setDestination(21951U);
    msg.setDestinationEntity(112U);
    msg.topic.assign("KJPGBVXIDLEZDUCDWFBHLZMEJZOEWSACOYEJNMFVWBATYZI");
    msg.data.assign("NVEPGYWCSWIEDDOXALTUONUITOROBXIAVYTRHGQXCBNLEJOGUDRPVYKVRSICJDXDYIROVRNVMECTKSNNCGANWPZMKMHJZRLYXUYQMZPFCWKQEMRKCLFQLIEZUGSUNFWE");

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
    msg.setTimeStamp(0.439851925457);
    msg.setSource(27253U);
    msg.setSourceEntity(107U);
    msg.setDestination(64702U);
    msg.setDestinationEntity(4U);
    msg.topic.assign("BGOWKPQSRTZCBBISZENXYJVXQIRICMLJYOKFNBFIVWYBSGELZWTMRGEKKPRWOJFKZQNAWOASHXURCNRDXNVJAXIHCDDDLGVZOFRKIUUWQEUUETDIZPYHNVDMLYSXHLLAXHKPUCUOSCQKJAETOUGAJVGZELLCDMBEUVRTHPAMXIXFPQXSCFIDMJDFUWZBEVWACVGQYZAWYGRPYVOPKNJSRNPLTQDMBBMITHFEAMFHS");
    msg.data.assign("ICAXGZSEVBMAMNWSWYAXBFGLNKZXBZXZWOCASPQYUXDDZEVRFURQJKSCAJUSQDINJJYAPPXTVCEBLHZFJXUJHSHWCRVLXUQDXWKLIOVKTQTLCMNKOMAGIOOAADLROWFJIFDHUYUCJIJLSCBGBDEYBF");

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
    msg.setTimeStamp(0.71941178782);
    msg.setSource(41329U);
    msg.setSourceEntity(226U);
    msg.setDestination(60161U);
    msg.setDestinationEntity(239U);
    msg.frameid = 251U;
    const char tmp_msg_0[] = {26, 56, 125, 58, -94, 34, 64, -19, -84, 80, 54, 96, -71, -61, -53, -80, 106, -81, -60, -69, 66, 103, -110, -53, 72, 93, 112, -26, 17, 101, -93, 77, 68, -35, -57, -39, -32, -34, 7, 102, 63, 82, -108, -66, 50, -18, 121, -57, -88, 67, 15, 22, 18, -60, -21, 56, -93, -61, -82, 74, -46, 39, -97, -73, 116, -45, 109, 29, 56, 114, -37, -46, -2, -80, -100, -116, -56, -27, -107, 58, 23, 69, -46, -113, -59, -38, 17, 79, 2, -9, -111, -49, -30, 3, -80, 111, -22, -117, 26, 99, 119, -16, -27, 90, -6, 36, 52, -84, 39, 98};
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
    msg.setTimeStamp(0.301207514859);
    msg.setSource(22665U);
    msg.setSourceEntity(207U);
    msg.setDestination(5625U);
    msg.setDestinationEntity(136U);
    msg.frameid = 185U;
    const char tmp_msg_0[] = {51, -80, -1, -42, -41, 122, -29, -57, -83, -63, -113, -85, -25, 119, -79, 64, 85, 95, 118, -12, 84, 27, -63, 102, -3, -58, 68, 124, -104, -68, 38, -55, -16, -69, -112, 91, -113, 111, -23, -20, 82, 94, 32, 93, -6, -31, -52, -27, -1, -21, -111, -80, -128, 103, 89, 95, 21, -122, -6, 6, 111, -124, 105, 10, -117, 81, -17, -64, -39, -128, 121, -70, -24, 64, 2, -75, 1, 109, 44, -53, -84, 2, -51, 101, 92, 27, -33, 87, 42, -16, -88, 81, -7, 125, -119, 75, -111, -14, -103, -116, -16, 71, 83, -63, 6, 26, 21, -9, -87, -81, 104, -128, 46, 72, -41, 107, 42, -114, -116, -44, -19, 102, 108, -120, -58, -110, 72, 37, -30, -128, 76, -108, -102, 115, 91, 92, 118, -54, -29, 82, 65, 100, -14, -83, 123, 100, 40, -100, -62, 118, 79, 46, -71, -126, -99, -81, 17, -15, 18, -48, 84, -37, -57, 73, 81, 17, -60, -103, -92, 6, 3, 126, 13, -118, 57, -54, 96, -10, 101, 100, 71, -82, 46, -76, 29, 22, 45, 86, 113, -59, 14, 60, 33, 81, 30, 92, -110, -33, 26, 64, -11, 75, -97, -108, 62, -30, -3, 18, 88, -35};
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
    msg.setTimeStamp(0.685994227112);
    msg.setSource(50575U);
    msg.setSourceEntity(70U);
    msg.setDestination(59950U);
    msg.setDestinationEntity(57U);
    msg.frameid = 168U;
    const char tmp_msg_0[] = {-42, 114, -2, -56, 105, -33, -44, 32, -103, 98, -73, -28, -124, -50, -69, 119, 53, 90, 38, 8, 118, -11, 31, -114, -5, -79, 81, 11, 52, -92, 74, 116, 32, -14, 120, -31, -79, 118, 107, 79, -111, 5, -93, 82, 86, 103, 10, 110, -75, 16, 100, -109, 85, 99, 25, 93, 45, -49, -10, -35, 92, -8, 9, -94, -58, -21, 64, -64, -16, -85, 8, 74, 107, 70, -41, 109, -121, -12, 17, 23, -77, 20, 101, -8, 97, -53, 36, 12, 16, 42, -52, 120, 65, -68, -19, 47, 62, -19, -44, -104, -121, 123, -51, -34, -106, 61, -76, 88, 52, -4, 120, 71, 45, -63, 120, 58, -40, 49, 68, 119, 122, -86, 85, -84, 36, -113, -120, 71, -26, 2, -80, 92, 60, 40, 73, -113, -47, -95, 110, -76, -24, 50, -19, -21, -43, 61, 24, -102, 12, 106, -24, -37, -36, 26, -62, -127, 90, -102, -28, 16, -1, 5, -100, -101, 64, 111, -45, -80, -127, -119, -9, 47, -10, -37, 50, -96, -25, 44, -39, -109, -26, -116, 116, -99, 26, -59, 112, 30, -92, 15, 1, -36, -41, 25, -63, -33, 111, 74, 37, 80, 65, 86, 65, 121, 18, 22, 54, -40, 61, 100, -127, -52, 46, -109, -48, -83, 40, 107, -62, 85, -96, -50, 71, 26, 39, -8, -42, -11, 110, -88, -32, 80, 26, -120, 62, 43, 90, 47, -11, -17, -29, -33, 59, -71, 71, -127, 34, -33, 31, 50, 126, 51};
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
    msg.setTimeStamp(0.734195011293);
    msg.setSource(19625U);
    msg.setSourceEntity(190U);
    msg.setDestination(18812U);
    msg.setDestinationEntity(231U);
    msg.fps = 25U;
    msg.quality = 196U;
    msg.reps = 87U;
    msg.tsize = 55U;

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
    msg.setTimeStamp(0.931420635288);
    msg.setSource(8666U);
    msg.setSourceEntity(22U);
    msg.setDestination(58705U);
    msg.setDestinationEntity(219U);
    msg.fps = 191U;
    msg.quality = 144U;
    msg.reps = 40U;
    msg.tsize = 96U;

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
    msg.setTimeStamp(0.734431988597);
    msg.setSource(31052U);
    msg.setSourceEntity(173U);
    msg.setDestination(57878U);
    msg.setDestinationEntity(112U);
    msg.fps = 254U;
    msg.quality = 36U;
    msg.reps = 32U;
    msg.tsize = 227U;

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
    msg.setTimeStamp(0.112640616676);
    msg.setSource(45162U);
    msg.setSourceEntity(222U);
    msg.setDestination(42495U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.112241803389;
    msg.lon = 0.809814445273;
    msg.depth = 218U;
    msg.speed = 0.84568848942;
    msg.psi = 0.938050909069;

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
    msg.setTimeStamp(0.016259732454);
    msg.setSource(39003U);
    msg.setSourceEntity(197U);
    msg.setDestination(56765U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.496893050887;
    msg.lon = 0.0776482639621;
    msg.depth = 187U;
    msg.speed = 0.0118889909218;
    msg.psi = 0.0802395599762;

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
    msg.setTimeStamp(0.0469134403028);
    msg.setSource(49337U);
    msg.setSourceEntity(233U);
    msg.setDestination(6957U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.953174360055;
    msg.lon = 0.111144348179;
    msg.depth = 121U;
    msg.speed = 0.618328735978;
    msg.psi = 0.531785226274;

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
    msg.setTimeStamp(0.917706204931);
    msg.setSource(21903U);
    msg.setSourceEntity(63U);
    msg.setDestination(52691U);
    msg.setDestinationEntity(118U);
    msg.label.assign("SUIZYTJYFDYBPXJBYDGYTPGTLQDENQIKCIKRODUWOEZYMIVJWEEPKSEACBFBYNAWFLTCTSGKXZCSSUFS");
    msg.lat = 0.260088485814;
    msg.lon = 0.993172787391;
    msg.z = 0.490203559465;
    msg.z_units = 20U;
    msg.cog = 0.228355517525;
    msg.sog = 0.0202210766671;

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
    msg.setTimeStamp(0.940084498374);
    msg.setSource(33039U);
    msg.setSourceEntity(13U);
    msg.setDestination(13095U);
    msg.setDestinationEntity(233U);
    msg.label.assign("PMMNDGMFJJYBPTNCADWIXARBIVVGJHSLKCCQLOEFGRHWHWFMDUOSPEYSLAEBVZWYRLUPJEHMYWGDFRDLHDMXOFZDZVAXQPXSIOOKNUCEMRVSVPZUVRSEQKNUKGBOLQULKWDTFONXMIRTBENKCQLDYJSPBFQJYBJFJCBNASMZWQJCHKXXNKHUCGTYSAVNEKILTIPEQNVZACZTOOUATWGHFWG");
    msg.lat = 0.0859772461908;
    msg.lon = 0.891562599152;
    msg.z = 0.0938760630052;
    msg.z_units = 139U;
    msg.cog = 0.603793583681;
    msg.sog = 0.00269292930624;

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
    msg.setTimeStamp(0.572834301855);
    msg.setSource(51301U);
    msg.setSourceEntity(198U);
    msg.setDestination(23612U);
    msg.setDestinationEntity(243U);
    msg.label.assign("IIPBTNKKWYQGHHLCRPYRMEIPUJGDSSXUVXINSPMMZTZWFALAHGOWQSFBQRWCZXROTONOCJCATYEBPOADCGLDPNJZK");
    msg.lat = 0.975730242386;
    msg.lon = 0.558014649846;
    msg.z = 0.395662719757;
    msg.z_units = 202U;
    msg.cog = 0.593570184743;
    msg.sog = 0.652047577852;

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
    msg.setTimeStamp(0.487053397441);
    msg.setSource(15535U);
    msg.setSourceEntity(254U);
    msg.setDestination(35539U);
    msg.setDestinationEntity(181U);
    msg.name.assign("WZXDGMTTSYSMLVTYLCMDHFCNBDJUBGVPXUKUCLVWAIPIITPOQQRYOBJRAQFGHNERFHQVGYREXFNWHTRAPSGYKKKHCIDBHZQNZUVHPXJGXKCTJYSXZPUIQPIWWLJIEQMCMDR");
    msg.value.assign("SUMORQJIMKJFCFYTIWINXLKZGDJADBJBIKTJKRZWWRGLCPOAPNTEAQFQOQHZLSU");

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
    msg.setTimeStamp(0.501972945216);
    msg.setSource(32156U);
    msg.setSourceEntity(68U);
    msg.setDestination(23199U);
    msg.setDestinationEntity(246U);
    msg.name.assign("FSIETQOHBTUMOCXZJXTHVLNVDXPHHGRRMYBQKPGVJTHJXVYOIJNLSAODUKREXUZKKFUFRWGMGYWCEFZBTYWOSQCKYCBMTIFBMRZAKRGZKNAHLIYXADAQNPCWSAIMBWSUFYFQCKWOZHVLQOUONNPEXGYWEGLJIVLBCASJVZGVZJMSPRTDGDRYCALLKSEDRJFBCWOXMXTVPIIZHXPIN");
    msg.value.assign("UXYGFBMNNNOMSSVXFBXODXTJSAWNQCZMLPEJSODAHXSLYAZNLBTYGDILPDUWEQJKNIAKJHLYQFDAQHCVVKCJONWCEESVCVRXZTOTKYGIHJKIBFHEKQSCRHLOVLMDWWAVITFJOHBQWCVRVCAFUEJZUJQPDWGYIRKIDMECAQEQLREFHMFPZHRTPDIOTXPSSFOZMMYTHXARTPGKBBQZGJURXXSYCBOMN");

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
    msg.setTimeStamp(0.189724723203);
    msg.setSource(4980U);
    msg.setSourceEntity(228U);
    msg.setDestination(28918U);
    msg.setDestinationEntity(218U);
    msg.name.assign("CDQAFNOFRLBTFBGSXAYQPNDMCEWVYSXPJTYZDKSMMRGLBUZUFZNHQGCTPWEJWCXSCCUSYHMEOIDKUDTIKQPPRIIRVKTMYSKVYHZWNHUVRVWYUGHOVEQEMFJPQLAVXIJVRZDWCNNWUAHPNJTMYROSJBGZRLLNPDYCOKAPXAHQZTZFGFHUOGUXEWKXCDAKJTUFYQDGLCJJEBEGSOJVBGEOFLXKAKBWIIHRXN");
    msg.value.assign("TXPFSITSUKCMNK");

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
    msg.setTimeStamp(0.465077922358);
    msg.setSource(58649U);
    msg.setSourceEntity(61U);
    msg.setDestination(22768U);
    msg.setDestinationEntity(127U);
    msg.name.assign("HBUIGZGNFBZMTGWVAUXMBIWVZQPJZNIHRELFGCWMLFVHKPDTBJNJCIGWKACHSYVBAHNUJDGOPLWIDYSXXQRATPSPFMWRCYVQYDBKZMJCJUQNIRNILKXTYJETHLCPXACDOHERFRGFTKHKCPOUUFNOAXSLSNREQZPYDWPXXZTFSDLOVHUDBAPQVNGMVZOKYAWUCORSEUXLOYEQWZKEISIMJBDZVASLVMTYKTDOCJOSNEBEFBMAQLYRERGQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("KHYXWNQSGJLZHVTVREXQOHEQWDELDUINQFUQKLGCPNEYFRYR");
    tmp_msg_0.value.assign("PGYKEQOWKP");
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
    msg.setTimeStamp(0.481255354739);
    msg.setSource(17516U);
    msg.setSourceEntity(33U);
    msg.setDestination(37341U);
    msg.setDestinationEntity(205U);
    msg.name.assign("PVQEYFDVQBSQCHWCESXNKIPLKRADHDUBMDNTKFECUEIIZJWMSQXO");

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
    msg.setTimeStamp(0.0848833785151);
    msg.setSource(40812U);
    msg.setSourceEntity(73U);
    msg.setDestination(10511U);
    msg.setDestinationEntity(143U);
    msg.name.assign("XDZDMHRWWEIXRAAUHADVLQWHIBWRBCXPMPLGRFXQQZEYXWXPYNOXONVUCTATGSSKHJWSKKCBLQEJSEFIPVAZCBYLITKTWMLANJFCSZULOIYTPYNMGOTMMJNOHGONQCRFVDFBFVMCKBRFJGMDPYSNEVSUYJHEHHZTYIIUKNIIWAVJJQNVEHFGGRKXJSEGPDGLSXKUQMYCQAZZUSBREDMOPOLYZZEDKICPULQDFHWXBTV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZYJHGCGXNCYKYTBVBOFYIGUBPEVKQLEOOMLABOLBPMZZWTRLKSBSSAAMQTPUJXHISUOZSVFMHQQXTWQXLITFGLIXUBNMQKDSFZJGGOCSSRQNHBSJUVGDOIBPLMJLMTGCCFKQZBMPXOUEHPWNNDONPX");
    tmp_msg_0.value.assign("DJGLYDUUBUNCIZRWXVYTTPOCOGGNVLXXWMXEGNCABCVMCXXWYILRBGHUUWQBJSHVTHSBVOHCJKUSNQEV");
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
    msg.setTimeStamp(0.337408335928);
    msg.setSource(28672U);
    msg.setSourceEntity(149U);
    msg.setDestination(27010U);
    msg.setDestinationEntity(39U);
    msg.name.assign("NLIYDZGAEOOSQNVKXSWOAGAQBXLADOLUGJXSQRTUGMCEMRRWMUNUIDHFMSYMPFXJPOZLKFJKRAFTXTSNGLJHYBWWTNYQQVCQVAMCKFOHKZDLEQCLZDRGHSMEYCTEFYPXUVYBKVCRRTPVHGOAONUTYMJIKUQH");
    msg.visibility.assign("RYOWLYAAYTOWSNAFIMFZYEE");
    msg.scope.assign("GLERSGSUMKZFIDHVRMUBGNJNQCLODNKOPSJNBZPXAOEAFTTTIXLVPMHGXFOGDJKGXFJGEQNSETWYOSQTSMPQEEALHSPZHRHZJZXVIMEZELBYBFMYFTHIYUHMVBSQGJTYUQCUIURNBVJIOVJWBADXFRFOLTMOB");

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
    msg.setTimeStamp(0.330979533017);
    msg.setSource(46008U);
    msg.setSourceEntity(179U);
    msg.setDestination(14929U);
    msg.setDestinationEntity(84U);
    msg.name.assign("NUFXDHSAJIVWBWYIEYPUFODVRARBZLALWGETXJJFYXUQHMLCSSIIJEWRNRKBESOLKZTPHEPVNUFAHNYRHYXWMOYFMBQMTKWTZNEBTPPETROJCUYFRSXFLZKNLZTNVIDNGDKESQHECRKXVWJUORCIQGDZOCTJDCIIJFGSQLZBEZZXQFKGTYXDVPQGPALBHUZNCORTOCYMSKWXLBWMDVHJAPOQMMAUHAPFAQDJVQMMGYBISKDVUPK");
    msg.visibility.assign("DDAOHJHSRMZRUWMEIXUIAELBSRLOGQHLIABDGPCWQVEBDYBXTEUBEMQYHZJKGNKCWDXNFEUZSOTBDPZTPFYVCK");
    msg.scope.assign("YYTPUAAOFFASUUBMLCOGSMWBJIWXAQXKPLARBJDVHDGDPZHFMQDNWXCERDRRLPIJWQNBBEEFCGLUOZPMEDVVEYSLPMVSXIPYGYHYOVFKFHHDDSWOCJMYARJIRPTWGHQUBFNULTQNMPVEQNWAKNNTWLSUBTGGZEWDBMCABUVEZQMKZNXQSKECVAOXIFXKJERSGZJMCPTYXIFHUYFACGQRZHKX");

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
    msg.setTimeStamp(0.858945394518);
    msg.setSource(61589U);
    msg.setSourceEntity(22U);
    msg.setDestination(14932U);
    msg.setDestinationEntity(128U);
    msg.name.assign("WGDMJXFVNWSRXQDNTWBMNLBQROIUDCLJCUWSRKOKZPGZEAFOYUMRKMSYSNSQIHFEKRKFULNJPERAUQVJBMICQHIJYYCLUOQQJXIDKKNFVVZQHIACXSHMOWLATMMXIPAPSTAZBZKQNOXGLBP");
    msg.visibility.assign("AMLMLKEHCMLKGPHMTWLAFPONQJCXSZPFHHJBFNUSUAVFQQQIGATVCRTCYJKDSOIVEUNQDNPQMVGJKDLPVBLSAYITMOZNTYGDLOETJGUDIXWUXJKREGBMAZYYRSKKZXWPWVHUSEWGFDIVADEJUZCLQHIXDRPOUCBTHFCOBJNKXMRJVRSACZFGJBMPGNKYPPEHDCHYRREIQRWLYWNZLZHOMRQEIFBDSNBCTZTWAIZYFYBXWESXUN");
    msg.scope.assign("PHDCOSCSFBVHKCVMNXNTYUDUVCIAZOESDHWWZJEFBEJRMMQKLGENOQQLERLXEMXZGBIAZAFYMMSYUVPRWJDAXBCYKJIBCQELDIORUAYGOHTOABTKJWTQ");

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
    msg.setTimeStamp(0.0452550593914);
    msg.setSource(22389U);
    msg.setSourceEntity(247U);
    msg.setDestination(58309U);
    msg.setDestinationEntity(78U);
    msg.name.assign("ELIVMVXHWGLKJASLYPTORPWCFTBZGZWWM");

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
    msg.setTimeStamp(0.851597089973);
    msg.setSource(46264U);
    msg.setSourceEntity(71U);
    msg.setDestination(35553U);
    msg.setDestinationEntity(141U);
    msg.name.assign("BYRPLCKYOSUAZHJOTRLSNMEAAEHXSXIQMNTH");

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
    msg.setTimeStamp(0.355485106992);
    msg.setSource(31199U);
    msg.setSourceEntity(182U);
    msg.setDestination(42457U);
    msg.setDestinationEntity(63U);
    msg.name.assign("HQEPTUOYDSOWUSNDXCWVZZPLOXHKENFDGGRREUGTEBPYVVBNRZILAOCHQMBICPBBLGXOULRQHEMZAWZTQXUNVMYIJPESYJCPQKZJQHAYJBVILJSXUROCIJCXIQJJVATKGDHLPMHWOABAFXOFGVZGXYMYZRDISNOHFDYGWBSMFFTTWFZUNIMKIXNK");

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
    msg.setTimeStamp(0.979761330429);
    msg.setSource(27035U);
    msg.setSourceEntity(119U);
    msg.setDestination(50455U);
    msg.setDestinationEntity(134U);
    msg.name.assign("EUEVTJLDOYPYNJLUXECKMISIFAQFTZMGUPWYKDQBACCJJJDBCRKSCKSLLKVFXWVXREKGBWQTHIJHPEANVLPUTCZYVMAOYKYMUISYQVVPUMNBJGSXTTHPBQXGHZTURMJGLVWAFZFHMEGSJZCNDKPOXUPLLNRHXYZSIFWT");

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
    msg.setTimeStamp(0.0718156954429);
    msg.setSource(36126U);
    msg.setSourceEntity(128U);
    msg.setDestination(27507U);
    msg.setDestinationEntity(215U);
    msg.name.assign("GYOQFHBWPUQADIYPHXTAZIAPWGNIFBMQEBDTMMFZNC");

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
    msg.setTimeStamp(0.6487428431);
    msg.setSource(37106U);
    msg.setSourceEntity(110U);
    msg.setDestination(63323U);
    msg.setDestinationEntity(127U);
    msg.name.assign("JEBSYWUZHAIMBWTQZSRMCMDNGDMGILWVJPXNLQXMCFLPVYYYTHSDNY");

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
    msg.setTimeStamp(0.650016597524);
    msg.setSource(1888U);
    msg.setSourceEntity(112U);
    msg.setDestination(45095U);
    msg.setDestinationEntity(46U);
    msg.timeout = 2075818666U;

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
    msg.setTimeStamp(0.320083392625);
    msg.setSource(34671U);
    msg.setSourceEntity(168U);
    msg.setDestination(40447U);
    msg.setDestinationEntity(6U);
    msg.timeout = 804593135U;

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
    msg.setTimeStamp(0.53409158708);
    msg.setSource(34021U);
    msg.setSourceEntity(151U);
    msg.setDestination(7923U);
    msg.setDestinationEntity(133U);
    msg.timeout = 2235726566U;

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
    msg.setTimeStamp(0.946347995096);
    msg.setSource(44687U);
    msg.setSourceEntity(109U);
    msg.setDestination(28172U);
    msg.setDestinationEntity(168U);
    msg.sessid = 3319486965U;

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
    msg.setTimeStamp(0.389437861086);
    msg.setSource(36276U);
    msg.setSourceEntity(159U);
    msg.setDestination(57453U);
    msg.setDestinationEntity(20U);
    msg.sessid = 490399474U;

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
    msg.setTimeStamp(0.102845733554);
    msg.setSource(3789U);
    msg.setSourceEntity(167U);
    msg.setDestination(9186U);
    msg.setDestinationEntity(247U);
    msg.sessid = 3520088423U;

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
    msg.setTimeStamp(0.668849589025);
    msg.setSource(1980U);
    msg.setSourceEntity(61U);
    msg.setDestination(26653U);
    msg.setDestinationEntity(22U);
    msg.sessid = 14383588U;
    msg.messages.assign("BSZJPKULYOWTIUDISJHNJPSCYVXQXJOGPTIYADSCLUAIFLZEKVHZFEXIEJDJKGZSASFNTTBGSLOCBFLBGGAJGNTPGMYIBMVLUCXT");

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
    msg.setTimeStamp(0.566118657203);
    msg.setSource(34252U);
    msg.setSourceEntity(152U);
    msg.setDestination(50922U);
    msg.setDestinationEntity(216U);
    msg.sessid = 1946014340U;
    msg.messages.assign("FUDYSTLQOGOMXITWKOQQBSPMNBCMMPLPJWPEVWDGXKJJVKTTPVDFXAOXUFGGRMADJCBNPWHHWTHRVFBAGRZZZXUCU");

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
    msg.setTimeStamp(0.284575158815);
    msg.setSource(55655U);
    msg.setSourceEntity(7U);
    msg.setDestination(24721U);
    msg.setDestinationEntity(245U);
    msg.sessid = 8712650U;
    msg.messages.assign("XEKIARQWRDXCYQKCEBPHVJJDSKNZTMUBJNJHBWXQMSVNDBWDDHHTBTLUBYDEQDLOHHIOKZANETOOIQGMLHZLUFVDTUBEKQVLTRPEAKAMV");

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
    msg.setTimeStamp(0.97058048068);
    msg.setSource(37765U);
    msg.setSourceEntity(91U);
    msg.setDestination(56152U);
    msg.setDestinationEntity(99U);
    msg.sessid = 4086717659U;

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
    msg.setTimeStamp(0.66701945217);
    msg.setSource(14752U);
    msg.setSourceEntity(148U);
    msg.setDestination(65346U);
    msg.setDestinationEntity(215U);
    msg.sessid = 2368529123U;

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
    msg.setTimeStamp(0.876393553848);
    msg.setSource(1515U);
    msg.setSourceEntity(253U);
    msg.setDestination(36068U);
    msg.setDestinationEntity(89U);
    msg.sessid = 3727858131U;

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
    msg.setTimeStamp(0.36406994139);
    msg.setSource(42087U);
    msg.setSourceEntity(18U);
    msg.setDestination(32556U);
    msg.setDestinationEntity(107U);
    msg.sessid = 3940623106U;
    msg.status = 204U;

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
    msg.setTimeStamp(0.877062275002);
    msg.setSource(28036U);
    msg.setSourceEntity(162U);
    msg.setDestination(62777U);
    msg.setDestinationEntity(122U);
    msg.sessid = 4095145603U;
    msg.status = 82U;

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
    msg.setTimeStamp(0.462078491701);
    msg.setSource(38175U);
    msg.setSourceEntity(207U);
    msg.setDestination(18373U);
    msg.setDestinationEntity(143U);
    msg.sessid = 115967147U;
    msg.status = 55U;

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
    msg.setTimeStamp(0.975983090713);
    msg.setSource(35248U);
    msg.setSourceEntity(164U);
    msg.setDestination(7869U);
    msg.setDestinationEntity(204U);
    msg.name.assign("HUGSBRVTPXPORCIMDSHQGYQQDKWXVZUDDRFXEPJVSUYNKEFFHEIFNITSBURQMYLTHGKZYZBUPQHCRBPYT");

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
    msg.setTimeStamp(0.74048297628);
    msg.setSource(45839U);
    msg.setSourceEntity(167U);
    msg.setDestination(16805U);
    msg.setDestinationEntity(43U);
    msg.name.assign("TNBEWQBREYQHMTILOSYUOPLFRKTHHFZAXGNPRUGHPATGYZFWTSPNKB");

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
    msg.setTimeStamp(0.91658768695);
    msg.setSource(12223U);
    msg.setSourceEntity(235U);
    msg.setDestination(54031U);
    msg.setDestinationEntity(202U);
    msg.name.assign("MTNJWXZGYDXPSCLGVGRMNEBFXKJUTZHLYVRLIDYVWOFEEBQDNUBUMLVSPGSWYOHGJOXZQHGXAYBFTKEEILUKLFOJKKXLYJTWQFWIVQDXLCWRVSEMYHTNTDGTKEPNISCIEDIBJPYTKKZOQMCNFPOFONUKWDPIGHZDCBWUQUCJPHSIMFQAXTVRYQVPEXZRDMOJLDBYCBQRRRNSGMCAAAAFAATQUUFZBSSHKZOBG");

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
    msg.setTimeStamp(0.0465929520636);
    msg.setSource(9430U);
    msg.setSourceEntity(30U);
    msg.setDestination(59547U);
    msg.setDestinationEntity(159U);
    msg.name.assign("JJUEDICUXOVBQYQFXWMDSFCPZMBNFINVGDJAKJ");

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
    msg.setTimeStamp(0.964581190703);
    msg.setSource(34253U);
    msg.setSourceEntity(43U);
    msg.setDestination(13227U);
    msg.setDestinationEntity(27U);
    msg.name.assign("CLMOAFXGKKVVVTXJETQWUDIFLKLRBUITDLARZNSNBCHWOQBZVNTXSBCRARLJCEIZIYFWOJBNPTCYMZGYMWAKYQGABNHWOXJWMJJGDSNRIYQPFJPXEAEXFXXQSHDMZEYVHHHSPCKQPRKQNYSGOMHPHDVPV");

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
    msg.setTimeStamp(0.764347582509);
    msg.setSource(55271U);
    msg.setSourceEntity(108U);
    msg.setDestination(44024U);
    msg.setDestinationEntity(42U);
    msg.name.assign("EYCIBNKBEPMXNMCNKCQUZKWSOQOWULLKZRTEKPMGOYETRJLUAVRZAGEDNWZWCOATUWTIOJEFLBZEVRPGUOYPHUBAWZRCQMOIWQHGNAHNHJXDIJBFNKBTVDYQOGLBEBKHPFKVVSYFJVXZJISWZQVIHSJFTFIUYXLTNYMXTIHDFBRMVKXTQAJ");

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
    msg.setTimeStamp(0.0535835874823);
    msg.setSource(10592U);
    msg.setSourceEntity(100U);
    msg.setDestination(23305U);
    msg.setDestinationEntity(200U);
    msg.type = 7U;
    msg.error.assign("OXDSLUZKGDXRISRBSFWZGMRALRCHXOVFLPEKKNVNZNDAGHFXOHGPCCWFKYVZUWVXRHZUEPOQBDMRGSZNGKNUSMEJFWWYNACHQQJUIRHTIWTXLZLRJUCOWXSMCNLEJTBOGFDTDKNA");

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
    msg.setTimeStamp(0.986815939641);
    msg.setSource(59432U);
    msg.setSourceEntity(150U);
    msg.setDestination(65495U);
    msg.setDestinationEntity(57U);
    msg.type = 76U;
    msg.error.assign("WTVYMNPLJQLYNKMIGIPNEYGZBCJOBHNJWAYKXDPUPQDMDDXHCVAKZTEAGAMXIPIXDCDHFFYFVWUOVZRRWVBUSWSCFMEKGTFMSDLQTMBUBXUWXLKOGQLITEVIRWEGRBFWNYZOHTEDWQHHJZACFXRDIXPKJFVQMLQBKSRAS");

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
    msg.setTimeStamp(0.287883426662);
    msg.setSource(64963U);
    msg.setSourceEntity(111U);
    msg.setDestination(40965U);
    msg.setDestinationEntity(150U);
    msg.type = 208U;
    msg.error.assign("BDZQLMJOZPDSXOHRCRBXRKYBNZLOGJCRXRWSXZIQLAXAJCHAPNDIEVZTHACNPKYSKFGHMQVLHYKVJUZVNERMJMSPQHUWASYHSPTFIPBGOTGWBSAJCIFDYGBLGKJUQMTZMAJNNMYXKWLIXKVTZAQCQIFAFCETFROJVDUTILDGFCMSBGLDEBWXPKPYHNQUDVQTEOVOFWLZYAEUTUEWNWRFCCGTGDMZEQUWXJISYPIEVXWRHB");

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
    msg.setTimeStamp(0.100245515316);
    msg.setSource(29752U);
    msg.setSourceEntity(12U);
    msg.setDestination(31635U);
    msg.setDestinationEntity(111U);
    msg.seq = 8921U;
    msg.sys_dst.assign("EIKTUVKSQQBXKUFDV");
    msg.flags = 157U;
    const char tmp_msg_0[] = {13, -128, -121, 11, 62, 6, -110, 69, -92, 81, 73, 17, 99, 77, -19, -87, 63, 10, 102, 107, -51, -127, 11, 120, -87, -4, -70, -121, -57, 39, -77, 24, -41, -8, 116};
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
    msg.setTimeStamp(0.478080832907);
    msg.setSource(57564U);
    msg.setSourceEntity(84U);
    msg.setDestination(35140U);
    msg.setDestinationEntity(69U);
    msg.seq = 44647U;
    msg.sys_dst.assign("FTTAQPVWXEAXNBZWDCCBGWQSSIBRFDXOQZTTXYJLVMOBVXMDILEYMBKMOLIFJTOERFNKZCZNXVWRFSRHTLQKTMFWPEUZNMFZEQAKQZKYUGSYQFADDVYKDEHJZAGPXCEIJPEGSCGCCZHYJDGSUUMCGOSNNLXLBGWOYOJYKBVINGJGJAPRRCIUPZQRVUDOXKWYNUVURTUMBFVQBTMBINJLHLWHCISAWEJ");
    msg.flags = 17U;
    const char tmp_msg_0[] = {-126, -108, 123, 120, 110, -19, 92, -23, -51, -90, 48, 82, 115, 51, -37, -79, -63, -103};
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
    msg.setTimeStamp(0.927789760068);
    msg.setSource(53246U);
    msg.setSourceEntity(85U);
    msg.setDestination(65469U);
    msg.setDestinationEntity(204U);
    msg.seq = 42510U;
    msg.sys_dst.assign("OSBMFFVDCNLOGMTSNAPVQVUERAFPEUYOTXQQUZCBJKZTSKZVGMKYYABBCNQOJWCIIXVLZHNQPJHSGLSUWZXXDZOPBDULESIIRKAAPRVDMMEFQAEJUCBGTILT");
    msg.flags = 26U;
    const char tmp_msg_0[] = {70, 105, -81, 113, -104, 112, 58, 12, 83, 98, -65, 85, 49, -100, 116, -61, -86, -11, -3, -94, -67, -7, -117, -16, 96, 39, 57, -48, 102, 12, -60, -4, -27, 28, 71, 60, -25, 72, -66, 83, 50, 120, 23, -62, 97, -10, 48, -91, -102, 121, 4, 94, -98, -52, 45, -100, -79, -38, -18, -1, 46, 58, -35, -106, -79, -107, 73, 76, 29, -74, -127, 77, 18, -72, -121, -52, -30, -35, -110, 0, 41, 97, 15, 64, -72, 80, -3, -119, -77, -65};
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
    msg.setTimeStamp(0.328320334558);
    msg.setSource(30946U);
    msg.setSourceEntity(100U);
    msg.setDestination(4797U);
    msg.setDestinationEntity(124U);
    msg.sys_src.assign("QFKAHTGNNIMLIBUYEZVRZQ");
    msg.sys_dst.assign("LERFWMWSILTBRAXRLEMNTLHWCXESNRDBGULNPJFFBBKMZIDBTVFOKGYUOXUAQMRETTQAPRLVYCHHKSOYNLSXQVOJTTMJGPJSAZPYVHEHFNBJZSCXXTBOHCVYSHUKWXRDCAXAFVVWNTRXIQHPIUQF");
    msg.flags = 84U;
    const char tmp_msg_0[] = {-25, -67, -41, 73, 111, -30, -46, -17, -114, 45, -12, 80, -66, 92, 63, -24, -79, 65, -47, -80, 30, 99, 47, 56, -115, -5, 43, -75, -113, 118, 101, 45, -9, -32, 107, -27, -58, -81, -105, 107, 123, -94, -58, -53, 20, 75, 115, 41, -84, -50, 35, 22, -41, -7, 40, -85, 62, -28, 16, 100, -95, 76, -5, 20, 125, 11, 62, 107, 84, -93, 23, 21, -72};
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
    msg.setTimeStamp(0.189743096499);
    msg.setSource(16618U);
    msg.setSourceEntity(212U);
    msg.setDestination(9846U);
    msg.setDestinationEntity(198U);
    msg.sys_src.assign("BYQSUPLYZZPOFZTFDIKCUBMCDIHQXZMQZZLTNSHULSNJRSWGRBVYBMWEOPCJAFKDCNKJICWNPUIRBCETXYORXLOEUMDIDEWKHHYFVJFMAKJSBXUPDXWWGVDFKOGXTDZPKAMUKUBYEAXSNHPUTVHQEGSMGMEASFLEMFLTOIARTCIXMOHCQWYTOYXOGKNQFEGAJEHLHRNLZNIVIQ");
    msg.sys_dst.assign("HUAQEFPRVHGTAVROAMWRYVLQSAKAQTEXGNBZCOJFJDYNHLEWIDPXWBHULYWNGMXNZSIGRPVCPVIXUKOTZFBXRMZJNCSMJMTDLJFPYOWOUJGCQCVWEMPFIDIQBDEHAZREGUIHVPCCLBOLPRASQXEKKBUTYRNPEQTYISFYGRXDJFYTZYMOLCODMNWZDHZKKNMXYXEJDJ");
    msg.flags = 134U;
    const char tmp_msg_0[] = {-5, -125, -122, 11, 73, 98, -59, -107, -25, 34, 3, -95, -59, 61, -124, 75, 51, -64, -62, -81, 54, -86, -56, -4, 76, 94, 67, -54, -76, 94, -74, 22, -44, -86, -28, -26, 74, 114, 33, -85, 105, 77, 47, -111, -99, 55, -12, 55, 97, -113, -120, 61, 66, 105, -69, 54, -14, 95, 2, 112, -63, 108, 6, 26, -64, 8, 23, 39, 45, 30, 66, 24, 106, -118, -87, 81, -47, 91, 91, -17, 71, 85, 40, -113, 96, -32, -99, -93, -67, 79, 94, 29, -112, -76, -15, 42, 15, 82, -17, -49, -111, -86, -43, 52, 22, 79, -18, 84, -64, -88, 100, 114, -83, 3, -37, 103, 65, -61, -1, 89, 109, 61, -85, -70, 63, -95, 111, -87, 41, 114, 41};
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
    msg.setTimeStamp(0.645295123936);
    msg.setSource(49466U);
    msg.setSourceEntity(120U);
    msg.setDestination(55508U);
    msg.setDestinationEntity(172U);
    msg.sys_src.assign("OGTIDQKARNZHTCCSJNSLAKNHOGUREGSNQNXWVVBESLBJDFHUWTMRCEJCXWG");
    msg.sys_dst.assign("SXAQWPSPHJUVLXWPVZYULKPZYPOYMMOASIMGNVTDFMWZBVTLQZSJUKHARVYPYCZACOZXAEGNVTNNJFFPS");
    msg.flags = 187U;
    const char tmp_msg_0[] = {56, -116, -50, -81, 67, 86, -1, -73, -86, -82, -118, -57, 64, 123, -122, 8, -67, 114, 103, -120, -15, -121, 12, -61, 60, 84, -127, -3, -75, 57, 43, -86, 96, -123, 71, 106, -8, -91, 102, -124, 14, -100, 122, -47, 112, 29, 91, -96, -107, 125, 33, -5, 91, 76, -119, 13, -68, -30, -53, -14, 119, -62, 31, -42, -61, 121, -48, -78, -35, -54, 39, -1, 16, -128, 112, -67, -7, 118, 19, -75, 53, -36, -119, -61, -85, -99, -89, 14};
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
    msg.setTimeStamp(0.562730024208);
    msg.setSource(11361U);
    msg.setSourceEntity(59U);
    msg.setDestination(48244U);
    msg.setDestinationEntity(200U);
    msg.seq = 23873U;
    msg.value = 72U;
    msg.error.assign("RUTCBYPYOTHSZUJFCQLSHQDKXJPBYCQBNRPTPCVLAIGSMJKFZAPSUIREVPNGLY");

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
    msg.setTimeStamp(0.433706791772);
    msg.setSource(48469U);
    msg.setSourceEntity(194U);
    msg.setDestination(59645U);
    msg.setDestinationEntity(71U);
    msg.seq = 49332U;
    msg.value = 22U;
    msg.error.assign("OSWUWQVYDFLNFBEXNCKSIOZCPUYOVDZXBALMKHEGIRHYGNSWMCHOVDMAWXIYPTMGTLYSONPPCDALYKKUAAZKJSQNKWXPWBAILXZBFSRWTYHCCTQMVEGRPBYHZXHUIJMEUVUUOWXPVBQDEZRYMAKIJQFFESURTDPRGVFILZSNKLEOHCGJXZPFLXZHRCENETGFTJLDVDZHDJAQBSVUMRQIBRTSMJQLUDJBXQRYGOAIWCG");

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
    msg.setTimeStamp(0.542492711639);
    msg.setSource(11374U);
    msg.setSourceEntity(134U);
    msg.setDestination(48429U);
    msg.setDestinationEntity(30U);
    msg.seq = 3336U;
    msg.value = 153U;
    msg.error.assign("BSHDZBUSJOIJYLABEOWCJRMGZAWYPHKGIIMOPNWLMOYRPUXLBMUTWVUBXZQPGDUMXVXHSFFLREMNLMBMQURABPVNVYNIGQRVXGFLJPEWXPCLRGVUOXJQBJAOFUQAZDUFYIDNRQLCRPYXWWSGSNBKCJQNVVRWTLSYFEDHPCAQPZUFTYDCDOINDHKBVEQZZETGSCMLCO");

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
    msg.setTimeStamp(0.905782319009);
    msg.setSource(62516U);
    msg.setSourceEntity(117U);
    msg.setDestination(13467U);
    msg.setDestinationEntity(237U);
    msg.seq = 59431U;
    msg.sys.assign("DDFUIVABVXHVYIJPNGXDNAOTZNRUWRIGKHONTEYIBMPTJSPBYGIZHQRLOMXCKOMVMDA");
    msg.value = 0.664328154729;

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
    msg.setTimeStamp(0.386926467997);
    msg.setSource(11008U);
    msg.setSourceEntity(119U);
    msg.setDestination(8551U);
    msg.setDestinationEntity(178U);
    msg.seq = 32453U;
    msg.sys.assign("RPCSYYDSBWNUQEWIEHCWGCIQMNIMDFMDXZYGMUAMSEYXBFLIIFOHLDPSDUPHMOVRVJJNRUEJJMSKCCHHJWKTQWFOEBCNSEMNAPSLRVCYSBVWROGQVAQTSQZWQFYNVPDTDJRYFHGFXPPAALEGKKQBUVRUV");
    msg.value = 0.631786846752;

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
    msg.setTimeStamp(0.972265344158);
    msg.setSource(57640U);
    msg.setSourceEntity(233U);
    msg.setDestination(34893U);
    msg.setDestinationEntity(234U);
    msg.seq = 18261U;
    msg.sys.assign("USUIZQFCKONYSJROULZHZAMKMSAHERLN");
    msg.value = 0.776977999826;

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
    msg.setTimeStamp(0.28975739319);
    msg.setSource(271U);
    msg.setSourceEntity(124U);
    msg.setDestination(34341U);
    msg.setDestinationEntity(169U);
    msg.seq = 47591U;
    msg.sys_dst.assign("HYJEYVTVZPRKJPBGNRCBACBYDVQENGGIAHHRUUFPZDMJGLWHOUYD");
    msg.timeout = 0.907645810854;

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
    msg.setTimeStamp(0.0302400796642);
    msg.setSource(62961U);
    msg.setSourceEntity(1U);
    msg.setDestination(16434U);
    msg.setDestinationEntity(207U);
    msg.seq = 43757U;
    msg.sys_dst.assign("HMIPMDBMGEXOBENQMBUCJFCXLXPZFODBPFAPKNVIVZDOCELLQTYBZEXKIUKIITXWSPRHRTQDJTHWOULKIGDKVNNMRC");
    msg.timeout = 0.223214105893;

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
    msg.setTimeStamp(0.842703522754);
    msg.setSource(45724U);
    msg.setSourceEntity(27U);
    msg.setDestination(46854U);
    msg.setDestinationEntity(43U);
    msg.seq = 54055U;
    msg.sys_dst.assign("EZROEUNMZBHBPFODQALJZYORQXPPLTAZOVQJRAKHQKOJRUPLGVKWXAZIGSGUHKDVWCDLCJEWPBLUINXCIRIXOUTDAYQXQIGTEOTXUMCMUMCYEJCQHSNWYMUTASEYHDFDISETEOVXVPYRJQTCKWZVCEGBJKJZGVWYLPZOBWBWVFHLTNZBAWIRCRJSNNLYNKMHYAKSDVGBSMTNHUB");
    msg.timeout = 0.562401056449;

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
    msg.setTimeStamp(0.264407260277);
    msg.setSource(31832U);
    msg.setSourceEntity(60U);
    msg.setDestination(43134U);
    msg.setDestinationEntity(58U);
    msg.action = 178U;
    msg.longain = 0.542819291108;
    msg.latgain = 0.196775949801;
    msg.bondthick = 1553220046U;
    msg.leadgain = 0.599621032614;
    msg.deconflgain = 0.766839850394;

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
    msg.setTimeStamp(0.643993494061);
    msg.setSource(59121U);
    msg.setSourceEntity(194U);
    msg.setDestination(16272U);
    msg.setDestinationEntity(78U);
    msg.action = 154U;
    msg.longain = 0.669660457348;
    msg.latgain = 0.919847468529;
    msg.bondthick = 887651638U;
    msg.leadgain = 0.43310107689;
    msg.deconflgain = 0.0148987313082;

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
    msg.setTimeStamp(0.954906957848);
    msg.setSource(19044U);
    msg.setSourceEntity(89U);
    msg.setDestination(36129U);
    msg.setDestinationEntity(154U);
    msg.action = 104U;
    msg.longain = 0.900376315252;
    msg.latgain = 0.549017976215;
    msg.bondthick = 1146854605U;
    msg.leadgain = 0.858758403954;
    msg.deconflgain = 0.370224961424;

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
    msg.setTimeStamp(0.277000880107);
    msg.setSource(32011U);
    msg.setSourceEntity(189U);
    msg.setDestination(46434U);
    msg.setDestinationEntity(138U);
    msg.err_mean = 0.7266197994;
    msg.dist_min_abs = 0.739617974467;
    msg.dist_min_mean = 0.164958774663;

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
    msg.setTimeStamp(0.590332495762);
    msg.setSource(27640U);
    msg.setSourceEntity(138U);
    msg.setDestination(25740U);
    msg.setDestinationEntity(142U);
    msg.err_mean = 0.81415741613;
    msg.dist_min_abs = 0.685919137203;
    msg.dist_min_mean = 0.121508188461;

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
    msg.setTimeStamp(0.988973238127);
    msg.setSource(15524U);
    msg.setSourceEntity(42U);
    msg.setDestination(8787U);
    msg.setDestinationEntity(27U);
    msg.err_mean = 0.270738594396;
    msg.dist_min_abs = 0.715367618515;
    msg.dist_min_mean = 0.409694832711;

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
    msg.setTimeStamp(0.475050460803);
    msg.setSource(45330U);
    msg.setSourceEntity(247U);
    msg.setDestination(61787U);
    msg.setDestinationEntity(141U);
    msg.action = 76U;
    msg.lon_gain = 0.317475015843;
    msg.lat_gain = 0.46770384534;
    msg.bond_thick = 0.104064537669;
    msg.lead_gain = 0.740473016232;
    msg.deconfl_gain = 0.688414202979;
    msg.accel_switch_gain = 0.118840307155;
    msg.safe_dist = 0.753753924967;
    msg.deconflict_offset = 0.356873728253;
    msg.accel_safe_margin = 0.793227258354;
    msg.accel_lim_x = 0.508294602145;

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
    msg.setTimeStamp(0.0172220814685);
    msg.setSource(27232U);
    msg.setSourceEntity(194U);
    msg.setDestination(64095U);
    msg.setDestinationEntity(29U);
    msg.action = 81U;
    msg.lon_gain = 0.556128034427;
    msg.lat_gain = 0.0709728067039;
    msg.bond_thick = 0.298759571304;
    msg.lead_gain = 0.901582615609;
    msg.deconfl_gain = 0.10070261359;
    msg.accel_switch_gain = 0.130520968273;
    msg.safe_dist = 0.194519136112;
    msg.deconflict_offset = 0.983020852797;
    msg.accel_safe_margin = 0.235507542323;
    msg.accel_lim_x = 0.317560250344;

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
    msg.setTimeStamp(0.961660788885);
    msg.setSource(30584U);
    msg.setSourceEntity(138U);
    msg.setDestination(45970U);
    msg.setDestinationEntity(113U);
    msg.action = 55U;
    msg.lon_gain = 0.42233269155;
    msg.lat_gain = 0.901919135366;
    msg.bond_thick = 0.752913883227;
    msg.lead_gain = 0.551474717361;
    msg.deconfl_gain = 0.234694873675;
    msg.accel_switch_gain = 0.133435957527;
    msg.safe_dist = 0.414546293323;
    msg.deconflict_offset = 0.0592156174308;
    msg.accel_safe_margin = 0.813991649298;
    msg.accel_lim_x = 0.546673269511;

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
    msg.setTimeStamp(0.886843325679);
    msg.setSource(1964U);
    msg.setSourceEntity(241U);
    msg.setDestination(19921U);
    msg.setDestinationEntity(125U);
    msg.type = 161U;
    msg.op = 89U;
    msg.err_mean = 0.259051829265;
    msg.dist_min_abs = 0.783510782803;
    msg.dist_min_mean = 0.509275837461;
    msg.roll_rate_mean = 0.482150204568;
    msg.time = 0.868866328657;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 61U;
    tmp_msg_0.lon_gain = 0.888594265509;
    tmp_msg_0.lat_gain = 0.83056542873;
    tmp_msg_0.bond_thick = 0.678402415351;
    tmp_msg_0.lead_gain = 0.479073384479;
    tmp_msg_0.deconfl_gain = 0.103140395732;
    tmp_msg_0.accel_switch_gain = 0.765561170482;
    tmp_msg_0.safe_dist = 0.144385928384;
    tmp_msg_0.deconflict_offset = 0.841652892442;
    tmp_msg_0.accel_safe_margin = 0.239887965666;
    tmp_msg_0.accel_lim_x = 0.607794836591;
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
    msg.setTimeStamp(0.400539631522);
    msg.setSource(51778U);
    msg.setSourceEntity(185U);
    msg.setDestination(64889U);
    msg.setDestinationEntity(127U);
    msg.type = 200U;
    msg.op = 127U;
    msg.err_mean = 0.952504019448;
    msg.dist_min_abs = 0.901060820677;
    msg.dist_min_mean = 0.406382992288;
    msg.roll_rate_mean = 0.841363310651;
    msg.time = 0.498786896571;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 159U;
    tmp_msg_0.lon_gain = 0.365712903142;
    tmp_msg_0.lat_gain = 0.691695017235;
    tmp_msg_0.bond_thick = 0.406725359285;
    tmp_msg_0.lead_gain = 0.672791298224;
    tmp_msg_0.deconfl_gain = 0.633266248087;
    tmp_msg_0.accel_switch_gain = 0.808145233233;
    tmp_msg_0.safe_dist = 0.898342570024;
    tmp_msg_0.deconflict_offset = 0.510455557695;
    tmp_msg_0.accel_safe_margin = 0.383898453795;
    tmp_msg_0.accel_lim_x = 0.501772570418;
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
    msg.setTimeStamp(0.667343759973);
    msg.setSource(48469U);
    msg.setSourceEntity(37U);
    msg.setDestination(37938U);
    msg.setDestinationEntity(211U);
    msg.type = 231U;
    msg.op = 188U;
    msg.err_mean = 0.241031544886;
    msg.dist_min_abs = 0.73268003415;
    msg.dist_min_mean = 0.702734453369;
    msg.roll_rate_mean = 0.666929190333;
    msg.time = 0.360934312842;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 48U;
    tmp_msg_0.lon_gain = 0.194583366052;
    tmp_msg_0.lat_gain = 0.779627778565;
    tmp_msg_0.bond_thick = 0.035209623948;
    tmp_msg_0.lead_gain = 0.681904283553;
    tmp_msg_0.deconfl_gain = 0.349308546697;
    tmp_msg_0.accel_switch_gain = 0.769482260509;
    tmp_msg_0.safe_dist = 0.225408098056;
    tmp_msg_0.deconflict_offset = 0.0679137437293;
    tmp_msg_0.accel_safe_margin = 0.637891212338;
    tmp_msg_0.accel_lim_x = 0.139223635586;
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
    msg.setTimeStamp(0.18257013866);
    msg.setSource(53823U);
    msg.setSourceEntity(192U);
    msg.setDestination(25245U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.449093400427;
    msg.lon = 0.589045003062;
    msg.eta = 3472711021U;
    msg.duration = 17043U;

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
    msg.setTimeStamp(0.273242972757);
    msg.setSource(13185U);
    msg.setSourceEntity(133U);
    msg.setDestination(18479U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.654980192702;
    msg.lon = 0.665475535693;
    msg.eta = 2902541964U;
    msg.duration = 9987U;

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
    msg.setTimeStamp(0.638087407047);
    msg.setSource(19989U);
    msg.setSourceEntity(20U);
    msg.setDestination(41006U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.03157920677;
    msg.lon = 0.264376026421;
    msg.eta = 2815147759U;
    msg.duration = 48114U;

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
    msg.setTimeStamp(0.299108959999);
    msg.setSource(29634U);
    msg.setSourceEntity(149U);
    msg.setDestination(60320U);
    msg.setDestinationEntity(249U);
    msg.plan_id = 48034U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.73489860621;
    tmp_msg_0.lon = 0.76184804425;
    tmp_msg_0.eta = 1240912341U;
    tmp_msg_0.duration = 48688U;
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
    msg.setTimeStamp(0.71923565501);
    msg.setSource(60589U);
    msg.setSourceEntity(169U);
    msg.setDestination(24581U);
    msg.setDestinationEntity(122U);
    msg.plan_id = 55002U;

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
    msg.setTimeStamp(0.779105614342);
    msg.setSource(18718U);
    msg.setSourceEntity(239U);
    msg.setDestination(2815U);
    msg.setDestinationEntity(230U);
    msg.plan_id = 24117U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.375154190187;
    tmp_msg_0.lon = 0.364480835172;
    tmp_msg_0.eta = 1351098518U;
    tmp_msg_0.duration = 25669U;
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
    msg.setTimeStamp(0.345347471204);
    msg.setSource(54541U);
    msg.setSourceEntity(80U);
    msg.setDestination(15886U);
    msg.setDestinationEntity(195U);
    msg.type = 25U;
    msg.command = 96U;
    msg.settings.assign("LZRYEYJSWXUNNIEIEBYLWNSSMPXJARHDMIDYNMYXAGU");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 42588U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.47538332084;
    tmp_tmp_msg_0_0.lon = 0.139200688349;
    tmp_tmp_msg_0_0.eta = 616232324U;
    tmp_tmp_msg_0_0.duration = 62122U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("UWEKKJTCZOIKSOTHNARWUCUSCNLPSDMGLDEOZSQQCOQUYPFLXUHTJJPFDBPXLRLBRWARZHYYKLVVINZWJHBIBASGZLBEJBRCUBEAID");

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
    msg.setTimeStamp(0.102531289766);
    msg.setSource(1628U);
    msg.setSourceEntity(236U);
    msg.setDestination(55884U);
    msg.setDestinationEntity(193U);
    msg.type = 53U;
    msg.command = 34U;
    msg.settings.assign("DZPOJLWKFMURGXCXPYKGIGSVAJTFRJLBGWEUXUASWHADDD");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 42645U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0518242727605;
    tmp_tmp_msg_0_0.lon = 0.73979461672;
    tmp_tmp_msg_0_0.eta = 1892741204U;
    tmp_tmp_msg_0_0.duration = 20718U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("PALVMCXXQLJTPUZUXNFNDSDYRFBUTSXIYMXZHBTOOMTKUNVXCWKJGS");

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
    msg.setTimeStamp(0.859746535727);
    msg.setSource(9708U);
    msg.setSourceEntity(194U);
    msg.setDestination(29100U);
    msg.setDestinationEntity(130U);
    msg.type = 100U;
    msg.command = 128U;
    msg.settings.assign("GOCNXQSOXRUTHPHDBHYIKSVWEMZTJSCVPWJEGSKRBAKKKXVQSPAEKGIBYGZFWUAQXPLHDGTYYHARBFZULHKULUQVXNDQLMSVRMLSBORSTLJQHMUNHDDAJPCMNUKWEVFZROFLTNXZTWSWLZBPTCFRVFCJCIIIMWIVAWWYNPIYOWNYKTNUP");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 65467U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.64095255559;
    tmp_tmp_msg_0_0.lon = 0.704801046101;
    tmp_tmp_msg_0_0.eta = 1991284909U;
    tmp_tmp_msg_0_0.duration = 56519U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("YBICJKGOZTODZPTTQVDSUYLHNJKQADZRQBWATKTDOEFBAUAAUGPJMRDRYSUBLEEUHUDHBMJIOIQNPJNRVWWMBWOCGFGIXMNZZGPJIFAGLCZVZLMACULHAXHFYKMWDEEEVNTONGFDQTURRXSSLEXWJHVIGCWTWGVMYUVEIYNOXJRLSDPRCEHAAOLWEGZLYKVQHBPKVKXPKSLXVXQZZDBPNUJYKFRMSRJPYQSINIH");

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
    msg.setTimeStamp(0.831108181761);
    msg.setSource(3409U);
    msg.setSourceEntity(49U);
    msg.setDestination(44846U);
    msg.setDestinationEntity(174U);
    msg.state = 184U;
    msg.plan_id = 22932U;
    msg.wpt_id = 223U;
    msg.settings_chk = 46560U;

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
    msg.setTimeStamp(0.0341556930669);
    msg.setSource(23931U);
    msg.setSourceEntity(223U);
    msg.setDestination(5530U);
    msg.setDestinationEntity(182U);
    msg.state = 74U;
    msg.plan_id = 23437U;
    msg.wpt_id = 42U;
    msg.settings_chk = 50063U;

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
    msg.setTimeStamp(0.784707502139);
    msg.setSource(44216U);
    msg.setSourceEntity(112U);
    msg.setDestination(44486U);
    msg.setDestinationEntity(217U);
    msg.state = 104U;
    msg.plan_id = 1209U;
    msg.wpt_id = 181U;
    msg.settings_chk = 13612U;

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
    msg.setTimeStamp(0.23359649076);
    msg.setSource(10256U);
    msg.setSourceEntity(206U);
    msg.setDestination(14593U);
    msg.setDestinationEntity(121U);
    msg.uid = 149U;
    msg.frag_number = 148U;
    msg.num_frags = 40U;
    const char tmp_msg_0[] = {78, -30, 43, -65, 102, -104, 88, 93, -22, 91, -67, -112, -82, -95, 93, -43, -78, 30, 39, -11, -6, 84, 63, 75, 117, 92, -65, -15, 40, 117, -104, -26, -99, 7, 47, -103, 91, -12, 10, -67, 44, 77, -107, -56, -53, 42, 10, 72, 40, -8, -43, -114, 31, 44, -92, -10, -83, 91, -53, -116, 11, 35, -42, 102, -28, 84, -97, -5, -73, -63, 0, 42, 78, -92, 59, 3, 108, 105, 38, -1, 79, 7, 124, 95, -53, 86, -35, -67, -67, 107, -77, -27, 48, -99, -91, -29, 77, -30, -108, -105, -42, -74, 63, -125, 90, -69, 78, -75, -119, 124, 85, 57, -62, -87, -126, -21, -75, 12, 107, 9, -76, -26, -75, 40, 95, 11, 11, -83, -32, 74, 30, 65, 2, 100, -99, -48, 40, -11, 97, 105, -84, 68, 21, 87, 13, -20, 37, -121, -107, -98, -88, 23, -56, -6, 95, 55, 95, -37, -122, -27, 1, 90, -39, -112, 102, 54, -42, 22, 61, 105, -7, -122, -68, -120, 107, -50, -1, -113, 102, -104, -53, -48, -75};
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
    msg.setTimeStamp(0.36986179807);
    msg.setSource(32246U);
    msg.setSourceEntity(164U);
    msg.setDestination(49483U);
    msg.setDestinationEntity(81U);
    msg.uid = 52U;
    msg.frag_number = 43U;
    msg.num_frags = 213U;
    const char tmp_msg_0[] = {-127, 13, 29, -50, 6, 90, 0, -42, -110, -9, 95, 76, 38, -4, 70, -85, 57, -60, -11, 21, -83, -48, 49, -114, 14, 58, -28, 48, 96, -40, 2, 84, 17, -53, 74, 16, -112, -91, 123, -49, 99, -39, 19, 12, -95, -121, 109, 38, -32, 40, -92, -35, 6, 84, -46, 116, 31, 53, -20, 41, -99, -66, -125, 76, -106, -34, 125, -12, 69, -113, 94, 82, 92, 88, -11, -63, 69, 12, -55, -59, 84, 36, -9, -118, 40, 107, 81, 113, 106, -115, -80, -96, 87, -93, -89, -85, 100, -105, -28, 80, 56, 72, 86, -28, -81, -97, 63, -8, 48, 95, 87};
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
    msg.setTimeStamp(0.637803782921);
    msg.setSource(51076U);
    msg.setSourceEntity(162U);
    msg.setDestination(15816U);
    msg.setDestinationEntity(57U);
    msg.uid = 21U;
    msg.frag_number = 11U;
    msg.num_frags = 172U;
    const char tmp_msg_0[] = {-25, 29, 70, -62, -110, -26, -80, -73, -58, 27, 88, -53, 38, -107, -48, 47, 42, -53, 31, 54, 12, -79, 90, -106, -37, 108, -4, 72, 42, 104, 44, 48, -79, -75, 87, 89, 75, 40, -15, -12, -63, 26, -87, -127, 41, -116, -53, 73, 43, 57, 73, 36, -109, -43, 76, 63, -48, 64, -72, -8, 87, -35, 0, -15, -3, -96, 90, 41, 13, -124, 49, 103, 51, 63, -51, 112, 96, 7, -62, 16, 118, -5, 74, 29, 123, -2, 34, -71, -95, 14, 24, 114, -118, 96, -111, -5, 90, 49, 12, 13, -47, -118, 93, -48, 17, 48, 67, -31, 117, -58, 15, 39, 78, 126, 75, -117, -116, 61, 99, 98, -100, -10, -75, -123, 4, 33, 2, 11, 74, 40, 21, 76, -18, 73, -106, -72, 26, -59, 118, -55, 4, 50, 109, 84, 10, -14, -60, 91, -31, 35, 46, 29, 112, 25, 13, 68, -81, 114, 65, -28, 19, -74, 78, -52, -100, 77, 52, -115, -60, 99, 21, 118, -58, 67, 67, -20, 45, 24, 48, 55, -3, -40, 70, 105, -41, -34, 23, -20, -5, -87, 59, -79, 71, 46, 45, 107, 25, -19, 32, 108, -25, 14, -47, 5, -37, 35, -92, -105, 106, 109, -44, -34, 34, 29, 95, 13, -54, -121, -16, 120, -51};
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
    msg.setTimeStamp(0.603793806141);
    msg.setSource(5806U);
    msg.setSourceEntity(163U);
    msg.setDestination(23238U);
    msg.setDestinationEntity(90U);
    msg.content_type.assign("KERFVPINZBMRY");
    const char tmp_msg_0[] = {-9, 115, -10, 104, 85, 14, 110, 0, 58, 116, -63, 80, -123, 12, -12, -59, 55, -9, -54, -23, -59, 69, -85, -78, 0, 93, 16, 53, -15, 99, 14, 64, 18, -30, 52, 109, 101, 29, -106, 3, -66, 3, 104, 89, -13, 60, -35, -90, -57, -85, 23, 101, 13, 90, -85, 90, 109, -56, 111, -62, 47, 76, -67, 63, 18, -5, -110, -112, -119, -60, 47, 95, -107, -36, 42, -34, -106, 30, -67, -10, 104, 117, 108, 107, -68, 9, -27, 31, -73, 118, 77, 123, 50, -45, -98, -62, -107, -2, -106, -33, -110, -118, 126, 108, 45, -102, -122, -9, 6, 91, -14, -105, -23, -52, -38, -120, -11, -109, 69, 82, -105, -64, 29, 122, -111, -127, 67, 91, -124, -20, 92, -29, 25, 18, 118, 16, 65, 64, -64, -83, 98, 71, 98, -31, 56, 76, 57, 57, 22, -114, 62, 32, 0, -85, 62, 92, -32, -127};
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
    msg.setTimeStamp(0.113584322694);
    msg.setSource(25557U);
    msg.setSourceEntity(173U);
    msg.setDestination(28574U);
    msg.setDestinationEntity(177U);
    msg.content_type.assign("EVGISLNDQNYYGPOHGDWOIWHDQRTAANIDPRWRWFVMRNRBKZVFLBHUWKQBWVJNJCNQAGXLJJHUZULPKDYAOZAEDCTFCMRSQDXRUIWVHGRCIBUHMSIYWGPPYDAICGWULAFVNVPEJTXOBHVYLEUJOORIPZ");
    const char tmp_msg_0[] = {-56, -127, 7, 26, 108, 41, 3, 63, 30, -112, 90, -73, -59, -72, -28, 17, -38, 83, 117, -92, -127, -86, -104, 94, 14, -8, -95, -9, -64, -1, 74, -109, 18, 92, 89, -2, -3, 3, -22, 16, 56, 60, 76, 39, -27, -113, 5, -113, -23, -40, -85, -17, -17, -61, 103, -65, -116, -63, -106, -22, 89, 57, -10, -59, -82, 79, -69, -51, -76, -56, 77};
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
    msg.setTimeStamp(0.905586991237);
    msg.setSource(61397U);
    msg.setSourceEntity(36U);
    msg.setDestination(26764U);
    msg.setDestinationEntity(186U);
    msg.content_type.assign("YTDTJJFDSNQMHMYLFEMDYHOGNWTPJFSPSBRKEFVNHYWIIVVCLROUALVEMQYZMQABYPGKNPDUMQIZBMQZBCRXWSATGNNKTJKAWUZSDTHLIHULCIOXSJPQTGMAOQDXOWXLCPYIXSEVWEOJHNXQFWJEFTXIEVRPORJBHLVAKGLLOSNDUUCCGVUZNBYFADYWSCZTJKDNTEFHHGEZRZQBZYERIRKURAPKBAF");
    const char tmp_msg_0[] = {-82, 10, -121, -91, -127, -84, -102, 95, 38, 126, -124, 93, -69, -35, -117, 82, 63, 4, 76, -77, -91, 38, 117, -50, 72, 105, 83, -6, 76, -108, -44, -92, 100, 21, -127, 89, 88, 108, -8, 114, -88, -95, -120, -100, 50, 1, 30, -91, 1, 18, -94, 16, 104, -53, 69, -55, 25, -53, -110, -108, -14, -25, 119, 6, -85, -51, -28, -32, 37, -25, -48, -31, -121, 62, -100, -107, 0, -11, 88, -76, 109, 113, 94, 45, 63, -8, -101, -63, -31, -106, -54, -64, 83, -81, 47, 8, -1, -96, -116, -36, -66, 51, -126, 76, -118, -14, -53, 6, 22, 103, -127, 24, 55, 113, -115, -26, 8, 111, -30, 26, -79, -31, -11, -62, 19, 73, -74, 112, -124, -87, -20, 25, -51, 124, 9, -118, -3, -28, 108, -92, -16, -125, 63, -50, -56, -120, 66, 62, -17, -119, 16, 44, -113, 107, -4, -92, -40, 12, -71, -33, -117, -30, 125, -50, 77, -7, 120, -85, -106, -60, 47, -118, -73, -102, 88, 100, 7, 37, -12, -121, 78, -82, 35, -18, 69, 17, 123, 23, -29, -128, 77, 86, 23, -4, -91, 69, -123, -31, 47, -10, -10, 118, 116, -19, 6, 82, -7, -2, 46, 4, 57, -13, 41, 52, 30, -25, 13, 1, -58, 49, 65, 29, -47, -5, -113, -102, -58, -7, -5, 71, 65, 87, -125, -18, -6, 88, 55, -14};
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
    msg.setTimeStamp(0.679200250275);
    msg.setSource(48561U);
    msg.setSourceEntity(137U);
    msg.setDestination(34605U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.136281100073);
    msg.setSource(39274U);
    msg.setSourceEntity(200U);
    msg.setDestination(56818U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.151222857058);
    msg.setSource(18597U);
    msg.setSourceEntity(52U);
    msg.setDestination(24750U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.271319993088);
    msg.setSource(38197U);
    msg.setSourceEntity(165U);
    msg.setDestination(35670U);
    msg.setDestinationEntity(212U);
    msg.target = 17807U;
    msg.bearing = 0.112739188435;
    msg.elevation = 0.294032293931;

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
    msg.setTimeStamp(0.18097248488);
    msg.setSource(49653U);
    msg.setSourceEntity(174U);
    msg.setDestination(17021U);
    msg.setDestinationEntity(34U);
    msg.target = 28152U;
    msg.bearing = 0.282288253123;
    msg.elevation = 0.0328056632556;

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
    msg.setTimeStamp(0.621390111445);
    msg.setSource(48789U);
    msg.setSourceEntity(119U);
    msg.setDestination(1903U);
    msg.setDestinationEntity(216U);
    msg.target = 278U;
    msg.bearing = 0.101374547203;
    msg.elevation = 0.871825766411;

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
    msg.setTimeStamp(0.045332138948);
    msg.setSource(52692U);
    msg.setSourceEntity(46U);
    msg.setDestination(58569U);
    msg.setDestinationEntity(136U);
    msg.target = 34353U;
    msg.x = 0.526023102891;
    msg.y = 0.0882689693463;
    msg.z = 0.990042560435;

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
    msg.setTimeStamp(0.219061294938);
    msg.setSource(21043U);
    msg.setSourceEntity(104U);
    msg.setDestination(38714U);
    msg.setDestinationEntity(178U);
    msg.target = 377U;
    msg.x = 0.986436901534;
    msg.y = 0.286658789614;
    msg.z = 0.395064222788;

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
    msg.setTimeStamp(0.960799227324);
    msg.setSource(60231U);
    msg.setSourceEntity(117U);
    msg.setDestination(15568U);
    msg.setDestinationEntity(78U);
    msg.target = 31579U;
    msg.x = 0.779924278552;
    msg.y = 0.674340881866;
    msg.z = 0.0159538816184;

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
    msg.setTimeStamp(0.348307898739);
    msg.setSource(47099U);
    msg.setSourceEntity(95U);
    msg.setDestination(61431U);
    msg.setDestinationEntity(222U);
    msg.target = 41827U;
    msg.lat = 0.575892548867;
    msg.lon = 0.970227628582;
    msg.z_units = 202U;
    msg.z = 0.874960071983;

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
    msg.setTimeStamp(0.930125491979);
    msg.setSource(39163U);
    msg.setSourceEntity(21U);
    msg.setDestination(36202U);
    msg.setDestinationEntity(184U);
    msg.target = 30514U;
    msg.lat = 0.683319407766;
    msg.lon = 0.529719088903;
    msg.z_units = 137U;
    msg.z = 0.427408928887;

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
    msg.setTimeStamp(0.608086037069);
    msg.setSource(23497U);
    msg.setSourceEntity(200U);
    msg.setDestination(43761U);
    msg.setDestinationEntity(86U);
    msg.target = 485U;
    msg.lat = 0.164225579769;
    msg.lon = 0.669823343731;
    msg.z_units = 33U;
    msg.z = 0.313802860087;

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
    msg.setTimeStamp(0.761881992363);
    msg.setSource(16579U);
    msg.setSourceEntity(173U);
    msg.setDestination(50688U);
    msg.setDestinationEntity(194U);
    msg.locale.assign("SEJCXTCLGPRAALMLLLBOVSNPSBSHMFPIIZEUBZQMHVJDWEXGJFTVADGYNKVSHGVWGYXQKXODONDKZRRKGHUUTFEUYCNNLMTQCJWCJRLVJEZMXXCFCSWRTMUQHRIJTBSFQOFOJHIVUYJPIPDHOA");
    const char tmp_msg_0[] = {1, -109, 74, -51, -70, -69, -105, -73, -39, 96, 75, -8, -94, -128, -57, 102, 118, -50, -56, -14, -7, -29, 74, -111, -103, -101, 126, 23, 52, 108, -39, 29, -123, -85, 21, 122, 122, 52, 32, -64, 122, -18, 73, 57, -18, -40, 80, -109, 119, -32, -77, 20, -62, 111, 78, -17, -45, 7, -111, -119, 66, 125, -57, -101, 30, -56, -44, 117, 99, 66, 20, -26, -94};
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
    msg.setTimeStamp(0.481214405813);
    msg.setSource(28307U);
    msg.setSourceEntity(137U);
    msg.setDestination(63374U);
    msg.setDestinationEntity(142U);
    msg.locale.assign("WIBFULVMYUGPKRBVKZFSSHNCNBVAKXSNCHCLRZTIMOVZEJCBTGHTIIPOLLKJIONIAHGFONGRFPIDLPJUJJKMBACBBZYRZIUQBSNLAQKLTKJRAZEXATDXHYQQHVWESYBUGAZWXPGEKUVRTNQDYPYPDHWTMFYIONOOXIXRWGDMJEZPRHAFCPDANOKQSWY");
    const char tmp_msg_0[] = {-113, 116, -62, 51, -66, 126, 44, -37, -124, 52, -39, -68, 49, 107, 123, 55, -80, -5, -69, 123, 63, -67, 1, -125, -128, 96, 113, 101, -24, -37, 78, -54, -13, -53, -123, -114, 6, 79, 115, -34, -74, 7, 9, -96, -20, -15, -47, 7, 9, 1, -86, -20, 0, 39, -126, -74, 47, 73, 95, -115, 68, 108, -92, 67, -59, 125, -18, 52, 28, 40, 102, 60, 106, 41, -44, -53, 111, 30, -44, 7, -24, -54, 122, -31, 72, 31, 2, -1, -80, -11, 117, -70, -2, -83, 65, -94, -79, 118, 64, -53, 87, -61, 61, -3, -7, 62, 98, -50, -48, 119, -23, -127, 83, 85, -25, 41, 85, 125, 116, -102, -74, 81, -67, 98, 18, 61, 37, 50, -69, 107, 91, -32, 95, -16, -103, -36, -10, 75, -36, -37, 10, -14, 37, -121, -58, -80, -57, -101, 69, 3, 67, 49, 64, -60, 68, -58, -123, 108, -125, -7, 59, -90, 125, 72, -118, -112, 12, -19, 10, 0, -90, 22, 57, 27, 30, 33, 99, 115, 43, -62, 110, -6, -102, 60, 62, -75, 115, 124, -40, 65, 49, -43, 6, 47, 50, 115, 16, -9, -48, -20, -52, -44, 93, 56, -31, -36, -47, 81, 60, -94, 119, 12, -7, -100};
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
    msg.setTimeStamp(0.450218218406);
    msg.setSource(2551U);
    msg.setSourceEntity(234U);
    msg.setDestination(46808U);
    msg.setDestinationEntity(61U);
    msg.locale.assign("MKWHOWHJAYUWUOQQYJEVGGMMBZBJIIAXASRLUFIPNXNUSKQVTNPHTHEUQBZMJFBQKXVGZTIWQSFLOBSISVGVFKXDJVJALAZRMMYCBYCWFPKFUNGUDWIHLXOLTLGBCOXGRMYYSREVCVCSJDHEKXYFAGSJZPFCZWOECRPPTEDRNNZWNOQKUGDHYCHUWROYGRNHEPUAKPMBIQZV");
    const char tmp_msg_0[] = {-20, 100, 120, -80, 68, 113, -110, -1, -61, 111, -122, 81, 40, 37, -65, 34, -20, -80, -103, -92, -44, 123, -18, 76, -54, -121, -4, -65, -29, 43, -111, -35, 3, -78, 39, 0, -8, -127, 79, -112, -68, -106, 43, 56, 79, -124, 5, -68, 8, -71, 18};
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
    msg.setTimeStamp(0.362584940426);
    msg.setSource(14548U);
    msg.setSourceEntity(76U);
    msg.setDestination(62344U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.87431758422);
    msg.setSource(24511U);
    msg.setSourceEntity(235U);
    msg.setDestination(27008U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.501669517886);
    msg.setSource(43323U);
    msg.setSourceEntity(17U);
    msg.setDestination(56029U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.384186990845);
    msg.setSource(27738U);
    msg.setSourceEntity(89U);
    msg.setDestination(63211U);
    msg.setDestinationEntity(80U);
    msg.camid = 31U;
    msg.x = 17356U;
    msg.y = 26704U;

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
    msg.setTimeStamp(0.949178345507);
    msg.setSource(19326U);
    msg.setSourceEntity(196U);
    msg.setDestination(33477U);
    msg.setDestinationEntity(105U);
    msg.camid = 185U;
    msg.x = 36190U;
    msg.y = 48561U;

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
    msg.setTimeStamp(0.0343201684016);
    msg.setSource(42796U);
    msg.setSourceEntity(223U);
    msg.setDestination(54476U);
    msg.setDestinationEntity(104U);
    msg.camid = 121U;
    msg.x = 20160U;
    msg.y = 7294U;

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
    msg.setTimeStamp(0.0690697785925);
    msg.setSource(32179U);
    msg.setSourceEntity(80U);
    msg.setDestination(65054U);
    msg.setDestinationEntity(95U);
    msg.camid = 26U;
    msg.x = 56935U;
    msg.y = 3927U;

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
    msg.setTimeStamp(0.659145052538);
    msg.setSource(41663U);
    msg.setSourceEntity(250U);
    msg.setDestination(8122U);
    msg.setDestinationEntity(57U);
    msg.camid = 145U;
    msg.x = 12025U;
    msg.y = 51546U;

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
    msg.setTimeStamp(0.435939381332);
    msg.setSource(15425U);
    msg.setSourceEntity(18U);
    msg.setDestination(65490U);
    msg.setDestinationEntity(113U);
    msg.camid = 251U;
    msg.x = 13910U;
    msg.y = 43229U;

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
    msg.setTimeStamp(0.156508517345);
    msg.setSource(26524U);
    msg.setSourceEntity(250U);
    msg.setDestination(30859U);
    msg.setDestinationEntity(58U);
    msg.tracking = 245U;
    msg.lat = 0.941184906629;
    msg.lon = 0.81763456744;
    msg.x = 0.630839748671;
    msg.y = 0.00807789228059;
    msg.z = 0.634762517154;

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
    msg.setTimeStamp(0.293398036713);
    msg.setSource(41760U);
    msg.setSourceEntity(148U);
    msg.setDestination(57667U);
    msg.setDestinationEntity(115U);
    msg.tracking = 56U;
    msg.lat = 0.0278689783378;
    msg.lon = 0.333706189806;
    msg.x = 0.941218555007;
    msg.y = 0.529527738472;
    msg.z = 0.352328960829;

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
    msg.setTimeStamp(0.509394278842);
    msg.setSource(53132U);
    msg.setSourceEntity(145U);
    msg.setDestination(52651U);
    msg.setDestinationEntity(111U);
    msg.tracking = 143U;
    msg.lat = 0.373984413363;
    msg.lon = 0.162322194936;
    msg.x = 0.0719048261517;
    msg.y = 0.664629915202;
    msg.z = 0.92308632438;

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
    msg.setTimeStamp(0.497476258329);
    msg.setSource(38720U);
    msg.setSourceEntity(238U);
    msg.setDestination(10859U);
    msg.setDestinationEntity(146U);
    msg.target.assign("VXASVFAZRZSMVIGOLAYWXQJJXTKIDAFPBQFOCOUEAKYFUEWUCODQZOIYLHYIWJKQIBPAEDGKHRKIFJVUJSFHUSOPBBQCPZWNCBRCTMRSTWKEJNRMTTXWCZPUTBQDSMIXMTAMIQZNPUVNLEDHXSGELXYDEHBZUYGPTMGJLMCTHGVWLNQPMHTDCIGAVDPSNOZA");
    msg.lbearing = 0.297587607645;
    msg.lelevation = 0.72594347602;
    msg.bearing = 0.0910856286287;
    msg.elevation = 0.223848267019;
    msg.phi = 0.416478187292;
    msg.theta = 0.540079609677;
    msg.psi = 0.751912172599;
    msg.accuracy = 0.159995037635;

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
    msg.setTimeStamp(0.0970349502051);
    msg.setSource(22857U);
    msg.setSourceEntity(243U);
    msg.setDestination(41184U);
    msg.setDestinationEntity(64U);
    msg.target.assign("LNBEZWFCKBRDSGPQMDGAROTNPDNSYPLILKDOSKWZHDTPXPTUKCDQJCYUUSQSUREAXJLBYTKOVFZQIORFRITLEAIRFVGAFBMWJHSDUIRUMETUXFCZMZBESYVIPDSJEQWKVZJVOUFHAHYGGHWEHAGWDYBMZAEMMXWXRROOKFFBEHYNNZCSLHICVWJKXEQFIMXBJHTQLGLWZPUSQ");
    msg.lbearing = 0.476887870992;
    msg.lelevation = 0.347253134209;
    msg.bearing = 0.781984373586;
    msg.elevation = 0.26167368292;
    msg.phi = 0.160881426285;
    msg.theta = 0.0312401946804;
    msg.psi = 0.582917927326;
    msg.accuracy = 0.104815315123;

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
    msg.setTimeStamp(0.383271431106);
    msg.setSource(46710U);
    msg.setSourceEntity(200U);
    msg.setDestination(61773U);
    msg.setDestinationEntity(47U);
    msg.target.assign("GHZBRNHWBFSXDTVULLPTLHNFZEASBWTYGYZFEZNIAHGNYMBFJSDWCMXEHDQOXJFAYRYKMUGUQDKSUGNJEXAXIWETBEVRAZSUAOUCNTVIZPELUROXXEDYOYVSJLIPAICJRQSGRCMNIUWSMPURDGQMVNDLRAQDKTOLCDJUTPZZLIXWCKVKWZCYVGWKFFECOTVJZJNLCIXNJLWEVOQFADPKXSVYMTHQBYJBPQIOKRMOQBHFBMSKPFCAHIHQGPG");
    msg.lbearing = 0.344071171285;
    msg.lelevation = 0.0514551987349;
    msg.bearing = 0.324843303621;
    msg.elevation = 0.782534054178;
    msg.phi = 0.913168610936;
    msg.theta = 0.239753639915;
    msg.psi = 0.375531351454;
    msg.accuracy = 0.256202255319;

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
    msg.setTimeStamp(0.139716211357);
    msg.setSource(64742U);
    msg.setSourceEntity(60U);
    msg.setDestination(38130U);
    msg.setDestinationEntity(20U);
    msg.target.assign("FJPINTVILOKPMZXGXGCKNBHFTZHZELFZYUBBHDGAGEJDOGVEPEDKUXEBJYSWOYEXZPYOWVMBWYKIIONMERFIHNTVTJZKVXRVQMZZXFBWONMLSFVKIJHFYNVNMPQCBSZCNRCMUXLYSQYOFPJUSJHIKUHIACASUBHAEOPCVJUKATEMGKDLCQ");
    msg.x = 0.455292856754;
    msg.y = 0.595652921025;
    msg.z = 0.711911251301;
    msg.n = 0.931592946903;
    msg.e = 0.0481171881017;
    msg.d = 0.855910846402;
    msg.phi = 0.553476552971;
    msg.theta = 0.334302039766;
    msg.psi = 0.213984266075;
    msg.accuracy = 0.61707923121;

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
    msg.setTimeStamp(0.0761588666393);
    msg.setSource(44954U);
    msg.setSourceEntity(69U);
    msg.setDestination(6516U);
    msg.setDestinationEntity(62U);
    msg.target.assign("EORWTMSWLRWONTPKVOITOUSBJBTUWYPNIVCZSUUCSVQMZVTPYTAYZANRCIVNPZHCMB");
    msg.x = 0.130068227101;
    msg.y = 0.759356840843;
    msg.z = 0.140640695594;
    msg.n = 0.473366560081;
    msg.e = 0.10011891935;
    msg.d = 0.258902999814;
    msg.phi = 0.790659608966;
    msg.theta = 0.161042488566;
    msg.psi = 0.998325791012;
    msg.accuracy = 0.416183966064;

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
    msg.setTimeStamp(0.72634854073);
    msg.setSource(28794U);
    msg.setSourceEntity(89U);
    msg.setDestination(7660U);
    msg.setDestinationEntity(112U);
    msg.target.assign("JXQQURSWGNRMCVIRXQVTNRELWTJHBYBDUBGIVPEFLJWNKOYADYKJHSIXIEWSCEXZKXLFPFVRBSAIWUWUYOBCSZAKILCHYDGNMCOPDCNJUXMYQEVBNGSGDKEPVZUFIZXFTQLAMTUPHELZFMJTSRALQPMHIVGUKW");
    msg.x = 0.289767013889;
    msg.y = 0.46695027248;
    msg.z = 0.0720073820553;
    msg.n = 0.0182089753731;
    msg.e = 0.0344113048704;
    msg.d = 0.276033430815;
    msg.phi = 0.782443575484;
    msg.theta = 0.554129661713;
    msg.psi = 0.606012057252;
    msg.accuracy = 0.834905928771;

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
    msg.setTimeStamp(0.708400176635);
    msg.setSource(52725U);
    msg.setSourceEntity(54U);
    msg.setDestination(20085U);
    msg.setDestinationEntity(252U);
    msg.target.assign("JHZJENDRJHSXWTHHKUMAKSRUBIPQGRQFDNDXVBSZMUYYUFTENLCYYMZXPEKKUPWGKVUVOXDIBSAWQFKQVLARPDAEHQLIHTOULCFJFNPFCWSZUJMMYKNTSJXTOGSBPZOEEHDQQPYLRBTIIFVAFNN");
    msg.lat = 0.817809697742;
    msg.lon = 0.167458955766;
    msg.z_units = 187U;
    msg.z = 0.164607700089;
    msg.accuracy = 0.786297539291;

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
    msg.setTimeStamp(0.000343294494834);
    msg.setSource(33424U);
    msg.setSourceEntity(233U);
    msg.setDestination(26513U);
    msg.setDestinationEntity(1U);
    msg.target.assign("HQRWNFWPWGOVCIXMCLOYRODFGTNMQYXHPRHXZIZOKURZTAYKCCBTDIGPEWXEGQEQIUEBVNNCLRRWFNJKXTLYLFOQBYPTEAGBHIHTOHBZKNWPAPUSAQCUSQHMPTKMFSMJBDWVGEACFZLPBWJIHYKUPNXJA");
    msg.lat = 0.646442083998;
    msg.lon = 0.100585991296;
    msg.z_units = 222U;
    msg.z = 0.604802145814;
    msg.accuracy = 0.506763051197;

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
    msg.setTimeStamp(0.75890071018);
    msg.setSource(59257U);
    msg.setSourceEntity(132U);
    msg.setDestination(36889U);
    msg.setDestinationEntity(241U);
    msg.target.assign("IYPKLNLAALPFAVERFOOCGJSWUSOBKVRLVSXMNCREHHWJDXJTZLAIVQEPEGRCCCBBECDYXPOFNMB");
    msg.lat = 0.938774738894;
    msg.lon = 0.86333769494;
    msg.z_units = 89U;
    msg.z = 0.390477953958;
    msg.accuracy = 0.182236745079;

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
    msg.setTimeStamp(0.79212301812);
    msg.setSource(31170U);
    msg.setSourceEntity(208U);
    msg.setDestination(27328U);
    msg.setDestinationEntity(72U);
    msg.name.assign("MPACFZQBWOZNUHBUSARHXURVXWORC");
    msg.lat = 0.98305158799;
    msg.lon = 0.904742449342;
    msg.z = 0.14325411817;
    msg.z_units = 20U;

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
    msg.setTimeStamp(0.678282475378);
    msg.setSource(28870U);
    msg.setSourceEntity(247U);
    msg.setDestination(25829U);
    msg.setDestinationEntity(114U);
    msg.name.assign("DWGSEGTNELRBSAHAKWKVEHHIKHHPXGIUKQIIZNCZQPUXYSMXULRFFIBUDRMAAFIOMOLWELLASNNOKJFJCVJKATMWGFLGZARYYRCJTRNE");
    msg.lat = 0.604577556449;
    msg.lon = 0.0717676886119;
    msg.z = 0.332619648391;
    msg.z_units = 76U;

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
    msg.setTimeStamp(0.374011740449);
    msg.setSource(50954U);
    msg.setSourceEntity(219U);
    msg.setDestination(6671U);
    msg.setDestinationEntity(111U);
    msg.name.assign("IWGYHNCIHVZTJTFSYVFFGGMKRVEYXZIODZHQJKLVLDSYDZBGILAVMVRKUKRBUIMVCKHTAFZOINMYZUPHRPSYRSEXDSFPJASICWNBNJCKMMPEJKTEQTWZAPREYXRDHCOQOQVBGQZYMAGYXZFXETBNXTBUDONNVQAXXHCFPSEHCJ");
    msg.lat = 0.00872266327454;
    msg.lon = 0.205380671917;
    msg.z = 0.616653951694;
    msg.z_units = 201U;

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
    msg.setTimeStamp(0.225875879485);
    msg.setSource(33052U);
    msg.setSourceEntity(49U);
    msg.setDestination(28006U);
    msg.setDestinationEntity(127U);
    msg.op = 168U;

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
    msg.setTimeStamp(0.779904953716);
    msg.setSource(11321U);
    msg.setSourceEntity(188U);
    msg.setDestination(45611U);
    msg.setDestinationEntity(160U);
    msg.op = 107U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("AYVVCMKYZNAHNFIUDCTQWTLORPCPBXNIZHTIYYZJPIIWVFOJTBCGESXXCNMSXHIAGGQFVQEYNMAJAEPJSXXQFHPBKUGAHVOLRRMSPGAIGZDQAUBRQGSNPNDTCJOOAMFMFEMCKHLOZJYMODVXSPRDFWLCJYBRRXQWTGUEJUBRVFHETWLDRLUZKJDQESDVSOHEBBQDWZDHFKXLNNUABPWHOIJYKSKTPIOKWXMTFVCELUEKCBGWVRLZ");
    tmp_msg_0.lat = 0.874337072765;
    tmp_msg_0.lon = 0.244180710161;
    tmp_msg_0.z = 0.388411446131;
    tmp_msg_0.z_units = 8U;
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
    msg.setTimeStamp(0.0381237169565);
    msg.setSource(51448U);
    msg.setSourceEntity(164U);
    msg.setDestination(43859U);
    msg.setDestinationEntity(198U);
    msg.op = 179U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("QOZYFXJXAJUOFQDIHTWCVXWQIOTEOANHTOVLBTKMPQFCUSNUACZMEMSPKMABRZZRZNYYNRLCQQPZDLYSTBSKLSEV");
    tmp_msg_0.lat = 0.802407889734;
    tmp_msg_0.lon = 0.282691101335;
    tmp_msg_0.z = 0.0758390682608;
    tmp_msg_0.z_units = 80U;
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
    msg.setTimeStamp(0.6959665243);
    msg.setSource(42146U);
    msg.setSourceEntity(52U);
    msg.setDestination(56930U);
    msg.setDestinationEntity(91U);
    msg.value = 0.0631648033606;
    msg.type = 44U;

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
    msg.setTimeStamp(0.176012346307);
    msg.setSource(22184U);
    msg.setSourceEntity(199U);
    msg.setDestination(12151U);
    msg.setDestinationEntity(204U);
    msg.value = 0.553145876908;
    msg.type = 247U;

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
    msg.setTimeStamp(0.525933650654);
    msg.setSource(23874U);
    msg.setSourceEntity(33U);
    msg.setDestination(35799U);
    msg.setDestinationEntity(73U);
    msg.value = 0.189537153915;
    msg.type = 65U;

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
    msg.setTimeStamp(0.367980169387);
    msg.setSource(33461U);
    msg.setSourceEntity(49U);
    msg.setDestination(17668U);
    msg.setDestinationEntity(27U);
    msg.value = 0.531762129793;

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
    msg.setTimeStamp(0.578576615656);
    msg.setSource(30379U);
    msg.setSourceEntity(81U);
    msg.setDestination(21428U);
    msg.setDestinationEntity(155U);
    msg.value = 0.848098085044;

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
    msg.setTimeStamp(0.858172220331);
    msg.setSource(32359U);
    msg.setSourceEntity(48U);
    msg.setDestination(5539U);
    msg.setDestinationEntity(30U);
    msg.value = 0.973429663707;

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
    msg.setTimeStamp(0.179713308157);
    msg.setSource(41122U);
    msg.setSourceEntity(14U);
    msg.setDestination(2024U);
    msg.setDestinationEntity(89U);
    msg.timestamp_last_service = 0.0201988143578;
    msg.time_next_service = 0.0141191620237;
    msg.time_motor_next_service = 0.313221044181;
    msg.time_idle_ground = 0.245365621272;
    msg.time_idle_air = 0.28020850977;
    msg.time_idle_water = 0.509984727863;
    msg.time_idle_underwater = 0.918003517643;
    msg.time_idle_unknown = 0.745751159791;
    msg.time_motor_ground = 0.496248937098;
    msg.time_motor_air = 0.418156133197;
    msg.time_motor_water = 0.133843585301;
    msg.time_motor_underwater = 0.49745319661;
    msg.time_motor_unknown = 0.50147672884;
    msg.rpm_min = -9472;
    msg.rpm_max = 11716;
    msg.depth_max = 0.572868535252;

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
    msg.setTimeStamp(0.28377563755);
    msg.setSource(65378U);
    msg.setSourceEntity(124U);
    msg.setDestination(43644U);
    msg.setDestinationEntity(62U);
    msg.timestamp_last_service = 0.560904479871;
    msg.time_next_service = 0.46053185845;
    msg.time_motor_next_service = 0.591592211814;
    msg.time_idle_ground = 0.38778635542;
    msg.time_idle_air = 0.908845057574;
    msg.time_idle_water = 0.701221021349;
    msg.time_idle_underwater = 0.187294100128;
    msg.time_idle_unknown = 0.237716108857;
    msg.time_motor_ground = 0.94484971988;
    msg.time_motor_air = 0.0855127088541;
    msg.time_motor_water = 0.68858210485;
    msg.time_motor_underwater = 0.519654599164;
    msg.time_motor_unknown = 0.00447800083432;
    msg.rpm_min = 28041;
    msg.rpm_max = 3890;
    msg.depth_max = 0.339823793642;

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
    msg.setTimeStamp(0.806914514324);
    msg.setSource(58814U);
    msg.setSourceEntity(221U);
    msg.setDestination(19854U);
    msg.setDestinationEntity(102U);
    msg.timestamp_last_service = 0.600935208422;
    msg.time_next_service = 0.309550127195;
    msg.time_motor_next_service = 0.119038037138;
    msg.time_idle_ground = 0.555019941709;
    msg.time_idle_air = 0.35963306803;
    msg.time_idle_water = 0.878262396647;
    msg.time_idle_underwater = 0.154727560716;
    msg.time_idle_unknown = 0.786597448902;
    msg.time_motor_ground = 0.991411026309;
    msg.time_motor_air = 0.473630167418;
    msg.time_motor_water = 0.358428272167;
    msg.time_motor_underwater = 0.964935326765;
    msg.time_motor_unknown = 0.951611530135;
    msg.rpm_min = 26181;
    msg.rpm_max = 16055;
    msg.depth_max = 0.695749531435;

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
    msg.setTimeStamp(0.360138310705);
    msg.setSource(45719U);
    msg.setSourceEntity(119U);
    msg.setDestination(19221U);
    msg.setDestinationEntity(101U);
    msg.severity = 207U;
    msg.text.assign("ICFRTNHHXFFNJRSRBCAPRGQFWYBNHIUFEKEZYWFKCMMSGZTOFAQBRKOOGZXEANPXIPTRNXIKCXBURTNCDNSMQASSHVZYVYHTYOVOCGEAXMVLJWVTRMQEEZWUIHJJWLPOGMLSIJCDDKHVOQLNIJAKUMHJYJIAXPCYLQKQTE");

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
    msg.setTimeStamp(0.0721978752264);
    msg.setSource(31139U);
    msg.setSourceEntity(51U);
    msg.setDestination(38575U);
    msg.setDestinationEntity(57U);
    msg.severity = 11U;
    msg.text.assign("HECFGUFXGWSUNFHMOKWCYXJJFJWQWDCBATVDRSZDBFZCQVPEPISZOILTMYECTCLIQZGLDQBXNJZKGHNOEZSYLRKDFVAXCYMHWECATJJUWSZVXCMJTIWLOMWKHQOYVMNJTDTBREZOMGNAUPFUNUJQPCAIVELPQYLTYFFIDQOMVBLKEU");

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
    msg.setTimeStamp(0.980302606153);
    msg.setSource(30594U);
    msg.setSourceEntity(197U);
    msg.setDestination(39834U);
    msg.setDestinationEntity(21U);
    msg.severity = 75U;
    msg.text.assign("ZVVQYUCSQAPUOSRTCHAWGHCA");

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
    msg.setTimeStamp(0.788653454534);
    msg.setSource(16619U);
    msg.setSourceEntity(1U);
    msg.setDestination(37263U);
    msg.setDestinationEntity(186U);
    msg.channel = -45;
    msg.value = 1111722635;
    msg.gain = 231U;

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
    msg.setTimeStamp(0.967654180024);
    msg.setSource(55661U);
    msg.setSourceEntity(228U);
    msg.setDestination(47454U);
    msg.setDestinationEntity(68U);
    msg.channel = 48;
    msg.value = 1928303347;
    msg.gain = 163U;

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
    msg.setTimeStamp(0.179946319213);
    msg.setSource(55814U);
    msg.setSourceEntity(14U);
    msg.setDestination(2701U);
    msg.setDestinationEntity(65U);
    msg.channel = 115;
    msg.value = 786539521;
    msg.gain = 100U;

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
    msg.setTimeStamp(0.412082855466);
    msg.setSource(31403U);
    msg.setSourceEntity(16U);
    msg.setDestination(53565U);
    msg.setDestinationEntity(205U);
    msg.ch01 = 0.549447634401;
    msg.ch02 = 0.300296992003;
    msg.ch03 = 0.114232197226;
    msg.ch04 = 0.963354349227;
    msg.ch05 = 0.748955786981;
    msg.ch06 = 0.699601535564;
    msg.ch07 = 0.352208507923;
    msg.ch08 = 0.0015179590659;
    msg.ch09 = 0.150021395757;
    msg.ch10 = 0.346827078206;
    msg.ch11 = 0.239597139412;
    msg.ch12 = 0.540490257599;
    msg.ch13 = 0.627643219804;
    msg.ch14 = 0.627780665379;
    msg.ch15 = 0.439396625511;
    msg.ch16 = 0.603617241592;

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
    msg.setTimeStamp(0.886820563287);
    msg.setSource(1950U);
    msg.setSourceEntity(60U);
    msg.setDestination(40445U);
    msg.setDestinationEntity(142U);
    msg.ch01 = 0.823144397128;
    msg.ch02 = 0.392493338122;
    msg.ch03 = 0.982101132107;
    msg.ch04 = 0.887063440958;
    msg.ch05 = 0.00631236124706;
    msg.ch06 = 0.594229546667;
    msg.ch07 = 0.115917383474;
    msg.ch08 = 0.34167249722;
    msg.ch09 = 0.668160537771;
    msg.ch10 = 0.0570850393913;
    msg.ch11 = 0.74973675521;
    msg.ch12 = 0.141570365139;
    msg.ch13 = 0.206822510195;
    msg.ch14 = 0.503974521375;
    msg.ch15 = 0.583215256718;
    msg.ch16 = 0.928621413082;

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
    msg.setTimeStamp(0.0396454008823);
    msg.setSource(59330U);
    msg.setSourceEntity(176U);
    msg.setDestination(29908U);
    msg.setDestinationEntity(6U);
    msg.ch01 = 0.894735031399;
    msg.ch02 = 0.562335683575;
    msg.ch03 = 0.179543879982;
    msg.ch04 = 0.26115524349;
    msg.ch05 = 0.747672371078;
    msg.ch06 = 0.0520141605323;
    msg.ch07 = 0.493151444798;
    msg.ch08 = 0.608545414824;
    msg.ch09 = 0.879203426641;
    msg.ch10 = 0.142887049667;
    msg.ch11 = 0.342061786162;
    msg.ch12 = 0.856058829926;
    msg.ch13 = 0.389838831035;
    msg.ch14 = 0.783010420656;
    msg.ch15 = 0.686961659838;
    msg.ch16 = 0.565961088757;

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
    msg.setTimeStamp(0.995990690522);
    msg.setSource(56226U);
    msg.setSourceEntity(0U);
    msg.setDestination(28100U);
    msg.setDestinationEntity(145U);
    msg.value = 0.285942441725;

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
    msg.setTimeStamp(0.179863244865);
    msg.setSource(21595U);
    msg.setSourceEntity(245U);
    msg.setDestination(53609U);
    msg.setDestinationEntity(42U);
    msg.value = 0.673613580217;

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
    msg.setTimeStamp(0.472449522794);
    msg.setSource(52934U);
    msg.setSourceEntity(56U);
    msg.setDestination(33882U);
    msg.setDestinationEntity(110U);
    msg.value = 0.873659564153;

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
    msg.setTimeStamp(0.138801419783);
    msg.setSource(38897U);
    msg.setSourceEntity(181U);
    msg.setDestination(38860U);
    msg.setDestinationEntity(13U);
    msg.op = 201U;
    msg.lat = 0.342412881727;
    msg.lon = 0.12009557679;
    msg.height = 0.43149496252;
    msg.depth = 0.429990062306;
    msg.alt = 0.974606827933;

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
    msg.setTimeStamp(0.425591990772);
    msg.setSource(45827U);
    msg.setSourceEntity(23U);
    msg.setDestination(39159U);
    msg.setDestinationEntity(49U);
    msg.op = 224U;
    msg.lat = 0.785905321229;
    msg.lon = 0.171512772221;
    msg.height = 0.314623725748;
    msg.depth = 0.0870594379717;
    msg.alt = 0.181253301851;

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
    msg.setTimeStamp(0.129789511188);
    msg.setSource(63603U);
    msg.setSourceEntity(28U);
    msg.setDestination(33095U);
    msg.setDestinationEntity(96U);
    msg.op = 121U;
    msg.lat = 0.944892202887;
    msg.lon = 0.142189377388;
    msg.height = 0.326025348027;
    msg.depth = 0.602217771942;
    msg.alt = 0.950219572963;

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

  {
    IMC::ExpandingSquare msg;
    msg.setTimeStamp(0.0747181258008);
    msg.setSource(58195U);
    msg.setSourceEntity(181U);
    msg.setDestination(19870U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.44676190074;
    msg.lon = 0.751365291178;
    msg.z = 0.549015561027;
    msg.z_units = 161U;
    msg.speed = 0.67421756934;
    msg.bearing = 0.330721603503;
    msg.width = 0.909422470502;
    msg.hstep = 0.358911020198;
    msg.flags = 81U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExpandingSquare #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExpandingSquare msg;
    msg.setTimeStamp(0.809885886761);
    msg.setSource(8593U);
    msg.setSourceEntity(180U);
    msg.setDestination(14411U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.762030256138;
    msg.lon = 0.20042063483;
    msg.z = 0.13540664842;
    msg.z_units = 45U;
    msg.speed = 0.294090060913;
    msg.bearing = 0.0849589214841;
    msg.width = 0.853093677279;
    msg.hstep = 0.536327122896;
    msg.flags = 28U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExpandingSquare #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExpandingSquare msg;
    msg.setTimeStamp(0.844614990656);
    msg.setSource(54132U);
    msg.setSourceEntity(63U);
    msg.setDestination(60646U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.345778285896;
    msg.lon = 0.750289167185;
    msg.z = 0.984751095603;
    msg.z_units = 84U;
    msg.speed = 0.878700844089;
    msg.bearing = 0.500787516772;
    msg.width = 0.153819434285;
    msg.hstep = 0.86437852061;
    msg.flags = 59U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExpandingSquare #2", msg == *msg_d);
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
