//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NCSConflictScanner : NSObject
{
}

+ (id)conflictDetailsForExternalURLString:(id)arg1 inStore:(id)arg2 sourceIdentifier:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 potentialConflictDates:(id)arg6;
+ (id)conflictDetailsForEvent:(id)arg1;
+ (id)potentialConflictDatesTrimmedToSyncWindowFromList:(id)arg1;
+ (_Bool)_fetchedEventIsAdjacent:(id)arg1 forStartDate:(id)arg2 endDate:(id)arg3;
+ (_Bool)_fetchedEventValidAsConflict:(id)arg1 excludeExternalURLString:(id)arg2;

@end

