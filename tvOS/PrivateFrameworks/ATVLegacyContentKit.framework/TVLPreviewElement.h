//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ATVLegacyContentKit/TVLElement.h>

@class TVLDocument;

@interface TVLPreviewElement : TVLElement
{
    TVLDocument *_feedDocument;
    TVLElement *_preview;
}

@property(retain, nonatomic) TVLElement *preview; // @synthesize preview=_preview;
- (void).cxx_destruct;
- (id)feedDocument;
- (_Bool)isEqual:(id)arg1;
- (id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2;
- (id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2;

@end

