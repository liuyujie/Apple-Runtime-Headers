//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "VNRequestRevisionProviding.h"

@class NSData;

@interface VNFaceLandmarkSegments : NSObject <NSSecureCoding, NSCopying, VNRequestRevisionProviding>
{
    unsigned long long _requestRevision;
    unsigned long long _espressoOutputBufferWidth;
    unsigned long long _espressoOutputBufferHeight;
    unsigned long long _espressoOutputBufferChannels;
    NSData *_espressoOutputBufferData;
}

+ (int)_argmax3:(const float *)arg1 index:(int)arg2 segmentedImageSize:(struct CGSize)arg3 numberOfSegments:(unsigned long long)arg4;
+ (map_fdfccd1e)_faceLandmarkIndexToFlagMap;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSData *espressoOutputBufferData; // @synthesize espressoOutputBufferData=_espressoOutputBufferData;
@property(nonatomic) unsigned long long espressoOutputBufferChannels; // @synthesize espressoOutputBufferChannels=_espressoOutputBufferChannels;
@property(nonatomic) unsigned long long espressoOutputBufferHeight; // @synthesize espressoOutputBufferHeight=_espressoOutputBufferHeight;
@property(nonatomic) unsigned long long espressoOutputBufferWidth; // @synthesize espressoOutputBufferWidth=_espressoOutputBufferWidth;
@property(readonly, nonatomic) unsigned long long requestRevision; // @synthesize requestRevision=_requestRevision;
- (void).cxx_destruct;
- (struct __CVBuffer *)createImageOfFaceLandmarkSegments:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 espressoOutputBufferWidth:(unsigned long long)arg2 espressoOutputBufferHeight:(unsigned long long)arg3 espressoOutputBufferChannels:(unsigned long long)arg4 espressoOutputBufferData:(id)arg5;

@end
