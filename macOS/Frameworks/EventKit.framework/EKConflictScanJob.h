//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CalDateRange, EKEvent, NSArray, NSSet;

@interface EKConflictScanJob : NSObject
{
    EKEvent *_event;
    NSArray *_calendarIdentifiers;
    CalDateRange *_scanRange;
    NSArray *_occurrences;
    NSSet *_eventsConflictedWith;
    NSSet *_nonAcceptedEvents;
    NSSet *_conflictDates;
}

@property(retain) NSSet *conflictDates; // @synthesize conflictDates=_conflictDates;
@property(retain) NSSet *nonAcceptedEvents; // @synthesize nonAcceptedEvents=_nonAcceptedEvents;
@property(retain) NSSet *eventsConflictedWith; // @synthesize eventsConflictedWith=_eventsConflictedWith;
@property(retain) NSArray *occurrences; // @synthesize occurrences=_occurrences;
@property(retain) CalDateRange *scanRange; // @synthesize scanRange=_scanRange;
@property(retain) NSArray *calendarIdentifiers; // @synthesize calendarIdentifiers=_calendarIdentifiers;
@property(retain) EKEvent *event; // @synthesize event=_event;
- (void).cxx_destruct;

@end
