//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@interface CLKComplicationTemplateBreathing : CLKComplicationTemplate
{
    int _family;
    int _sessionCount;
}

+ (id)breathingTemplateWithFamily:(int)arg1;
@property(nonatomic) int sessionCount; // @synthesize sessionCount=_sessionCount;
- (void)_enumerateIntegerKeysWithBlock:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isCompatibleWithFamily:(int)arg1;

@end

