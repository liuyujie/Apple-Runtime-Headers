//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HDStatisticsCollectionCalculatorDataSource.h"

@class HDProfile, HDWorkoutBuilderEntity, HKQuantityType, NSString;

@interface HDWorkoutBuilderStatisticsDataSource : NSObject <HDStatisticsCollectionCalculatorDataSource>
{
    _Bool _enabled;
    HDProfile *_profile;
    HKQuantityType *_quantityType;
    HDWorkoutBuilderEntity *_builderEntity;
}

@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) HDWorkoutBuilderEntity *builderEntity; // @synthesize builderEntity=_builderEntity;
@property(readonly, copy, nonatomic) HKQuantityType *quantityType; // @synthesize quantityType=_quantityType;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (_Bool)collectionCalculator:(id)arg1 queryForInterval:(id)arg2 error:(id *)arg3 sampleHandler:(CDUnknownBlockType)arg4;
- (id)initWithProfile:(id)arg1 quantityType:(id)arg2 builderEntity:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

