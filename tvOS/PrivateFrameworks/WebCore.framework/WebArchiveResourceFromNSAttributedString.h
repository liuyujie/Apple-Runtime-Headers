//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface WebArchiveResourceFromNSAttributedString : NSObject
{
    struct RefPtr<WebCore::ArchiveResource, WTF::DumbPtrTraits<WebCore::ArchiveResource>> resource;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)URL;
- (id)MIMEType;
- (id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5;

@end

