//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCalendar.h"

@interface NSCalendar (MNExtras)
- (id)_navigation_transitRelativeDateStringForDate:(id)arg1 context:(long long)arg2 inTimeZone:(id)arg3 outUsedFormat:(out unsigned long long *)arg4;
- (id)_navigation_relativeDateStringForDate:(id)arg1 context:(long long)arg2 inTimeZone:(id)arg3;
- (id)_navigation_dateStringForDate:(id)arg1 withStyle:(unsigned long long)arg2 useRelativeFormatting:(BOOL)arg3 inTimeZone:(id)arg4;
- (BOOL)_navigation_isDateInTomorrow:(id)arg1 inTimeZone:(id)arg2;
- (BOOL)_navigation_isDateInToday:(id)arg1 inTimeZone:(id)arg2;
- (id)_navigation_offsetDate:(id)arg1 toTimeZone:(id)arg2;
@end
