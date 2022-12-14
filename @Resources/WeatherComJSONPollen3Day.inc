; =================================================================================================
; WeatherComJSONPollen.inc by JSMorley
; "Weather.com - Parsing the JSON" (https://forum.rainmeter.net/viewtopic.php?f=118&t=34628)
;
; Requires that WeatherComJSONVariables.inc be @Included in the skin before this file.
;
; Updated August 2, 2020
; ==================================================================================================

[@PollenSuperParent]
Measure=WebParser
URL=https://api.weather.com/v2/indices/pollen/daypart/15day?geocode=#Latitude#,#Longitude#&language=#Language#&format=json&apiKey=#APIKey#
UpdateRate=#UpdateRate#
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
StringIndex=1
RegExp=(?siU)^(.*)$

; ========================================
; Forecasts for Today day and night
; ========================================

[@PollenTodayParent]
Measure=WebParser
URL=[@PollenSuperParent]
StringIndex=1
RegExp=(?siU)"grassPollenIndex":\[(?:.*[,|\]]){0}(.*),(.*)[,|\]].*"grassPollenCategory":\[(?:.*[,|\]]){0}(.*),(.*)[,|\]].*"treePollenIndex":\[(?:.*[,|\]]){0}(.*),(.*)[,|\]].*"treePollenCategory":\[(?:.*[,|\]]){0}(.*),(.*)[,|\]].*"ragweedPollenIndex":\[(?:.*[,|\]]){0}(.*),(.*)[,|\]].*"ragweedPollenCategory":\[(?:.*[,|\]]){0}(.*),(.*)[,|\]]

; ========================================
; Data for the Day part of the day
; ========================================

[@PollenTodayDayGrassIndex]
Measure=WebParser
URL=[@PollenTodayParent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenTodayDayGrassCategory]
Measure=WebParser
URL=[@PollenTodayParent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenTodayDayTreeIndex]
Measure=WebParser
URL=[@PollenTodayParent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenTodayDayTreeCategory]
Measure=WebParser
URL=[@PollenTodayParent]
StringIndex=7
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenTodayDayRagweedIndex]
Measure=WebParser
URL=[@PollenTodayParent]
StringIndex=9
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenTodayDayRagweedCategory]
Measure=WebParser
URL=[@PollenTodayParent]
StringIndex=11
RegExpSubstitute=1
Substitute=#CommonSubstitute#

; ========================================
; Data for the Night part of the day
; ========================================

[@PollenTodayNightGrassIndex]
Measure=WebParser
URL=[@PollenTodayParent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenTodayNightGrassCategory]
Measure=WebParser
URL=[@PollenTodayParent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenTodayNightTreeIndex]
Measure=WebParser
URL=[@PollenTodayParent]
StringIndex=6
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenTodayNightTreeCategory]
Measure=WebParser
URL=[@PollenTodayParent]
StringIndex=8
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenTodayNightRagweedIndex]
Measure=WebParser
URL=[@PollenTodayParent]
StringIndex=10
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenTodayNightRagweedCategory]
Measure=WebParser
URL=[@PollenTodayParent]
StringIndex=12
RegExpSubstitute=1
Substitute=#CommonSubstitute#

; ========================================
; Forecasts for Day 2 day and night
; ========================================

[@PollenDay2Parent]
Measure=WebParser
URL=[@PollenSuperParent]
StringIndex=1
RegExp=(?siU)"grassPollenIndex":\[(?:.*[,|\]]){2}(.*),(.*)[,|\]].*"grassPollenCategory":\[(?:.*[,|\]]){2}(.*),(.*)[,|\]].*"treePollenIndex":\[(?:.*[,|\]]){2}(.*),(.*)[,|\]].*"treePollenCategory":\[(?:.*[,|\]]){2}(.*),(.*)[,|\]].*"ragweedPollenIndex":\[(?:.*[,|\]]){2}(.*),(.*)[,|\]].*"ragweedPollenCategory":\[(?:.*[,|\]]){2}(.*),(.*)[,|\]]

; ========================================
; Data for the Day part of the day
; ========================================

[@PollenDay2DayGrassIndex]
Measure=WebParser
URL=[@PollenDay2Parent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay2DayGrassCategory]
Measure=WebParser
URL=[@PollenDay2Parent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay2DayTreeIndex]
Measure=WebParser
URL=[@PollenDay2Parent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay2DayTreeCategory]
Measure=WebParser
URL=[@PollenDay2Parent]
StringIndex=7
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay2DayRagweedIndex]
Measure=WebParser
URL=[@PollenDay2Parent]
StringIndex=9
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay2DayRagweedCategory]
Measure=WebParser
URL=[@PollenDay2Parent]
StringIndex=11
RegExpSubstitute=1
Substitute=#CommonSubstitute#

; ========================================
; Data for the Night part of the day
; ========================================

[@PollenDay2NightGrassIndex]
Measure=WebParser
URL=[@PollenDay2Parent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay2NightGrassCategory]
Measure=WebParser
URL=[@PollenDay2Parent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay2NightTreeIndex]
Measure=WebParser
URL=[@PollenDay2Parent]
StringIndex=6
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay2NightTreeCategory]
Measure=WebParser
URL=[@PollenDay2Parent]
StringIndex=8
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay2NightRagweedIndex]
Measure=WebParser
URL=[@PollenDay2Parent]
StringIndex=10
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay2NightRagweedCategory]
Measure=WebParser
URL=[@PollenDay2Parent]
StringIndex=12
RegExpSubstitute=1
Substitute=#CommonSubstitute#

; ========================================
; Forecasts for Day 3 day and night
; ========================================

[@PollenDay3Parent]
Measure=WebParser
URL=[@PollenSuperParent]
StringIndex=1
RegExp=(?siU)"grassPollenIndex":\[(?:.*[,|\]]){4}(.*),(.*)[,|\]].*"grassPollenCategory":\[(?:.*[,|\]]){4}(.*),(.*)[,|\]].*"treePollenIndex":\[(?:.*[,|\]]){4}(.*),(.*)[,|\]].*"treePollenCategory":\[(?:.*[,|\]]){4}(.*),(.*)[,|\]].*"ragweedPollenIndex":\[(?:.*[,|\]]){4}(.*),(.*)[,|\]].*"ragweedPollenCategory":\[(?:.*[,|\]]){4}(.*),(.*)[,|\]]

; ========================================
; Data for the Day part of the day
; ========================================

[@PollenDay3DayGrassIndex]
Measure=WebParser
URL=[@PollenDay3Parent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay3DayGrassCategory]
Measure=WebParser
URL=[@PollenDay3Parent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay3DayTreeIndex]
Measure=WebParser
URL=[@PollenDay3Parent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay3DayTreeCategory]
Measure=WebParser
URL=[@PollenDay3Parent]
StringIndex=7
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay3DayRagweedIndex]
Measure=WebParser
URL=[@PollenDay3Parent]
StringIndex=9
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay3DayRagweedCategory]
Measure=WebParser
URL=[@PollenDay3Parent]
StringIndex=11
RegExpSubstitute=1
Substitute=#CommonSubstitute#

; ========================================
; Data for the Night part of the day
; ========================================

[@PollenDay3NightGrassIndex]
Measure=WebParser
URL=[@PollenDay3Parent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay3NightGrassCategory]
Measure=WebParser
URL=[@PollenDay3Parent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay3NightTreeIndex]
Measure=WebParser
URL=[@PollenDay3Parent]
StringIndex=6
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay3NightTreeCategory]
Measure=WebParser
URL=[@PollenDay3Parent]
StringIndex=8
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay3NightRagweedIndex]
Measure=WebParser
URL=[@PollenDay3Parent]
StringIndex=10
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay3NightRagweedCategory]
Measure=WebParser
URL=[@PollenDay3Parent]
StringIndex=12
RegExpSubstitute=1
Substitute=#CommonSubstitute#
