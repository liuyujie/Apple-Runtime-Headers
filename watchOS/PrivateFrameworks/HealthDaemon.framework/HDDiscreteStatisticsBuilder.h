//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDStatisticsBuilder.h>

@interface HDDiscreteStatisticsBuilder : HDStatisticsBuilder
{
}

- (id)collectionCalculatorWithStatisticsCollection:(id)arg1;
- (id)collectionCalculatorWithTimePeriod:(id)arg1;
- (void)_setDataCount:(int)arg1 inStatistics:(id)arg2 forSource:(id)arg3;
- (void)_addSample:(id)arg1 toStatistics:(id)arg2;
- (id)_statisticsForPredicate:(id)arg1 database:(id)arg2 shouldStopProcessing:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (id)_updateStatisticsCollection:(id)arg1 withSamples:(id)arg2 error:(id *)arg3;
- (_Bool)_setupStatistics:(id)arg1 withCalculator:(id)arg2;
- (id)_statsBySourceFromIdsAndStats:(id)arg1 unit:(id)arg2;
- (id)_initialStatisticsForTimePeriod:(id)arg1 database:(id)arg2 shouldStopProcessing:(CDUnknownBlockType)arg3 error:(id *)arg4;

@end
