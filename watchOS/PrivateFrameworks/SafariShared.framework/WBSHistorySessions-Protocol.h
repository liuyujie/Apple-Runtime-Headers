//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, WBSHistoryItem, WBSHistorySession;

@protocol WBSHistorySessions
@property(readonly, nonatomic) unsigned int numberOfSessions;
@property(readonly, copy, nonatomic) NSArray *orderedSessions;
- (void)enumerateOrderedItemsLastVisitedInSession:(WBSHistorySession *)arg1 usingBlock:(void (^)(WBSHistoryItem *))arg2;
- (NSArray *)itemsLastVisitedInSession:(WBSHistorySession *)arg1;
- (WBSHistoryItem *)itemLastVisitedInSession:(WBSHistorySession *)arg1 atIndex:(unsigned int)arg2;
- (unsigned int)numberOfItemsVisitedInSession:(WBSHistorySession *)arg1;
@end

