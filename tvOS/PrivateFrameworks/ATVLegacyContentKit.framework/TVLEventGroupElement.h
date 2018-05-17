//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ATVLegacyContentKit/TVLRootElement.h>

@class NSArray, NSDate, NSString, TVLXMLElement;

@interface TVLEventGroupElement : TVLRootElement
{
    _Bool _beginPlaybackAtStartDate;
    _Bool _showChapterMarkers;
    _Bool _showDescriptionOnChapterSkip;
    int _refreshIntervalSec;
    NSString *_title;
    NSDate *_startDate;
    NSArray *_events;
    TVLXMLElement *_xml;
}

@property(readonly, retain, nonatomic) TVLXMLElement *xml; // @synthesize xml=_xml;
@property(nonatomic) _Bool showDescriptionOnChapterSkip; // @synthesize showDescriptionOnChapterSkip=_showDescriptionOnChapterSkip;
@property(nonatomic) _Bool showChapterMarkers; // @synthesize showChapterMarkers=_showChapterMarkers;
@property(retain, nonatomic) NSArray *events; // @synthesize events=_events;
@property(nonatomic) _Bool beginPlaybackAtStartDate; // @synthesize beginPlaybackAtStartDate=_beginPlaybackAtStartDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) int refreshIntervalSec; // @synthesize refreshIntervalSec=_refreshIntervalSec;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2;

@end
