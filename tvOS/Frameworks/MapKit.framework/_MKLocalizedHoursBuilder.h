//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSTimeZone, UIColor;

@interface _MKLocalizedHoursBuilder : NSObject
{
    _Bool _isClosedTodayAllDay;
    _Bool _isCurrentlyClosed;
    _Bool _isClosingSoon;
    _Bool _isOpeningSoon;
    unsigned long long _geoMapItemOpeningHourOptions;
    unsigned long long _localizedHoursStringOptions;
    NSTimeZone *_timeZone;
    NSArray *_operatingHours;
    NSString *_localizedOperatingHours;
    UIColor *_hoursStateLabelColor;
}

@property(readonly, nonatomic) UIColor *hoursStateLabelColor; // @synthesize hoursStateLabelColor=_hoursStateLabelColor;
@property(readonly, nonatomic) NSString *localizedOperatingHours; // @synthesize localizedOperatingHours=_localizedOperatingHours;
@property(retain, nonatomic) NSArray *operatingHours; // @synthesize operatingHours=_operatingHours;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(nonatomic) unsigned long long localizedHoursStringOptions; // @synthesize localizedHoursStringOptions=_localizedHoursStringOptions;
@property(nonatomic) unsigned long long geoMapItemOpeningHourOptions; // @synthesize geoMapItemOpeningHourOptions=_geoMapItemOpeningHourOptions;
- (void).cxx_destruct;
- (id)_updatedHoursLabelColor;
- (id)_updatedLocalizedOperatingHoursString;
- (void)_updateLocalizedString;
- (id)initWithTimeZone:(id)arg1 operatingHours:(id)arg2 geoMapItemOpeningHourOptions:(unsigned long long)arg3 localizedHoursStringOptions:(unsigned long long)arg4;
- (id)initWithMapItemForMessageForBusiness:(id)arg1 localizedHoursStringOptions:(unsigned long long)arg2;
- (id)initWithMapItem:(id)arg1 localizedHoursStringOptions:(unsigned long long)arg2;

@end
