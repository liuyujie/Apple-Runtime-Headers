//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NULayoutContextSizerAttribute.h"

@class NSString;

@interface NULayoutContextSizerUserInterfaceIdiomAttribute : NSObject <NULayoutContextSizerAttribute>
{
    long long _userInterfaceIdiom;
}

@property(readonly, nonatomic) long long userInterfaceIdiom; // @synthesize userInterfaceIdiom=_userInterfaceIdiom;
- (_Bool)matchForLayoutContext:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithUserInterfaceIdiom:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
