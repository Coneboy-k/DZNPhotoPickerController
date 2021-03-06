//
//  FKFlickrGalleriesGetPhotos.h
//  FlickrKit
//
//  Generated by FKAPIBuilder on 12 Jun, 2013 at 17:19.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef enum {
	FKFlickrGalleriesGetPhotosError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrGalleriesGetPhotosError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrGalleriesGetPhotosError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrGalleriesGetPhotosError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrGalleriesGetPhotosError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrGalleriesGetPhotosError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrGalleriesGetPhotosError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

} FKFlickrGalleriesGetPhotosError;

/*

Return the list of photos for a gallery

Returns a <a href="http://code.flickr.com/blog/2008/08/19/standard-photos-response-apis-for-civilized-age/">standard photo response</a>.  Additionally if the gallery creator has included a comment with the photo this will be then the photo element will have the attribute has_comment="1" and the child element "comment" will be present.

Response:

<photos page="1" pages="1" perpage="500" total="2">
	<photo id="2822546461" owner="78398753@N00" secret="2dbcdb589f" server="1" farm="1" title="FOO" 
     ispublic="1" isfriend="0" isfamily="0" is_primary="1" has_comment="1">
		<comment>best cat picture ever!</comment>
	</photo>
	<photo id="2822544806" owner="78398753@N00" secret="bd93cbe917" server="1" farm="1" title="OOK" 
     ispublic="1" isfriend="0" isfamily="0" is_primary="0" has_comment="0" />
</photos>

*/
@interface FKFlickrGalleriesGetPhotos : NSObject <FKFlickrAPIMethod>

/* The ID of the gallery of photos to return */
@property (nonatomic, strong) NSString *gallery_id; /* (Required) */

/* A comma-delimited list of extra information to fetch for each returned record. Currently supported fields are: <code>description</code>, <code>license</code>, <code>date_upload</code>, <code>date_taken</code>, <code>owner_name</code>, <code>icon_server</code>, <code>original_format</code>, <code>last_update</code>, <code>geo</code>, <code>tags</code>, <code>machine_tags</code>, <code>o_dims</code>, <code>views</code>, <code>media</code>, <code>path_alias</code>, <code>url_sq</code>, <code>url_t</code>, <code>url_s</code>, <code>url_q</code>, <code>url_m</code>, <code>url_n</code>, <code>url_z</code>, <code>url_c</code>, <code>url_l</code>, <code>url_o</code> */
@property (nonatomic, strong) NSString *extras;

/* Number of photos to return per page. If this argument is omitted, it defaults to 100. The maximum allowed value is 500. */
@property (nonatomic, strong) NSString *per_page;

/* The page of results to return. If this argument is omitted, it defaults to 1. */
@property (nonatomic, strong) NSString *page;


@end
