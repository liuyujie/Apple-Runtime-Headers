//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorCaptionsResults : NSObject
{
    BOOL _isSupported;
    BOOL _remoteCanDisplayCaptions;
    NSSet *_localLanguages;
    NSSet *_remoteLanguages;
}

@property(nonatomic) BOOL isSupported; // @synthesize isSupported=_isSupported;
@property(nonatomic) BOOL remoteCanDisplayCaptions; // @synthesize remoteCanDisplayCaptions=_remoteCanDisplayCaptions;
@property(retain, nonatomic) NSSet *remoteLanguages; // @synthesize remoteLanguages=_remoteLanguages;
@property(retain, nonatomic) NSSet *localLanguages; // @synthesize localLanguages=_localLanguages;
- (void)dealloc;

@end

