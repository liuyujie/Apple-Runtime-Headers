//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface UIWebClipIcon : NSObject
{
    _Bool _precomposed;
    _Bool _siteWide;
    struct CGSize _bestSize;
    NSURL *_url;
}

@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) struct CGSize bestSize; // @synthesize bestSize=_bestSize;
@property(nonatomic, getter=isSiteWide) _Bool siteWide; // @synthesize siteWide=_siteWide;
@property(nonatomic, getter=isPrecomposed) _Bool precomposed; // @synthesize precomposed=_precomposed;
- (void).cxx_destruct;
- (int)compare:(id)arg1 preferringDeviceIconSizes:(_Bool)arg2;

@end

