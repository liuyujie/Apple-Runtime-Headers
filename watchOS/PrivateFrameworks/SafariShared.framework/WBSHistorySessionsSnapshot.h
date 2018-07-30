//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSHistorySessions.h"

@class NSArray;

@interface WBSHistorySessionsSnapshot : NSObject <WBSHistorySessions>
{
    NSArray *_sessions;
}

- (void).cxx_destruct;
- (void)enumerateOrderedItemsLastVisitedInSession:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)itemsLastVisitedInSession:(id)arg1;
- (id)itemLastVisitedInSession:(id)arg1 atIndex:(unsigned int)arg2;
- (unsigned int)numberOfItemsVisitedInSession:(id)arg1;
@property(readonly, nonatomic) unsigned int numberOfSessions;
@property(readonly, copy, nonatomic) NSArray *orderedSessions;
- (id)initWithSessions:(id)arg1;
- (id)init;

@end
