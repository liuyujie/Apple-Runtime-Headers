//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FCOperation.h"

@class FCFlintResourceManager, NUEmbedConfigurationOperationResult;

@interface NUEmbedConfigurationOperation : FCOperation
{
    CDUnknownBlockType _completion;
    id <FCNewsAppConfigurationManager> _appConfigurationManager;
    FCFlintResourceManager *_flintResourceManager;
    NUEmbedConfigurationOperationResult *_result;
}

@property(retain, nonatomic) NUEmbedConfigurationOperationResult *result; // @synthesize result=_result;
@property(retain, nonatomic) FCFlintResourceManager *flintResourceManager; // @synthesize flintResourceManager=_flintResourceManager;
@property(retain, nonatomic) id <FCNewsAppConfigurationManager> appConfigurationManager; // @synthesize appConfigurationManager=_appConfigurationManager;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)initWithAppConfigManager:(id)arg1 flintResourceManager:(id)arg2;

@end

