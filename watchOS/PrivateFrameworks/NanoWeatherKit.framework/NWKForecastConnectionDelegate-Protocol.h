//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, NWKForecastConnection, WFAirQualityConditions, WFLocation, WFWeatherConditions;

@protocol NWKForecastConnectionDelegate <NSObject>
- (void)connection:(NWKForecastConnection *)arg1 isUpdatingForecast:(_Bool)arg2 forLocation:(WFLocation *)arg3 error:(NSError *)arg4;
- (void)connection:(NWKForecastConnection *)arg1 updateForecastWithToken:(unsigned int)arg2 currentConditions:(WFWeatherConditions *)arg3 hourlyForecasts:(NSArray *)arg4 dailyForecasts:(NSArray *)arg5 airQuality:(WFAirQualityConditions *)arg6 forLocation:(WFLocation *)arg7;
@end
