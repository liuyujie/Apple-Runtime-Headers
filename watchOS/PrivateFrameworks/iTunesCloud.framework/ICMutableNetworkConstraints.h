//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesCloud/ICNetworkConstraints.h>

@interface ICMutableNetworkConstraints : ICNetworkConstraints
{
}

- (void)setSizeLimit:(id)arg1 forNetworkType:(int)arg2;
- (void)setShouldAllowDataForWiFiNetworkTypes:(_Bool)arg1;
- (void)setShouldAllowDataForCellularNetworkTypes:(_Bool)arg1;
- (void)setShouldAllowData:(_Bool)arg1 forNetworkType:(int)arg2;
- (void)setShouldAllowDataForAllNetworkTypes:(_Bool)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

