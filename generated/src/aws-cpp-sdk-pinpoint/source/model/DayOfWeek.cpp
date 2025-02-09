﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/DayOfWeek.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pinpoint
  {
    namespace Model
    {
      namespace DayOfWeekMapper
      {

        static const int MONDAY_HASH = HashingUtils::HashString("MONDAY");
        static const int TUESDAY_HASH = HashingUtils::HashString("TUESDAY");
        static const int WEDNESDAY_HASH = HashingUtils::HashString("WEDNESDAY");
        static const int THURSDAY_HASH = HashingUtils::HashString("THURSDAY");
        static const int FRIDAY_HASH = HashingUtils::HashString("FRIDAY");
        static const int SATURDAY_HASH = HashingUtils::HashString("SATURDAY");
        static const int SUNDAY_HASH = HashingUtils::HashString("SUNDAY");


        DayOfWeek GetDayOfWeekForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MONDAY_HASH)
          {
            return DayOfWeek::MONDAY;
          }
          else if (hashCode == TUESDAY_HASH)
          {
            return DayOfWeek::TUESDAY;
          }
          else if (hashCode == WEDNESDAY_HASH)
          {
            return DayOfWeek::WEDNESDAY;
          }
          else if (hashCode == THURSDAY_HASH)
          {
            return DayOfWeek::THURSDAY;
          }
          else if (hashCode == FRIDAY_HASH)
          {
            return DayOfWeek::FRIDAY;
          }
          else if (hashCode == SATURDAY_HASH)
          {
            return DayOfWeek::SATURDAY;
          }
          else if (hashCode == SUNDAY_HASH)
          {
            return DayOfWeek::SUNDAY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DayOfWeek>(hashCode);
          }

          return DayOfWeek::NOT_SET;
        }

        Aws::String GetNameForDayOfWeek(DayOfWeek enumValue)
        {
          switch(enumValue)
          {
          case DayOfWeek::MONDAY:
            return "MONDAY";
          case DayOfWeek::TUESDAY:
            return "TUESDAY";
          case DayOfWeek::WEDNESDAY:
            return "WEDNESDAY";
          case DayOfWeek::THURSDAY:
            return "THURSDAY";
          case DayOfWeek::FRIDAY:
            return "FRIDAY";
          case DayOfWeek::SATURDAY:
            return "SATURDAY";
          case DayOfWeek::SUNDAY:
            return "SUNDAY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DayOfWeekMapper
    } // namespace Model
  } // namespace Pinpoint
} // namespace Aws
