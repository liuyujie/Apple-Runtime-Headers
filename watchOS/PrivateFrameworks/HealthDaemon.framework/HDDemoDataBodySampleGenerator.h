//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@class NSArray;

@interface HDDemoDataBodySampleGenerator : HDDemoDataBaseSampleGenerator
{
    NSArray *_boysHeightBirthTo36MonthsGrowthCurve;
    NSArray *_boysHeight2To20YearsGrowthCurve;
    NSArray *_boysWeightBirthTo36MonthsGrowthCurve;
    NSArray *_boysWeight2To20YearsGrowthCurve;
    NSArray *_girlsHeightBirthTo36MonthsGrowthCurve;
    NSArray *_girlsHeight2To20YearsGrowthCurve;
    NSArray *_girlsWeightBirthTo36MonthsGrowthCurve;
    NSArray *_girlsWeight2To20YearsGrowthCurve;
    double _nextHeightSampleTime;
    double _nextWeightSampleTime;
    double _lastHeightInCm;
    double _lastWeightInKg;
    double _weightAdultStartInKg;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double weightAdultStartInKg; // @synthesize weightAdultStartInKg=_weightAdultStartInKg;
@property(nonatomic) double lastWeightInKg; // @synthesize lastWeightInKg=_lastWeightInKg;
@property(nonatomic) double lastHeightInCm; // @synthesize lastHeightInCm=_lastHeightInCm;
@property(nonatomic) double nextWeightSampleTime; // @synthesize nextWeightSampleTime=_nextWeightSampleTime;
@property(nonatomic) double nextHeightSampleTime; // @synthesize nextHeightSampleTime=_nextHeightSampleTime;
@property(copy, nonatomic) NSArray *girlsWeight2To20YearsGrowthCurve; // @synthesize girlsWeight2To20YearsGrowthCurve=_girlsWeight2To20YearsGrowthCurve;
@property(copy, nonatomic) NSArray *girlsWeightBirthTo36MonthsGrowthCurve; // @synthesize girlsWeightBirthTo36MonthsGrowthCurve=_girlsWeightBirthTo36MonthsGrowthCurve;
@property(copy, nonatomic) NSArray *girlsHeight2To20YearsGrowthCurve; // @synthesize girlsHeight2To20YearsGrowthCurve=_girlsHeight2To20YearsGrowthCurve;
@property(copy, nonatomic) NSArray *girlsHeightBirthTo36MonthsGrowthCurve; // @synthesize girlsHeightBirthTo36MonthsGrowthCurve=_girlsHeightBirthTo36MonthsGrowthCurve;
@property(copy, nonatomic) NSArray *boysWeight2To20YearsGrowthCurve; // @synthesize boysWeight2To20YearsGrowthCurve=_boysWeight2To20YearsGrowthCurve;
@property(copy, nonatomic) NSArray *boysWeightBirthTo36MonthsGrowthCurve; // @synthesize boysWeightBirthTo36MonthsGrowthCurve=_boysWeightBirthTo36MonthsGrowthCurve;
@property(copy, nonatomic) NSArray *boysHeight2To20YearsGrowthCurve; // @synthesize boysHeight2To20YearsGrowthCurve=_boysHeight2To20YearsGrowthCurve;
@property(copy, nonatomic) NSArray *boysHeightBirthTo36MonthsGrowthCurve; // @synthesize boysHeightBirthTo36MonthsGrowthCurve=_boysHeightBirthTo36MonthsGrowthCurve;
- (void).cxx_destruct;
- (double)weightChangeForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)_weightCurveForAge:(double)arg1 sex:(int)arg2;
- (id)_heightCurveForAge:(double)arg1 sex:(int)arg2;
- (double)bodyMassIndexForDemoPerson:(id)arg1 weight:(double)arg2 height:(double)arg3;
- (double)bodyFatPercentageForDemoPerson:(id)arg1 atTime:(double)arg2 weight:(double)arg3 leanBodyMass:(double)arg4;
- (double)leanBodyMassForDemoPerson:(id)arg1 weight:(double)arg2;
- (id)weightForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)heightForDemoPerson:(id)arg1 atTime:(double)arg2;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

