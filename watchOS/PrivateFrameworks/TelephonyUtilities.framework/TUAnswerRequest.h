//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "TUCallRequest.h"
#import "TUVideoRequest.h"

@class NSDate, NSString;

@interface TUAnswerRequest : NSObject <NSSecureCoding, TUCallRequest, TUVideoRequest>
{
    _Bool _wantsHoldMusic;
    _Bool _pauseVideoToStart;
    NSString *_uniqueProxyIdentifier;
    NSString *_sourceIdentifier;
    int _behavior;
    NSDate *_dateAnswered;
    struct CGSize _localLandscapeAspectRatio;
    struct CGSize _localPortraitAspectRatio;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDate *dateAnswered; // @synthesize dateAnswered=_dateAnswered;
@property(nonatomic) int behavior; // @synthesize behavior=_behavior;
@property(nonatomic) _Bool pauseVideoToStart; // @synthesize pauseVideoToStart=_pauseVideoToStart;
@property(nonatomic) _Bool wantsHoldMusic; // @synthesize wantsHoldMusic=_wantsHoldMusic;
@property(copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(nonatomic) struct CGSize localPortraitAspectRatio; // @synthesize localPortraitAspectRatio=_localPortraitAspectRatio;
@property(nonatomic) struct CGSize localLandscapeAspectRatio; // @synthesize localLandscapeAspectRatio=_localLandscapeAspectRatio;
@property(copy, nonatomic) NSString *uniqueProxyIdentifier; // @synthesize uniqueProxyIdentifier=_uniqueProxyIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)initWithCall:(id)arg1;
- (id)initWithUniqueProxyIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

