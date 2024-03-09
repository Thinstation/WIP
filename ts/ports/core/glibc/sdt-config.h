






<!DOCTYPE html>
<html class="ui-gray with-header with-top-bar " lang="en">
<head prefix="og: http://ogp.me/ns#">
<meta charset="utf-8">
<meta content="IE=edge" http-equiv="X-UA-Compatible">
<meta content="width=device-width, initial-scale=1" name="viewport">
<title>sdt-config.h · main · Arch Linux / Packaging / Packages / glibc · GitLab</title>
<script>
//<![CDATA[
window.gon={};gon.math_rendering_limits_enabled=true;gon.features={"explainCodeChat":false,"encodingLogsTree":false};gon.licensed_features={"fileLocks":true,"remoteDevelopment":true};
//]]>
</script>

<script>
//<![CDATA[
var gl = window.gl || {};
gl.startup_calls = null;
gl.startup_graphql_calls = [{"query":"query getBlobInfo(\n  $projectPath: ID!\n  $filePath: String!\n  $ref: String!\n  $refType: RefType\n  $shouldFetchRawText: Boolean!\n) {\n  project(fullPath: $projectPath) {\n    __typename\n    id\n    repository {\n      __typename\n      empty\n      blobs(paths: [$filePath], ref: $ref, refType: $refType) {\n        __typename\n        nodes {\n          __typename\n          id\n          webPath\n          name\n          size\n          rawSize\n          rawTextBlob @include(if: $shouldFetchRawText)\n          fileType\n          language\n          path\n          blamePath\n          editBlobPath\n          gitpodBlobUrl\n          ideEditPath\n          forkAndEditPath\n          ideForkAndEditPath\n          codeNavigationPath\n          projectBlobPathRoot\n          forkAndViewPath\n          environmentFormattedExternalUrl\n          environmentExternalUrlForRouteMap\n          canModifyBlob\n          canCurrentUserPushToBranch\n          archived\n          storedExternally\n          externalStorage\n          externalStorageUrl\n          rawPath\n          replacePath\n          pipelineEditorPath\n          simpleViewer {\n            fileType\n            tooLarge\n            type\n            renderError\n          }\n          richViewer {\n            fileType\n            tooLarge\n            type\n            renderError\n          }\n        }\n      }\n    }\n  }\n}\n","variables":{"projectPath":"archlinux/packaging/packages/glibc","ref":"main","refType":"HEADS","filePath":"sdt-config.h","shouldFetchRawText":true}}];

if (gl.startup_calls && window.fetch) {
  Object.keys(gl.startup_calls).forEach(apiCall => {
   gl.startup_calls[apiCall] = {
      fetchCall: fetch(apiCall, {
        // Emulate XHR for Rails AJAX request checks
        headers: {
          'X-Requested-With': 'XMLHttpRequest'
        },
        // fetch won’t send cookies in older browsers, unless you set the credentials init option.
        // We set to `same-origin` which is default value in modern browsers.
        // See https://github.com/whatwg/fetch/pull/585 for more information.
        credentials: 'same-origin'
      })
    };
  });
}
if (gl.startup_graphql_calls && window.fetch) {
  const headers = {"X-CSRF-Token":"zIsZOkWvYaxuCvF2O9gUvxQxN9ey1N_L0bbEgKy7G5fosmYAanTeLoIyYRHQtOIWWvpTNIS7a9VhLIPQ_iXIFA","x-gitlab-feature-category":"source_code_management"};
  const url = `https://gitlab.archlinux.org/api/graphql`

  const opts = {
    method: "POST",
    headers: {
      "Content-Type": "application/json",
      ...headers,
    }
  };

  gl.startup_graphql_calls = gl.startup_graphql_calls.map(call => ({
    ...call,
    fetchCall: fetch(url, {
      ...opts,
      credentials: 'same-origin',
      body: JSON.stringify(call)
    })
  }))
}


//]]>
</script>

<link rel="prefetch" href="/assets/webpack/monaco.1a86c8b8.chunk.js">

<link rel="stylesheet" href="/assets/application-73616daa0479bf77369c603146e745cc4cb9874b3b38f81fb2993818049dbf1a.css" media="all" />
<link rel="stylesheet" href="/assets/page_bundles/tree-a5089dc5ce426c5f11ae90f6dc4a5b0be7ec204192f87d6438b0500eaf370d7c.css" media="all" /><link rel="stylesheet" href="/assets/page_bundles/projects-19d00c27fb64ce09449f9228ff65fd51d07a3886c5ed93dab08b08e1500d8342.css" media="all" />
<link rel="stylesheet" href="/assets/application_utilities-6e14369d68c173a17203053e264fd8034cea02c72b03d7d20c142f2e8b2ba2b8.css" media="all" />


<link rel="stylesheet" href="/assets/fonts-115c4704cb8c77e2fdf3fd0243eebf164e2e9b54bbab7bf6a4c14868b865ddf8.css" media="all" />
<link rel="stylesheet" href="/assets/highlight/themes/white-a6bcb4c616fa83a68bf0d7936411ba4d47fa78c1137817cc6ebdb97e656c6eb5.css" media="all" />


<link rel="preload" href="/assets/application_utilities-6e14369d68c173a17203053e264fd8034cea02c72b03d7d20c142f2e8b2ba2b8.css" as="style" type="text/css">
<link rel="preload" href="/assets/application-73616daa0479bf77369c603146e745cc4cb9874b3b38f81fb2993818049dbf1a.css" as="style" type="text/css">
<link rel="preload" href="/assets/highlight/themes/white-a6bcb4c616fa83a68bf0d7936411ba4d47fa78c1137817cc6ebdb97e656c6eb5.css" as="style" type="text/css">





<script src="/assets/webpack/runtime.12678ae7.bundle.js" defer="defer"></script>
<script src="/assets/webpack/main.a2c746fe.chunk.js" defer="defer"></script>
<script src="/assets/webpack/commons-pages.search.show-super_sidebar.1f09104f.chunk.js" defer="defer"></script>
<script src="/assets/webpack/super_sidebar.b2a6659b.chunk.js" defer="defer"></script>
<script src="/assets/webpack/commons-pages.groups.boards-pages.groups.details-pages.groups.epic_boards-pages.groups.show-pages.gr-539c0ac7.5ccc45fe.chunk.js" defer="defer"></script>
<script src="/assets/webpack/commons-pages.admin.runners.show-pages.clusters.agents.dashboard-pages.explore.catalog-pages.groups.-b6758198.207262fa.chunk.js" defer="defer"></script>
<script src="/assets/webpack/commons-pages.groups.security.policies.edit-pages.groups.security.policies.new-pages.projects.blob.s-b77fad0c.8f16c3f3.chunk.js" defer="defer"></script>
<script src="/assets/webpack/commons-pages.admin.subscriptions.show-pages.groups.security.policies.edit-pages.groups.security.pol-6bfecbfa.b4429696.chunk.js" defer="defer"></script>
<script src="/assets/webpack/114.06c93378.chunk.js" defer="defer"></script>
<script src="/assets/webpack/commons-pages.groups.show-pages.projects.blob.show-pages.projects.show-pages.projects.snippets.show--90d3b3a3.1c5b7d7f.chunk.js" defer="defer"></script>
<script src="/assets/webpack/commons-pages.projects.blob.show-pages.projects.show-pages.projects.snippets.show-pages.projects.tre-c684fcf6.d6b0e055.chunk.js" defer="defer"></script>
<script src="/assets/webpack/133.9af534f6.chunk.js" defer="defer"></script>
<script src="/assets/webpack/commons-pages.projects.blob.show-pages.projects.show-pages.projects.tree.show.f35d1c09.chunk.js" defer="defer"></script>
<script src="/assets/webpack/pages.projects.blob.show.c7554a21.chunk.js" defer="defer"></script>
<meta content="object" property="og:type">
<meta content="GitLab" property="og:site_name">
<meta content="sdt-config.h · main · Arch Linux / Packaging / Packages / glibc · GitLab" property="og:title">
<meta content="GNU C Library packages: glibc lib32-glibc glibc-locales" property="og:description">
<meta content="https://gitlab.archlinux.org/assets/twitter_card-570ddb06edf56a2312253c5872489847a0f385112ddbcd71ccfa1570febab5d2.jpg" property="og:image">
<meta content="64" property="og:image:width">
<meta content="64" property="og:image:height">
<meta content="https://gitlab.archlinux.org/archlinux/packaging/packages/glibc/-/blob/main/sdt-config.h?ref_type=heads" property="og:url">
<meta content="summary" property="twitter:card">
<meta content="sdt-config.h · main · Arch Linux / Packaging / Packages / glibc · GitLab" property="twitter:title">
<meta content="GNU C Library packages: glibc lib32-glibc glibc-locales" property="twitter:description">
<meta content="https://gitlab.archlinux.org/assets/twitter_card-570ddb06edf56a2312253c5872489847a0f385112ddbcd71ccfa1570febab5d2.jpg" property="twitter:image">

<meta name="csrf-param" content="authenticity_token" />
<meta name="csrf-token" content="hWwv1Z2v-Qx8ZttbfoNFK7BYOUY8rrn2CQsZB6oAzFihVVDvsnRGjpBeSzyV77OC_pNdpQrBDei5kV5X-J4f2w" />
<meta name="csp-nonce" />
<meta name="action-cable-url" content="/-/cable" />
<link href="/-/manifest.json" rel="manifest">
<link rel="icon" type="image/png" href="/uploads/-/system/appearance/favicon/1/lol3.png" id="favicon" data-original-href="/uploads/-/system/appearance/favicon/1/lol3.png" />
<link rel="apple-touch-icon" type="image/x-icon" href="/assets/apple-touch-icon-b049d4bc0dd9626f31db825d61880737befc7835982586d015bded10b4435460.png" />
<link href="/search/opensearch.xml" rel="search" title="Search GitLab" type="application/opensearchdescription+xml">




<meta content="GNU C Library packages: glibc lib32-glibc glibc-locales" name="description">
<meta content="#333238" name="theme-color">
</head>

<body class="tab-width-8 gl-browser-generic gl-platform-other  " data-find-file="/archlinux/packaging/packages/glibc/-/find_file/main?ref_type=heads" data-group="packages" data-group-full-path="archlinux/packaging/packages" data-namespace-id="11323" data-page="projects:blob:show" data-page-type-id="main/sdt-config.h" data-project="glibc" data-project-id="34175">

<script>
//<![CDATA[
gl = window.gl || {};
gl.client = {"isGeneric":true,"isOther":true};


//]]>
</script>



<header class="header-logged-out" data-testid="navbar">
<a class="gl-sr-only gl-accessibility" href="#content-body">Skip to content</a>
<div class="container-fluid">
<nav aria-label="Explore GitLab" class="header-logged-out-nav gl-display-flex gl-gap-3 gl-justify-content-space-between">
<div class="gl-display-flex gl-align-items-center gl-gap-1">
<span class="gl-sr-only">GitLab</span>
<a title="Homepage" id="logo" class="header-logged-out-logo has-tooltip" aria-label="Homepage" href="/"><img class="brand-header-logo lazy" alt="" data-src="/uploads/-/system/appearance/header_logo/1/lol3.png" src="data:image/gif;base64,R0lGODlhAQABAAAAACH5BAEKAAEALAAAAAABAAEAAAICTAEAOw==" />
</a></div>
<ul class="gl-list-style-none gl-p-0 gl-m-0 gl-display-flex gl-gap-3 gl-align-items-center gl-flex-grow-1">
<li class="header-logged-out-nav-item">
<a class="" href="/explore">Explore</a>
</li>
</ul>
<ul class="gl-list-style-none gl-p-0 gl-m-0 gl-display-flex gl-gap-3 gl-align-items-center gl-justify-content-end">
<li class="header-logged-out-nav-item">
<a href="/users/sign_in?redirect_to_referer=yes">Sign in</a>
</li>
</ul>
</nav>
</div>
</header>

<div class="layout-page page-with-super-sidebar">
<aside class="js-super-sidebar super-sidebar super-sidebar-loading" data-command-palette="{&quot;project_files_url&quot;:&quot;/archlinux/packaging/packages/glibc/-/files/main?format=json&quot;,&quot;project_blob_url&quot;:&quot;/archlinux/packaging/packages/glibc/-/blob/main&quot;}" data-force-desktop-expanded-sidebar="" data-root-path="/" data-sidebar="{&quot;is_logged_in&quot;:false,&quot;context_switcher_links&quot;:[{&quot;title&quot;:&quot;Explore&quot;,&quot;link&quot;:&quot;/explore&quot;,&quot;icon&quot;:&quot;compass&quot;}],&quot;current_menu_items&quot;:[{&quot;id&quot;:&quot;project_overview&quot;,&quot;title&quot;:&quot;glibc&quot;,&quot;icon&quot;:null,&quot;avatar&quot;:null,&quot;entity_id&quot;:34175,&quot;link&quot;:&quot;/archlinux/packaging/packages/glibc&quot;,&quot;pill_count&quot;:null,&quot;link_classes&quot;:&quot;shortcuts-project&quot;,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;manage_menu&quot;,&quot;title&quot;:&quot;Manage&quot;,&quot;icon&quot;:&quot;users&quot;,&quot;avatar&quot;:null,&quot;avatar_shape&quot;:&quot;rect&quot;,&quot;entity_id&quot;:null,&quot;link&quot;:&quot;/archlinux/packaging/packages/glibc/activity&quot;,&quot;is_active&quot;:false,&quot;pill_count&quot;:null,&quot;items&quot;:[{&quot;id&quot;:&quot;activity&quot;,&quot;title&quot;:&quot;Activity&quot;,&quot;icon&quot;:null,&quot;avatar&quot;:null,&quot;entity_id&quot;:null,&quot;link&quot;:&quot;/archlinux/packaging/packages/glibc/activity&quot;,&quot;pill_count&quot;:null,&quot;link_classes&quot;:&quot;shortcuts-project-activity&quot;,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;members&quot;,&quot;title&quot;:&quot;Members&quot;,&quot;icon&quot;:null,&quot;avatar&quot;:null,&quot;entity_id&quot;:null,&quot;link&quot;:&quot;/archlinux/packaging/packages/glibc/-/project_members&quot;,&quot;pill_count&quot;:null,&quot;link_classes&quot;:null,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;labels&quot;,&quot;title&quot;:&quot;Labels&quot;,&quot;icon&quot;:null,&quot;avatar&quot;:null,&quot;entity_id&quot;:null,&quot;link&quot;:&quot;/archlinux/packaging/packages/glibc/-/labels&quot;,&quot;pill_count&quot;:null,&quot;link_classes&quot;:null,&quot;is_active&quot;:false}],&quot;separated&quot;:false},{&quot;id&quot;:&quot;plan_menu&quot;,&quot;title&quot;:&quot;Plan&quot;,&quot;icon&quot;:&quot;planning&quot;,&quot;avatar&quot;:null,&quot;avatar_shape&quot;:&quot;rect&quot;,&quot;entity_id&quot;:null,&quot;link&quot;:&quot;/archlinux/packaging/packages/glibc/-/issues&quot;,&quot;is_active&quot;:false,&quot;pill_count&quot;:null,&quot;items&quot;:[{&quot;id&quot;:&quot;project_issue_list&quot;,&quot;title&quot;:&quot;Issues&quot;,&quot;icon&quot;:null,&quot;avatar&quot;:null,&quot;entity_id&quot;:null,&quot;link&quot;:&quot;/archlinux/packaging/packages/glibc/-/issues&quot;,&quot;pill_count&quot;:&quot;0&quot;,&quot;link_classes&quot;:&quot;shortcuts-issues has-sub-items&quot;,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;boards&quot;,&quot;title&quot;:&quot;Issue boards&quot;,&quot;icon&quot;:null,&quot;avatar&quot;:null,&quot;entity_id&quot;:null,&quot;link&quot;:&quot;/archlinux/packaging/packages/glibc/-/boards&quot;,&quot;pill_count&quot;:null,&quot;link_classes&quot;:&quot;shortcuts-issue-boards&quot;,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;milestones&quot;,&quot;title&quot;:&quot;Milestones&quot;,&quot;icon&quot;:null,&quot;avatar&quot;:null,&quot;entity_id&quot;:null,&quot;link&quot;:&quot;/archlinux/packaging/packages/glibc/-/milestones&quot;,&quot;pill_count&quot;:null,&quot;link_classes&quot;:null,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;iterations&quot;,&quot;title&quot;:&quot;Iterations&quot;,&quot;icon&quot;:null,&quot;avatar&quot;:null,&quot;entity_id&quot;:null,&quot;link&quot;:&quot;/archlinux/packaging/packages/glibc/-/cadences&quot;,&quot;pill_count&quot;:null,&quot;link_classes&quot;:null,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;project_wiki&quot;,&quot;title&quot;:&quot;Wiki&quot;,&quot;icon&quot;:null,&quot;avatar&quot;:null,&quot;entity_id&quot;:null,&quot;link&quot;:&quot;/archlinux/packaging/packages/glibc/-/wikis/home&quot;,&quot;pill_count&quot;:null,&quot;link_classes&quot;:&quot;shortcuts-wiki&quot;,&quot;is_active&quot;:false}],&quot;separated&quot;:false},{&quot;id&quot;:&quot;code_menu&quot;,&quot;title&quot;:&quot;Code&quot;,&quot;icon&quot;:&quot;code&quot;,&quot;avatar&quot;:null,&quot;avatar_shape&quot;:&quot;rect&quot;,&quot;entity_id&quot;:null,&quot;link&quot;:&quot;/archlinux/packaging/packages/glibc/-/merge_requests&quot;,&quot;is_active&quot;:true,&quot;pill_count&quot;:null,&quot;items&quot;:[{&quot;id&quot;:&quot;project_merge_request_list&quot;,&quot;title&quot;:&quot;Merge requests&quot;,&quot;icon&quot;:null,&quot;avatar&quot;:null,&quot;entity_id&quot;:null,&quot;link&quot;:&quot;/archlinux/packaging/packages/glibc/-/merge_requests&quot;,&quot;pill_count&quot;:&quot;0&quot;,&quot;link_classes&quot;:&quot;shortcuts-merge_requests&quot;,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;files&quot;,&quot;title&quot;:&quot;Repository&quot;,&quot;icon&quot;:null,&quot;avatar&quot;:null,&quot;entity_id&quot;:null,&quot;link&quot;:&quot;/archlinux/packaging/packages/glibc/-/tree/main&quot;,&quot;pill_count&quot;:null,&quot;link_classes&quot;:&quot;shortcuts-tree&quot;,&quot;is_active&quot;:true},{&quot;id&quot;:&quot;branches&quot;,&quot;title&quot;:&quot;Branches&quot;,&quot;icon&quot;:null,&quot;avatar&quot;:null,&quot;entity_id&quot;:null,&quot;link&quot;:&quot;/archlinux/packaging/packages/glibc/-/branches&quot;,&quot;pill_count&quot;:null,&quot;link_classes&quot;:null,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;commits&quot;,&quot;title&quot;:&quot;Commits&quot;,&quot;icon&quot;:null,&quot;avatar&quot;:null,&quot;entity_id&quot;:null,&quot;link&quot;:&quot;/archlinux/packaging/packages/glibc/-/commits/main?ref_type=heads&quot;,&quot;pill_count&quot;:null,&quot;link_classes&quot;:&quot;shortcuts-commits&quot;,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;tags&quot;,&quot;title&quot;:&quot;Tags&quot;,&quot;icon&quot;:null,&quot;avatar&quot;:null,&quot;entity_id&quot;:null,&quot;link&quot;:&quot;/archlinux/packaging/packages/glibc/-/tags&quot;,&quot;pill_count&quot;:null,&quot;link_classes&quot;:null,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;graphs&quot;,&quot;title&quot;:&quot;Repository graph&quot;,&quot;icon&quot;:null,&quot;avatar&quot;:null,&quot;entity_id&quot;:null,&quot;link&quot;:&quot;/archlinux/packaging/packages/glibc/-/network/main?ref_type=heads&quot;,&quot;pill_count&quot;:null,&quot;link_classes&quot;:&quot;shortcuts-network&quot;,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;compare&quot;,&quot;title&quot;:&quot;Compare revisions&quot;,&quot;icon&quot;:null,&quot;avatar&quot;:null,&quot;entity_id&quot;:null,&quot;link&quot;:&quot;/archlinux/packaging/packages/glibc/-/compare?from=main\u0026to=main&quot;,&quot;pill_count&quot;:null,&quot;link_classes&quot;:null,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;file_locks&quot;,&quot;title&quot;:&quot;Locked files&quot;,&quot;icon&quot;:null,&quot;avatar&quot;:null,&quot;entity_id&quot;:null,&quot;link&quot;:&quot;/archlinux/packaging/packages/glibc/path_locks&quot;,&quot;pill_count&quot;:null,&quot;link_classes&quot;:null,&quot;is_active&quot;:false}],&quot;separated&quot;:false},{&quot;id&quot;:&quot;monitor_menu&quot;,&quot;title&quot;:&quot;Monitor&quot;,&quot;icon&quot;:&quot;monitor&quot;,&quot;avatar&quot;:null,&quot;avatar_shape&quot;:&quot;rect&quot;,&quot;entity_id&quot;:null,&quot;link&quot;:&quot;/archlinux/packaging/packages/glibc/-/issues/service_desk&quot;,&quot;is_active&quot;:false,&quot;pill_count&quot;:null,&quot;items&quot;:[{&quot;id&quot;:&quot;service_desk&quot;,&quot;title&quot;:&quot;Service Desk&quot;,&quot;icon&quot;:null,&quot;avatar&quot;:null,&quot;entity_id&quot;:null,&quot;link&quot;:&quot;/archlinux/packaging/packages/glibc/-/issues/service_desk&quot;,&quot;pill_count&quot;:null,&quot;link_classes&quot;:null,&quot;is_active&quot;:false}],&quot;separated&quot;:false},{&quot;id&quot;:&quot;analyze_menu&quot;,&quot;title&quot;:&quot;Analyze&quot;,&quot;icon&quot;:&quot;chart&quot;,&quot;avatar&quot;:null,&quot;avatar_shape&quot;:&quot;rect&quot;,&quot;entity_id&quot;:null,&quot;link&quot;:&quot;/archlinux/packaging/packages/glibc/-/value_stream_analytics&quot;,&quot;is_active&quot;:false,&quot;pill_count&quot;:null,&quot;items&quot;:[{&quot;id&quot;:&quot;cycle_analytics&quot;,&quot;title&quot;:&quot;Value stream analytics&quot;,&quot;icon&quot;:null,&quot;avatar&quot;:null,&quot;entity_id&quot;:null,&quot;link&quot;:&quot;/archlinux/packaging/packages/glibc/-/value_stream_analytics&quot;,&quot;pill_count&quot;:null,&quot;link_classes&quot;:&quot;shortcuts-project-cycle-analytics&quot;,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;contributors&quot;,&quot;title&quot;:&quot;Contributor analytics&quot;,&quot;icon&quot;:null,&quot;avatar&quot;:null,&quot;entity_id&quot;:null,&quot;link&quot;:&quot;/archlinux/packaging/packages/glibc/-/graphs/main?ref_type=heads&quot;,&quot;pill_count&quot;:null,&quot;link_classes&quot;:null,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;repository_analytics&quot;,&quot;title&quot;:&quot;Repository analytics&quot;,&quot;icon&quot;:null,&quot;avatar&quot;:null,&quot;entity_id&quot;:null,&quot;link&quot;:&quot;/archlinux/packaging/packages/glibc/-/graphs/main/charts&quot;,&quot;pill_count&quot;:null,&quot;link_classes&quot;:&quot;shortcuts-repository-charts&quot;,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;code_review&quot;,&quot;title&quot;:&quot;Code review analytics&quot;,&quot;icon&quot;:null,&quot;avatar&quot;:null,&quot;entity_id&quot;:null,&quot;link&quot;:&quot;/archlinux/packaging/packages/glibc/-/analytics/code_reviews&quot;,&quot;pill_count&quot;:null,&quot;link_classes&quot;:null,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;issues&quot;,&quot;title&quot;:&quot;Issue analytics&quot;,&quot;icon&quot;:null,&quot;avatar&quot;:null,&quot;entity_id&quot;:null,&quot;link&quot;:&quot;/archlinux/packaging/packages/glibc/-/analytics/issues_analytics&quot;,&quot;pill_count&quot;:null,&quot;link_classes&quot;:null,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;insights&quot;,&quot;title&quot;:&quot;Insights&quot;,&quot;icon&quot;:null,&quot;avatar&quot;:null,&quot;entity_id&quot;:null,&quot;link&quot;:&quot;/archlinux/packaging/packages/glibc/insights/&quot;,&quot;pill_count&quot;:null,&quot;link_classes&quot;:&quot;shortcuts-project-insights&quot;,&quot;is_active&quot;:false},{&quot;id&quot;:&quot;model_experiments&quot;,&quot;title&quot;:&quot;Model experiments&quot;,&quot;icon&quot;:null,&quot;avatar&quot;:null,&quot;entity_id&quot;:null,&quot;link&quot;:&quot;/archlinux/packaging/packages/glibc/-/ml/experiments&quot;,&quot;pill_count&quot;:null,&quot;link_classes&quot;:null,&quot;is_active&quot;:false}],&quot;separated&quot;:false}],&quot;current_context_header&quot;:&quot;Project&quot;,&quot;support_path&quot;:&quot;https://about.gitlab.com/get-help/&quot;,&quot;display_whats_new&quot;:false,&quot;whats_new_most_recent_release_items_count&quot;:6,&quot;whats_new_version_digest&quot;:&quot;3cf20e77ac28338f2ca7083d2a5b7759347c5dbfe0c5bae7c69e6610c1bacc41&quot;,&quot;show_version_check&quot;:null,&quot;gitlab_version&quot;:{&quot;major&quot;:16,&quot;minor&quot;:9,&quot;patch&quot;:0,&quot;suffix_s&quot;:&quot;&quot;},&quot;gitlab_version_check&quot;:null,&quot;search&quot;:{&quot;search_path&quot;:&quot;/search&quot;,&quot;issues_path&quot;:&quot;/dashboard/issues&quot;,&quot;mr_path&quot;:&quot;/dashboard/merge_requests&quot;,&quot;autocomplete_path&quot;:&quot;/search/autocomplete&quot;,&quot;search_context&quot;:{&quot;group&quot;:{&quot;id&quot;:11323,&quot;name&quot;:&quot;Packages&quot;,&quot;full_name&quot;:&quot;Arch Linux / Packaging / Packages&quot;},&quot;group_metadata&quot;:{&quot;issues_path&quot;:&quot;/groups/archlinux/packaging/packages/-/issues&quot;,&quot;mr_path&quot;:&quot;/groups/archlinux/packaging/packages/-/merge_requests&quot;},&quot;project&quot;:{&quot;id&quot;:34175,&quot;name&quot;:&quot;glibc&quot;},&quot;project_metadata&quot;:{&quot;mr_path&quot;:&quot;/archlinux/packaging/packages/glibc/-/merge_requests&quot;,&quot;issues_path&quot;:&quot;/archlinux/packaging/packages/glibc/-/issues&quot;},&quot;code_search&quot;:true,&quot;ref&quot;:&quot;main&quot;,&quot;scope&quot;:null,&quot;for_snippets&quot;:null}},&quot;panel_type&quot;:&quot;project&quot;,&quot;shortcut_links&quot;:[{&quot;title&quot;:&quot;Snippets&quot;,&quot;href&quot;:&quot;/explore/snippets&quot;,&quot;css_class&quot;:&quot;dashboard-shortcuts-snippets&quot;},{&quot;title&quot;:&quot;Groups&quot;,&quot;href&quot;:&quot;/explore/groups&quot;,&quot;css_class&quot;:&quot;dashboard-shortcuts-groups&quot;},{&quot;title&quot;:&quot;Projects&quot;,&quot;href&quot;:&quot;/explore/projects&quot;,&quot;css_class&quot;:&quot;dashboard-shortcuts-projects&quot;}]}"></aside>

<div class="content-wrapper">
<div class="mobile-overlay"></div>

<div class="alert-wrapper gl-force-block-formatting-context">





<div class="gl-broadcast-message broadcast-banner-message banner js-broadcast-notification-1 light-red" data-testid="banner-broadcast-message" role="alert">
<div class="gl-broadcast-message-content">
<div class="gl-broadcast-message-icon">
<svg class="s16" data-testid="bullhorn-icon"><use href="/assets/icons-6f8fc8caf4d3bb7dcb398720822d1175c6f60649adbb5be073b36a5d0b04e465.svg#bullhorn"></use></svg>
</div>
<div class="gl-broadcast-message-text js-broadcast-message-preview">
<h2 class="gl-sr-only">
Admin message
</h2>
<p>Due to an influx of spam, we have had to temporarily disable account registrations. Please write an email to <a href="mailto:accountsupport@archlinux.org">accountsupport@archlinux.org</a>, with your desired username, if you want to get access. Sorry for the inconvenience.</p>
</div>
</div>
<button class="gl-button btn btn-icon btn-sm btn-default btn-default-tertiary gl-close-btn-color-inherit gl-broadcast-message-dismiss js-dismiss-current-broadcast-notification" aria-label="Close" data-id="1" data-expire-date="2025-08-28T17:11:54Z" type="button"><svg class="s16 gl-icon gl-button-icon gl-text-white" data-testid="close-icon"><use href="/assets/icons-6f8fc8caf4d3bb7dcb398720822d1175c6f60649adbb5be073b36a5d0b04e465.svg#close"></use></svg>

</button>
</div>






















<div class="top-bar-fixed container-fluid" data-testid="top-bar">
<div class="top-bar-container gl-display-flex gl-align-items-center gl-gap-2">
<button class="gl-button btn btn-icon btn-md btn-default btn-default-tertiary js-super-sidebar-toggle-expand super-sidebar-toggle gl-ml-n3" aria-controls="super-sidebar" aria-expanded="false" aria-label="Primary navigation sidebar" type="button"><svg class="s16 gl-icon gl-button-icon " data-testid="sidebar-icon"><use href="/assets/icons-6f8fc8caf4d3bb7dcb398720822d1175c6f60649adbb5be073b36a5d0b04e465.svg#sidebar"></use></svg>

</button>
<nav aria-label="Breadcrumbs" class="breadcrumbs gl-breadcrumbs" data-testid="breadcrumb-links">
<ul class="breadcrumb gl-breadcrumb-list js-breadcrumbs-list">
<li class="gl-breadcrumb-item gl-display-inline-flex"><a class="group-path js-breadcrumb-item-text " href="/archlinux"><img srcset="/uploads/-/system/group/avatar/23/iconfinder_archlinux_386451.png?width=16 1x, /uploads/-/system/group/avatar/23/iconfinder_archlinux_386451.png?width=32 2x" alt="Arch Linux" class="gl-avatar gl-avatar-s16 avatar-tile gl-rounded-base!" height="16" width="16" loading="lazy" src="/uploads/-/system/group/avatar/23/iconfinder_archlinux_386451.png?width=16" />
Arch Linux</a></li><li class="expander gl-breadcrumb-item gl-display-inline-flex">
<button aria-label="Show all breadcrumbs" class="text-expander has-tooltip js-breadcrumbs-collapsed-expander gl-ml-0" data-container="body" title="Show all breadcrumbs" type="button">
<svg class="s12" data-testid="ellipsis_h-icon"><use href="/assets/icons-6f8fc8caf4d3bb7dcb398720822d1175c6f60649adbb5be073b36a5d0b04e465.svg#ellipsis_h"></use></svg>
</button>
</li>
<li class="gl-breadcrumb-item gl-display-none!">
<a class="group-path js-breadcrumb-item-text " href="/archlinux/packaging">Packaging</a>
</li>
<li class="gl-breadcrumb-item gl-display-inline-flex"><a class="group-path js-breadcrumb-item-text " href="/archlinux/packaging/packages">Packages</a></li> <li class="gl-breadcrumb-item gl-display-inline-flex"><a class="gl-display-inline-flex!" href="/archlinux/packaging/packages/glibc"><span class="js-breadcrumb-item-text">glibc</span></a></li>

<li class="gl-breadcrumb-item" data-testid="breadcrumb-current-link">
<a href="/archlinux/packaging/packages/glibc/-/blob/main/sdt-config.h?ref_type=heads">Repository</a>
</li>
</ul>
<script type="application/ld+json">
{"@context":"https://schema.org","@type":"BreadcrumbList","itemListElement":[{"@type":"ListItem","position":1,"name":"Arch Linux","item":"https://gitlab.archlinux.org/archlinux"},{"@type":"ListItem","position":2,"name":"Packaging","item":"https://gitlab.archlinux.org/archlinux/packaging"},{"@type":"ListItem","position":3,"name":"Packages","item":"https://gitlab.archlinux.org/archlinux/packaging/packages"},{"@type":"ListItem","position":4,"name":"glibc","item":"https://gitlab.archlinux.org/archlinux/packaging/packages/glibc"},{"@type":"ListItem","position":5,"name":"Repository","item":"https://gitlab.archlinux.org/archlinux/packaging/packages/glibc/-/blob/main/sdt-config.h?ref_type=heads"}]}

</script>
</nav>



</div>
</div>

</div>
<div class="container-fluid container-limited project-highlight-puc">
<main class="content" id="content-body" itemscope itemtype="http://schema.org/SoftwareSourceCode">
<div class="flash-container flash-container-page sticky" data-testid="flash-container">
<div id="js-global-alerts"></div>
</div>




<div class="js-signature-container" data-signatures-path="/archlinux/packaging/packages/glibc/-/commits/377802df9bcab2e7cb7cad7c0953f3ec371e5c9f/signatures?limit=1"></div>

<div class="tree-holder gl-pt-4" id="tree-holder">
<div class="nav-block">
<div class="tree-ref-container">
<div class="tree-ref-holder gl-max-w-26">
<div data-project-id="34175" data-project-root-path="/archlinux/packaging/packages/glibc" data-ref="main" data-ref-type="heads" id="js-tree-ref-switcher"></div>
</div>
<ul class="breadcrumb repo-breadcrumb">
<li class="breadcrumb-item">
<a href="/archlinux/packaging/packages/glibc/-/tree/main?ref_type=heads">glibc
</a></li>
<li class="breadcrumb-item">
<a href="/archlinux/packaging/packages/glibc/-/blob/main/sdt-config.h?ref_type=heads"><strong>sdt-config.h</strong>
</a></li>
</ul>
</div>
<div class="tree-controls gl-display-flex gl-flex-wrap gl-sm-flex-nowrap gl-align-items-baseline gl-gap-3">
<a aria-keyshortcuts="t" class="gl-button btn btn-md btn-default has-tooltip shortcuts-find-file" data-html="true" title="Go to find file &lt;kbd class=&#39;flat ml-1&#39; aria-hidden=true&gt;t&lt;/kbd&gt;" rel="nofollow" href="/archlinux/packaging/packages/glibc/-/find_file/main?ref_type=heads"><span class="gl-button-text">
Find file
</span>

</a>

<a class="gl-button btn btn-md btn-default js-blob-blame-link" href="/archlinux/packaging/packages/glibc/-/blame/main/sdt-config.h?ref_type=heads"><span class="gl-button-text">
Blame
</span>

</a>
<a class="gl-button btn btn-md btn-default " href="/archlinux/packaging/packages/glibc/-/commits/main/sdt-config.h?ref_type=heads"><span class="gl-button-text">
History
</span>

</a>
<a aria-keyshortcuts="y" class="gl-button btn btn-md btn-default has-tooltip js-data-file-blob-permalink-url" data-html="true" title="Go to permalink &lt;kbd class=&#39;flat ml-1&#39; aria-hidden=true&gt;y&lt;/kbd&gt;" href="/archlinux/packaging/packages/glibc/-/blob/8b1b69f8277555257a0ec9681b90dcd9bd6faabd/sdt-config.h"><span class="gl-button-text">
Permalink
</span>

</a>
</div>
</div>

<div class="info-well d-none d-sm-block">
<div class="well-segment">
<ul class="blob-commit-info">
<li class="commit flex-row js-toggle-container" id="commit-377802df">
<div class="avatar-cell d-none d-sm-block">
<a href="/bpiotrowski"><img alt="Bartłomiej Piotrowski&#39;s avatar" src="https://secure.gravatar.com/avatar/8ae7a5d1a640ed14cb7397faa724e18450871ef32dffbcd4bb2b8a34c8bbee2f?s=80&amp;d=identicon" class="avatar s40 gl-display-none gl-sm-display-inline-block" title="Bartłomiej Piotrowski"></a>
</div>
<div class="commit-detail flex-list gl-display-flex gl-justify-content-space-between gl-align-items-center gl-flex-grow-1 gl-min-w-0">
<div class="commit-content" data-testid="commit-content">
<a class="commit-row-message item-title js-onboarding-commit-item " href="/archlinux/packaging/packages/glibc/-/commit/377802df9bcab2e7cb7cad7c0953f3ec371e5c9f">2.30-2: binutils 2.33.1 rebuild</a>
<span class="commit-row-message d-inline d-sm-none">
&middot;
377802df
</span>
<button class="gl-button btn btn-icon btn-md btn-default button-ellipsis-horizontal text-expander js-toggle-button" data-toggle="tooltip" data-container="body" data-collapse-title="Toggle commit description" data-expand-title="Toggle commit description" title="Toggle commit description" aria-label="Toggle commit description" type="button"><svg class="s16 gl-icon gl-button-icon " data-testid="ellipsis_h-icon"><use href="/assets/icons-6f8fc8caf4d3bb7dcb398720822d1175c6f60649adbb5be073b36a5d0b04e465.svg#ellipsis_h"></use></svg>

</button>
<div class="committer">
<a class="commit-author-link js-user-link" data-user-id="37" href="/bpiotrowski">Bartłomiej Piotrowski</a> authored <time class="js-timeago" title="Oct 24, 2019 4:30pm" datetime="2019-10-24T16:30:16Z" data-toggle="tooltip" data-placement="bottom" data-container="body">Oct 24, 2019</time>
</div>

<pre class="commit-row-description gl-mb-3 gl-white-space-pre-line js-toggle-content">&#x000A;Also install SDT headers from systemtap for tracing probes.</pre>
</div>
<div class="commit-actions flex-row">

<div class="js-commit-pipeline-status" data-endpoint="/archlinux/packaging/packages/glibc/-/commit/377802df9bcab2e7cb7cad7c0953f3ec371e5c9f/pipelines?ref=main"></div>
<div class="commit-sha-group btn-group d-none d-sm-flex">
<div class="label label-monospace monospace">
377802df
</div>
<button class="gl-button btn btn-icon btn-md btn-default " title="Copy commit SHA" aria-label="Copy commit SHA" aria-live="polite" data-toggle="tooltip" data-placement="bottom" data-container="body" data-html="true" data-category="primary" data-size="medium" data-clipboard-text="377802df9bcab2e7cb7cad7c0953f3ec371e5c9f" type="button"><svg class="s16 gl-icon gl-button-icon " data-testid="copy-to-clipboard-icon"><use href="/assets/icons-6f8fc8caf4d3bb7dcb398720822d1175c6f60649adbb5be073b36a5d0b04e465.svg#copy-to-clipboard"></use></svg>

</button>

</div>
</div>
</div>
</li>

</ul>
</div>
<div data-blob-path="sdt-config.h" data-branch="main" data-branch-rules-path="/archlinux/packaging/packages/glibc/-/settings/repository#js-branch-rules" data-project-path="archlinux/packaging/packages/glibc" id="js-code-owners"></div>

</div>
<div class="blob-content-holder js-per-page" data-blame-per-page="1000" id="blob-content-holder">
<div data-blob-path="sdt-config.h" data-explain-code-available="false" data-new-workspace-path="/-/remote_development/workspaces/new" data-original-branch="main" data-project-path="archlinux/packaging/packages/glibc" data-ref-type="heads" data-resource-id="gid://gitlab/Project/34175" data-target-branch="main" data-user-id="" id="js-view-blob-app">
<div class="gl-spinner-container" role="status"><span aria-label="Loading" class="gl-spinner gl-spinner-md gl-spinner-dark gl-vertical-align-text-bottom!"></span></div>
</div>
</div>

</div>

<script>
//<![CDATA[
  window.gl = window.gl || {};
  window.gl.webIDEPath = '/-/ide/project/archlinux/packaging/packages/glibc/edit/main/-/sdt-config.h'


//]]>
</script>
<div data-ambiguous="false" data-ref="main" id="js-ambiguous-ref-modal"></div>

</main>
</div>


</div>
</div>


<script>
//<![CDATA[
if ('loading' in HTMLImageElement.prototype) {
  document.querySelectorAll('img.lazy').forEach(img => {
    img.loading = 'lazy';
    let imgUrl = img.dataset.src;
    // Only adding width + height for avatars for now
    if (imgUrl.indexOf('/avatar/') > -1 && imgUrl.indexOf('?') === -1) {
      const targetWidth = img.getAttribute('width') || img.width;
      imgUrl += `?width=${targetWidth}`;
    }
    img.src = imgUrl;
    img.removeAttribute('data-src');
    img.classList.remove('lazy');
    img.classList.add('js-lazy-loaded');
    img.dataset.testid = 'js-lazy-loaded-content';
  });
}

//]]>
</script>
<script>
//<![CDATA[
gl = window.gl || {};
gl.experiments = {};


//]]>
</script>

</body>
</html>

