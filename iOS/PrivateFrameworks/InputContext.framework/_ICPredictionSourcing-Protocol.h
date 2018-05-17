//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class _ICProactiveTrigger, _ICSearchContext;

@protocol _ICPredictionSourcing
- (void)searchForMeCardEmailAddressesWithTimeout:(int)arg1 handler:(void (^)(NSArray *))arg2;
- (void)searchForMeCardRegionsWithTimeout:(int)arg1 handler:(void (^)(NSArray *))arg2;
- (void)predictedItemsWithProactiveTrigger:(_ICProactiveTrigger *)arg1 searchContext:(_ICSearchContext *)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(float)arg4 handler:(void (^)(NSArray *, NSError *))arg5;
@end
