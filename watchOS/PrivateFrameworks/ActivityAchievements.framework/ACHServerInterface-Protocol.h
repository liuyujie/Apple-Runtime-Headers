//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACHEarnedInstance, ACHTemplate, NSString, NSURL;

@protocol ACHServerInterface <NSObject>
- (void)remote_setActivityChallengeAssetsServerURL:(NSURL *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_fetchActivityChallengeAssetsServerURLWithCompletion:(void (^)(NSURL *, NSError *))arg1;
- (void)remote_forceAwardingSchedulerWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_fetchEphemeralAchievementWithTemplateUniqueName:(NSString *)arg1 completion:(void (^)(ACHAchievement *, NSError *))arg2;
- (void)remote_fetchAchievementWithTemplateUniqueName:(NSString *)arg1 completion:(void (^)(ACHAchievement *, NSError *))arg2;
- (void)remote_fetchAllAchievementsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)remote_removeAllEarnedInstancesWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_removeEarnedInstance:(ACHEarnedInstance *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_addEarnedInstance:(ACHEarnedInstance *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_fetchAllEarnedInstancesWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)remote_fetchAllTemplatesWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)remote_removeAllTemplatesWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_removeTemplate:(ACHTemplate *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_addTemplate:(ACHTemplate *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end

