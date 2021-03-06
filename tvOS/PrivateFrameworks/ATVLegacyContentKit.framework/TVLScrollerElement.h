//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ATVLegacyContentKit/TVLRootElement.h>

@class NSArray, TVLHeaderElement;

@interface TVLScrollerElement : TVLRootElement
{
    _Bool _fixedHeader;
    TVLHeaderElement *_header;
    NSArray *_scrollerItems;
}

@property(retain, nonatomic) NSArray *scrollerItems; // @synthesize scrollerItems=_scrollerItems;
@property(nonatomic) _Bool fixedHeader; // @synthesize fixedHeader=_fixedHeader;
@property(retain, nonatomic) TVLHeaderElement *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2;

@end

