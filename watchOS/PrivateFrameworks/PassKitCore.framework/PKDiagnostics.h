//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PKDiagnostics : NSObject
{
}

+ (void)saveTransitState:(id)arg1 forPaymentAppliction:(id)arg2;
+ (id)_metadataForCardAtURL:(id)arg1;
+ (id)_allPasses;
+ (id)_secureElementData;
+ (id)generateUbiquityDiagnosticsFile:(_Bool)arg1;
+ (void)generateZippedDiagnosticsPackageWithPassLibrary:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)generateDiagnosticsPackageWithPassLibrary:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;

@end

