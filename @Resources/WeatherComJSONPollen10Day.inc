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

; ========================================
; Forecasts for Day 4 day and night
; ========================================

[@PollenDay4Parent]
Measure=WebParser
URL=[@PollenSuperParent]
StringIndex=1
RegExp=(?siU)"grassPollenIndex":\[(?:.*[,|\]]){6}(.*),(.*)[,|\]].*"grassPollenCategory":\[(?:.*[,|\]]){6}(.*),(.*)[,|\]].*"treePollenIndex":\[(?:.*[,|\]]){6}(.*),(.*)[,|\]].*"treePollenCategory":\[(?:.*[,|\]]){6}(.*),(.*)[,|\]].*"ragweedPollenIndex":\[(?:.*[,|\]]){6}(.*),(.*)[,|\]].*"ragweedPollenCategory":\[(?:.*[,|\]]){6}(.*),(.*)[,|\]]

; ========================================
; Data for the Day part of the day
; ========================================

[@PollenDay4DayGrassIndex]
Measure=WebParser
URL=[@PollenDay4Parent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay4DayGrassCategory]
Measure=WebParser
URL=[@PollenDay4Parent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay4DayTreeIndex]
Measure=WebParser
URL=[@PollenDay4Parent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay4DayTreeCategory]
Measure=WebParser
URL=[@PollenDay4Parent]
StringIndex=7
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay4DayRagweedIndex]
Measure=WebParser
URL=[@PollenDay4Parent]
StringIndex=9
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay4DayRagweedCategory]
Measure=WebParser
URL=[@PollenDay4Parent]
StringIndex=11
RegExpSubstitute=1
Substitute=#CommonSubstitute#

; ========================================
; Data for the Night part of the day
; ========================================

[@PollenDay4NightGrassIndex]
Measure=WebParser
URL=[@PollenDay4Parent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay4NightGrassCategory]
Measure=WebParser
URL=[@PollenDay4Parent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay4NightTreeIndex]
Measure=WebParser
URL=[@PollenDay4Parent]
StringIndex=6
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay4NightTreeCategory]
Measure=WebParser
URL=[@PollenDay4Parent]
StringIndex=8
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay4NightRagweedIndex]
Measure=WebParser
URL=[@PollenDay4Parent]
StringIndex=10
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay4NightRagweedCategory]
Measure=WebParser
URL=[@PollenDay4Parent]
StringIndex=12
RegExpSubstitute=1
Substitute=#CommonSubstitute#

; ========================================
; Forecasts for Day 5 day and night
; ========================================

[@PollenDay5Parent]
Measure=WebParser
URL=[@PollenSuperParent]
StringIndex=1
RegExp=(?siU)"grassPollenIndex":\[(?:.*[,|\]]){8}(.*),(.*)[,|\]].*"grassPollenCategory":\[(?:.*[,|\]]){8}(.*),(.*)[,|\]].*"treePollenIndex":\[(?:.*[,|\]]){8}(.*),(.*)[,|\]].*"treePollenCategory":\[(?:.*[,|\]]){8}(.*),(.*)[,|\]].*"ragweedPollenIndex":\[(?:.*[,|\]]){8}(.*),(.*)[,|\]].*"ragweedPollenCategory":\[(?:.*[,|\]]){8}(.*),(.*)[,|\]]

; ========================================
; Data for the Day part of the day
; ========================================

[@PollenDay5DayGrassIndex]
Measure=WebParser
URL=[@PollenDay5Parent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay5DayGrassCategory]
Measure=WebParser
URL=[@PollenDay5Parent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay5DayTreeIndex]
Measure=WebParser
URL=[@PollenDay5Parent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay5DayTreeCategory]
Measure=WebParser
URL=[@PollenDay5Parent]
StringIndex=7
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay5DayRagweedIndex]
Measure=WebParser
URL=[@PollenDay5Parent]
StringIndex=9
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay5DayRagweedCategory]
Measure=WebParser
URL=[@PollenDay5Parent]
StringIndex=11
RegExpSubstitute=1
Substitute=#CommonSubstitute#

; ========================================
; Data for the Night part of the day
; ========================================

[@PollenDay5NightGrassIndex]
Measure=WebParser
URL=[@PollenDay5Parent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay5NightGrassCategory]
Measure=WebParser
URL=[@PollenDay5Parent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay5NightTreeIndex]
Measure=WebParser
URL=[@PollenDay5Parent]
StringIndex=6
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay5NightTreeCategory]
Measure=WebParser
URL=[@PollenDay5Parent]
StringIndex=8
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay5NightRagweedIndex]
Measure=WebParser
URL=[@PollenDay5Parent]
StringIndex=10
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay5NightRagweedCategory]
Measure=WebParser
URL=[@PollenDay5Parent]
StringIndex=12
RegExpSubstitute=1
Substitute=#CommonSubstitute#

; ========================================
; Forecasts for Day 6 day and night
; ========================================

[@PollenDay6Parent]
Measure=WebParser
URL=[@PollenSuperParent]
StringIndex=1
RegExp=(?siU)"grassPollenIndex":\[(?:.*[,|\]]){10}(.*),(.*)[,|\]].*"grassPollenCategory":\[(?:.*[,|\]]){10}(.*),(.*)[,|\]].*"treePollenIndex":\[(?:.*[,|\]]){10}(.*),(.*)[,|\]].*"treePollenCategory":\[(?:.*[,|\]]){10}(.*),(.*)[,|\]].*"ragweedPollenIndex":\[(?:.*[,|\]]){10}(.*),(.*)[,|\]].*"ragweedPollenCategory":\[(?:.*[,|\]]){10}(.*),(.*)[,|\]]

; ========================================
; Data for the Day part of the day
; ========================================

[@PollenDay6DayGrassIndex]
Measure=WebParser
URL=[@PollenDay6Parent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay6DayGrassCategory]
Measure=WebParser
URL=[@PollenDay6Parent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay6DayTreeIndex]
Measure=WebParser
URL=[@PollenDay6Parent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay6DayTreeCategory]
Measure=WebParser
URL=[@PollenDay6Parent]
StringIndex=7
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay6DayRagweedIndex]
Measure=WebParser
URL=[@PollenDay6Parent]
StringIndex=9
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay6DayRagweedCategory]
Measure=WebParser
URL=[@PollenDay6Parent]
StringIndex=11
RegExpSubstitute=1
Substitute=#CommonSubstitute#

; ========================================
; Data for the Night part of the day
; ========================================

[@PollenDay6NightGrassIndex]
Measure=WebParser
URL=[@PollenDay6Parent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay6NightGrassCategory]
Measure=WebParser
URL=[@PollenDay6Parent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay6NightTreeIndex]
Measure=WebParser
URL=[@PollenDay6Parent]
StringIndex=6
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay6NightTreeCategory]
Measure=WebParser
URL=[@PollenDay6Parent]
StringIndex=8
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay6NightRagweedIndex]
Measure=WebParser
URL=[@PollenDay6Parent]
StringIndex=10
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay6NightRagweedCategory]
Measure=WebParser
URL=[@PollenDay6Parent]
StringIndex=12
RegExpSubstitute=1
Substitute=#CommonSubstitute#

; ========================================
; Forecasts for Day 7 day and night
; ========================================

[@PollenDay7Parent]
Measure=WebParser
URL=[@PollenSuperParent]
StringIndex=1
RegExp=(?siU)"grassPollenIndex":\[(?:.*[,|\]]){12}(.*),(.*)[,|\]].*"grassPollenCategory":\[(?:.*[,|\]]){12}(.*),(.*)[,|\]].*"treePollenIndex":\[(?:.*[,|\]]){12}(.*),(.*)[,|\]].*"treePollenCategory":\[(?:.*[,|\]]){12}(.*),(.*)[,|\]].*"ragweedPollenIndex":\[(?:.*[,|\]]){12}(.*),(.*)[,|\]].*"ragweedPollenCategory":\[(?:.*[,|\]]){12}(.*),(.*)[,|\]]

; ========================================
; Data for the Day part of the day
; ========================================

[@PollenDay7DayGrassIndex]
Measure=WebParser
URL=[@PollenDay7Parent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay7DayGrassCategory]
Measure=WebParser
URL=[@PollenDay7Parent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay7DayTreeIndex]
Measure=WebParser
URL=[@PollenDay7Parent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay7DayTreeCategory]
Measure=WebParser
URL=[@PollenDay7Parent]
StringIndex=7
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay7DayRagweedIndex]
Measure=WebParser
URL=[@PollenDay7Parent]
StringIndex=9
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay7DayRagweedCategory]
Measure=WebParser
URL=[@PollenDay7Parent]
StringIndex=11
RegExpSubstitute=1
Substitute=#CommonSubstitute#

; ========================================
; Data for the Night part of the day
; ========================================

[@PollenDay7NightGrassIndex]
Measure=WebParser
URL=[@PollenDay7Parent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay7NightGrassCategory]
Measure=WebParser
URL=[@PollenDay7Parent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay7NightTreeIndex]
Measure=WebParser
URL=[@PollenDay7Parent]
StringIndex=6
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay7NightTreeCategory]
Measure=WebParser
URL=[@PollenDay7Parent]
StringIndex=8
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay7NightRagweedIndex]
Measure=WebParser
URL=[@PollenDay7Parent]
StringIndex=10
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay7NightRagweedCategory]
Measure=WebParser
URL=[@PollenDay7Parent]
StringIndex=12
RegExpSubstitute=1
Substitute=#CommonSubstitute#

; ========================================
; Forecasts for Day 8 day and night
; ========================================

[@PollenDay8Parent]
Measure=WebParser
URL=[@PollenSuperParent]
StringIndex=1
RegExp=(?siU)"grassPollenIndex":\[(?:.*[,|\]]){14}(.*),(.*)[,|\]].*"grassPollenCategory":\[(?:.*[,|\]]){14}(.*),(.*)[,|\]].*"treePollenIndex":\[(?:.*[,|\]]){14}(.*),(.*)[,|\]].*"treePollenCategory":\[(?:.*[,|\]]){14}(.*),(.*)[,|\]].*"ragweedPollenIndex":\[(?:.*[,|\]]){14}(.*),(.*)[,|\]].*"ragweedPollenCategory":\[(?:.*[,|\]]){14}(.*),(.*)[,|\]]

; ========================================
; Data for the Day part of the day
; ========================================

[@PollenDay8DayGrassIndex]
Measure=WebParser
URL=[@PollenDay8Parent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay8DayGrassCategory]
Measure=WebParser
URL=[@PollenDay8Parent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay8DayTreeIndex]
Measure=WebParser
URL=[@PollenDay8Parent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay8DayTreeCategory]
Measure=WebParser
URL=[@PollenDay8Parent]
StringIndex=7
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay8DayRagweedIndex]
Measure=WebParser
URL=[@PollenDay8Parent]
StringIndex=9
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay8DayRagweedCategory]
Measure=WebParser
URL=[@PollenDay8Parent]
StringIndex=11
RegExpSubstitute=1
Substitute=#CommonSubstitute#

; ========================================
; Data for the Night part of the day
; ========================================

[@PollenDay8NightGrassIndex]
Measure=WebParser
URL=[@PollenDay8Parent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay8NightGrassCategory]
Measure=WebParser
URL=[@PollenDay8Parent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay8NightTreeIndex]
Measure=WebParser
URL=[@PollenDay8Parent]
StringIndex=6
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay8NightTreeCategory]
Measure=WebParser
URL=[@PollenDay8Parent]
StringIndex=8
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay8NightRagweedIndex]
Measure=WebParser
URL=[@PollenDay8Parent]
StringIndex=10
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay8NightRagweedCategory]
Measure=WebParser
URL=[@PollenDay8Parent]
StringIndex=12
RegExpSubstitute=1
Substitute=#CommonSubstitute#

; ========================================
; Forecasts for Day 9 day and night
; ========================================

[@PollenDay9Parent]
Measure=WebParser
URL=[@PollenSuperParent]
StringIndex=1
RegExp=(?siU)"grassPollenIndex":\[(?:.*[,|\]]){16}(.*),(.*)[,|\]].*"grassPollenCategory":\[(?:.*[,|\]]){16}(.*),(.*)[,|\]].*"treePollenIndex":\[(?:.*[,|\]]){16}(.*),(.*)[,|\]].*"treePollenCategory":\[(?:.*[,|\]]){16}(.*),(.*)[,|\]].*"ragweedPollenIndex":\[(?:.*[,|\]]){16}(.*),(.*)[,|\]].*"ragweedPollenCategory":\[(?:.*[,|\]]){16}(.*),(.*)[,|\]]

; ========================================
; Data for the Day part of the day
; ========================================

[@PollenDay9DayGrassIndex]
Measure=WebParser
URL=[@PollenDay9Parent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay9DayGrassCategory]
Measure=WebParser
URL=[@PollenDay9Parent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay9DayTreeIndex]
Measure=WebParser
URL=[@PollenDay9Parent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay9DayTreeCategory]
Measure=WebParser
URL=[@PollenDay9Parent]
StringIndex=7
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay9DayRagweedIndex]
Measure=WebParser
URL=[@PollenDay9Parent]
StringIndex=9
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay9DayRagweedCategory]
Measure=WebParser
URL=[@PollenDay9Parent]
StringIndex=11
RegExpSubstitute=1
Substitute=#CommonSubstitute#

; ========================================
; Data for the Night part of the day
; ========================================

[@PollenDay9NightGrassIndex]
Measure=WebParser
URL=[@PollenDay9Parent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay9NightGrassCategory]
Measure=WebParser
URL=[@PollenDay9Parent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay9NightTreeIndex]
Measure=WebParser
URL=[@PollenDay9Parent]
StringIndex=6
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay9NightTreeCategory]
Measure=WebParser
URL=[@PollenDay9Parent]
StringIndex=8
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay9NightRagweedIndex]
Measure=WebParser
URL=[@PollenDay9Parent]
StringIndex=10
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay9NightRagweedCategory]
Measure=WebParser
URL=[@PollenDay9Parent]
StringIndex=12
RegExpSubstitute=1
Substitute=#CommonSubstitute#

; ========================================
; Forecasts for Day 10 day and night
; ========================================

[@PollenDay10Parent]
Measure=WebParser
URL=[@PollenSuperParent]
StringIndex=1
RegExp=(?siU)"grassPollenIndex":\[(?:.*[,|\]]){18}(.*),(.*)[,|\]].*"grassPollenCategory":\[(?:.*[,|\]]){18}(.*),(.*)[,|\]].*"treePollenIndex":\[(?:.*[,|\]]){18}(.*),(.*)[,|\]].*"treePollenCategory":\[(?:.*[,|\]]){18}(.*),(.*)[,|\]].*"ragweedPollenIndex":\[(?:.*[,|\]]){18}(.*),(.*)[,|\]].*"ragweedPollenCategory":\[(?:.*[,|\]]){18}(.*),(.*)[,|\]]

; ========================================
; Data for the Day part of the day
; ========================================

[@PollenDay10DayGrassIndex]
Measure=WebParser
URL=[@PollenDay10Parent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay10DayGrassCategory]
Measure=WebParser
URL=[@PollenDay10Parent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay10DayTreeIndex]
Measure=WebParser
URL=[@PollenDay10Parent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay10DayTreeCategory]
Measure=WebParser
URL=[@PollenDay10Parent]
StringIndex=7
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay10DayRagweedIndex]
Measure=WebParser
URL=[@PollenDay10Parent]
StringIndex=9
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay10DayRagweedCategory]
Measure=WebParser
URL=[@PollenDay10Parent]
StringIndex=11
RegExpSubstitute=1
Substitute=#CommonSubstitute#

; ========================================
; Data for the Night part of the day
; ========================================

[@PollenDay10NightGrassIndex]
Measure=WebParser
URL=[@PollenDay10Parent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay10NightGrassCategory]
Measure=WebParser
URL=[@PollenDay10Parent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay10NightTreeIndex]
Measure=WebParser
URL=[@PollenDay10Parent]
StringIndex=6
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay10NightTreeCategory]
Measure=WebParser
URL=[@PollenDay10Parent]
StringIndex=8
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay10NightRagweedIndex]
Measure=WebParser
URL=[@PollenDay10Parent]
StringIndex=10
RegExpSubstitute=1
Substitute=#CommonSubstitute#

[@PollenDay10NightRagweedCategory]
Measure=WebParser
URL=[@PollenDay10Parent]
StringIndex=12
RegExpSubstitute=1
Substitute=#CommonSubstitute#
