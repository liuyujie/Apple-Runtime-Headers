//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CWNetwork.h"

@interface CWNetwork (CoreWLANKit)
+ (id)barsInMenuImageName:(int)arg1;
+ (id)barsImageName:(int)arg1;
+ (int)barsForScanRecord:(id)arg1;
+ (int)barsForSignal:(int)arg1 transmitRate:(int)arg2 maxTransmitRate:(int)arg3;
+ (int)barsForMappedTransmitRate:(int)arg1;
+ (int)barsForTransmitRate:(int)arg1 maxTransmitRate:(int)arg2;
+ (int)barsForSignal:(int)arg1;
+ (int)barsForRSSI:(int)arg1;
+ (id)filterNetworks:(id)arg1 excludingNameSubstring:(id)arg2;
+ (id)filterNetworks:(id)arg1 includingNameSubstring:(id)arg2;
+ (id)filterNetworksForEvilTwins:(id)arg1;
+ (id)sectionTitlesForGroup:(id)arg1;
+ (id)groupNetworksByBand:(id)arg1;
+ (id)groupNetworksBySignalStrength:(id)arg1;
+ (id)groupNetworksBySecurityType:(id)arg1;
+ (id)groupNetworksByMode:(id)arg1;
+ (id)groupNetworksByName:(id)arg1;
+ (id)defaultSortDescriptors;
+ (id)sortNetworksByChannel:(id)arg1;
+ (id)sortNetworksBySignal:(id)arg1;
+ (id)sortNetworksByName:(id)arg1;
+ (id)organizeNetworks:(id)arg1 intoGroups:(id)arg2 sortedBy:(id)arg3;
- (void)updateProfileForInterface:(id)arg1;
- (void)rememberNetworkPassword:(id)arg1;
- (void)rememberEnterpriseUsername:(id)arg1 password:(id)arg2 identity:(id)arg3;
- (BOOL)isAdHoc;
- (BOOL)isInfrastructure;
- (BOOL)isOpen;
- (BOOL)isWPS;
- (BOOL)isPassword;
- (BOOL)isEnterprise;
- (id)info;
- (id)securityString;
- (id)modeString;
- (BOOL)isSameNetwork:(id)arg1;
- (BOOL)canSolicitWPS;
- (BOOL)isSecure;
- (id)lockIcon;
- (id)signalIcon;
- (id)signalInMenuIcon;
- (int)bars;
@end

