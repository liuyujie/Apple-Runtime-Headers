//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUExtensionHostContext.h>

#import "PUEditingExtensionHost.h"

@interface PUEditingExtensionHostContext : PUExtensionHostContext <PUEditingExtensionHost>
{
    CDUnknownBlockType _contentEditingOutputCommitHandler;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@property(copy) CDUnknownBlockType contentEditingOutputCommitHandler; // @synthesize contentEditingOutputCommitHandler=_contentEditingOutputCommitHandler;
- (void).cxx_destruct;
- (void)commitContentEditingOutput:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end

