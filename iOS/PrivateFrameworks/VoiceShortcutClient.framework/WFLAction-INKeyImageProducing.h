//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFLAction.h"

#import "INKeyImageProducing.h"

@class INImage, NSString;

@interface WFLAction (INKeyImageProducing) <INKeyImageProducing>
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
@property(readonly) INImage *_keyImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
