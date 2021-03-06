//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VCActionDonationFetcher : NSObject
{
}

+ (id)filterDonations:(id)arg1 forApplicationBundleIdentifier:(id)arg2;
+ (_Bool)shouldFilterDonationsForAppWithApplicationBundleIdentifier:(id)arg1;
+ (id)isEligibleForPredictionPredicate;
+ (id)donationWithUUID:(id)arg1;
+ (id)fetchDonationsWithLimit:(unsigned int)arg1 filteringForIsEligibleForPrediction:(_Bool)arg2;
+ (void)getPredicateForIntentsWithApplicationBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)getPredicateForUserActivitiesWithApplicationBundleIdentifier:(id)arg1 filteringForIsEligibleForPrediction:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)fetchDonationsForApplicationBundleIdentifier:(id)arg1 limit:(unsigned int)arg2 filteringForTopLevel:(_Bool)arg3 filteringForIsEligibleForPrediction:(_Bool)arg4;
+ (id)fetchDonationsWithPredicate:(id)arg1 limit:(unsigned int)arg2 filteringForTopLevel:(_Bool)arg3;
+ (id)fetchEventsWithPredicate:(id)arg1 limit:(unsigned int)arg2;
+ (id)keyPathForStream:(id)arg1;
+ (_Bool)shouldKeepActionWithAppBundleIdentifierForDisplay:(id)arg1;
+ (id)approvedSiriKitIntents;
+ (id)donationFromEvent:(id)arg1 filteringForTopLevel:(_Bool)arg2;
+ (id)donationFromEvent:(id)arg1;
+ (id)streams;
+ (void)sourceAppIdentifierArrayForApplicationBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

