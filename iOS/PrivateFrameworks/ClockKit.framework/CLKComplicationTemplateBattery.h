//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider;

@interface CLKComplicationTemplateBattery : CLKComplicationTemplate
{
    long long _family;
    _Bool _charging;
    CLKTextProvider *_textProvider;
    double _level;
}

+ (id)batteryTemplateWithFamily:(long long)arg1;
@property(nonatomic) _Bool charging; // @synthesize charging=_charging;
@property(nonatomic) double level; // @synthesize level=_level;
@property(copy, nonatomic) CLKTextProvider *textProvider; // @synthesize textProvider=_textProvider;
- (void).cxx_destruct;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateBOOLKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateFloatKeysWithBlock:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end

