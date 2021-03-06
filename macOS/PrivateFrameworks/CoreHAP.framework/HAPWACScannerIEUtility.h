//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class NSData, NSDictionary;

@interface HAPWACScannerIEUtility : HMFObject
{
    NSData *_ieData;
    const char *_iePtr;
    const char *_src;
    const char *_end;
    const char *_ptr;
    unsigned long long _len;
    BOOL _supportsHomeKit;
    BOOL _supportsPairSetupWAC;
    BOOL _supportsMFiAuthICV2;
    BOOL _supportsSTAOnly;
    BOOL _supportsAudioOnly;
    BOOL _supports2pt4GHzNetworks;
    BOOL _supports5GHzNetworks;
    BOOL _supportsTokenAuth;
    BOOL _pairedWithHomeKit;
}

@property(readonly, nonatomic) BOOL pairedWithHomeKit; // @synthesize pairedWithHomeKit=_pairedWithHomeKit;
@property(readonly, nonatomic) BOOL supportsTokenAuth; // @synthesize supportsTokenAuth=_supportsTokenAuth;
@property(readonly, nonatomic) BOOL supports5GHzNetworks; // @synthesize supports5GHzNetworks=_supports5GHzNetworks;
@property(readonly, nonatomic) BOOL supports2pt4GHzNetworks; // @synthesize supports2pt4GHzNetworks=_supports2pt4GHzNetworks;
@property(readonly, nonatomic) BOOL supportsAudioOnly; // @synthesize supportsAudioOnly=_supportsAudioOnly;
@property(readonly, nonatomic) BOOL supportsSTAOnly; // @synthesize supportsSTAOnly=_supportsSTAOnly;
@property(readonly, nonatomic) BOOL supportsMFiAuthICV2; // @synthesize supportsMFiAuthICV2=_supportsMFiAuthICV2;
@property(readonly, nonatomic) BOOL supportsPairSetupWAC; // @synthesize supportsPairSetupWAC=_supportsPairSetupWAC;
@property(readonly, nonatomic) BOOL supportsHomeKit; // @synthesize supportsHomeKit=_supportsHomeKit;
- (void).cxx_destruct;
@property(readonly, copy) NSDictionary *setupDictionary;
- (void)dealloc;
- (id)initWithIEData:(id)arg1;

@end

