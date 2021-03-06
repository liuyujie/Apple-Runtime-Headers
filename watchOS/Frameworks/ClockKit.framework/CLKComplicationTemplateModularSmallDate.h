//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKDateTextProvider;

@interface CLKComplicationTemplateModularSmallDate : CLKComplicationTemplate
{
    CLKDateTextProvider *_weekdayTextProvider;
    CLKDateTextProvider *_dayTextProvider;
    unsigned int _highlightMode;
}

@property(nonatomic) unsigned int highlightMode; // @synthesize highlightMode=_highlightMode;
@property(copy, nonatomic) CLKDateTextProvider *dayTextProvider; // @synthesize dayTextProvider=_dayTextProvider;
@property(copy, nonatomic) CLKDateTextProvider *weekdayTextProvider; // @synthesize weekdayTextProvider=_weekdayTextProvider;
- (void).cxx_destruct;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1;
- (id)_initWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;
- (_Bool)highlightLine2;
- (void)setHighlightLine2:(_Bool)arg1;
- (void)_enumerateIntegerKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(int)arg1;

@end

