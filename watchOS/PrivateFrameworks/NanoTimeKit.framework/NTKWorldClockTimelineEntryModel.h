//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKTimelineEntryModel.h>

@class WorldClockCity;

@interface NTKWorldClockTimelineEntryModel : NTKTimelineEntryModel
{
    _Bool _showIdealizedTime;
    WorldClockCity *_city;
}

+ (id)_analogImageProvider;
@property(nonatomic) _Bool showIdealizedTime; // @synthesize showIdealizedTime=_showIdealizedTime;
@property(retain, nonatomic) WorldClockCity *city; // @synthesize city=_city;
- (void).cxx_destruct;
- (double)_timeZoneOffset;
- (id)_timeZone;
- (id)_timeAndCityNameOffsetTextProvider;
- (id)_timeAndAbbreviationTextProvider;
- (id)_timeAndDayOffsetTextProvider;
- (id)_cityNameTextProvider;
- (id)_abbreviationTextProvider;
- (id)_differenceTextProviderWithSize:(int)arg1 andCaps:(_Bool)arg2;
- (id)_differenceTextProvider;
- (id)_dayOffsetTextProvider;
- (id)_timeTextProvider;
- (id)_newLargeUtilityTemplate;
- (id)_newExtraLargeTemplate;
- (id)_newCircularMediumTemplate;
- (id)_newCircularSmallTemplate;
- (id)_newLargeModularTemplate;
- (id)_newSmallModularTemplate;
- (id)_newSmallFlatUtilityTemplate;
- (id)templateForComplicationFamily:(int)arg1;
- (id)init;

@end

