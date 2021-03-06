//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ACHTemplateSource.h"

@class NSObject<ACHTemplateSourceDelegate>, NSString;

@interface ACHBuiltinTemplateSource : NSObject <ACHTemplateSource>
{
}

- (id)stickerBundleURLForTemplate:(id)arg1;
- (id)propertyListBundleURLForTemplate:(id)arg1;
- (id)resourceBundleURLForTemplate:(id)arg1;
- (id)localizationBundleURLForTemplate:(id)arg1;
- (void)templatesForDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)sourceShouldRunForDate:(id)arg1;
@property(readonly, nonatomic) long long runCadence;
@property(readonly, nonatomic) NSString *identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak NSObject<ACHTemplateSourceDelegate> *delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

