//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CUISControlCenterProvider : NSObject
{
    id <CUISControlCenterProviderProtocol> _providerImplementation;
}

+ (id)sharedControlCenterProvider;
- (void).cxx_destruct;
- (id)providerImplementation;
- (void)setProviderImplementation:(id)arg1;
- (void)requestControlCenterViewControllerWithCompletion:(CDUnknownBlockType)arg1;

@end

