//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <BridgeOSInstall/BOSSUCOperation.h>

@interface BOSSUCApplyOperation : BOSSUCOperation
{
}

- (void)bridgeOSSoftwareUpdateController:(id)arg1 applyComplete:(id)arg2;
- (void)bridgeOSSoftwareUpdateController:(id)arg1 applyProgress:(double)arg2;
- (void)startControllerOperation;
- (id)description;
- (int)controllerEndingState;
- (int)controllerOperation;
- (id)initWithRequest:(id)arg1 controller:(id)arg2;

@end

