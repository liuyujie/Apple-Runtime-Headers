//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaLookupItemArtwork : NSObject
{
    NSDictionary *_dictionary;
}

+ (id)colorForColorKind:(id)arg1 inColorDictionary:(id)arg2;
- (void).cxx_destruct;
- (id)URLWithHeight:(int)arg1 width:(int)arg2 cropStyle:(id)arg3 format:(id)arg4;
- (id)colors;
@property(readonly, nonatomic) int width;
@property(readonly, nonatomic) int height;
- (id)initWithDictionary:(id)arg1;

@end

