//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ACHAchievementProgressProviding.h"
#import "ACHEarnedInstanceAwarding.h"
#import "HDDataObserver.h"
#import "HDHealthDaemonReadyObserver.h"

@class ACHAchievementProgressEngine, ACHEarnedInstanceAwardingEngine, ACHTemplateStore, ACHWorkoutUtility, HDProfile, NSDate, NSString;

@interface ACHWorkoutAwardingSource : NSObject <HDHealthDaemonReadyObserver, HDDataObserver, ACHEarnedInstanceAwarding, ACHAchievementProgressProviding>
{
    unsigned char _creatorDevice;
    HDProfile *_profile;
    ACHEarnedInstanceAwardingEngine *_engine;
    ACHAchievementProgressEngine *_progressProvider;
    ACHTemplateStore *_templateStore;
    ACHWorkoutUtility *_workoutUtility;
    NSDate *_currentDateOverride;
}

@property(retain, nonatomic) NSDate *currentDateOverride; // @synthesize currentDateOverride=_currentDateOverride;
@property(nonatomic) __weak ACHWorkoutUtility *workoutUtility; // @synthesize workoutUtility=_workoutUtility;
@property(nonatomic) unsigned char creatorDevice; // @synthesize creatorDevice=_creatorDevice;
@property(nonatomic) __weak ACHTemplateStore *templateStore; // @synthesize templateStore=_templateStore;
@property(nonatomic) __weak ACHAchievementProgressEngine *progressProvider; // @synthesize progressProvider=_progressProvider;
@property(nonatomic) __weak ACHEarnedInstanceAwardingEngine *engine; // @synthesize engine=_engine;
@property(nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (id)currentDate;
- (_Bool)_handlesTemplate:(id)arg1;
- (id)_earnedInstancesForWorkouts:(id)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (id)_progressEnvironment;
- (id)currentGoalQuantityForTemplate:(id)arg1;
- (id)currentProgressQuantityForTemplate:(id)arg1;
- (_Bool)providesProgressForTemplate:(id)arg1;
- (id)earnedInstancesForHistoricalInterval:(id)arg1 databaseContext:(id)arg2;
@property(readonly, nonatomic) NSString *uniqueName;
- (void)daemonReady:(id)arg1;
- (id)initWithProfile:(id)arg1 awardingEngine:(id)arg2 templateStore:(id)arg3 creatorDevice:(unsigned char)arg4 progressProvider:(id)arg5 workoutUtility:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
