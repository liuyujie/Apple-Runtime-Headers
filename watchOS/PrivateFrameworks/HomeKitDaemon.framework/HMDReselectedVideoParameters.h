//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDTLVBase.h>

#import "HMDTLVCreateParse.h"
#import "NSSecureCoding.h"

@class HMDReselectedRTPParameters, HMDVideoAttributes;

@interface HMDReselectedVideoParameters : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding>
{
    HMDVideoAttributes *_videoAttributes;
    HMDReselectedRTPParameters *_rtpParameters;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) HMDReselectedRTPParameters *rtpParameters; // @synthesize rtpParameters=_rtpParameters;
@property(readonly, copy, nonatomic) HMDVideoAttributes *videoAttributes; // @synthesize videoAttributes=_videoAttributes;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (_Bool)_parseFromTLVData;
- (id)tlvData;
- (id)initWithAttribute:(id)arg1 rtpParameter:(id)arg2;

@end

