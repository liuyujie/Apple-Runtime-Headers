//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface CTAudioCodecInfo : NSObject <NSCopying, NSSecureCoding>
{
    unsigned int _callId;
    int _codec;
    unsigned int _amrMode;
    int _evsBandwidth;
    int _evsBitrate;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) int evsBitrate; // @synthesize evsBitrate=_evsBitrate;
@property(nonatomic) int evsBandwidth; // @synthesize evsBandwidth=_evsBandwidth;
@property(nonatomic) unsigned int amrMode; // @synthesize amrMode=_amrMode;
@property(nonatomic) int codec; // @synthesize codec=_codec;
@property(nonatomic) unsigned int callId; // @synthesize callId=_callId;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (id)initWithCallId:(unsigned int)arg1 codec:(int)arg2 amrMode:(unsigned int)arg3 evsBandwidth:(int)arg4 evsBitrate:(int)arg5;

@end
