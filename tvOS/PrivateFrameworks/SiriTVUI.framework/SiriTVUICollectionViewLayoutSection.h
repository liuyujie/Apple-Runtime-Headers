//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface SiriTVUICollectionViewLayoutSection : NSObject
{
    NSArray *_itemFrames;
    struct CGRect _sectionHeaderFrame;
    struct UIEdgeInsets _sectionInset;
}

@property(nonatomic) struct UIEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
@property(nonatomic) struct CGRect sectionHeaderFrame; // @synthesize sectionHeaderFrame=_sectionHeaderFrame;
@property(retain, nonatomic) NSArray *itemFrames; // @synthesize itemFrames=_itemFrames;
- (void).cxx_destruct;

@end

